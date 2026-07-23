// =============================================================================
// KartEntity.cpp -- Implementation of the kart entity (M4 + M5)
// MAESTRO Phase 7, Milestones M4+M5
// =============================================================================

#include "game/KartEntity.hpp"
#include "platform/input.hpp"  // Platform::InputState

// Full KMP loader header needed for initFromKMP to access StartPosition fields
#include "loaders/kmp_loader.hpp"

// Phase 21: Decompiled CourseColManager for KCL-based floor/wall/surface queries
// This replaces the platform stub CollisionSystem when KCL data is available.
#include "Field/CourseColManager.hpp"

#include <cmath>
#include <cstdio>
#include <cstring>

#ifdef HAS_OPENGL
#include "platform/gl3_core.h"
#endif

// =============================================================================
// Cube geometry constants
// =============================================================================
// Approximate kart shape in MKW units: 80 wide (X), 50 tall (Y), 80 long (Z)
static const f32 CUBE_HW = 40.0f;  // half-width  (X axis)
static const f32 CUBE_HH = 25.0f;  // half-height (Y axis)
static const f32 CUBE_HD = 40.0f;  // half-depth  (Z axis)

// =============================================================================
// Helper: 4x4 matrix multiply (column-major m[col][row])
// =============================================================================
// Computes out = a * b, where both use OpenGL column-major layout.
// C[col][row] = sum_k A[k][row] * B[col][k]
static void mat4Mul(EGG::Matrix44f& out,
                   const EGG::Matrix44f& a,
                   const EGG::Matrix44f& b) {
    EGG::Matrix44f tmp;
    for (int c = 0; c < 4; c++) {
        for (int r = 0; r < 4; r++) {
            tmp.m[c][r] = a.m[0][r] * b.m[c][0]
                         + a.m[1][r] * b.m[c][1]
                         + a.m[2][r] * b.m[c][2]
                         + a.m[3][r] * b.m[c][3];
        }
    }
    out = tmp;
}

// =============================================================================
// Constructor / Destructor
// =============================================================================

KartEntity::KartEntity()
    : m_scale(1.0f, 1.0f, 1.0f)
    , m_speed(0.0f)
    , m_yawDeg(0.0f)
    , m_maxSpeed(3000.0f)        // ~108 km/h in MKW units
    , m_acceleration(1500.0f)    // Reach top speed in ~2 seconds
    , m_brakeDecel(2000.0f)      // Stop from top speed in ~1.5 seconds
    , m_steerSpeed(120.0f)       // Full 180-degree turn in 1.5 seconds
    , m_friction(300.0f)          // Coast deceleration
    , m_gravity(-9800.0f)        // ~9.8 m/s^2 scaled to MKW units
    , m_groundY(0.0f)            // Will be set from KMP start position
    , m_playerIndex(0)
    , m_isActive(false)
    , m_customColors(false)
    , m_vao(0)
    , m_vbo(0)
    , m_ebo(0)
    , m_shaderProgram(0)
    , m_mvpLoc(-1)
    , m_tintLoc(-1) {
    // m_position and m_rotationDeg are default-constructed to (0,0,0)
    // m_modelMatrix is default-constructed to identity
    // Default face colors and tint
    m_tintColor[0] = 1.0f; m_tintColor[1] = 1.0f; m_tintColor[2] = 1.0f;
}

KartEntity::~KartEntity() {
    if (m_isActive) {
        cleanupGL();
    }
}

// =============================================================================
// initFromKMP
// =============================================================================

void KartEntity::initFromKMP(const Loaders::KmpEntry::StartPosition& sp) {
    // Copy position directly from the KMP loader's Vec3 (f32 x, y, z)
    m_position.x = sp.position.x;
    m_position.y = sp.position.y;
    m_position.z = sp.position.z;

    // Copy rotation (Euler degrees from KMP)
    m_rotationDeg.x = sp.rotation.x;
    m_rotationDeg.y = sp.rotation.y;
    m_rotationDeg.z = sp.rotation.z;

    m_playerIndex = static_cast<u32>(sp.playerIndex);
    m_isActive = true;

    // Set initial yaw from KMP rotation.y (facing direction)
    m_yawDeg = m_rotationDeg.y;

    // Set ground level from the spawn Y position
    m_groundY = m_position.y;

    // Initialize speed to zero
    m_speed = 0.0f;

    computeModelMatrix();
}

