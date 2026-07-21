// =============================================================================
// ItemBox.cpp — Item box and item system implementation (M8)
// MAESTRO Phase 7, Milestone M8: Items
// =============================================================================

#include "game/ItemBox.hpp"

#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>

#ifdef HAS_OPENGL
#include "platform/gl3_core.h"
#endif

// =============================================================================
// Item probability table: s_itemTable[position-1][...]
// Each pair is (itemId, weight). Weight 0 ends the list.
// Positions are 1-indexed: 1st place gets worst items, 12th gets best.
// =============================================================================

// clang-format off
const u8 ItemManager::s_itemTable[12][16] = {
    // 1st place (mostly bananas and green shells)
    { ITEM_BANANA,       40, ITEM_GREEN_SHELL, 30, ITEM_MUSHROOM,   20, ITEM_NONE, 0 },
    // 2nd place
    { ITEM_BANANA,       35, ITEM_GREEN_SHELL, 30, ITEM_MUSHROOM,   25, ITEM_NONE, 0 },
    // 3rd place
    { ITEM_GREEN_SHELL,  30, ITEM_MUSHROOM,    30, ITEM_RED_SHELL,  20, ITEM_NONE, 0 },
    // 4th place
    { ITEM_MUSHROOM,     30, ITEM_RED_SHELL,   25, ITEM_GREEN_SHELL,20, ITEM_NONE, 0 },
    // 5th place
    { ITEM_MUSHROOM,     30, ITEM_RED_SHELL,   25, ITEM_STAR,      10, ITEM_NONE, 0 },
    // 6th place
    { ITEM_MUSHROOM,     25, ITEM_RED_SHELL,   20, ITEM_STAR,      15, ITEM_TRIPLE_MUSH,10, ITEM_NONE, 0 },
    // 7th place
    { ITEM_MUSHROOM,     25, ITEM_RED_SHELL,   20, ITEM_STAR,      15, ITEM_TRIPLE_MUSH,10, ITEM_NONE, 0 },
    // 8th place
    { ITEM_STAR,         25, ITEM_MUSHROOM,    20, ITEM_RED_SHELL,  20, ITEM_TRIPLE_MUSH,15, ITEM_NONE, 0 },
    // 9th place
    { ITEM_STAR,         25, ITEM_TRIPLE_MUSH, 20, ITEM_RED_SHELL,  15, ITEM_NONE, 0 },
    // 10th place
    { ITEM_STAR,         30, ITEM_TRIPLE_MUSH, 25, ITEM_GOLDEN_MUSH,15, ITEM_NONE, 0 },
    // 11th place
    { ITEM_STAR,         30, ITEM_GOLDEN_MUSH, 25, ITEM_BULLET_BILL,15, ITEM_NONE, 0 },
    // 12th place (best items)
    { ITEM_BULLET_BILL, 30, ITEM_STAR,        25, ITEM_GOLDEN_MUSH,20, ITEM_THUNDER, 10, ITEM_NONE, 0 },
};
// clang-format on

// =============================================================================
// Helper: 4x4 matrix multiply (column-major m[col][row])
// =============================================================================
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
// ItemBox — Constructor / Destructor
// =============================================================================

ItemBox::ItemBox()
    : m_rotationAngle(0.0f)
    , m_respawnTimer(0.0f)
    , m_respawnDelay(5.0f)
    , m_isActive(false)
    , m_vao(0)
    , m_vbo(0)
    , m_ebo(0)
    , m_shaderProgram(0)
    , m_mvpLoc(-1)
    , m_tintLoc(-1) {
}

ItemBox::~ItemBox() {
    if (m_isActive || m_vao) {
        cleanupGL();
    }
}

// =============================================================================
// ItemBox — Move constructor/assignment (for std::vector)
// =============================================================================

