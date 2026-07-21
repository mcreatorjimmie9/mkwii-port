// =============================================================================
// KartEntity.cpp -- Implementation of the minimal kart entity
// MAESTRO Phase 7, Milestone M4
// =============================================================================

#include "game/KartEntity.hpp"

// Full KMP loader header needed for initFromKMP to access StartPosition fields
#include "loaders/kmp_loader.hpp"

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
    , m_playerIndex(0)
    , m_isActive(false)
    , m_vao(0)
    , m_vbo(0)
    , m_ebo(0)
    , m_shaderProgram(0)
    , m_mvpLoc(-1) {
    // m_position and m_rotationDeg are default-constructed to (0,0,0)
    // m_modelMatrix is default-constructed to identity
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
        "out vec4 fragColor;\n"
        "void main() {\n"
        "    fragColor = vec4(vColor, 1.0);\n"
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

    // Cache uniform location
    m_mvpLoc = GL3::gl.glGetUniformLocation(m_shaderProgram, "u_mvp");

    // -----------------------------------------------------------------
    // Cube vertex data  (24 vertices, 6 floats each: pos xyz + color rgb)
    // -----------------------------------------------------------------
    // Each face has 4 unique vertices so that face colors are flat.
    // Vertex winding is counter-clockwise when viewed from outside.
    //
    //   Dimensions: 80 x 50 x 80  (width x height x depth)
    //   Half-extents: X=40, Y=25, Z=40
    //
    //   Face colors:
    //     +Y (top)    = red     (1, 0, 0)
    //     -Y (bottom) = green   (0, 1, 0)
    //     +Z (front)  = blue    (0, 0, 1)
    //     -Z (back)   = yellow  (1, 1, 0)
    //     -X (left)   = cyan    (0, 1, 1)
    //     +X (right)  = magenta (1, 0, 1)

    const f32 hw = CUBE_HW;  // 40
    const f32 hh = CUBE_HH;  // 25
    const f32 hd = CUBE_HD;  // 40

    // clang-format off
    const f32 vertices[24][6] = {
        // -- Front face (+Z) -- blue
        { -hw, -hh,  hd,  0.0f, 0.0f, 1.0f },
        { -hw,  hh,  hd,  0.0f, 0.0f, 1.0f },
        {  hw,  hh,  hd,  0.0f, 0.0f, 1.0f },
        {  hw, -hh,  hd,  0.0f, 0.0f, 1.0f },

        // -- Back face (-Z) -- yellow
        {  hw, -hh, -hd,  1.0f, 1.0f, 0.0f },
        {  hw,  hh, -hd,  1.0f, 1.0f, 0.0f },
        { -hw,  hh, -hd,  1.0f, 1.0f, 0.0f },
        { -hw, -hh, -hd,  1.0f, 1.0f, 0.0f },

        // -- Top face (+Y) -- red
        { -hw,  hh,  hd,  1.0f, 0.0f, 0.0f },
        { -hw,  hh, -hd,  1.0f, 0.0f, 0.0f },
        {  hw,  hh, -hd,  1.0f, 0.0f, 0.0f },
        {  hw,  hh,  hd,  1.0f, 0.0f, 0.0f },

        // -- Bottom face (-Y) -- green
        { -hw, -hh, -hd,  0.0f, 1.0f, 0.0f },
        { -hw, -hh,  hd,  0.0f, 1.0f, 0.0f },
        {  hw, -hh,  hd,  0.0f, 1.0f, 0.0f },
        {  hw, -hh, -hd,  0.0f, 1.0f, 0.0f },

        // -- Right face (+X) -- magenta
        {  hw, -hh,  hd,  1.0f, 0.0f, 1.0f },
        {  hw,  hh,  hd,  1.0f, 0.0f, 1.0f },
        {  hw,  hh, -hd,  1.0f, 0.0f, 1.0f },
        {  hw, -hh, -hd,  1.0f, 0.0f, 1.0f },

        // -- Left face (-X) -- cyan
        { -hw, -hh, -hd,  0.0f, 1.0f, 1.0f },
        { -hw,  hh, -hd,  0.0f, 1.0f, 1.0f },
        { -hw,  hh,  hd,  0.0f, 1.0f, 1.0f },
        { -hw, -hh,  hd,  0.0f, 1.0f, 1.0f },
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
#endif // HAS_OPENGL
}