// =============================================================================
// computeModelMatrix
// =============================================================================
// Builds: M = T * Ry(yaw) * Rx(pitch) * Rz(roll) * S
// Convention: m[col][row] (OpenGL column-major)
// Translation is placed in column 3.

void KartEntity::computeModelMatrix() {
    // -- 1. Scale matrix S (diagonal) ----------------------------------------
    EGG::Matrix44f S;
    std::memset(S.m, 0, sizeof(S.m));
    S.m[0][0] = m_scale.x;
    S.m[1][1] = m_scale.y;
    S.m[2][2] = m_scale.z;
    S.m[3][3] = 1.0f;

    // -- 2. Rotation around X (pitch) ---------------------------------------
    const f32 pitchRad = EGG::DegToRad(m_rotationDeg.x);
    const f32 cp = std::cos(pitchRad);
    const float spVal = std::sin(pitchRad);

    EGG::Matrix44f Rx;
    std::memset(Rx.m, 0, sizeof(Rx.m));
    Rx.m[0][0] = 1.0f;
    Rx.m[1][1] = cp;   Rx.m[1][2] = spVal;
    Rx.m[2][1] = -spVal;  Rx.m[2][2] = cp;
    Rx.m[3][3] = 1.0f;

    // -- 3. Rotation around Y (yaw) -----------------------------------------
    const f32 yawRad = EGG::DegToRad(m_rotationDeg.y);
    const f32 cy = std::cos(yawRad);
    const f32 sy = std::sin(yawRad);

    EGG::Matrix44f Ry;
    std::memset(Ry.m, 0, sizeof(Ry.m));
    Ry.m[0][0] = cy;   Ry.m[0][2] = -sy;
    Ry.m[1][1] = 1.0f;
    Ry.m[2][0] = sy;   Ry.m[2][2] = cy;
    Ry.m[3][3] = 1.0f;

    // -- 4. Rotation around Z (roll) ----------------------------------------
    const f32 rollRad = EGG::DegToRad(m_rotationDeg.z);
    const f32 cr = std::cos(rollRad);
    const f32 sr = std::sin(rollRad);

    EGG::Matrix44f Rz;
    std::memset(Rz.m, 0, sizeof(Rz.m));
    Rz.m[0][0] = cr;   Rz.m[0][1] = sr;
    Rz.m[1][0] = -sr;  Rz.m[1][1] = cr;
    Rz.m[2][2] = 1.0f;
    Rz.m[3][3] = 1.0f;

    // -- 5. Compose: M = Ry * Rx * Rz * S -----------------------------------
    EGG::Matrix44f tmp;
    mat4Mul(tmp, Rz, S);        // tmp = Rz * S
    mat4Mul(S, Rx, tmp);        // S   = Rx * Rz * S   (reuse S as temp)
    mat4Mul(tmp, Ry, S);        // tmp = Ry * Rx * Rz * S

    // -- 6. Set translation in column 3 (m[3][row]) -------------------------
    tmp.m[3][0] = m_position.x;
    tmp.m[3][1] = m_position.y;
    tmp.m[3][2] = m_position.z;
    tmp.m[3][3] = 1.0f;

    m_modelMatrix = tmp;
}

// =============================================================================
// initGL -- Create OpenGL resources for the cube mesh and shader
// =============================================================================