ItemBox::ItemBox(ItemBox&& other) noexcept
    : m_position(other.m_position)
    , m_rotationAngle(other.m_rotationAngle)
    , m_respawnTimer(other.m_respawnTimer)
    , m_respawnDelay(other.m_respawnDelay)
    , m_isActive(other.m_isActive)
    , m_vao(other.m_vao)
    , m_vbo(other.m_vbo)
    , m_ebo(other.m_ebo)
    , m_shaderProgram(other.m_shaderProgram)
    , m_mvpLoc(other.m_mvpLoc)
    , m_tintLoc(other.m_tintLoc) {
    // Zero out source so destructor doesn't free
    other.m_vao = 0;
    other.m_vbo = 0;
    other.m_ebo = 0;
    other.m_shaderProgram = 0;
    other.m_mvpLoc = -1;
    other.m_tintLoc = -1;
    other.m_isActive = false;
}

ItemBox& ItemBox::operator=(ItemBox&& other) noexcept {
    if (this != &other) {
        cleanupGL();
        m_position = other.m_position;
        m_rotationAngle = other.m_rotationAngle;
        m_respawnTimer = other.m_respawnTimer;
        m_respawnDelay = other.m_respawnDelay;
        m_isActive = other.m_isActive;
        m_vao = other.m_vao;
        m_vbo = other.m_vbo;
        m_ebo = other.m_ebo;
        m_shaderProgram = other.m_shaderProgram;
        m_mvpLoc = other.m_mvpLoc;
        m_tintLoc = other.m_tintLoc;

        other.m_vao = 0;
        other.m_vbo = 0;
        other.m_ebo = 0;
        other.m_shaderProgram = 0;
        other.m_mvpLoc = -1;
        other.m_tintLoc = -1;
        other.m_isActive = false;
    }
    return *this;
}

// =============================================================================
// ItemBox::init — Set position and activate
// =============================================================================

void ItemBox::init(const EGG::Vector3f& position) {
    m_position = position;
    m_isActive = true;
    m_rotationAngle = 0.0f;
    m_respawnTimer = 0.0f;
}

// =============================================================================
// ItemBox::update — Spin animation and respawn
// =============================================================================

void ItemBox::update(f32 dt) {
    if (!m_isActive) {
        // Countdown respawn timer
        m_respawnTimer -= dt;
        if (m_respawnTimer <= 0.0f) {
            m_isActive = true;
            m_respawnTimer = 0.0f;
        }
        return;
    }

    // Spin at 90 degrees per second
    m_rotationAngle += 90.0f * dt;
    while (m_rotationAngle >= 360.0f) m_rotationAngle -= 360.0f;
}

// =============================================================================
// ItemBox::checkCollection — Proximity check
// =============================================================================

bool ItemBox::checkCollection(const EGG::Vector3f& kartPos, f32 threshold) const {
    if (!m_isActive) return false;

    f32 dx = m_position.x - kartPos.x;
    f32 dy = m_position.y - kartPos.y;
    f32 dz = m_position.z - kartPos.z;
    f32 distSq = dx * dx + dy * dy + dz * dz;

    return (distSq < threshold * threshold);
}

// =============================================================================
// ItemBox::collect — Mark as collected, start respawn timer
// =============================================================================

void ItemBox::collect() {
    m_isActive = false;
    m_respawnTimer = m_respawnDelay;
}

// =============================================================================
// ItemBox::initGL — Create GL resources for the item box cube
// =============================================================================

