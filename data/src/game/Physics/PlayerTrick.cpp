#include "PlayerTrick.hpp"
#include "PlayerSub10.hpp"
// PlayerPointers is forward-declared in PlayerTrick.hpp
#include <cmath>
#include <cstring>
#include <algorithm>

static inline f32 vec3Length(const Vec3& v) {
    return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

extern "C" {
void sub_0x0005ec0c(void* p);
void sub_0x0005ebf0(void* p);
void sub_0x0005e564(void* p);
}

// Trick state machine states
namespace {
enum TrickState {
    T_IDLE      = 0,
    T_REQUESTED = 1,
    T_IN_AIR    = 2,
    T_ROT_START = 3,
    T_ROT_MID   = 5,
    T_ROT_END   = 7,
    T_LANDING   = 9,
    T_SETTLE    = 11,
    T_DONE      = 13,
    T_COMPLETED = 14,  // 0x0E
};

const u32 FLAG_AIRBORNE      = 0x200;
const u32 FLAG_TRICK_RELATED = 0x461;
const u32 FLAG_TRICK_BLOCKED = 0x10000000;

const s32 STICK_THRESH       = 40;
const f32 ROT_SPEED_BASE     = 0.15f;
const f32 ANGLE_LERP         = 0.12f;
const s16 COOLDOWN_FRAMES    = 10;
const f32 MAX_ANG_STUNT      = 6.2832f;
const f32 MAX_ANG_FLIP       = 3.1416f;
const f32 MAX_ANG_SIDE       = 3.1416f;

// Minimal accessor for kart state flags
struct KartStateFlags {
    u8 _00[8]; u32 flags8; u8 _0c[8]; u32 flags14;
};

void axisAngleToQuat(f32 a, const Vec3& axis, Quat& out) {
    f32 ha = a * 0.5f, sh = sinf(ha), ch = cosf(ha);
    f32 len = vec3Length(axis);
    if (len > 0.0001f) { f32 il = 1.0f / len; out.x = axis.x*il*sh; out.y = axis.y*il*sh; out.z = axis.z*il*sh; }
    else { out.x = out.y = out.z = 0.0f; }
    out.w = ch;
}

Vec3 computeLeftDir(PlayerSub10* ps) {
    if (ps) {
        Vec3 l = Vec3::cross(ps->up, ps->dir);
        f32 len = vec3Length(l);
        if (len > 0.0001f) return l * (1.0f / len);
    }
    return Vec3(0.0f, 1.0f, 0.0f);
}

Quat buildTrickRot(f32 angle, TrickType type, PlayerSub10* ps) {
    Vec3 axis(0.0f, 1.0f, 0.0f);
    switch (type) {
    case FLIP_TRICK_Y_LEFT: case FLIP_TRICK_Y_RIGHT: case STUNT_TRICK_BASIC:
        axis = computeLeftDir(ps); break;
    case BIKE_FLIP_TRICK_X_NOSE: case BIKE_FLIP_TRICK_X_TAIL:
        axis.set(1.0f, 0.0f, 0.0f); break;
    case KART_FLIP_TRICK_Z: case BIKE_SIDE_STUNT_TRICK:
        axis.set(0.0f, 0.0f, 1.0f); break;
    }
    Quat q; axisAngleToQuat(angle, axis, q); q.normalise(); return q;
}

f32 maxAngleForType(TrickType t) {
    switch (t) {
    case FLIP_TRICK_Y_LEFT: case FLIP_TRICK_Y_RIGHT:
    case BIKE_FLIP_TRICK_X_NOSE: case BIKE_FLIP_TRICK_X_TAIL:
        return MAX_ANG_FLIP;
    case KART_FLIP_TRICK_Z: case BIKE_SIDE_STUNT_TRICK: return MAX_ANG_SIDE;
    default: return MAX_ANG_STUNT;
    }
}

s16 boostDurationForType(TrickType t) {
    switch (t) {
    case STUNT_TRICK_BASIC: return 25;
    case FLIP_TRICK_Y_LEFT: case FLIP_TRICK_Y_RIGHT: return 30;
    case BIKE_FLIP_TRICK_X_NOSE: case BIKE_FLIP_TRICK_X_TAIL: return 35;
    case KART_FLIP_TRICK_Z: case BIKE_SIDE_STUNT_TRICK: return 28;
    default: return 25;
    }
}

void lerpQuat(Quat& cur, const Quat& tgt, f32 t) {
    cur.w += (tgt.w - cur.w) * t; cur.x += (tgt.x - cur.x) * t;
    cur.y += (tgt.y - cur.y) * t; cur.z += (tgt.z - cur.z) * t; cur.normalise();
}

} // namespace

// @addr 0x80575a44
PlayerTrick::PlayerTrick() {
    nextTimer = 0; boostRampEnabled = false; nextDirection = T_IDLE;
    type = STUNT_TRICK_BASIC; category = STUNT; rotDir = 1.0f;
    properties = nullptr; angle = 0.0f; angleDiff = 0.0f;
    angleDiffMul = 1.0f; angleDiffMulDec = 0.0f; maxAngle = MAX_ANG_STUNT;
    cooldown = 0; rot.setIdentity(); playerSub10 = nullptr; pointers = nullptr;
}

// @addr 0x80575aa8
PlayerTrick::~PlayerTrick() {}

// @addr 0x80575b38
void PlayerTrick::updateNext() {
    if (!pointers) return;
    void* ks = reinterpret_cast<u8*>(pointers) + 8; // kartState offset in PlayerPointers
    KartStateFlags* st = reinterpret_cast<KartStateFlags*>(*(void**)ks);
    if (!st) return;
    u32 f8 = st->flags8;
    if (!(f8 & FLAG_TRICK_RELATED)) return;
    if (cooldown > 0) cooldown--;
    u8 cur = nextDirection;
    if (cur == T_IDLE) return;
    if (cur >= T_COMPLETED) { nextDirection = T_COMPLETED; nextTimer = 0; return; }
    if (nextTimer > 0) nextTimer--;
    if (nextTimer <= 0) {
        u8 next = cur + 1;
        s16 dur = 0;
        if (next == T_IN_AIR) dur = 3;
        else if (next == T_ROT_START) dur = 6;
        else if (next >= T_ROT_MID && next <= T_ROT_END) dur = 4;
        else if (next == T_LANDING) dur = 3;
        else if (next == T_SETTLE) dur = 2;
        else if (next == T_DONE) dur = 1;
        if (next < T_COMPLETED) { nextDirection = next; nextTimer = dur; }
        else { nextDirection = T_COMPLETED; nextTimer = 0; }
    }
    // Landed early: fast-forward to landing
    if (!(f8 & FLAG_AIRBORNE) && cur > T_REQUESTED && cur < T_LANDING) {
        nextDirection = T_LANDING; nextTimer = 2;
    }
}

// @addr 0x80575d7c
void PlayerTrick::tryStart(Vec3* left) {
    if (!pointers) return;
    void* ks = reinterpret_cast<u8*>(pointers) + 8; // kartState offset
    KartStateFlags* st = reinterpret_cast<KartStateFlags*>(*(void**)ks);
    if (!st) return;
    if (st->flags14 & FLAG_TRICK_BLOCKED) return;
    if (nextDirection != T_IDLE || cooldown > 0) return;
    if (!(st->flags8 & FLAG_AIRBORNE)) return;
    TrickCategory cat = STUNT;
    TrickType ttype = STUNT_TRICK_BASIC;
    f32 dir = 1.0f;
    if (playerSub10) {
        s32 sx = playerSub10->hopStickX;
        if (sx > STICK_THRESH) { cat = SINGLE_FLIP; ttype = FLIP_TRICK_Y_RIGHT; dir = 1.0f; }
        else if (sx < -STICK_THRESH) { cat = SINGLE_FLIP; ttype = FLIP_TRICK_Y_LEFT; dir = -1.0f; }
    }
    type = ttype; rotDir = dir;
    if (properties) { angleDiff = properties->initialAngleDiff; angleDiffMul = properties->minAngleDiffMul; angleDiffMulDec = properties->angleDiffMulDec; }
    else { angleDiff = 0.0f; angleDiffMul = 1.0f; angleDiffMulDec = 0.02f; }
    maxAngle = maxAngleForType(ttype);
    startInner(cat);
    st->flags8 &= ~FLAG_TRICK_RELATED;
}

// @addr 0x80575ee8
void PlayerTrick::start(Vec3* left) {
    nextDirection = T_REQUESTED; nextTimer = 2; angle = 0.0f;
    rot.setIdentity();
    Vec3 rotAxis = computeLeftDir(playerSub10);
    switch (type) {
    case FLIP_TRICK_Y_LEFT: case FLIP_TRICK_Y_RIGHT: case STUNT_TRICK_BASIC:
        if (left) rotAxis = *left;
        break;
    case BIKE_FLIP_TRICK_X_NOSE: case BIKE_FLIP_TRICK_X_TAIL:
        rotAxis.set(1.0f, 0.0f, 0.0f);
        if (type == BIKE_FLIP_TRICK_X_TAIL) rotDir = -rotDir;
        break;
    case KART_FLIP_TRICK_Z: case BIKE_SIDE_STUNT_TRICK:
        rotAxis.set(0.0f, 0.0f, 1.0f); break;
    }
    axisAngleToQuat(0.0f, rotAxis, rot);
    boostRampEnabled = true;
}

// @addr 0x8057616c
void PlayerTrick::startInner(TrickCategory cat) {
    category = cat;
    s16 dur = (cat == STUNT) ? 3 : (cat == DOUBLE_FLIP) ? 4 : 2;
    nextDirection = T_REQUESTED; nextTimer = dur;
    if (cat == STUNT) rotDir = (rotDir > 0.0f) ? -1.0f : 1.0f;
    Vec3 leftDir = computeLeftDir(playerSub10);
    start(&leftDir);
}

// @addr 0x805764fc
void PlayerTrick::updateRot() {
    if (nextDirection < T_ROT_START || nextDirection >= T_LANDING) return;
    f32 tgt = ROT_SPEED_BASE;
    if (category == SINGLE_FLIP) tgt *= 0.8f;
    else if (category == DOUBLE_FLIP) tgt *= 1.3f;
    tgt *= rotDir;
    angleDiff += (tgt - angleDiff) * ANGLE_LERP;
    if (properties) { angleDiffMul -= properties->angleDiffMulDec; if (angleDiffMul < properties->minAngleDiff) angleDiffMul = properties->minAngleDiff; }
    angle += angleDiff;
    f32 aa = (angle > 0.0f) ? angle : -angle;
    if (aa > maxAngle) angle = (angle > 0.0f) ? maxAngle : -maxAngle;
    Quat targetRot = buildTrickRot(angle, type, playerSub10);
    lerpQuat(rot, targetRot, 0.2f);
}

// @addr 0x805763e4
void PlayerTrick::update() {
    u8 cur = nextDirection;
    if (cur == T_IDLE || cur == T_COMPLETED) return;
    if (cur >= T_ROT_START && cur < T_LANDING) updateRot();
    if (cur >= T_LANDING) {
        Quat ident; ident.setIdentity();
        lerpQuat(rot, ident, 0.15f);
        angle *= 0.85f;
        if (angle > -0.01f && angle < 0.01f) angle = 0.0f;
    }
    if (cur >= T_ROT_START && cur < T_LANDING) {
        f32 aa = (angle > 0.0f) ? angle : -angle;
        if (aa >= maxAngle * 0.95f) { nextDirection = T_LANDING; nextTimer = 3; }
    }
    if (cur == T_DONE) end();
}

// @addr 0x805766b8
void PlayerTrick::end() {
    rot.setIdentity(); angle = 0.0f; angleDiff = 0.0f; angleDiffMul = 1.0f;
    nextDirection = T_COMPLETED; nextTimer = 0; cooldown = COOLDOWN_FRAMES;
    if (boostRampEnabled && playerSub10) {
        playerSub10->activateBoostSlot(0x03, boostDurationForType(type));
    }
    boostRampEnabled = false; type = STUNT_TRICK_BASIC; category = STUNT;
}

// ============================================================================
// PlayerTrickBike — Bike-specific trick overrides
// ============================================================================

// @addr 0x80576758
void PlayerTrickBike::start(Vec3* left) {
    PlayerTrick::start(left);
    if (playerSub10 && playerSub10->checkWheelie()) {
        type = BIKE_FLIP_TRICK_X_NOSE; category = SINGLE_FLIP;
        maxAngle = MAX_ANG_FLIP;
        Vec3 fwd = playerSub10->dir;
        f32 len = vec3Length(fwd);
        if (len > 0.0001f) fwd = fwd * (1.0f / len);
        axisAngleToQuat(0.0f, fwd, rot);
    }
}

// @addr 0x8057689c
void PlayerTrickBike::startInner(TrickCategory cat) {
    bool isWheelie = playerSub10 && playerSub10->checkWheelie();
    if (isWheelie) {
        category = SINGLE_FLIP; type = BIKE_FLIP_TRICK_X_NOSE; rotDir = 1.0f;
        maxAngle = MAX_ANG_FLIP; nextDirection = T_REQUESTED; nextTimer = 3;
        Vec3 ld = computeLeftDir(playerSub10); start(&ld); return;
    }
    if (playerSub10) {
        s32 sx = playerSub10->hopStickX;
        if (sx > STICK_THRESH) { category = SINGLE_FLIP; type = BIKE_SIDE_STUNT_TRICK; rotDir = 1.0f; maxAngle = MAX_ANG_SIDE; }
        else if (sx < -STICK_THRESH) { category = SINGLE_FLIP; type = BIKE_SIDE_STUNT_TRICK; rotDir = -1.0f; maxAngle = MAX_ANG_SIDE; }
        else { category = STUNT; type = STUNT_TRICK_BASIC; rotDir = 1.0f; maxAngle = MAX_ANG_STUNT; }
    }
    nextDirection = T_REQUESTED; nextTimer = (category == STUNT) ? 3 : 2;
    Vec3 ld = computeLeftDir(playerSub10); start(&ld);
}

// @addr 0x80576994
void PlayerTrickBike::updateRot() {
    if (nextDirection < T_ROT_START || nextDirection >= T_LANDING) return;
    f32 tgt = ROT_SPEED_BASE, lean = 1.0f;
    switch (type) {
    case BIKE_FLIP_TRICK_X_NOSE: case BIKE_FLIP_TRICK_X_TAIL:
        tgt *= 1.2f; lean = 1.15f; break;
    case BIKE_SIDE_STUNT_TRICK: tgt *= 0.9f; lean = 1.1f; break;
    default: break;
    }
    tgt *= rotDir * lean;
    angleDiff += (tgt - angleDiff) * 0.15f;
    angle += angleDiff;
    f32 aa = (angle > 0.0f) ? angle : -angle;
    if (aa > maxAngle) angle = (angle > 0.0f) ? maxAngle : -maxAngle;
    Vec3 axis = computeLeftDir(playerSub10);
    if (type == BIKE_FLIP_TRICK_X_NOSE || type == BIKE_FLIP_TRICK_X_TAIL ||
        type == BIKE_SIDE_STUNT_TRICK) {
        if (playerSub10) { axis = playerSub10->dir; f32 len = vec3Length(axis); if (len > 0.0001f) axis = axis * (1.0f / len); }
    }
    Quat targetRot; axisAngleToQuat(angle, axis, targetRot); targetRot.normalise();
    lerpQuat(rot, targetRot, 0.25f);
    // Additional lean for wheelie flips
    if (type == BIKE_FLIP_TRICK_X_NOSE || type == BIKE_FLIP_TRICK_X_TAIL) {
        f32 leanAng = angle * 0.15f;
        Vec3 leanAx = playerSub10 ? playerSub10->dir : Vec3(0.0f, 0.0f, 1.0f);
        f32 ll = vec3Length(leanAx); if (ll > 0.0001f) leanAx = leanAx * (1.0f / ll);
        Quat leanQ; axisAngleToQuat(leanAng, leanAx, leanQ); leanQ.normalise();
        Quat combined; Quat::quatMul(combined, leanQ, rot); combined.normalise(); rot = combined;
    }
}

// @addr 0x80576afc
PlayerTrickBike::~PlayerTrickBike() {}