bool KartEntity::initGL() {
#ifdef HAS_OPENGL
    // -----------------------------------------------------------------
    // Shader sources
    // -----------------------------------------------------------------
    const char* vertSrc =
        "#version 330 core\n"
        "layout(location=0) in vec3 aPos;\n"
        "layout(location=1) in vec3 aColor;\n"
        "uniform mat4 u_mvp;\n"
        "out vec3 vColor;\n"
        "void main() {\n"
        "    gl_Position = u_mvp * vec4(aPos, 1.0);\n"
        "    vColor = aColor;\n"
        "}\n";

    const char* fragSrc =
        "#version 330 core\n"
        "in vec3 vColor;\n"
        "uniform vec3 u_tint;\n"
        "out vec4 fragColor;\n"
        "void main() {\n"
        "    fragColor = vec4(vColor * u_tint, 1.0);\n"
        "}\n";

    // -----------------------------------------------------------------
    // Helper: compile a single shader, return handle (0 on failure)
    // -----------------------------------------------------------------
    auto compileShader = [](u32 type, const char* src) -> u32 {
        u32 shader = GL3::gl.glCreateShader(type);
        GL3::gl.glShaderSource(shader, 1, &src, nullptr);
        GL3::gl.glCompileShader(shader);

        s32 ok = 0;
        GL3::gl.glGetShaderiv(shader, GL3::GL_COMPILE_STATUS, &ok);
        if (!ok) {
            char log[512];
            GL3::gl.glGetShaderInfoLog(shader, sizeof(log), nullptr, log);
            std::printf("KartEntity: shader compile error: %s\n", log);
            GL3::gl.glDeleteShader(shader);
            return 0;
        }
        return shader;
    };

    // -----------------------------------------------------------------
    // Compile & link shader program
    // -----------------------------------------------------------------
    u32 vs = compileShader(GL3::GL_VERTEX_SHADER, vertSrc);
    if (!vs) return false;

    u32 fs = compileShader(GL3::GL_FRAGMENT_SHADER, fragSrc);
    if (!fs) {
        GL3::gl.glDeleteShader(vs);
        return false;
    }

    m_shaderProgram = GL3::gl.glCreateProgram();
    GL3::gl.glAttachShader(m_shaderProgram, vs);
    GL3::gl.glAttachShader(m_shaderProgram, fs);
    GL3::gl.glLinkProgram(m_shaderProgram);

    // Shader objects are no longer needed after linking
    GL3::gl.glDeleteShader(vs);
    GL3::gl.glDeleteShader(fs);

    s32 linkOk = 0;
    GL3::gl.glGetProgramiv(m_shaderProgram, GL3::GL_LINK_STATUS, &linkOk);
    if (!linkOk) {
        char log[512];
        GL3::gl.glGetProgramInfoLog(m_shaderProgram, sizeof(log), nullptr, log);
        std::printf("KartEntity: program link error: %s\n", log);
        GL3::gl.glDeleteProgram(m_shaderProgram);
        m_shaderProgram = 0;
        return false;
    }

    // Cache uniform locations
    m_mvpLoc = GL3::gl.glGetUniformLocation(m_shaderProgram, "u_mvp");
    m_tintLoc = GL3::gl.glGetUniformLocation(m_shaderProgram, "u_tint");

    // -----------------------------------------------------------------
    // Cube vertex data  (24 vertices, 6 floats each: pos xyz + color rgb)
    // -----------------------------------------------------------------
    // Each face has 4 unique vertices so that face colors are flat.
    // Vertex winding is counter-clockwise when viewed from outside.
    //
    //   Dimensions: 80 x 50 x 80  (width x height x depth)
    //   Half-extents: X=40, Y=25, Z=40

    const f32 hw = CUBE_HW;  // 40
    const f32 hh = CUBE_HH;  // 25
    const f32 hd = CUBE_HD;  // 40

    // Default face colors (used if setFaceColor was not called)
    //   +Y (top)    = red     (1, 0, 0)
    //   -Y (bottom) = green   (0, 1, 0)
    //   +Z (front)  = blue    (0, 0, 1)
    //   -Z (back)   = yellow  (1, 1, 0)
    //   +X (right)  = magenta (1, 0, 1)
    //   -X (left)   = cyan    (0, 1, 1)
    const f32 defaultColors[6][3] = {
        { 1.0f, 0.0f, 0.0f },  // top    (+Y)
        { 0.0f, 1.0f, 0.0f },  // bottom (-Y)
        { 0.0f, 0.0f, 1.0f },  // front  (+Z)
        { 1.0f, 1.0f, 0.0f },  // back   (-Z)
        { 1.0f, 0.0f, 1.0f },  // right  (+X)
        { 0.0f, 1.0f, 1.0f },  // left   (-X)
    };

    // Use custom colors if setFaceColor() was called
    const f32 (*colors)[3] = m_customColors ? m_faceColors : defaultColors;

    // clang-format off
    f32 vertices[24][6] = {
        // -- Front face (+Z) -- blue (or custom)
        { -hw, -hh,  hd,  colors[2][0], colors[2][1], colors[2][2] },
        { -hw,  hh,  hd,  colors[2][0], colors[2][1], colors[2][2] },
        {  hw,  hh,  hd,  colors[2][0], colors[2][1], colors[2][2] },
        {  hw, -hh,  hd,  colors[2][0], colors[2][1], colors[2][2] },

        // -- Back face (-Z) -- yellow (or custom)
        {  hw, -hh, -hd,  colors[3][0], colors[3][1], colors[3][2] },
        {  hw,  hh, -hd,  colors[3][0], colors[3][1], colors[3][2] },
        { -hw,  hh, -hd,  colors[3][0], colors[3][1], colors[3][2] },
        { -hw, -hh, -hd,  colors[3][0], colors[3][1], colors[3][2] },

        // -- Top face (+Y) -- red (or custom)
        { -hw,  hh,  hd,  colors[0][0], colors[0][1], colors[0][2] },
        { -hw,  hh, -hd,  colors[0][0], colors[0][1], colors[0][2] },
        {  hw,  hh, -hd,  colors[0][0], colors[0][1], colors[0][2] },
        {  hw,  hh,  hd,  colors[0][0], colors[0][1], colors[0][2] },

        // -- Bottom face (-Y) -- green (or custom)
        { -hw, -hh, -hd,  colors[1][0], colors[1][1], colors[1][2] },
        { -hw, -hh,  hd,  colors[1][0], colors[1][1], colors[1][2] },
        {  hw, -hh,  hd,  colors[1][0], colors[1][1], colors[1][2] },
        {  hw, -hh, -hd,  colors[1][0], colors[1][1], colors[1][2] },

        // -- Right face (+X) -- magenta (or custom)
        {  hw, -hh,  hd,  colors[4][0], colors[4][1], colors[4][2] },
        {  hw,  hh,  hd,  colors[4][0], colors[4][1], colors[4][2] },
        {  hw,  hh, -hd,  colors[4][0], colors[4][1], colors[4][2] },
        {  hw, -hh, -hd,  colors[4][0], colors[4][1], colors[4][2] },

        // -- Left face (-X) -- cyan (or custom)
        { -hw, -hh, -hd,  colors[5][0], colors[5][1], colors[5][2] },
        { -hw,  hh, -hd,  colors[5][0], colors[5][1], colors[5][2] },
        { -hw,  hh,  hd,  colors[5][0], colors[5][1], colors[5][2] },
        { -hw, -hh,  hd,  colors[5][0], colors[5][1], colors[5][2] },
    };
    // clang-format on

    // 36 indices: 6 faces x 2 triangles x 3 indices
    // Each quad uses the pattern 0,1,2, 0,2,3 (relative to the face start)
    const u32 indices[36] = {
        // Front
         0,  1,  2,   0,  2,  3,
        // Back
         4,  5,  6,   4,  6,  7,
        // Top
         8,  9, 10,   8, 10, 11,
        // Bottom
        12, 13, 14,  12, 14, 15,
        // Right
        16, 17, 18,  16, 18, 19,
        // Left
        20, 21, 22,  20, 22, 23,
    };

    // -----------------------------------------------------------------
    // Create VAO, VBO, EBO
    // -----------------------------------------------------------------
    GL3::gl.glGenVertexArrays(1, &m_vao);
    GL3::gl.glGenBuffers(1, &m_vbo);
    GL3::gl.glGenBuffers(1, &m_ebo);

    GL3::gl.glBindVertexArray(m_vao);

    // Upload vertex data
    GL3::gl.glBindBuffer(GL3::GL_ARRAY_BUFFER, m_vbo);
    GL3::gl.glBufferData(GL3::GL_ARRAY_BUFFER,
                      sizeof(vertices), vertices, GL3::GL_STATIC_DRAW);

    // Upload index data
    GL3::gl.glBindBuffer(GL3::GL_ELEMENT_ARRAY_BUFFER, m_ebo);
    GL3::gl.glBufferData(GL3::GL_ELEMENT_ARRAY_BUFFER,
                      sizeof(indices), indices, GL3::GL_STATIC_DRAW);

    // Vertex attribute 0: position (vec3), stride 24 bytes, offset 0
    GL3::gl.glVertexAttribPointer(0, 3, GL3::GL_FLOAT, GL3::GL_FALSE,
                               6 * static_cast<int>(sizeof(f32)),
                               reinterpret_cast<const void*>(0));
    GL3::gl.glEnableVertexAttribArray(0);

    // Vertex attribute 1: color (vec3), stride 24 bytes, offset 12
    GL3::gl.glVertexAttribPointer(1, 3, GL3::GL_FLOAT, GL3::GL_FALSE,
                               6 * static_cast<int>(sizeof(f32)),
                               reinterpret_cast<const void*>(3 * sizeof(f32)));
    GL3::gl.glEnableVertexAttribArray(1);

    // Unbind VAO (saves state)
    GL3::gl.glBindVertexArray(0);

    return true;
#else
    return false;
#endif // HAS_OPENGL
}