bool ItemBox::initGL() {
#ifdef HAS_OPENGL
    // Same shader as KartEntity (MVP + tint)
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

    auto compileShader = [](u32 type, const char* src) -> u32 {
        u32 shader = GL3::gl.glCreateShader(type);
        GL3::gl.glShaderSource(shader, 1, &src, nullptr);
        GL3::gl.glCompileShader(shader);

        s32 ok = 0;
        GL3::gl.glGetShaderiv(shader, GL3::GL_COMPILE_STATUS, &ok);
        if (!ok) {
            GL3::gl.glDeleteShader(shader);
            return 0;
        }
        return shader;
    };

    u32 vs = compileShader(GL3::GL_VERTEX_SHADER, vertSrc);
    u32 fs = compileShader(GL3::GL_FRAGMENT_SHADER, fragSrc);
    if (!vs || !fs) {
        if (vs) GL3::gl.glDeleteShader(vs);
        if (fs) GL3::gl.glDeleteShader(fs);
        return false;
    }

    m_shaderProgram = GL3::gl.glCreateProgram();
    GL3::gl.glAttachShader(m_shaderProgram, vs);
    GL3::gl.glAttachShader(m_shaderProgram, fs);
    GL3::gl.glLinkProgram(m_shaderProgram);
    GL3::gl.glDeleteShader(vs);
    GL3::gl.glDeleteShader(fs);

    s32 linkOk = 0;
    GL3::gl.glGetProgramiv(m_shaderProgram, GL3::GL_LINK_STATUS, &linkOk);
    if (!linkOk) {
        GL3::gl.glDeleteProgram(m_shaderProgram);
        m_shaderProgram = 0;
        return false;
    }

    m_mvpLoc = GL3::gl.glGetUniformLocation(m_shaderProgram, "u_mvp");
    m_tintLoc = GL3::gl.glGetUniformLocation(m_shaderProgram, "u_tint");

    // Item box cube: smaller than kart (40x40x40 units)
    static const f32 hw = 20.0f;  // half-width
    static const f32 hh = 20.0f;  // half-height
    static const f32 hd = 20.0f;  // half-depth

    // Rainbow question mark box style: each face a different bright color
    // +Y=red, -Y=orange, +Z=yellow, -Z=green, +X=cyan, -X=purple
    const f32 vertices[24][6] = {
        // Front (+Z) — yellow
        { -hw, -hh,  hd,  1.0f, 1.0f, 0.2f },
        { -hw,  hh,  hd,  1.0f, 1.0f, 0.2f },
        {  hw,  hh,  hd,  1.0f, 1.0f, 0.2f },
        {  hw, -hh,  hd,  1.0f, 1.0f, 0.2f },
        // Back (-Z) — green
        {  hw, -hh, -hd,  0.2f, 0.8f, 0.2f },
        {  hw,  hh, -hd,  0.2f, 0.8f, 0.2f },
        { -hw,  hh, -hd,  0.2f, 0.8f, 0.2f },
        { -hw, -hh, -hd,  0.2f, 0.8f, 0.2f },
        // Top (+Y) — red
        { -hw,  hh,  hd,  1.0f, 0.2f, 0.2f },
        { -hw,  hh, -hd,  1.0f, 0.2f, 0.2f },
        {  hw,  hh, -hd,  1.0f, 0.2f, 0.2f },
        {  hw,  hh,  hd,  1.0f, 0.2f, 0.2f },
        // Bottom (-Y) — orange
        { -hw, -hh, -hd,  1.0f, 0.6f, 0.1f },
        { -hw, -hh,  hd,  1.0f, 0.6f, 0.1f },
        {  hw, -hh,  hd,  1.0f, 0.6f, 0.1f },
        {  hw, -hh, -hd,  1.0f, 0.6f, 0.1f },
        // Right (+X) — cyan
        {  hw, -hh,  hd,  0.2f, 0.8f, 1.0f },
        {  hw,  hh,  hd,  0.2f, 0.8f, 1.0f },
        {  hw,  hh, -hd,  0.2f, 0.8f, 1.0f },
        {  hw, -hh, -hd,  0.2f, 0.8f, 1.0f },
        // Left (-X) — purple
        { -hw, -hh, -hd,  0.7f, 0.2f, 1.0f },
        { -hw,  hh, -hd,  0.7f, 0.2f, 1.0f },
        { -hw,  hh,  hd,  0.7f, 0.2f, 1.0f },
        { -hw, -hh,  hd,  0.7f, 0.2f, 1.0f },
    };

    const u32 indices[36] = {
         0,  1,  2,   0,  2,  3,
         4,  5,  6,   4,  6,  7,
         8,  9, 10,   8, 10, 11,
        12, 13, 14,  12, 14, 15,
        16, 17, 18,  16, 18, 19,
        20, 21, 22,  20, 22, 23,
    };

    GL3::gl.glGenVertexArrays(1, &m_vao);
    GL3::gl.glGenBuffers(1, &m_vbo);
    GL3::gl.glGenBuffers(1, &m_ebo);

    GL3::gl.glBindVertexArray(m_vao);

    GL3::gl.glBindBuffer(GL3::GL_ARRAY_BUFFER, m_vbo);
    GL3::gl.glBufferData(GL3::GL_ARRAY_BUFFER,
                          sizeof(vertices), vertices, GL3::GL_STATIC_DRAW);

    GL3::gl.glBindBuffer(GL3::GL_ELEMENT_ARRAY_BUFFER, m_ebo);
    GL3::gl.glBufferData(GL3::GL_ELEMENT_ARRAY_BUFFER,
                          sizeof(indices), indices, GL3::GL_STATIC_DRAW);

    GL3::gl.glVertexAttribPointer(0, 3, GL3::GL_FLOAT, GL3::GL_FALSE,
                                  6 * static_cast<int>(sizeof(f32)),
                                  reinterpret_cast<const void*>(0));
    GL3::gl.glEnableVertexAttribArray(0);

    GL3::gl.glVertexAttribPointer(1, 3, GL3::GL_FLOAT, GL3::GL_FALSE,
                                  6 * static_cast<int>(sizeof(f32)),
                                  reinterpret_cast<const void*>(3 * sizeof(f32)));
    GL3::gl.glEnableVertexAttribArray(1);

    GL3::gl.glBindVertexArray(0);
    return true;
#else
    return false;
#endif
}