// =============================================================================
// render -- Draw the kart cube
// =============================================================================

void KartEntity::render(const EGG::Matrix44f& viewProj) const {
#ifdef HAS_OPENGL
    if (!m_vao || !m_shaderProgram) {
        return;
    }

    // Compute MVP = viewProj * modelMatrix
    EGG::Matrix44f mvp;
    mat4Mul(mvp, viewProj, m_modelMatrix);

    GL3::gl.glUseProgram(m_shaderProgram);
    GL3::gl.glUniformMatrix4fv(m_mvpLoc, 1, GL3::GL_FALSE, &mvp.m[0][0]);
    if (m_tintLoc >= 0) {
        GL3::gl.glUniform3f(m_tintLoc, m_tintColor[0], m_tintColor[1], m_tintColor[2]);
    }

    GL3::gl.glBindVertexArray(m_vao);
    GL3::gl.glDrawElements(GL3::GL_TRIANGLES, 36, GL3::GL_UNSIGNED_INT, nullptr);
    GL3::gl.glBindVertexArray(0);

    GL3::gl.glUseProgram(0);
#else
    (void)viewProj;
#endif // HAS_OPENGL
}

// =============================================================================
// cleanupGL -- Release all OpenGL resources
// =============================================================================

void KartEntity::cleanupGL() {
#ifdef HAS_OPENGL
    if (m_vao) {
        GL3::gl.glDeleteVertexArrays(1, &m_vao);
        m_vao = 0;
    }
    if (m_vbo) {
        GL3::gl.glDeleteBuffers(1, &m_vbo);
        m_vbo = 0;
    }
    if (m_ebo) {
        GL3::gl.glDeleteBuffers(1, &m_ebo);
        m_ebo = 0;
    }
    if (m_shaderProgram) {
        GL3::gl.glDeleteProgram(m_shaderProgram);
        m_shaderProgram = 0;
    }
    m_mvpLoc = -1;
    m_tintLoc = -1;
#endif // HAS_OPENGL
}

// =============================================================================
// update — Apply input to kart physics (M5 + M6: Collision)
// =============================================================================
// Arcade-style kart physics with KCL collision:
//   - Acceleration / braking adjusts forward speed
//   - Steering rotates the kart's yaw
//   - Position moves along the facing direction based on speed
//   - KCL ground raycast follows terrain height
//   - KCL wall collision prevents going through walls
//   - Surface types modify speed (off-road slows, boost accelerates)
//
// Coordinate system (matching MKWii / OpenGL):
//   X = right, Y = up, Z = into screen (north)
//   Yaw 0 = facing +Z, yaw 90 = facing +X

void KartEntity::update(const Platform::InputState& input, f32 dt,
                         const Game::CollisionSystem* collision) {
    if (!m_isActive) return;

    // Clamp dt to avoid physics explosion on frame spikes
    if (dt < 0.001f) dt = 0.001f;
    if (dt > 0.1f)   dt = 0.1f;

    // -----------------------------------------------------------------
    // 1. Apply acceleration / braking
    // -----------------------------------------------------------------
    if (input.accelerate > 0.0f) {
        m_speed += m_acceleration * input.accelerate * dt;
    }
    if (input.brake > 0.0f) {
        // Braking: if moving forward, slow down. If stopped, reverse.
        if (m_speed > 0.0f) {
            m_speed -= m_brakeDecel * input.brake * dt;
            if (m_speed < 0.0f) m_speed = 0.0f;
        } else {
            // Reverse (half speed)
            m_speed -= m_acceleration * 0.5f * input.brake * dt;
        }
    }

    // -----------------------------------------------------------------
    // 2. Apply friction (when no throttle)
    // -----------------------------------------------------------------
    if (input.accelerate <= 0.0f && input.brake <= 0.0f) {
        if (m_speed > 0.0f) {
            m_speed -= m_friction * dt;
            if (m_speed < 0.0f) m_speed = 0.0f;
        } else if (m_speed < 0.0f) {
            m_speed += m_friction * dt;
            if (m_speed > 0.0f) m_speed = 0.0f;
        }
    }

    // -----------------------------------------------------------------
    // 3. Clamp speed to maximum
    // -----------------------------------------------------------------
    if (m_speed > m_maxSpeed) m_speed = m_maxSpeed;
    if (m_speed < -m_maxSpeed * 0.3f) m_speed = -m_maxSpeed * 0.3f;

    // -----------------------------------------------------------------
    // 4. Apply steering (only effective when moving)
    // -----------------------------------------------------------------
    // Steering effectiveness scales with speed (can't turn while stationary)
    f32 speedFactor = std::fabs(m_speed) / m_maxSpeed;
    if (speedFactor > 1.0f) speedFactor = 1.0f;

    // At very low speed, reduce steering to prevent jittery rotation
    if (speedFactor < 0.05f) speedFactor = 0.0f;

    m_yawDeg += input.steer * m_steerSpeed * speedFactor * dt;

    // Normalize yaw to [0, 360)
    while (m_yawDeg < 0.0f)   m_yawDeg += 360.0f;
    while (m_yawDeg >= 360.0f) m_yawDeg -= 360.0f;

    // -----------------------------------------------------------------
    // 5. Update position based on speed and facing direction
    // -----------------------------------------------------------------
    // Yaw 0 = +Z direction, yaw 90 = +X direction
    const f32 yawRad = EGG::DegToRad(m_yawDeg);
    m_position.x += std::sin(yawRad) * m_speed * dt;
    m_position.z += std::cos(yawRad) * m_speed * dt;

    // -----------------------------------------------------------------
    // 6. Collision detection (M6)
    // -----------------------------------------------------------------
    if (collision && collision->isBuilt()) {
        // Perform collision query at kart position
        auto result = collision->query(m_position.x, m_position.y + 50.0f,
                                         m_position.z, 40.0f, 5000.0f);

        // Ground following: snap kart Y to ground height + kart half-height
        if (result.hitGround) {
            m_position.y = result.groundY + 25.0f;  // 25 = half-height of kart cube

            // Surface type effects on speed
            using namespace Loaders::KCLType;

            if (result.surfaceType & OFF_ROAD) {
                // Off-road: reduce max speed significantly
                m_speed *= (1.0f - 0.5f * dt);  // Lose speed gradually
                if (std::fabs(m_speed) > m_maxSpeed * 0.4f) {
                    m_speed = m_maxSpeed * 0.4f * (m_speed > 0 ? 1.0f : -1.0f);
                }
            }

            if (result.surfaceType & (BOOST | BOOST_PAD)) {
                // Boost pad: accelerate beyond normal max speed
                m_speed += 2000.0f * dt;
                if (m_speed > m_maxSpeed * 1.5f) {
                    m_speed = m_maxSpeed * 1.5f;
                }
            }
        } else {
            // No ground found: apply gravity (fall down)
            m_position.y += m_gravity * dt;
        }

        // Wall collision: push kart out of walls
        if (result.hitWall) {
            f32 pushDist = m_speed * dt + 50.0f;  // Push back by movement + margin
            m_position.x += result.wallNormalX * pushDist;
            m_position.z += result.wallNormalZ * pushDist;
            // Kill forward speed on wall hit
            m_speed *= 0.3f;
        }
    } else {
        // No collision data: flat ground fallback (M5 behavior)
        m_position.y = m_groundY;
    }

    // -----------------------------------------------------------------
    // 7. Update rotation for rendering and recompute model matrix
    // -----------------------------------------------------------------
    m_rotationDeg.y = m_yawDeg;
    m_rotationDeg.x = 0.0f;  // No pitch in flat-ground mode
    m_rotationDeg.z = 0.0f;  // No roll in flat-ground mode

    computeModelMatrix();
}