// =============================================================================
// ItemBox::render — Draw the spinning item box
// =============================================================================

void ItemBox::render(const EGG::Matrix44f& viewProj) const {
#ifdef HAS_OPENGL
    if (!m_isActive || !m_vao || !m_shaderProgram) return;

    // Build model matrix: T * Ry * S
    EGG::Matrix44f S;
    std::memset(S.m, 0, sizeof(S.m));
    S.m[0][0] = 1.0f;
    S.m[1][1] = 1.0f;
    S.m[2][2] = 1.0f;
    S.m[3][3] = 1.0f;

    f32 yawRad = m_rotationAngle * (3.14159265f / 180.0f);
    f32 cy = std::cos(yawRad);
    f32 sy = std::sin(yawRad);

    EGG::Matrix44f Ry;
    std::memset(Ry.m, 0, sizeof(Ry.m));
    Ry.m[0][0] = cy;   Ry.m[0][2] = -sy;
    Ry.m[1][1] = 1.0f;
    Ry.m[2][0] = sy;   Ry.m[2][2] = cy;
    Ry.m[3][3] = 1.0f;

    EGG::Matrix44f model;
    mat4Mul(model, Ry, S);
    model.m[3][0] = m_position.x;
    model.m[3][1] = m_position.y;
    model.m[3][2] = m_position.z;
    model.m[3][3] = 1.0f;

    EGG::Matrix44f mvp;
    mat4Mul(mvp, viewProj, model);

    GL3::gl.glUseProgram(m_shaderProgram);
    GL3::gl.glUniformMatrix4fv(m_mvpLoc, 1, GL3::GL_FALSE, &mvp.m[0][0]);
    if (m_tintLoc >= 0) {
        // Pulsing brightness effect
        f32 pulse = 0.85f + 0.15f * std::sin(m_rotationAngle * 0.1f);
        GL3::gl.glUniform3f(m_tintLoc, pulse, pulse, pulse);
    }

    GL3::gl.glBindVertexArray(m_vao);
    GL3::gl.glDrawElements(GL3::GL_TRIANGLES, 36, GL3::GL_UNSIGNED_INT, nullptr);
    GL3::gl.glBindVertexArray(0);
    GL3::gl.glUseProgram(0);
#else
    (void)viewProj;
#endif
}

// =============================================================================
// ItemBox::cleanupGL
// =============================================================================