// =============================================================================
// getChaseCamPos — Compute camera position behind and above the kart
// =============================================================================

EGG::Vector3f KartEntity::getChaseCamPos(f32 backDist, f32 upOffset) const {
    // Camera sits behind the kart along the opposite facing direction
    const f32 yawRad = EGG::DegToRad(m_yawDeg);
    f32 camX = m_position.x - std::sin(yawRad) * backDist;
    f32 camZ = m_position.z - std::cos(yawRad) * backDist;
    f32 camY = m_position.y + upOffset;

    return EGG::Vector3f(camX, camY, camZ);
}

// =============================================================================
// setFaceColor — Override per-face cube colors (M7: distinguish AI karts)
// =============================================================================

void KartEntity::setFaceColor(f32 topR, f32 topG, f32 topB,
                               f32 botR, f32 botG, f32 botB,
                               f32 frnR, f32 frnG, f32 frnB,
                               f32 bckR, f32 bckG, f32 bckB,
                               f32 rgtR, f32 rgtG, f32 rgtB,
                               f32 lftR, f32 lftG, f32 lftB) {
    // Face order: top(+Y), bot(-Y), front(+Z), back(-Z), right(+X), left(-X)
    m_faceColors[0][0] = topR; m_faceColors[0][1] = topG; m_faceColors[0][2] = topB;
    m_faceColors[1][0] = botR; m_faceColors[1][1] = botG; m_faceColors[1][2] = botB;
    m_faceColors[2][0] = frnR; m_faceColors[2][1] = frnG; m_faceColors[2][2] = frnB;
    m_faceColors[3][0] = bckR; m_faceColors[3][1] = bckG; m_faceColors[3][2] = bckB;
    m_faceColors[4][0] = rgtR; m_faceColors[4][1] = rgtG; m_faceColors[4][2] = rgtB;
    m_faceColors[5][0] = lftR; m_faceColors[5][1] = lftG; m_faceColors[5][2] = lftB;
    m_customColors = true;
}

// =============================================================================
// setTintColor — Set uniform tint color multiplier
// =============================================================================

void KartEntity::setTintColor(f32 r, f32 g, f32 b) {
    m_tintColor[0] = r;
    m_tintColor[1] = g;
    m_tintColor[2] = b;
}

// =============================================================================
// setPosition / setYawDeg / setSpeed — Mutators for external physics sync
// =============================================================================

void KartEntity::setPosition(f32 x, f32 y, f32 z) {
    m_position.x = x;
    m_position.y = y;
    m_position.z = z;
    computeModelMatrix();
}

void KartEntity::setYawDeg(f32 yawDeg) {
    m_yawDeg = yawDeg;
    while (m_yawDeg < 0.0f)   m_yawDeg += 360.0f;
    while (m_yawDeg >= 360.0f) m_yawDeg -= 360.0f;
    m_rotationDeg.y = m_yawDeg;
    computeModelMatrix();
}

void KartEntity::setSpeed(f32 speed) {
    m_speed = speed;
}

// =============================================================================
// queryCollision — Collision-only query (no physics, just KCL feedback)
// =============================================================================
// Phase 21: Now uses decompiled CourseColManager/KCollision when available,
// falling back to the platform CollisionSystem when no KCL is loaded.
// The decompiled KCollision uses the original MKWii octree spatial index
// with proper prism triangle encoding, which gives more accurate floor,
// wall, and surface type detection than the platform stub loader.