void ItemBox::cleanupGL() {
#ifdef HAS_OPENGL
    if (m_vao) { GL3::gl.glDeleteVertexArrays(1, &m_vao); m_vao = 0; }
    if (m_vbo) { GL3::gl.glDeleteBuffers(1, &m_vbo); m_vbo = 0; }
    if (m_ebo) { GL3::gl.glDeleteBuffers(1, &m_ebo); m_ebo = 0; }
    if (m_shaderProgram) { GL3::gl.glDeleteProgram(m_shaderProgram); m_shaderProgram = 0; }
    m_mvpLoc = -1;
    m_tintLoc = -1;
#endif
}

// =============================================================================
// ItemManager — Constructor / Destructor
// =============================================================================

ItemManager::ItemManager() = default;
ItemManager::~ItemManager() {
    cleanupAllGL();
}

// =============================================================================
// ItemManager::spawnFromKMP — Create item boxes from GOBJ entries
// =============================================================================

void ItemManager::spawnFromKMP(
        const std::vector<Loaders::KmpEntry::GlobalObject>& objects) {
    // In MKWii, item boxes have objectId 0x0002 (itembox)
    // Also check for variations: 0x0002 = single, 0x0003 = multi-set
    u32 spawned = 0;
    for (const auto& obj : objects) {
        if (obj.objectId == 0x0002 || obj.objectId == 0x0003) {
            EGG::Vector3f pos;
            pos.x = obj.position.x;
            pos.y = obj.position.y;
            pos.z = obj.position.z;
            ItemBox box;
            box.init(pos);
            m_boxes.push_back(std::move(box));
            spawned++;
        }
    }
    printf("  Items: Spawned %u item boxes from %u GOBJ entries\n",
           spawned, static_cast<u32>(objects.size()));
}

// =============================================================================
// ItemManager::updateBoxes — Update all item box animations
// =============================================================================

void ItemManager::updateBoxes(f32 dt) {
    for (auto& box : m_boxes) {
        box.update(dt);
    }
}

// =============================================================================
// ItemManager::updateKartItem — Update item timer effects
// =============================================================================

void ItemManager::updateKartItem(ItemSlot& slot, f32& speedRef,
                                   f32& maxSpeedRef,
                                   const EGG::Vector3f& /*posRef*/,
                                   f32 dt) {
    if (!slot.active) return;

    slot.timer -= dt;
    if (slot.timer <= 0.0f) {
        slot.active = false;
        slot.timer = 0.0f;

        // Restore max speed when timed effect ends
        switch (slot.type) {
            case ITEM_STAR:
                maxSpeedRef = 3000.0f;  // Restore to normal max speed
                break;
            case ITEM_MUSHROOM:
                maxSpeedRef = 3000.0f;
                break;
            default:
                break;
        }
        slot.type = ITEM_NONE;
    } else {
        // Apply ongoing effects
        switch (slot.type) {
            case ITEM_STAR:
                // Star: increased max speed
                maxSpeedRef = 4500.0f;  // 1.5x normal
                speedRef = std::max(speedRef, 4000.0f);  // Minimum speed while active
                break;
            case ITEM_MUSHROOM:
                // Mushroom: boost to 1.5x max speed
                speedRef = std::max(speedRef, 4000.0f);
                break;
            case ITEM_GOLDEN_MUSH:
                // Golden mushroom: continuous boost
                speedRef = 4000.0f;
                break;
            default:
                break;
        }
    }
}

// =============================================================================
// ItemManager::tryCollect — Check and collect nearest item box
// =============================================================================

bool ItemManager::tryCollect(const EGG::Vector3f& kartPos, ItemSlot& slot) {
    if (slot.type != ITEM_NONE) return false;  // Already holding an item

    for (auto& box : m_boxes) {
        if (box.checkCollection(kartPos)) {
            box.collect();
            // Generate random item (assume player is in middle of pack for now)
            slot.type = generateItem(6);
            slot.timer = 0.0f;
            slot.active = false;
            printf("  Items: Collected item type %u\n", static_cast<u32>(slot.type));
            return true;
        }
    }
    return false;
}

// =============================================================================
// ItemManager::useItem — Activate the held item
// =============================================================================