void KartEntity::queryCollision(bool& offroad, bool& boostPad, bool& wallHit,
                                f32& wallNX, f32& wallNZ,
                                const Game::CollisionSystem* collision) {
    offroad = false;
    boostPad = false;
    wallHit = false;
    wallNX = 0.0f;
    wallNZ = 0.0f;

    // Phase 21: Prefer decompiled CourseColManager (KCollision) when loaded.
    // This uses the original MKWii collision engine with proper octree,
    // prism normals, and KCL type attributes for accurate surface detection.
    // In the original game, KartCollide::testFloor() and testWall() both
    // query KCollision for sphere/ray intersection results.
    Field::CourseColManager* ccm = Field::CourseColManager::instance();
    if (ccm && ccm->isLoaded()) {
        // Floor query — raycast from above kart position downward
        f32 floorY = 0.0f;
        f32 floorNormal[3] = { 0.0f, 1.0f, 0.0f };
        bool hasFloor = ccm->getFloorY(m_position.x, m_position.y + 100.0f,
                                         m_position.z, &floorY, floorNormal);
        if (hasFloor) {
            // Snap kart to floor surface (with kart height offset)
            m_position.y = floorY + 25.0f;

            // Query road type from the floor surface
            // In MKWii, KCL type bits encode surface properties.
            // getRoadType() returns the 5-bit type value (0-31):
            //   0 = road, 2-4 = offroad variants, 6-7 = boost pad/ramp,
            //   12-15 = wall types, etc.
            u32 roadType = ccm->getRoadType(m_position.x, floorY + 25.0f,
                                             m_position.z);
            // Offroad: types 2 (weak), 3 (standard), 4 (heavy)
            if (roadType == 2 || roadType == 3 || roadType == 4) {
                offroad = true;
            }
            // Boost: type 6 (boost pad), type 7 (boost ramp)
            if (roadType == 6 || roadType == 7) {
                boostPad = true;
            }
        }

        // Wall collision query — sphere test at kart position
        // KartCollide::testWall() uses bounding sphere radius.
        // Wall types: 0xc-0xf, 0x14, 0x1c, 0x1e, 0x1f.
        // KCL_TYPE_WALL bitmask = bits for all wall types combined.
        const f32 kartRadius = 40.0f;
        Field::SphereColResult sphereResult;
        // Use KCL_TYPE_WALL mask for wall filtering (from CollisionEntries.hpp)
        const u32 kclWallMask = (1u << 0xc) | (1u << 0xd) | (1u << 0xe) |
                                (1u << 0xf) | (1u << 0x14) | (1u << 0x1c) |
                                (1u << 0x1e) | (1u << 0x1f);
        if (ccm->checkSphereFiltered(
                m_position.x, m_position.y, m_position.z,
                kartRadius, kclWallMask, &sphereResult)) {
            if (sphereResult.hit) {
                wallHit = true;
                // Wall normal from KCL collision result
                wallNX = sphereResult.normal.x;
                wallNZ = sphereResult.normal.z;
                f32 pushDist = m_speed * 0.016f + 50.0f;
                m_position.x += wallNX * pushDist;
                m_position.z += wallNZ * pushDist;
                computeModelMatrix();
            }
        }
        return;
    }

    // Fallback: platform CollisionSystem (from stub kcl_loader)
    if (!collision || !collision->isBuilt()) return;

    auto result = collision->query(m_position.x, m_position.y + 50.0f,
                                    m_position.z, 40.0f, 5000.0f);

    if (result.hitGround) {
        m_position.y = result.groundY + 25.0f;

        using namespace Loaders::KCLType;
        if (result.surfaceType & OFF_ROAD) {
            offroad = true;
        }
        if (result.surfaceType & (BOOST | BOOST_PAD)) {
            boostPad = true;
        }
    }

    if (result.hitWall) {
        wallHit = true;
        wallNX = result.wallNormalX;
        wallNZ = result.wallNormalZ;
        f32 pushDist = m_speed * 0.016f + 50.0f;
        m_position.x += result.wallNormalX * pushDist;
        m_position.z += result.wallNormalZ * pushDist;
        computeModelMatrix();
    }
}