void ItemManager::useItem(ItemSlot& slot, f32& speedRef, f32& maxSpeedRef,
                           f32 /*kartYaw*/, const EGG::Vector3f& /*kartPos*/) {
    if (slot.type == ITEM_NONE) return;

    printf("  Items: Using item type %u\n", static_cast<u32>(slot.type));

    switch (slot.type) {
        case ITEM_MUSHROOM:
        case ITEM_TRIPLE_MUSH:
            // Immediate speed boost
            speedRef += 2000.0f;
            slot.type = ITEM_MUSHROOM;
            slot.active = true;
            slot.timer = 1.0f;  // Boost lasts 1 second
            break;

        case ITEM_GREEN_SHELL:
        case ITEM_RED_SHELL:
            // Shell firing — for now just print (projectile system not yet implemented)
            printf("    Shell fired (projectile system TBD)\n");
            slot.type = ITEM_NONE;
            break;

        case ITEM_BANANA:
            // Drop banana behind kart (obstacle placement not yet implemented)
            printf("    Banana dropped (obstacle system TBD)\n");
            slot.type = ITEM_NONE;
            break;

        case ITEM_STAR:
            slot.active = true;
            slot.timer = 8.0f;  // Star lasts 8 seconds
            printf("    Star activated! (8 seconds)\n");
            break;

        case ITEM_GOLDEN_MUSH:
            slot.active = true;
            slot.timer = 5.0f;  // Golden mushroom lasts 5 seconds
            printf("    Golden Mushroom activated! (5 seconds)\n");
            break;

        case ITEM_BULLET_BILL:
            slot.active = true;
            slot.timer = 6.0f;  // Bullet Bill lasts 6 seconds
            speedRef = 5000.0f;  // Very fast
            printf("    Bullet Bill activated! (6 seconds)\n");
            break;

        case ITEM_THUNDER:
            printf("    Thunder used! (affects opponents TBD)\n");
            slot.type = ITEM_NONE;
            break;

        default:
            // Unknown item or mega mushroom etc — just consume
            slot.type = ITEM_NONE;
            break;
    }

    // Clear if not a timed effect
    if (!slot.active) {
        slot.type = ITEM_NONE;
    }
}

// =============================================================================
// ItemManager::generateItem — Weighted random item selection
// =============================================================================

ItemTypeId ItemManager::generateItem(u32 racePosition) const {
    if (racePosition < 1) racePosition = 1;
    if (racePosition > 12) racePosition = 12;

    const u8* table = s_itemTable[racePosition - 1];

    // Sum all weights
    u32 totalWeight = 0;
    for (int i = 0; i < 16; i += 2) {
        if (table[i + 1] == 0) break;
        totalWeight += table[i + 1];
    }

    if (totalWeight == 0) return ITEM_MUSHROOM;  // Fallback

    // Weighted random selection
    u32 roll = static_cast<u32>(std::rand()) % totalWeight;
    u32 cumulative = 0;
    for (int i = 0; i < 16; i += 2) {
        if (table[i + 1] == 0) break;
        cumulative += table[i + 1];
        if (roll < cumulative) {
            return static_cast<ItemTypeId>(table[i]);
        }
    }

    return ITEM_MUSHROOM;  // Fallback
}

// =============================================================================
// ItemManager::initAllGL / renderBoxes / cleanupAllGL
// =============================================================================

bool ItemManager::initAllGL() {
    if (m_boxes.empty()) return true;

    bool ok = true;
    for (auto& box : m_boxes) {
        if (!box.initGL()) ok = false;
    }
    return ok;
}

void ItemManager::renderBoxes(const EGG::Matrix44f& viewProj) const {
    for (const auto& box : m_boxes) {
        box.render(viewProj);
    }
}

void ItemManager::cleanupAllGL() {
    for (auto& box : m_boxes) {
        box.cleanupGL();
    }
}

u32 ItemManager::getActiveBoxCount() const {
    u32 count = 0;
    for (const auto& box : m_boxes) {
        if (box.isActive()) count++;
    }
    return count;
}
