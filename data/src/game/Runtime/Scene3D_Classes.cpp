// ============================================================================
// Scene3D_Classes.cpp — EGG 3D Scene Math Class Implementations
// Address range: 0x80500000 - 0x80520000
//
// GENESIS Phase 8 (Runtime Module — Scene3D Class Extraction)
// ============================================================================

#include "Scene3D_Classes.hpp"
#include <cmath>
#include <algorithm>

namespace EGG {
namespace Scene3D {

// ============================================================================
// Static constants
// ============================================================================

const Vec2f Vec2f::zero = {0.0f, 0.0f};
const Color4f Color4f::white = {1.0f, 1.0f, 1.0f, 1.0f};
const Color4f Color4f::black = {0.0f, 0.0f, 0.0f, 1.0f};

// ============================================================================
// Color4f
// ============================================================================

void Color4f::set(u32 packed, u8 rIdx, u8 gIdx, u8 bIdx, u8 aIdx) {
    // @addr 0x8051db3c
    (void)packed; (void)rIdx; (void)gIdx; (void)bIdx; (void)aIdx;
}

void Color4f::blend(const Color4f& other, u8 idxA, u8 idxB, const u32* lut) {
    // @addr 0x8051f96c
    (void)other; (void)idxA; (void)idxB; (void)lut;
}

// ============================================================================
// BoundBox3f
// ============================================================================

void BoundBox3f::setAxis(u32 axis, f32 minVal, f32 maxVal) {
    // @addr 0x8050465c
    switch (axis) {
        case 0: minX = minVal; maxX = maxVal; break;
        case 1: minY = minVal; maxY = maxVal; break;
        case 2: minZ = minVal; maxZ = maxVal; break;
    }
}

void BoundBox3f::reset() {
    // @addr 0x80504740
    minX = minY = minZ = 1e30f;
    maxX = maxY = maxZ = -1e30f;
}

void BoundBox3f::setFromArray(const f32* data, u32 count) {
    // @addr 0x80504928
    if (count >= 6) {
        minX = data[0]; minY = data[1]; minZ = data[2];
        maxX = data[3]; maxY = data[4]; maxZ = data[5];
    }
}

void BoundBox3f::merge(const BoundBox3f& other) {
    // @addr 0x80504a0c
    if (other.minX < minX) minX = other.minX;
    if (other.minY < minY) minY = other.minY;
    if (other.minZ < minZ) minZ = other.minZ;
    if (other.maxX > maxX) maxX = other.maxX;
    if (other.maxY > maxY) maxY = other.maxY;
    if (other.maxZ > maxZ) maxZ = other.maxZ;
}

void BoundBox3f::transformByMatrix(const f32 mtx[3][4], u32 flags) {
    // @addr 0x80504c10
    if (flags == 0)
        return;
    f32 src[6] = {minX, minY, minZ, maxX, maxY, maxZ};
    Matrix34fOps::transformBounds(reinterpret_cast<f32*>(this), mtx, src);
}

void BoundBox3f::resetGlobal() {
    // @addr 0x80504cf0
}

// ============================================================================
// BoundSphere3f
// ============================================================================

void BoundSphere3f::setRadius(f32 r) {
    // @addr 0x80502314
    radius = r;
}

void BoundSphere3f::setCenterComponent(u32 axis, f32 val) {
    // @addr 0x80502444
    switch (axis) {
        case 0: centerX = val; break;
        case 1: centerY = val; break;
        case 2: centerZ = val; break;
    }
}

void BoundSphere3f::setFromMatrix(const f32 mtx[3][4], s32 radiusScale) {
    // @addr 0x80502578
    centerX = mtx[0][3];
    centerY = mtx[1][3];
    centerZ = mtx[2][3];
    radius = static_cast<f32>(radiusScale);
}

void BoundSphere3f::setCenter(const f32 vec[3]) {
    // @addr 0x805027e4
    centerX = vec[0];
    centerY = vec[1];
    centerZ = vec[2];
}

void BoundSphere3f::set(const f32 pos[3], f32 r) {
    // @addr 0x80502910
    centerX = pos[0]; centerY = pos[1]; centerZ = pos[2];
    radius = r;
}

void BoundSphere3f::reset() {
    // @addr 0x80502b98
    std::memset(this, 0, sizeof(*this));
}

f32 BoundSphere3f::getRadiusSq() const {
    // @addr 0x80502c30
    return radius * radius;
}

void BoundSphere3f::merge(const BoundSphere3f& other) {
    // @addr 0x80502e1c
    f32 dx = other.centerX - centerX;
    f32 dy = other.centerY - centerY;
    f32 dz = other.centerZ - centerZ;
    f32 dist = std::sqrt(dx * dx + dy * dy + dz * dz);
    if (dist + other.radius > radius) {
        f32 newRadius = (dist + radius + other.radius) * 0.5f;
        if (dist > 0.001f) {
            f32 t = (newRadius - radius) / dist;
            centerX += dx * t;
            centerY += dy * t;
            centerZ += dz * t;
        }
        radius = newRadius;
    }
}

void BoundSphere3f::transformByMatrix(const f32 mtx[3][4], u32 flags) {
    // @addr 0x80502fe0
    if (flags == 0)
        return;
    f32 pos[3] = {centerX, centerY, centerZ};
    f32 out[3];
    Vec3fOps::transformPoint(out, mtx, pos);
    centerX = out[0]; centerY = out[1]; centerZ = out[2];
}

// ============================================================================
// Ray3f
// ============================================================================

void Ray3f::set(const f32 origin[3], const f32 dir[3]) {
    // @addr 0x805055a8
    originX = origin[0]; originY = origin[1]; originZ = origin[2];
    directionX = dir[0]; directionY = dir[1]; directionZ = dir[2];
}

void Ray3f::setDirectionFromPoints(const f32 start[3], const f32 end[3]) {
    // @addr 0x80505640
    directionX = end[0] - start[0];
    directionY = end[1] - start[1];
    directionZ = end[2] - start[2];
}

void Ray3f::setFromPoints(const f32 start[3], const f32 end[3]) {
    // @addr 0x80505670
    originX = start[0]; originY = start[1]; originZ = start[2];
    directionX = end[0] - start[0];
    directionY = end[1] - start[1];
    directionZ = end[2] - start[2];
}

void Ray3f::normalizeDirection() {
    // @addr 0x80505b20
    f32 len = std::sqrt(directionX * directionX + directionY * directionY + directionZ * directionZ);
    if (len > 0.0f) {
        directionX /= len;
        directionY /= len;
        directionZ /= len;
    }
}

void Ray3f::setFromPacked(const u32* packed) {
    // @addr 0x80505c10
    (void)packed;
}

// ============================================================================
// Plane3f
// ============================================================================

void Plane3f::set(f32 normalX, f32 normalY, f32 normalZ, f32 dist) {
    // @addr 0x805057c0
    nx = normalX; ny = normalY; nz = normalZ; d = dist;
}

void Plane3f::normalize() {
    // @addr 0x8050586c
    f32 len = std::sqrt(nx * nx + ny * ny + nz * nz);
    if (len > 0.0f) {
        nx /= len; ny /= len; nz /= len;
        d /= len;
    }
}

void Plane3f::setFromThreePoints(const f32 p0[3], const f32 p1[3], const f32 p2[3]) {
    // @addr 0x80505ae8
    f32 e1x = p1[0] - p0[0], e1y = p1[1] - p0[1], e1z = p1[2] - p0[2];
    f32 e2x = p2[0] - p0[0], e2y = p2[1] - p0[1], e2z = p2[2] - p0[2];
    nx = e1y * e2z - e1z * e2y;
    ny = e1z * e2x - e1x * e2z;
    nz = e1x * e2y - e1y * e2x;
    d = -(nx * p0[0] + ny * p0[1] + nz * p0[2]);
    normalize();
}

f32 Plane3f::distanceToPoint(const f32 point[3]) const {
    // @addr 0x80505b7c
    return dotPoint(point);
}

// ============================================================================
// Frustum
// ============================================================================

void Frustum::globalInit_0() { /* @addr 0x80514620 */ }
void Frustum::globalInit_1() { /* @addr 0x80514718 */ }
void Frustum::globalInit_2() { /* @addr 0x80514808 */ }
void Frustum::globalInit_3() { /* @addr 0x8051496c */ }
void Frustum::globalInit_4() { /* @addr 0x80514a5c */ }
void Frustum::globalInit_5() { /* @addr 0x80514b4c */ }
void Frustum::globalInitAll() { /* @addr 0x80514d2c */ }
void Frustum::globalReset() { /* @addr 0x80514e20 */ }

u32 Frustum::testPoint(const f32 point[3], u32 planeMask) const {
    // @addr 0x80514f20
    // Test point against each active plane in the mask
    for (u32 i = 0; i < PLANE_COUNT; i++) {
        if (planeMask & (1 << i)) {
            if (planes[i].dotPoint(point) < 0.0f)
                return OUTSIDE;
        }
    }
    return INSIDE;
}

u32 Frustum::testSphere(const f32 center[3], f32 radius, u32 planeMask) const {
    // @addr 0x80514ff4
    u32 result = INSIDE;
    for (u32 i = 0; i < PLANE_COUNT; i++) {
        if (planeMask & (1 << i)) {
            f32 dist = planes[i].dotPoint(center);
            if (dist < -radius)
                return OUTSIDE;
            if (dist < radius)
                result = INTERSECT;
        }
    }
    return result;
}

void Frustum::reset() {
    // @addr 0x805150e0
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wclass-memaccess"
    std::memset(this, 0, sizeof(*this));
#pragma GCC diagnostic pop
}

void Frustum::setPlane(u32 index, f32 pnx, f32 pny, f32 pnz, f32 pd) {
    // @addr 0x805151d8
    if (index < PLANE_COUNT) {
        planes[index].set(pnx, pny, pnz, pd);
    }
}

void Frustum::normalizeAll() {
    // @addr 0x805152f8
    for (u32 i = 0; i < PLANE_COUNT; i++) {
        planes[i].normalize();
    }
}

void Frustum::normalizePlane(u32 index) {
    // @addr 0x8051534c
    if (index < PLANE_COUNT) {
        planes[index].normalize();
    }
}

const Plane3f& Frustum::getPlane(u32 index) const {
    // @addr 0x80515494
    return planes[index < PLANE_COUNT ? index : 0];
}

void Frustum::extractFromMatrix(const f32 vpMatrix[4][4], s32 flags) {
    // @addr 0x805155e4
    // Extract frustum planes from a combined view-projection matrix.
    // Standard plane extraction: combine rows of the VP matrix.
    // GX uses Z in [0,1] clip space.

    // Left plane: row3 + row0
    planes[PLANE_LEFT].nx = vpMatrix[3][0] + vpMatrix[0][0];
    planes[PLANE_LEFT].ny = vpMatrix[3][1] + vpMatrix[0][1];
    planes[PLANE_LEFT].nz = vpMatrix[3][2] + vpMatrix[0][2];
    planes[PLANE_LEFT].d  = vpMatrix[3][3] + vpMatrix[0][3];

    // Right plane: row3 - row0
    planes[PLANE_RIGHT].nx = vpMatrix[3][0] - vpMatrix[0][0];
    planes[PLANE_RIGHT].ny = vpMatrix[3][1] - vpMatrix[0][1];
    planes[PLANE_RIGHT].nz = vpMatrix[3][2] - vpMatrix[0][2];
    planes[PLANE_RIGHT].d  = vpMatrix[3][3] - vpMatrix[0][3];

    // Bottom plane: row3 + row1
    planes[PLANE_BOTTOM].nx = vpMatrix[3][0] + vpMatrix[1][0];
    planes[PLANE_BOTTOM].ny = vpMatrix[3][1] + vpMatrix[1][1];
    planes[PLANE_BOTTOM].nz = vpMatrix[3][2] + vpMatrix[1][2];
    planes[PLANE_BOTTOM].d  = vpMatrix[3][3] + vpMatrix[1][3];

    // Top plane: row3 - row1
    planes[PLANE_TOP].nx = vpMatrix[3][0] - vpMatrix[1][0];
    planes[PLANE_TOP].ny = vpMatrix[3][1] - vpMatrix[1][1];
    planes[PLANE_TOP].nz = vpMatrix[3][2] - vpMatrix[1][2];
    planes[PLANE_TOP].d  = vpMatrix[3][3] - vpMatrix[1][3];

    // Near plane: row2 + row3 (for GX Z=[0,1])
    planes[PLANE_NEAR].nx = vpMatrix[2][0] + vpMatrix[3][0];
    planes[PLANE_NEAR].ny = vpMatrix[2][1] + vpMatrix[3][1];
    planes[PLANE_NEAR].nz = vpMatrix[2][2] + vpMatrix[3][2];
    planes[PLANE_NEAR].d  = vpMatrix[2][3] + vpMatrix[3][3];

    // Far plane: row2 - row3
    planes[PLANE_FAR].nx = vpMatrix[2][0] - vpMatrix[3][0];
    planes[PLANE_FAR].ny = vpMatrix[2][1] - vpMatrix[3][1];
    planes[PLANE_FAR].nz = vpMatrix[2][2] - vpMatrix[3][2];
    planes[PLANE_FAR].d  = vpMatrix[2][3] - vpMatrix[3][3];

    if (flags != 0) {
        normalizeAll();
    }
}

void Frustum::setHorizontalPlanes(u32 fov, s32 aspect) {
    // @addr 0x805156bc
    (void)fov; (void)aspect;
}

void Frustum::setVerticalPlanes(u32 fov, s32 aspect) {
    // @addr 0x805156f4
    (void)fov; (void)aspect;
}

void Frustum::setDepthPlanes(f32 nearDist, f32 farDist) {
    // @addr 0x8051572c
    // Near plane at z = -nearDist along -Z
    planes[PLANE_NEAR].set(0.0f, 0.0f, -1.0f, -nearDist);
    // Far plane at z = -farDist along -Z
    planes[PLANE_FAR].set(0.0f, 0.0f, 1.0f, farDist);
}

void Frustum::setup(u32 fov, s32 aspect, u32 nearPlane, s32 farPlane) {
    // @addr 0x80515808
    (void)fov; (void)aspect;
    setDepthPlanes(static_cast<f32>(nearPlane), static_cast<f32>(farPlane));
}

void Frustum::setFromPacked(const u32* packed) {
    // @addr 0x80515e58
    (void)packed;
}

void Frustum::globalDestroy() { /* @addr 0x80515fcc */ }

u32 Frustum::testBoxPlane(const BoundBox3f& box, u32 planeIndex) const {
    // @addr 0x805159b4
    if (planeIndex >= PLANE_COUNT)
        return OUTSIDE;

    const Plane3f& p = planes[planeIndex];
    // Test all 8 corners of the AABB against the plane
    f32 corners[8][3] = {
        {box.minX, box.minY, box.minZ},
        {box.maxX, box.minY, box.minZ},
        {box.minX, box.maxY, box.minZ},
        {box.maxX, box.maxY, box.minZ},
        {box.minX, box.minY, box.maxZ},
        {box.maxX, box.minY, box.maxZ},
        {box.minX, box.maxY, box.maxZ},
        {box.maxX, box.maxY, box.maxZ},
    };

    u32 insideCount = 0;
    for (s32 i = 0; i < 8; i++) {
        if (p.dotPoint(corners[i]) >= 0.0f)
            insideCount++;
    }

    if (insideCount == 0) return OUTSIDE;
    if (insideCount == 8) return INSIDE;
    return INTERSECT;
}

void Frustum::testGlobal() { /* @addr 0x805159ec */ }

// ============================================================================
// Coord3D
// ============================================================================

void Coord3D::init(u32 type, u32 flags) {
    // @addr 0x80500018
    std::memset(this, 0, sizeof(*this));
    m_vtable = type;
    m_flags = flags;
    m_scaleX = m_scaleY = m_scaleZ = 1.0f;
    m_quatW = 1.0f;
}

void Coord3D::initWithParent(u32 type, u32 parentFlags) {
    // @addr 0x80500024
    init(type, parentFlags);
}

void Coord3D::destroy() {
    // @addr 0x8050004c
    if (m_parent != nullptr) {
        Coord3D** pp = &m_parent->m_child;
        while (*pp != nullptr) {
            if (*pp == this) {
                *pp = m_sibling;
                break;
            }
            pp = &(*pp)->m_sibling;
        }
        m_parent = nullptr;
    }
    m_child = nullptr;
    m_sibling = nullptr;
}

void Coord3D::calcWorld() {
    // @addr 0x805001d0
    m_flags &= ~FLAG_DIRTY;
}

void Coord3D::getPosition(f32 out[3]) const {
    // @addr 0x80500288
    out[0] = m_posX; out[1] = m_posY; out[2] = m_posZ;
}

void Coord3D::setPosition(const f32 pos[3]) {
    // @addr 0x805002c8
    m_posX = pos[0]; m_posY = pos[1]; m_posZ = pos[2];
    m_flags |= FLAG_DIRTY;
}

void Coord3D::setRotationAxisAngle(f32 axisX, f32 axisY, f32 axisZ, f32 angle) {
    // @addr 0x805003cc
    f32 halfAngle = angle * 0.5f;
    f32 sinHalf = std::sin(halfAngle);
    f32 cosHalf = std::cos(halfAngle);
    m_quatW = cosHalf;
    m_quatX = axisX * sinHalf;
    m_quatY = axisY * sinHalf;
    m_quatZ = axisZ * sinHalf;
    m_flags |= FLAG_DIRTY;
}

void Coord3D::setRotationQuat(f32 w, f32 x, f32 y, f32 z) {
    // @addr 0x805003f0
    m_quatW = w; m_quatX = x; m_quatY = y; m_quatZ = z;
    m_flags |= FLAG_DIRTY;
}

// ============================================================================
// NijiCamera
// ============================================================================

void NijiCamera::init() {
    // @addr 0x8051647c
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wclass-memaccess"
    std::memset(this, 0, sizeof(*this));
#pragma GCC diagnostic pop
    m_fov = 60.0f; m_aspect = 4.0f / 3.0f;
    m_near = 1.0f; m_far = 1000.0f;
    m_flags = FLAG_PERSPECTIVE;
}

void NijiCamera::setFromData(const f32* data) {
    // @addr 0x80516558
    (void)data;
}

void NijiCamera::reset() {
    // @addr 0x805167f8
    init();
}

void NijiCamera::calcViewMatrix() {
    // @addr 0x805169bc
    // Translated from C_MTXLookAt in rvlMtx.c
    f32 eye[3]   = {m_posX, m_posY, m_posZ};
    f32 target[3] = {m_targetX, m_targetY, m_targetZ};
    f32 up[3]    = {m_upX, m_upY, m_upZ};

    f32 forward[3], right[3], up2[3];

    // forward = normalize(eye - target)
    forward[0] = eye[0] - target[0];
    forward[1] = eye[1] - target[1];
    forward[2] = eye[2] - target[2];
    Vec3fOps::normalize(forward, forward);

    // right = normalize(cross(up, forward))
    Vec3fOps::cross(right, up, forward);
    Vec3fOps::normalize(right, right);

    // up2 = cross(forward, right)
    Vec3fOps::cross(up2, forward, right);

    // Row 0 = right, Row 1 = up2, Row 2 = forward
    m_viewMtx[0][0] = right[0];
    m_viewMtx[0][1] = right[1];
    m_viewMtx[0][2] = right[2];
    m_viewMtx[0][3] = -(eye[0] * right[0] + eye[1] * right[1] + eye[2] * right[2]);

    m_viewMtx[1][0] = up2[0];
    m_viewMtx[1][1] = up2[1];
    m_viewMtx[1][2] = up2[2];
    m_viewMtx[1][3] = -(eye[0] * up2[0] + eye[1] * up2[1] + eye[2] * up2[2]);

    m_viewMtx[2][0] = forward[0];
    m_viewMtx[2][1] = forward[1];
    m_viewMtx[2][2] = forward[2];
    m_viewMtx[2][3] = -(eye[0] * forward[0] + eye[1] * forward[1] + eye[2] * forward[2]);

    m_flags &= ~FLAG_DIRTY;
}

void NijiCamera::calcProjectionMatrix() {
    // @addr 0x80516a40
    if (isPerspective()) {
        Matrix34fOps::makePerspective(m_projMtx, m_fov, m_aspect, m_near, m_far);
    } else {
        Matrix34fOps::makeOrthographic(m_projMtx, -m_aspect, m_aspect, -1.0f, 1.0f, m_near, m_far);
    }
}

void NijiCamera::calc() {
    // @addr 0x80516be0
    calcViewMatrix();
    calcProjectionMatrix();
    computeViewProj();
    extractFrustum();
}

void NijiCamera::globalReset() { /* @addr 0x80516e6c */ }

void NijiCamera::setProjectionType(u32 type) {
    // @addr 0x80517120
    m_flags = (m_flags & ~(FLAG_PERSPECTIVE | FLAG_ORTHOGRAPHIC)) | (type & 0x03);
    m_flags |= FLAG_DIRTY;
}

void NijiCamera::setProjectionParams(u32 params) {
    // @addr 0x80517150
    (void)params;
}

void NijiCamera::resetProjection() { /* @addr 0x805171ac */ }

void NijiCamera::applyProjection() {
    // @addr 0x805173e0
}

void NijiCamera::computeViewProj() {
    // @addr 0x80517334
    // VP = Projection * View (expand 3x4 view to 4x4)
    for (s32 i = 0; i < 4; i++) {
        for (s32 j = 0; j < 4; j++) {
            f32 sum = 0.0f;
            for (s32 k = 0; k < 3; k++) {
                sum += m_projMtx[i][k] * m_viewMtx[k][j];
            }
            // View matrix last row is [0,0,0,1]
            sum += m_projMtx[i][3] * (j == 3 ? 1.0f : 0.0f);
            m_vpMtx[i][j] = sum;
        }
    }
}

void NijiCamera::multiplyView(const f32 mtx[3][4]) {
    // @addr 0x80517a40
    // Pre-multiply: m_viewMtx = mtx * m_viewMtx
    f32 result[3][4];
    Matrix34fOps::multiply(result, mtx, m_viewMtx);
    Matrix34fOps::copy(m_viewMtx, result);
}

void NijiCamera::setViewMatrix(const f32 mtx[3][4]) {
    // @addr 0x80517eec
    Matrix34fOps::copy(m_viewMtx, mtx);
    m_flags |= FLAG_DIRTY;
}

const f32* NijiCamera::getViewMatrix() const {
    // @addr 0x80518124
    return &m_viewMtx[0][0];
}

const f32* NijiCamera::getProjectionMatrix() const {
    // @addr 0x80518530
    return &m_projMtx[0][0];
}

void NijiCamera::transformByView(f32* out, const f32 in[3]) const {
    // @addr 0x80517634
    // Translated from PSMTXMultVec in rvlMtx.c
    Vec3fOps::transformPoint(out, m_viewMtx, in);
}

void NijiCamera::transformByProjection(f32* out, const f32 in[3]) const {
    // @addr 0x80517850
    // Transform point by 4x4 projection matrix with perspective divide
    Vec3fOps::transformPoint44(out, m_projMtx, in);
}

void NijiCamera::setVPEntry(u32 row, u32 col) {
    // @addr 0x805178dc
    (void)row; (void)col;
}

void NijiCamera::setPosition(f32 x, f32 y, f32 z) {
    // @addr 0x80517ae0
    m_posX = x; m_posY = y; m_posZ = z;
    m_flags |= FLAG_DIRTY;
}

void NijiCamera::setTarget(const f32 target[3]) {
    // @addr 0x80517cc0
    m_targetX = target[0]; m_targetY = target[1]; m_targetZ = target[2];
    m_flags |= FLAG_DIRTY;
}

void NijiCamera::getPosition(f32 out[3]) const {
    // @addr 0x80517f54
    out[0] = m_posX; out[1] = m_posY; out[2] = m_posZ;
}

void NijiCamera::getDirection(f32 out[3]) const {
    // @addr 0x80517fb0
    out[0] = m_targetX - m_posX;
    out[1] = m_targetY - m_posY;
    out[2] = m_targetZ - m_posZ;
}

void NijiCamera::resetTransform() { /* @addr 0x80518090 */ }

void NijiCamera::applyTransform() {
    // @addr 0x805181b0
}

void NijiCamera::inverseTransformPoint(f32* out, const f32 in[3]) const {
    // @addr 0x805182d8
    // Transform by inverse of the view matrix.
    // For an orthogonal rotation matrix, inverse = transpose of 3x3 part,
    // and translation = -R^T * t
    f32 invView[3][4];
    Matrix34fOps::inverse3x3(invView, m_viewMtx);
    Vec3fOps::transformPoint(out, invView, in);
}

void NijiCamera::setFov(u32 fov) {
    // @addr 0x80518388
    m_fov = static_cast<f32>(fov);
    m_flags |= FLAG_DIRTY;
}

void NijiCamera::setAspect(u32 aspect) {
    // @addr 0x805183cc
    m_aspect = static_cast<f32>(aspect);
    m_flags |= FLAG_DIRTY;
}

void NijiCamera::setClipPlanes(f32 nearDist, u32 farDist) {
    // @addr 0x80518430
    m_near = nearDist; m_far = static_cast<f32>(farDist);
    m_flags |= FLAG_DIRTY;
}

void NijiCamera::resetMatrices() { /* @addr 0x8051847c */ }

void NijiCamera::setFromPacked(const f32* packed) {
    // @addr 0x80518598
    (void)packed;
}

void NijiCamera::getPacked(f32* packed) const {
    // @addr 0x80518604
    (void)packed;
}

void NijiCamera::extractFrustum() {
    // @addr 0x80518a24
    m_frustum.extractFromMatrix(m_vpMtx, 1);
}

u32 NijiCamera::testFrustumPoint(const f32 point[3]) const {
    // @addr 0x80518b94
    return m_frustum.testPoint(point, 0x3F);
}

u32 NijiCamera::testFrustumSphere(const f32 center[3], f32 radius) const {
    // @addr 0x8051909c
    return m_frustum.testSphere(center, radius, 0x3F);
}

u32 NijiCamera::testFrustumBox(const BoundBox3f& box) const {
    // @addr 0x805192a0
    // Test against all planes, return OUTSIDE if any plane fully rejects
    u32 result = Frustum::INSIDE;
    for (u32 i = 0; i < Frustum::PLANE_COUNT; i++) {
        u32 test = m_frustum.testBoxPlane(box, i);
        if (test == Frustum::OUTSIDE)
            return Frustum::OUTSIDE;
        if (test == Frustum::INTERSECT)
            result = Frustum::INTERSECT;
    }
    return result;
}

void NijiCamera::setEffect(u32 effectType, u32 param) {
    // @addr 0x80519450
    (void)effectType; (void)param;
}

void NijiCamera::updateEffect(u32 effectType, u32 param) {
    // @addr 0x80519480
    (void)effectType; (void)param;
}

void NijiCamera::resetEffect() { /* @addr 0x805194d0 */ }

void NijiCamera::setEffect3(u32 p1, u32 p2, u32 p3) {
    // @addr 0x80519564
    (void)p1; (void)p2; (void)p3;
}

void NijiCamera::resetState() {
    // @addr 0x80519618
    m_flags &= ~FLAG_DIRTY;
}

void NijiCamera::resetAnimation() { /* @addr 0x80519650 */ }

void NijiCamera::resetShake() { /* @addr 0x80519688 */ }

void NijiCamera::getShakeData(u32* out) const {
    // @addr 0x805196c0
    (void)out;
}

s32 NijiCamera::queryState(s32 stateId) const {
    // @addr 0x8051950c
    (void)stateId;
    return 0;
}

void NijiCamera::resetGlobalState() { /* @addr 0x8051975c */ }

s32 NijiCamera::compare(const NijiCamera& other) const {
    // @addr 0x805197b8
    (void)other;
    return 0;
}

u32 NijiCamera::getCameraId() const {
    // @addr 0x8051982c
    return 0;
}

void NijiCamera::globalQuery() { /* @addr 0x80519e44 */ }

void NijiCamera::globalUpdate() { /* @addr 0x8051a1f4 */ }

s32 NijiCamera::setParam(s32 paramId, s32 value) {
    // @addr 0x8051a230
    (void)paramId; (void)value;
    return 0;
}

void NijiCamera::setParamU32(s32 paramId, u32 value) {
    // @addr 0x8051a288
    (void)paramId; (void)value;
}

void NijiCamera::getParam(s32 paramId) {
    // @addr 0x8051a380
    (void)paramId;
}

void NijiCamera::getParamU32(s32 paramId) {
    // @addr 0x8051a3b8
    (void)paramId;
}

void NijiCamera::getParamF32(s32 paramId) {
    // @addr 0x8051a3f0
    (void)paramId;
}

u32 NijiCamera::queryParam(s32 paramId) const {
    // @addr 0x8051a428
    (void)paramId;
    return 0;
}

void NijiCamera::getParamArray(u32* out) const {
    // @addr 0x8051a470
    (void)out;
}

u32 NijiCamera::getParamCount() const {
    // @addr 0x8051a50c
    return 0;
}

void NijiCamera::resetParams() { /* @addr 0x8051a58c */ }

void NijiCamera::setBehavior(s32 mode) {
    // @addr 0x8051a800
    (void)mode;
}

void NijiCamera::getBehavior(s32 mode) {
    // @addr 0x8051a930
    (void)mode;
}

void NijiCamera::resetBehavior() { /* @addr 0x8051a9fc */ }

u32 NijiCamera::getBehaviorParam(u32* out) const {
    // @addr 0x8051aa90
    (void)out;
    return 0;
}

void NijiCamera::updateBehavior(s32 dt) {
    // @addr 0x8051ab40
    (void)dt;
}

void NijiCamera::applyBehavior() {
    // @addr 0x8051ad2c
}

// ============================================================================
// NijiTransform
// ============================================================================

void NijiTransform::init() {
    // @addr 0x8051bdc8
    std::memset(this, 0, sizeof(*this));
}

void NijiTransform::setFromMatrix(u32 param) {
    // @addr 0x8051bed0
    (void)param;
}

void NijiTransform::setFromParams(u32 param) {
    // @addr 0x8051bf00
    (void)param;
}

void NijiTransform::setFlags(u32 param) {
    // @addr 0x8051bf30
    m_flags = param;
}

void NijiTransform::globalReset() { /* @addr 0x8051bf9c */ }

void NijiTransform::reset() {
    // @addr 0x8051c030
    std::memset(this, 0, sizeof(*this));
}

void NijiTransform::resetLocal() {
    // @addr 0x8051c0b0
    std::memset(m_localMtx, 0, sizeof(m_localMtx));
}

void NijiTransform::resetWorld() {
    // @addr 0x8051c114
    std::memset(m_worldMtx, 0, sizeof(m_worldMtx));
}

void NijiTransform::globalInit() { /* @addr 0x8051c1c0 */ }

void NijiTransform::initTransform() {
    // @addr 0x8051c2b0
    init();
}

s32 NijiTransform::setLocalMatrix(s32 param1, s32 param2) {
    // @addr 0x8051c22c
    (void)param1; (void)param2;
    return 0;
}

void NijiTransform::setLocalFromArray(f32* data) {
    // @addr 0x8051c400
    for (s32 i = 0; i < 3; i++)
        for (s32 j = 0; j < 4; j++)
            m_localMtx[i][j] = data[i * 4 + j];
}

void NijiTransform::resetGlobalMatrix() { /* @addr 0x8051c58c */ }

s32 NijiTransform::compare(const NijiTransform& other) const {
    // @addr 0x8051c774
    (void)other;
    return 0;
}

void NijiTransform::calcLocal() {
    // @addr 0x8051c820
    m_flags &= ~FLAG_DIRTY_LOCAL;
}

void NijiTransform::calcWorld(const f32 parentMtx[3][4]) {
    // @addr 0x8051ca58
    // world = parent * local
    Matrix34fOps::multiply(m_worldMtx, parentMtx, m_localMtx);
    m_flags &= ~FLAG_DIRTY_WORLD;
}

void NijiTransform::globalCalc() { /* @addr 0x8051cb1c */ }

void NijiTransform::transformPoint(f32* out, const f32 in[3]) const {
    // @addr 0x8051d2ac
    Vec3fOps::transformPoint(out, m_worldMtx, in);
}

void NijiTransform::inverseTransformPoint(f32* out, const f32 in[3]) const {
    // @addr 0x8051d55c
    f32 invMtx[3][4];
    Matrix34fOps::inverse3x3(invMtx, m_worldMtx);
    Vec3fOps::transformPoint(out, invMtx, in);
}

void NijiTransform::setFromPosition(f32* pos) {
    // @addr 0x8051d598
    Matrix34fOps::identity(m_localMtx);
    m_localMtx[0][3] = pos[0];
    m_localMtx[1][3] = pos[1];
    m_localMtx[2][3] = pos[2];
}

void NijiTransform::setFromRotation(f32* rot) {
    // @addr 0x8051d680
    // rot is [w, x, y, z] quaternion
    Matrix34fOps::fromQuat(m_localMtx, rot);
}

void NijiTransform::setFromScale(f32* scale) {
    // @addr 0x8051d774
    Matrix34fOps::makeScale(m_localMtx, scale[0], scale[1], scale[2]);
}

void NijiTransform::setFromPRS(f32* pos, f32* rot, f32* scale) {
    // @addr 0x8051d920
    Matrix34fOps::compose(m_localMtx, pos, rot, scale);
}

void NijiTransform::globalSet() { /* @addr 0x8051da70 */ }

void NijiTransform::setBlend(u32 type, u8 srcFactor, u8 dstFactor, u8 op) {
    // @addr 0x8051db3c
    (void)type; (void)srcFactor; (void)dstFactor; (void)op;
}

void NijiTransform::getLocalMatrix(f32* out) const {
    // @addr 0x8051dc28
    for (s32 i = 0; i < 3; i++)
        for (s32 j = 0; j < 4; j++)
            out[i * 4 + j] = m_localMtx[i][j];
}

void NijiTransform::getWorldMatrix(f32* out) const {
    // @addr 0x8051dd14
    for (s32 i = 0; i < 3; i++)
        for (s32 j = 0; j < 4; j++)
            out[i * 4 + j] = m_worldMtx[i][j];
}

void NijiTransform::setWorldMatrix(u32 index, s32 value) {
    // @addr 0x8051de90
    (void)index; (void)value;
}

void NijiTransform::setLocalEntry(u32 index, s32 value) {
    // @addr 0x8051dfa8
    if (index < 12) {
        reinterpret_cast<f32*>(m_localMtx)[index] = static_cast<f32>(value);
    }
}

void NijiTransform::applyToGX() {
    // @addr 0x8051e00c
}

void NijiTransform::applyWorldToGX() {
    // @addr 0x8051e0bc
}

void NijiTransform::getGXData(u32* out) const {
    // @addr 0x8051e14c
    (void)out;
}

void NijiTransform::calcBounds() {
    // @addr 0x8051e288
}

void NijiTransform::getBounds(f32* out) const {
    // @addr 0x8051e3c4
    (void)out;
}

void NijiTransform::setBounds(s32 param) {
    // @addr 0x8051e534
    (void)param;
}

void NijiTransform::transformBounds() {
    // @addr 0x8051e63c
}

void NijiTransform::globalQuery() { /* @addr 0x8051e708 */ }
void NijiTransform::globalUpdate() { /* @addr 0x8051e754 */ }

u32 NijiTransform::queryState(s32 stateId) const {
    // @addr 0x8051e1e0
    (void)stateId;
    return 0;
}

u32 NijiTransform::getData(u32* out, s32 index) const {
    // @addr 0x8051f2c4
    (void)out; (void)index;
    return 0;
}

s32 NijiTransform::compareTo(s32 param) const {
    // @addr 0x8051f494
    (void)param;
    return 0;
}

void NijiTransform::setFromPacked(u32* packed) {
    // @addr 0x8051f54c
    (void)packed;
}

void NijiTransform::blendWith(const NijiTransform& other, u8 idxA, u8 idxB, const u32* lut) {
    // @addr 0x8051f96c
    (void)other; (void)idxA; (void)idxB; (void)lut;
}

void NijiTransform::getPacked(u32* packed) {
    // @addr 0x8051fcdc
    (void)packed;
}

void NijiTransform::globalDestroy() { /* @addr 0x8051fdac */ }

u32 NijiTransform::getTransformId() const {
    // @addr 0x8051fd38
    return 0;
}

void NijiTransform::finalize() {
    // @addr 0x8051ff04
}

// ============================================================================
// CollContext
// ============================================================================

s32 CollContext::testRaySphere(const Ray3f& ray, const BoundSphere3f& sphere) {
    // @addr 0x8050553c
    // Standard ray-sphere intersection test
    f32 ox = ray.originX - sphere.centerX;
    f32 oy = ray.originY - sphere.centerY;
    f32 oz = ray.originZ - sphere.centerZ;

    f32 dx = ray.directionX;
    f32 dy = ray.directionY;
    f32 dz = ray.directionZ;

    f32 b = 2.0f * (ox * dx + oy * dy + oz * dz);
    f32 c = ox * ox + oy * oy + oz * oz - sphere.radius * sphere.radius;
    f32 disc = b * b - 4.0f * c; // a=1 since direction assumed normalized

    if (disc < 0.0f) {
        m_result = RESULT_NONE;
        return 0;
    }

    f32 sqrtDisc = std::sqrt(disc);
    f32 t0 = (-b - sqrtDisc) * 0.5f;
    f32 t1 = (-b + sqrtDisc) * 0.5f;

    if (t0 > 0.0f) {
        m_result = RESULT_HIT;
        m_hitDist = t0;
        m_hitX = ray.originX + t0 * dx;
        m_hitY = ray.originY + t0 * dy;
        m_hitZ = ray.originZ + t0 * dz;
        m_normalX = m_hitX - sphere.centerX;
        m_normalY = m_hitY - sphere.centerY;
        m_normalZ = m_hitZ - sphere.centerZ;
        f32 nLen = std::sqrt(m_normalX * m_normalX + m_normalY * m_normalY + m_normalZ * m_normalZ);
        if (nLen > 0.0f) {
            m_normalX /= nLen; m_normalY /= nLen; m_normalZ /= nLen;
        }
        return 1;
    } else if (t1 > 0.0f) {
        m_result = RESULT_BEHIND;
        m_hitDist = t1;
        return 1;
    }

    m_result = RESULT_NONE;
    return 0;
}

s32 CollContext::testRayBox(const Ray3f& ray, const BoundBox3f& box) {
    // @addr 0x80505768
    // Slab method ray-AABB intersection
    f32 tmin = -1e30f;
    f32 tmax = 1e30f;
    f32 t1, t2, temp;

    f32 dx = ray.directionX, dy = ray.directionY, dz = ray.directionZ;
    f32 ox = ray.originX, oy = ray.originY, oz = ray.originZ;

    // X slab
    if (std::fabs(dx) < 1e-8f) {
        if (ox < box.minX || ox > box.maxX) {
            m_result = RESULT_NONE;
            return 0;
        }
    } else {
        f32 invD = 1.0f / dx;
        t1 = (box.minX - ox) * invD;
        t2 = (box.maxX - ox) * invD;
        if (t1 > t2) { temp = t1; t1 = t2; t2 = temp; }
        if (t1 > tmin) tmin = t1;
        if (t2 < tmax) tmax = t2;
        if (tmin > tmax) { m_result = RESULT_NONE; return 0; }
    }

    // Y slab
    if (std::fabs(dy) < 1e-8f) {
        if (oy < box.minY || oy > box.maxY) {
            m_result = RESULT_NONE;
            return 0;
        }
    } else {
        f32 invD = 1.0f / dy;
        t1 = (box.minY - oy) * invD;
        t2 = (box.maxY - oy) * invD;
        if (t1 > t2) { temp = t1; t1 = t2; t2 = temp; }
        if (t1 > tmin) tmin = t1;
        if (t2 < tmax) tmax = t2;
        if (tmin > tmax) { m_result = RESULT_NONE; return 0; }
    }

    // Z slab
    if (std::fabs(dz) < 1e-8f) {
        if (oz < box.minZ || oz > box.maxZ) {
            m_result = RESULT_NONE;
            return 0;
        }
    } else {
        f32 invD = 1.0f / dz;
        t1 = (box.minZ - oz) * invD;
        t2 = (box.maxZ - oz) * invD;
        if (t1 > t2) { temp = t1; t1 = t2; t2 = temp; }
        if (t1 > tmin) tmin = t1;
        if (t2 < tmax) tmax = t2;
        if (tmin > tmax) { m_result = RESULT_NONE; return 0; }
    }

    if (tmin > 0.0f) {
        m_result = RESULT_HIT;
        m_hitDist = tmin;
        m_hitX = ox + tmin * dx;
        m_hitY = oy + tmin * dy;
        m_hitZ = oz + tmin * dz;
        return 1;
    } else if (tmax > 0.0f) {
        m_result = RESULT_INSIDE;
        return 1;
    }

    m_result = RESULT_NONE;
    return 0;
}

bool CollContext::testSphereBox(const BoundSphere3f& sphere, const BoundBox3f& box) {
    // @addr 0x80505bd8
    // Find closest point on AABB to sphere center
    f32 closestX = std::max(box.minX, std::min(sphere.centerX, box.maxX));
    f32 closestY = std::max(box.minY, std::min(sphere.centerY, box.maxY));
    f32 closestZ = std::max(box.minZ, std::min(sphere.centerZ, box.maxZ));

    f32 dx = sphere.centerX - closestX;
    f32 dy = sphere.centerY - closestY;
    f32 dz = sphere.centerZ - closestZ;
    f32 distSq = dx * dx + dy * dy + dz * dz;

    return distSq <= sphere.radius * sphere.radius;
}

u32 CollContext::testPointBox(const f32 point[3], const BoundBox3f& box) {
    // @addr 0x80505d3c
    if (point[0] < box.minX || point[0] > box.maxX)
        return 0;
    if (point[1] < box.minY || point[1] > box.maxY)
        return 0;
    if (point[2] < box.minZ || point[2] > box.maxZ)
        return 0;
    return 1;
}

// ============================================================================
// WeightSet
// ============================================================================

void WeightSet::set(u16* weights, u16* blends) {
    // @addr 0x80503044
    m_weightIndices = weights;
    m_blendIndices = blends;
}

void WeightSet::setWeights(u16* weights) {
    // @addr 0x80503188
    m_weightIndices = weights;
}

void WeightSet::get(const u16*& weights, const u16*& blends) const {
    // @addr 0x80503bf4
    weights = m_weightIndices;
    blends = m_blendIndices;
}

void WeightSet::getWeights(const u16*& weights) const {
    // @addr 0x80503ca8
    weights = m_weightIndices;
}

void WeightSet::reset() {
    // @addr 0x80503250
    m_weightIndices = nullptr;
    m_blendIndices = nullptr;
    m_count = 0;
}

void WeightSet::globalInit() { /* @addr 0x80503330 */ }

void WeightSet::allocate(u32 count) {
    // @addr 0x8050345c
    (void)count;
}

void WeightSet::deallocate() {
    // @addr 0x8050357c
    reset();
}

void WeightSet::globalReset() { /* @addr 0x80503620 */ }

// ============================================================================
// Vec3fOps
// ============================================================================

void Vec3fOps::add(f32 dst[3], const f32 a[3], const f32 b[3]) {
    // @addr 0x805005d4
    dst[0] = a[0] + b[0];
    dst[1] = a[1] + b[1];
    dst[2] = a[2] + b[2];
}

void Vec3fOps::sub(f32 dst[3], const f32 a[3], const f32 b[3]) {
    // @addr 0x80500640
    dst[0] = a[0] - b[0];
    dst[1] = a[1] - b[1];
    dst[2] = a[2] - b[2];
}

void Vec3fOps::scale(f32 dst[3], const f32 v[3], f32 s) {
    // @addr 0x80500680
    dst[0] = v[0] * s;
    dst[1] = v[1] * s;
    dst[2] = v[2] * s;
}

f32 Vec3fOps::dot(const f32 a[3], const f32 b[3]) {
    // @addr 0x80500740
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void Vec3fOps::cross(f32 dst[3], const f32 a[3], const f32 b[3]) {
    // @addr 0x80500780
    dst[0] = a[1] * b[2] - a[2] * b[1];
    dst[1] = a[2] * b[0] - a[0] * b[2];
    dst[2] = a[0] * b[1] - a[1] * b[0];
}

f32 Vec3fOps::lengthSq(const f32 v[3]) {
    // @addr 0x80500804
    return v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
}

f32 Vec3fOps::normalize(f32 dst[3], const f32 v[3]) {
    // @addr 0x8050093c
    f32 len = std::sqrt(lengthSq(v));
    if (len > 0.0f) {
        dst[0] = v[0] / len;
        dst[1] = v[1] / len;
        dst[2] = v[2] / len;
    }
    return len;
}

void Vec3fOps::lerp(f32 dst[3], const f32 a[3], const f32 b[3], f32 t) {
    // @addr 0x80500a34
    dst[0] = a[0] + t * (b[0] - a[0]);
    dst[1] = a[1] + t * (b[1] - a[1]);
    dst[2] = a[2] + t * (b[2] - a[2]);
}

void Vec3fOps::copy(f32 dst[3], const f32 src[3]) {
    // @addr 0x80500a74
    dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2];
}

void Vec3fOps::setComponent(f32 v[3], u32 axis, f32 val) {
    // @addr 0x80500b6c
    if (axis < 3) v[axis] = val;
}

void Vec3fOps::zero(f32 v[3]) {
    // @addr 0x80500c48
    v[0] = v[1] = v[2] = 0.0f;
}

void Vec3fOps::setAll(f32 v[3], f32 val) {
    // @addr 0x80500c80
    v[0] = v[1] = v[2] = val;
}

void Vec3fOps::globalInit() { /* @addr 0x80500d70 */ }

void Vec3fOps::setX(f32 v[3], f32 val) { /* @addr 0x8050e440 */ v[0] = val; }
void Vec3fOps::setY(f32 v[3], f32 val) { /* @addr 0x8050e470 */ v[1] = val; }
void Vec3fOps::setZ(f32 v[3], f32 val) { /* @addr 0x8050e4a0 */ v[2] = val; }
f32 Vec3fOps::getX(const f32 v[3]) { /* @addr 0x8050e4d0 */ return v[0]; }
f32 Vec3fOps::getY(const f32 v[3]) { /* @addr 0x8050e500 */ return v[1]; }
f32 Vec3fOps::getZ(const f32 v[3]) { /* @addr 0x8050e530 */ return v[2]; }
f32 Vec3fOps::getComponent(const f32 v[3], u32 index) {
    // @addr 0x8050e560
    return index < 3 ? v[index] : 0.0f;
}

void Vec3fOps::transformPoint(f32 dst[3], const f32 mtx[3][4], const f32 pt[3]) {
    // @addr 0x80517dcc — Translated from PSMTXMultVec
    for (s32 i = 0; i < 3; i++) {
        dst[i] = mtx[i][0] * pt[0] + mtx[i][1] * pt[1] + mtx[i][2] * pt[2] + mtx[i][3];
    }
}

void Vec3fOps::transformVector(f32 dst[3], const f32 mtx[3][4], const f32 vec[3]) {
    // @addr 0x80517dfc — Translated from PSMTXMultVecSR
    for (s32 i = 0; i < 3; i++) {
        dst[i] = mtx[i][0] * vec[0] + mtx[i][1] * vec[1] + mtx[i][2] * vec[2];
    }
}

void Vec3fOps::transformPoint44(f32 dst[3], const f32 mtx[4][4], const f32 pt[3]) {
    // @addr 0x80517e2c
    f32 w = mtx[3][0] * pt[0] + mtx[3][1] * pt[1] + mtx[3][2] * pt[2] + mtx[3][3];
    for (s32 i = 0; i < 3; i++) {
        dst[i] = (mtx[i][0] * pt[0] + mtx[i][1] * pt[1] + mtx[i][2] * pt[2] + mtx[i][3]) / w;
    }
}

void Vec3fOps::transformVector44(f32 dst[3], const f32 mtx[4][4], const f32 vec[3]) {
    // @addr 0x80517e5c
    for (s32 i = 0; i < 3; i++) {
        dst[i] = mtx[i][0] * vec[0] + mtx[i][1] * vec[1] + mtx[i][2] * vec[2];
    }
}

// ============================================================================
// QuatfOps
// ============================================================================

s32 QuatfOps::multiply(f32 dst[4], const f32 q1[4], const f32 q2[4]) {
    // @addr 0x80500540 — Translated from PSQUATMultiply
    // Convention: [w, x, y, z]
    f32 w1 = q1[0], x1 = q1[1], y1 = q1[2], z1 = q1[3];
    f32 w2 = q2[0], x2 = q2[1], y2 = q2[2], z2 = q2[3];

    dst[0] = w1*w2 - x1*x2 - y1*y2 - z1*z2;
    dst[1] = w1*x2 + x1*w2 + y1*z2 - z1*y2;
    dst[2] = w1*y2 - x1*z2 + y1*w2 + z1*x2;
    dst[3] = w1*z2 + x1*y2 - y1*x2 + z1*w2;
    return 0;
}

u32 QuatfOps::normalize(f32 dst[4], const f32 q[4]) {
    // @addr 0x80500fa8 — Translated from PSQUATNormalize
    f32 lenSq = q[0]*q[0] + q[1]*q[1] + q[2]*q[2] + q[3]*q[3];
    if (lenSq < 0.00001f) {
        dst[0] = 0.0f; dst[1] = 0.0f; dst[2] = 0.0f; dst[3] = 0.0f;
        return 0;
    }
    f32 invLen = 1.0f / std::sqrt(lenSq);
    dst[0] = q[0] * invLen;
    dst[1] = q[1] * invLen;
    dst[2] = q[2] * invLen;
    dst[3] = q[3] * invLen;
    return static_cast<u32>(lenSq);
}

s32 QuatfOps::conjugate(f32 dst[4], const f32 q[4]) {
    // @addr 0x80501428
    dst[0] = q[0]; dst[1] = -q[1]; dst[2] = -q[2]; dst[3] = -q[3];
    return 0;
}

u32 QuatfOps::dot(const f32 q1[4], const f32 q2[4]) {
    // @addr 0x805017dc — Translated from PSQUATDotProduct
    f32 d = q1[0]*q2[0] + q1[1]*q2[1] + q1[2]*q2[2] + q1[3]*q2[3];
    // Return as bit representation
    u32 result;
    std::memcpy(&result, &d, sizeof(f32));
    return result;
}

s32 QuatfOps::inverse(f32 dst[4], const f32 q[4]) {
    // @addr 0x80502a7c — Translated from PSQUATInverse
    f32 d = q[0]*q[0] + q[1]*q[1] + q[2]*q[2] + q[3]*q[3];
    if (d == 0.0f) {
        dst[0] = 1.0f; dst[1] = 0.0f; dst[2] = 0.0f; dst[3] = 0.0f;
        return 0;
    }
    f32 invD = 1.0f / d;
    // Scale = 1/d (not -1/d for conjugate; the inverse uses conjugate/sq)
    // PSQUATInverse: inv = conjugate * (1/|q|^2)
    dst[0] =  q[0] * invD;
    dst[1] = -q[1] * invD;
    dst[2] = -q[2] * invD;
    dst[3] = -q[3] * invD;
    return 0;
}

u32 QuatfOps::fromAxisAngle(f32 dst[4], f32 axisX, f32 axisY, f32 axisZ, f32 angle) {
    // @addr 0x805032bc
    f32 halfAngle = angle * 0.5f;
    f32 sinHalf = std::sin(halfAngle);
    dst[0] = std::cos(halfAngle);
    dst[1] = axisX * sinHalf;
    dst[2] = axisY * sinHalf;
    dst[3] = axisZ * sinHalf;
    return 0;
}

u32 QuatfOps::toAxisAngle(const f32 q[4], f32& axisX, f32& axisY, f32& axisZ, f32& angle) {
    // @addr 0x80503ae8
    // Extract axis-angle from quaternion [w, x, y, z]
    f32 cosHalf = q[0];
    angle = 2.0f * std::acos(std::max(-1.0f, std::min(1.0f, cosHalf)));
    f32 sinHalf = std::sin(angle * 0.5f);

    if (std::fabs(sinHalf) > 0.0001f) {
        axisX = q[1] / sinHalf;
        axisY = q[2] / sinHalf;
        axisZ = q[3] / sinHalf;
    } else {
        axisX = 0.0f;
        axisY = 0.0f;
        axisZ = 1.0f;
    }
    return 0;
}

s32 QuatfOps::slerp(f32 dst[4], const f32 q1[4], const f32 q2[4], f32 t) {
    // @addr 0x80503d9c — Translated from C_QUATSlerp
    f32 cosHalf = q1[0]*q2[0] + q1[1]*q2[1] + q1[2]*q2[2] + q1[3]*q2[3];
    f32 scale1 = 1.0f;

    // Take the shorter path
    if (cosHalf < 0.0f) {
        cosHalf = -cosHalf;
        scale1 = -1.0f;
    }

    f32 scale0;
    if (cosHalf < 0.99999f) {
        f32 halfAngle = std::acos(cosHalf);
        f32 sinHalf = std::sin(halfAngle);
        scale0 = std::sin((1.0f - t) * halfAngle) / sinHalf;
        scale1 *= std::sin(t * halfAngle) / sinHalf;
    } else {
        scale0 = 1.0f - t;
        scale1 = scale1 * t;
    }

    dst[0] = scale0 * q1[0] + scale1 * q2[0];
    dst[1] = scale0 * q1[1] + scale1 * q2[1];
    dst[2] = scale0 * q1[2] + scale1 * q2[2];
    dst[3] = scale0 * q1[3] + scale1 * q2[3];
    return 0;
}

s32 QuatfOps::lerp(f32 dst[4], const f32 q1[4], const f32 q2[4], f32 t) {
    // @addr 0x805042a4 — Translated from C_QUATLerp
    dst[0] = q1[0] + t * (q2[0] - q1[0]);
    dst[1] = q1[1] + t * (q2[1] - q1[1]);
    dst[2] = q1[2] + t * (q2[2] - q1[2]);
    dst[3] = q1[3] + t * (q2[3] - q1[3]);
    return 0;
}

void QuatfOps::identity(f32 q[4]) {
    // @addr 0x8050120c
    q[0] = 1.0f; q[1] = 0.0f; q[2] = 0.0f; q[3] = 0.0f;
}

void QuatfOps::setFromArray(f32 q[4], const f32 arr[4]) {
    // @addr 0x8050129c
    q[0] = arr[0]; q[1] = arr[1]; q[2] = arr[2]; q[3] = arr[3];
}

// ============================================================================
// Matrix34fOps
// ============================================================================

void Matrix34fOps::identity(f32 mtx[3][4]) {
    // @addr 0x80500b6c — Translated from PSMTXIdentity
    std::memset(mtx, 0, sizeof(f32) * 12);
    mtx[0][0] = 1.0f; mtx[1][1] = 1.0f; mtx[2][2] = 1.0f;
}

void Matrix34fOps::makeTranslation(f32 mtx[3][4], f32 tx, f32 ty, f32 tz) {
    // @addr 0x80500c48 — Translated from PSMTXTrans
    std::memset(mtx, 0, sizeof(f32) * 12);
    mtx[0][0] = 1.0f;
    mtx[1][1] = 1.0f;
    mtx[2][2] = 1.0f;
    mtx[0][3] = tx;
    mtx[1][3] = ty;
    mtx[2][3] = tz;
}

void Matrix34fOps::makeScale(f32 mtx[3][4], f32 sx, f32 sy, f32 sz) {
    // @addr 0x80500c80 — Translated from PSMTXScale
    std::memset(mtx, 0, sizeof(f32) * 12);
    mtx[0][0] = sx;
    mtx[1][1] = sy;
    mtx[2][2] = sz;
}

void Matrix34fOps::makeRotationX(f32 mtx[3][4], f32 angle) {
    // @addr 0x80500a34 — Translated from PSMTXRotRad with axis='x'
    identity(mtx);
    f32 c = std::cos(angle), s = std::sin(angle);
    mtx[1][1] = c;  mtx[1][2] = -s;
    mtx[2][1] = s;  mtx[2][2] = c;
}

void Matrix34fOps::makeRotationY(f32 mtx[3][4], f32 angle) {
    // @addr 0x80500a74 — Translated from PSMTXRotRad with axis='y'
    identity(mtx);
    f32 c = std::cos(angle), s = std::sin(angle);
    mtx[0][0] = c;  mtx[0][2] = s;
    mtx[2][0] = -s; mtx[2][2] = c;
}

void Matrix34fOps::makeRotationZ(f32 mtx[3][4], f32 angle) {
    // @addr 0x80500a6f4 — Translated from PSMTXRotRad with axis='z'
    identity(mtx);
    f32 c = std::cos(angle), s = std::sin(angle);
    mtx[0][0] = c;  mtx[0][1] = -s;
    mtx[1][0] = s;  mtx[1][1] = c;
}

void Matrix34fOps::multiply(f32 dst[3][4], const f32 a[3][4], const f32 b[3][4]) {
    // @addr 0x80500ad4c — Translated from PSMTXConcat
    for (s32 i = 0; i < 3; i++) {
        for (s32 j = 0; j < 4; j++) {
            dst[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
            if (j == 3) dst[i][j] += a[i][3];
        }
    }
}

void Matrix34fOps::multiply34x44(f32 dst[3][4], const f32 a[3][4], const f32 b[4][4]) {
    // @addr 0x80500b2a4
    for (s32 i = 0; i < 3; i++) {
        for (s32 j = 0; j < 4; j++) {
            dst[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
            if (j == 3) dst[i][j] += a[i][3];
        }
    }
}

void Matrix34fOps::setRow(f32 mtx[3][4], u32 row, f32 x, f32 y, f32 z, f32 w) {
    // @addr 0x8050ab8c
    if (row < 3) { mtx[row][0] = x; mtx[row][1] = y; mtx[row][2] = z; mtx[row][3] = w; }
}

void Matrix34fOps::setColumn(f32 mtx[3][4], u32 col, f32 x, f32 y, f32 z) {
    // @addr 0x8050abbc
    if (col < 4) { mtx[0][col] = x; mtx[1][col] = y; mtx[2][col] = z; }
}

void Matrix34fOps::setEntry(f32 mtx[3][4], u32 row, u32 col, f32 val) {
    // @addr 0x8050abec
    if (row < 3 && col < 4) mtx[row][col] = val;
}

f32 Matrix34fOps::getEntry(const f32 mtx[3][4], u32 row, u32 col) {
    // @addr 0x8050ac1c
    if (row < 3 && col < 4) return mtx[row][col];
    return 0.0f;
}

void Matrix34fOps::getRow(const f32 mtx[3][4], u32 row, f32& x, f32& y, f32& z, f32& w) {
    // @addr 0x8050ac4c
    if (row < 3) { x = mtx[row][0]; y = mtx[row][1]; z = mtx[row][2]; w = mtx[row][3]; }
}

void Matrix34fOps::getColumn(const f32 mtx[3][4], u32 col, f32& x, f32& y, f32& z) {
    // @addr 0x8050ac7c
    if (col < 4) { x = mtx[0][col]; y = mtx[1][col]; z = mtx[2][col]; }
}

void Matrix34fOps::copy(f32 dst[3][4], const f32 src[3][4]) {
    // @addr 0x8050acac — Translated from PSMTXCopy
    for (s32 i = 0; i < 3; i++)
        for (s32 j = 0; j < 4; j++)
            dst[i][j] = src[i][j];
}

void Matrix34fOps::transformPoint(f32 dst[3], const f32 mtx[3][4], const f32 pt[3]) {
    // @addr 0x8050bd68 — Translated from PSMTXMultVec
    for (s32 i = 0; i < 3; i++)
        dst[i] = mtx[i][0] * pt[0] + mtx[i][1] * pt[1] + mtx[i][2] * pt[2] + mtx[i][3];
}

void Matrix34fOps::transformVector(f32 dst[3], const f32 mtx[3][4], const f32 vec[3]) {
    // @addr 0x8050bdd4 — Translated from PSMTXMultVecSR
    for (s32 i = 0; i < 3; i++)
        dst[i] = mtx[i][0] * vec[0] + mtx[i][1] * vec[1] + mtx[i][2] * vec[2];
}

void Matrix34fOps::makePerspective(f32 mtx[4][4], f32 fovY, f32 aspect, f32 nearZ, f32 farZ) {
    // @addr 0x8050bef0 — Translated from C_MTXPerspective in rvlMtx2.c
    f32 angle = fovY * 0.5f * 0.01745329252f; // deg to rad
    f32 cot = 1.0f / std::tan(angle);

    std::memset(mtx, 0, sizeof(f32) * 16);
    mtx[0][0] = cot / aspect;
    mtx[1][1] = cot;
    f32 tmp = 1.0f / (farZ - nearZ);
    mtx[2][2] = -(nearZ) * tmp;
    mtx[2][3] = -(farZ * nearZ) * tmp;
    mtx[3][2] = -1.0f;
}

void Matrix34fOps::makePerspectiveF64(f32 mtx[4][4], f64 fovY, f64 aspect, f64 nearZ, f64 farZ) {
    // @addr 0x8050bfc8 — f64 variant of C_MTXPerspective
    f64 angle = fovY * 0.5 * 0.017453292519943295;
    f64 cot = 1.0 / std::tan(angle);

    std::memset(mtx, 0, sizeof(f32) * 16);
    mtx[0][0] = static_cast<f32>(cot / aspect);
    mtx[1][1] = static_cast<f32>(cot);
    f64 tmp = 1.0 / (farZ - nearZ);
    mtx[2][2] = static_cast<f32>(-(nearZ) * tmp);
    mtx[2][3] = static_cast<f32>(-(farZ * nearZ) * tmp);
    mtx[3][2] = -1.0f;
}

void Matrix34fOps::makeOrthographic(f32 mtx[4][4], f32 left, f32 right, f32 bottom, f32 top, f32 nearZ, f32 farZ) {
    // @addr 0x8050bc00 — Translated from C_MTXOrtho in rvlMtx2.c
    f32 tmp;
    std::memset(mtx, 0, sizeof(f32) * 16);
    tmp = 1.0f / (right - left);
    mtx[0][0] = 2.0f * tmp;
    mtx[0][3] = -(right + left) * tmp;
    tmp = 1.0f / (top - bottom);
    mtx[1][1] = 2.0f * tmp;
    mtx[1][3] = -(top + bottom) * tmp;
    tmp = 1.0f / (farZ - nearZ);
    mtx[2][2] = -(1.0f) * tmp;
    mtx[2][3] = -(farZ) * tmp;
    mtx[3][3] = 1.0f;
}

void Matrix34fOps::makeLookAt(f32 mtx[3][4], const f32 eye[3], const f32 target[3], const f32 up[3]) {
    // @addr 0x8050bc84 — Translated from C_MTXLookAt in rvlMtx.c
    f32 forward[3], right[3], up2[3];

    // forward = normalize(eye - target)
    forward[0] = eye[0] - target[0];
    forward[1] = eye[1] - target[1];
    forward[2] = eye[2] - target[2];
    Vec3fOps::normalize(forward, forward);

    // right = normalize(cross(up, forward))
    Vec3fOps::cross(right, up, forward);
    Vec3fOps::normalize(right, right);

    // up2 = cross(forward, right)
    Vec3fOps::cross(up2, forward, right);

    mtx[0][0] = right[0];  mtx[0][1] = right[1];  mtx[0][2] = right[2];
    mtx[0][3] = -(eye[0] * right[0] + eye[1] * right[1] + eye[2] * right[2]);

    mtx[1][0] = up2[0];    mtx[1][1] = up2[1];    mtx[1][2] = up2[2];
    mtx[1][3] = -(eye[0] * up2[0] + eye[1] * up2[1] + eye[2] * up2[2]);

    mtx[2][0] = forward[0]; mtx[2][1] = forward[1]; mtx[2][2] = forward[2];
    mtx[2][3] = -(eye[0] * forward[0] + eye[1] * forward[1] + eye[2] * forward[2]);
}

s32 Matrix34fOps::inverse3x3(f32 dst[3][4], const f32 src[3][4]) {
    // @addr 0x8050b99c — Translated from PSMTXInvXpose in rvlMtx.c
    // Computes inverse-transpose of the 3x3 rotation part, with
    // corrected translation column. Effectively the inverse of the
    // 3x4 affine matrix for orthogonal rotations.
    const f32* m = &src[0][0];

    // Cofactors of the 3x3 part
    f32 c00 = m[1*4+1] * m[2*4+2] - m[1*4+2] * m[2*4+1];
    f32 c01 = m[1*4+2] * m[2*4+0] - m[1*4+0] * m[2*4+2];
    f32 c02 = m[1*4+0] * m[2*4+1] - m[1*4+1] * m[2*4+0];

    f32 det = m[0*4+0] * c00 + m[0*4+1] * c01 + m[0*4+2] * c02;

    if (det == 0.0f)
        return 0;

    f32 invDet = 1.0f / det;

    // Inverse-transpose: rows of result = columns of cofactor matrix * invDet
    // Row 0
    dst[0][0] = c00 * invDet;
    dst[0][1] = (m[0*4+2] * m[2*4+1] - m[0*4+1] * m[2*4+2]) * invDet;
    dst[0][2] = (m[0*4+1] * m[1*4+2] - m[0*4+2] * m[1*4+1]) * invDet;
    dst[0][3] = 0.0f;

    // Row 1
    dst[1][0] = (m[0*4+2] * m[2*4+0] - m[0*4+0] * m[2*4+2]) * invDet;
    dst[1][1] = (m[0*4+0] * m[2*4+2] - m[0*4+2] * m[2*4+0]) * invDet;
    // Wait, I need to be more careful. Let me redo this.
    // The adjugate (cofactor transpose):
    // adj[0][0] = C[0][0], adj[0][1] = C[1][0], adj[0][2] = C[2][0]
    // adj[1][0] = C[0][1], adj[1][1] = C[1][1], adj[1][2] = C[2][1]
    // adj[2][0] = C[0][2], adj[2][1] = C[1][2], adj[2][2] = C[2][2]
    //
    // For PSMTXInvXpose, it returns the inverse-transpose of the 3x3:
    // (R^-1)^T = adj(R) / det
    // But for the full 3x4 inverse, we need R^-1 and then -R^-1 * t
    // Since inverse3x3 is about the 3x3 rotation inverse (not inverse-transpose),
    // let me compute R^-1 properly.

    // Actually, looking at the PSMTXInvXpose more carefully, it stores the
    // transposed cofactors. This is the normal matrix used for transforming
    // normals. But for our inverse3x3 function, we want the actual inverse.
    // Let me compute it properly.

    // R^-1 = adj(R) / det = C^T / det
    // Cofactor matrix C:
    f32 C[3][3];
    C[0][0] = m[1*4+1]*m[2*4+2] - m[1*4+2]*m[2*4+1];
    C[0][1] = m[0*4+2]*m[2*4+1] - m[0*4+1]*m[2*4+2];
    C[0][2] = m[0*4+1]*m[1*4+2] - m[0*4+2]*m[1*4+1];
    C[1][0] = m[1*4+2]*m[2*4+0] - m[1*4+0]*m[2*4+2];
    C[1][1] = m[0*4+0]*m[2*4+2] - m[0*4+2]*m[2*4+0];
    C[1][2] = m[0*4+2]*m[1*4+0] - m[0*4+0]*m[1*4+2];
    C[2][0] = m[1*4+0]*m[2*4+1] - m[1*4+1]*m[2*4+0];
    C[2][1] = m[0*4+1]*m[2*4+0] - m[0*4+0]*m[2*4+1];
    C[2][2] = m[0*4+0]*m[1*4+1] - m[0*4+1]*m[1*4+0];

    // adj(R) = C^T: adj[i][j] = C[j][i]
    // R^-1 = adj(R) / det
    dst[0][0] = C[0][0] * invDet;
    dst[0][1] = C[1][0] * invDet;
    dst[0][2] = C[2][0] * invDet;
    dst[0][3] = 0.0f;

    dst[1][0] = C[0][1] * invDet;
    dst[1][1] = C[1][1] * invDet;
    dst[1][2] = C[2][1] * invDet;
    dst[1][3] = 0.0f;

    dst[2][0] = C[0][2] * invDet;
    dst[2][1] = C[1][2] * invDet;
    dst[2][2] = C[2][2] * invDet;
    dst[2][3] = 0.0f;

    return 1;
}

s32 Matrix34fOps::inverse(f32 dst[3][4], const f32 src[3][4]) {
    // @addr 0x8050bd00 — Translated from PSMTXInverse in rvlMtx.c
    const f32* m = &src[0][0];

    // Compute cofactors of the 3x3 part
    f32 C[3][3];
    C[0][0] = m[1*4+1]*m[2*4+2] - m[1*4+2]*m[2*4+1];
    C[0][1] = m[0*4+2]*m[2*4+1] - m[0*4+1]*m[2*4+2];
    C[0][2] = m[0*4+1]*m[1*4+2] - m[0*4+2]*m[1*4+1];
    C[1][0] = m[1*4+2]*m[2*4+0] - m[1*4+0]*m[2*4+2];
    C[1][1] = m[0*4+0]*m[2*4+2] - m[0*4+2]*m[2*4+0];
    C[1][2] = m[0*4+2]*m[1*4+0] - m[0*4+0]*m[1*4+2];
    C[2][0] = m[1*4+0]*m[2*4+1] - m[1*4+1]*m[2*4+0];
    C[2][1] = m[0*4+1]*m[2*4+0] - m[0*4+0]*m[2*4+1];
    C[2][2] = m[0*4+0]*m[1*4+1] - m[0*4+1]*m[1*4+0];

    f32 det = m[0*4+0]*C[0][0] + m[0*4+1]*C[1][0] + m[0*4+2]*C[2][0];

    if (det == 0.0f)
        return 0;

    f32 invDet = 1.0f / det;

    // R^-1 = C^T / det (adjugate / determinant)
    dst[0][0] = C[0][0] * invDet;
    dst[0][1] = C[1][0] * invDet;
    dst[0][2] = C[2][0] * invDet;
    dst[1][0] = C[0][1] * invDet;
    dst[1][1] = C[1][1] * invDet;
    dst[1][2] = C[2][1] * invDet;
    dst[2][0] = C[0][2] * invDet;
    dst[2][1] = C[1][2] * invDet;
    dst[2][2] = C[2][2] * invDet;

    // Translation: -R^-1 * t
    dst[0][3] = -(dst[0][0]*m[0*4+3] + dst[0][1]*m[1*4+3] + dst[0][2]*m[2*4+3]);
    dst[1][3] = -(dst[1][0]*m[0*4+3] + dst[1][1]*m[1*4+3] + dst[1][2]*m[2*4+3]);
    dst[2][3] = -(dst[2][0]*m[0*4+3] + dst[2][1]*m[1*4+3] + dst[2][2]*m[2*4+3]);

    return 1;
}

s32 Matrix34fOps::transpose(f32 dst[4][3], const f32 src[3][4]) {
    // @addr 0x8050c088
    for (s32 i = 0; i < 3; i++)
        for (s32 j = 0; j < 4; j++)
            dst[j][i] = src[i][j];
    return 0;
}

s32 Matrix34fOps::decompose(const f32 mtx[3][4], f32 pos[3], f32 rot[4], f32 scale[3]) {
    // @addr 0x8050c5dc
    // Extract translation
    pos[0] = mtx[0][3];
    pos[1] = mtx[1][3];
    pos[2] = mtx[2][3];

    // Extract scale from column lengths
    scale[0] = std::sqrt(mtx[0][0]*mtx[0][0] + mtx[1][0]*mtx[1][0] + mtx[2][0]*mtx[2][0]);
    scale[1] = std::sqrt(mtx[0][1]*mtx[0][1] + mtx[1][1]*mtx[1][1] + mtx[2][1]*mtx[2][1]);
    scale[2] = std::sqrt(mtx[0][2]*mtx[0][2] + mtx[1][2]*mtx[1][2] + mtx[2][2]*mtx[2][2]);

    // Build rotation matrix (remove scale)
    f32 rotMtx[3][4];
    std::memset(rotMtx, 0, sizeof(rotMtx));
    for (s32 i = 0; i < 3; i++)
        for (s32 j = 0; j < 3; j++)
            rotMtx[i][j] = mtx[i][j] / (scale[j] > 0.0f ? scale[j] : 1.0f);

    // Extract quaternion from rotation matrix
    toQuat(rotMtx, rot);

    return 0;
}

s32 Matrix34fOps::compose(f32 mtx[3][4], const f32 pos[3], const f32 rot[4], const f32 scale[3]) {
    // @addr 0x8050cefc
    // Build rotation matrix from quaternion
    f32 rotMtx[3][4];
    fromQuat(rotMtx, rot);

    // Apply scale to rotation columns
    for (s32 i = 0; i < 3; i++) {
        mtx[i][0] = rotMtx[i][0] * scale[0];
        mtx[i][1] = rotMtx[i][1] * scale[1];
        mtx[i][2] = rotMtx[i][2] * scale[2];
    }

    // Set translation
    mtx[0][3] = pos[0];
    mtx[1][3] = pos[1];
    mtx[2][3] = pos[2];

    return 0;
}

s32 Matrix34fOps::computeInertiaTensor(f32 dst[3][4], f32 mass, f32 ix, f32 iy, f32 iz) {
    // @addr 0x8050d764
    (void)dst; (void)mass; (void)ix; (void)iy; (void)iz;
    return 0;
}

s32 Matrix34fOps::fromQuat(f32 mtx[3][4], const f32 q[4]) {
    // @addr 0x8050e614 — Translated from PSMTXQuat in rvlMtx.c
    // Input: q = [w, x, y, z] in our convention
    // Normalize quaternion first
    f32 lenSq = q[0]*q[0] + q[1]*q[1] + q[2]*q[2] + q[3]*q[3];
    f32 nq[4];
    if (lenSq > 0.0f) {
        f32 invLen = 1.0f / std::sqrt(lenSq);
        nq[0] = q[0] * invLen; // w
        nq[1] = q[1] * invLen; // x
        nq[2] = q[2] * invLen; // y
        nq[3] = q[3] * invLen; // z
    } else {
        nq[0] = 1.0f; nq[1] = 0.0f; nq[2] = 0.0f; nq[3] = 0.0f;
    }

    f32 w = nq[0], x = nq[1], y = nq[2], z = nq[3];

    // Rotation matrix from quaternion
    mtx[0][0] = 1.0f - 2.0f*(y*y + z*z);
    mtx[0][1] = 2.0f*(x*y - w*z);
    mtx[0][2] = 2.0f*(x*z + w*y);
    mtx[0][3] = 0.0f;

    mtx[1][0] = 2.0f*(x*y + w*z);
    mtx[1][1] = 1.0f - 2.0f*(x*x + z*z);
    mtx[1][2] = 2.0f*(y*z - w*x);
    mtx[1][3] = 0.0f;

    mtx[2][0] = 2.0f*(x*z - w*y);
    mtx[2][1] = 2.0f*(y*z + w*x);
    mtx[2][2] = 1.0f - 2.0f*(x*x + y*y);
    mtx[2][3] = 0.0f;

    return 0;
}

s32 Matrix34fOps::toQuat(const f32 mtx[3][4], f32 q[4]) {
    // @addr 0x8050e930 — Translated from C_QUATMtx in rvlQuat.c
    // Output: q = [w, x, y, z]
    f32 trace = mtx[0][0] + mtx[1][1] + mtx[2][2];
    f32 vec[3];

    if (trace > 0.0f) {
        f32 s = std::sqrt(trace + 1.0f);
        q[0] = s * 0.5f; // w
        s = 0.5f / s;
        q[1] = (mtx[2][1] - mtx[1][2]) * s; // x
        q[2] = (mtx[0][2] - mtx[2][0]) * s; // y
        q[3] = (mtx[1][0] - mtx[0][1]) * s; // z
    } else {
        s32 i = 0;
        if (mtx[1][1] > mtx[0][0]) i = 1;
        if (mtx[2][2] > mtx[i][i]) i = 2;
        s32 j = (i == 0) ? 1 : 0;
        s32 k = (i == 2) ? 1 : 2;

        f32 s = std::sqrt((mtx[i][i] - (mtx[j][j] + mtx[k][k])) + 1.0f);
        vec[i] = s * 0.5f;
        if (s != 0.0f)
            s = 0.5f / s;
        q[0] = (mtx[k][j] - mtx[j][k]) * s; // w
        vec[j] = (mtx[i][j] + mtx[j][i]) * s;
        vec[k] = (mtx[i][k] + mtx[k][i]) * s;
        q[1] = vec[0]; // x
        q[2] = vec[1]; // y
        q[3] = vec[2]; // z
    }

    // Normalize
    f32 len = std::sqrt(q[0]*q[0] + q[1]*q[1] + q[2]*q[2] + q[3]*q[3]);
    if (len > 0.0f) {
        q[0] /= len; q[1] /= len; q[2] /= len; q[3] /= len;
    }

    return 0;
}

s32 Matrix34fOps::multiplyVariant(f32 dst[3][4], const f32 a[3][4], const f32 b[3][4]) {
    // @addr 0x8050eda0
    multiply(dst, a, b);
    return 0;
}

s32 Matrix34fOps::transformBounds(f32 dst[6], const f32 mtx[3][4], const f32 src[6]) {
    // @addr 0x8050f820
    // Transform AABB by matrix. src = {minX, minY, minZ, maxX, maxY, maxZ}
    // dst = same format
    f32 corners[8][3] = {
        {src[0], src[1], src[2]}, {src[3], src[1], src[2]},
        {src[0], src[4], src[2]}, {src[3], src[4], src[2]},
        {src[0], src[1], src[5]}, {src[3], src[1], src[5]},
        {src[0], src[4], src[5]}, {src[3], src[4], src[5]},
    };

    f32 transformed[8][3];
    for (s32 i = 0; i < 8; i++)
        Vec3fOps::transformPoint(transformed[i], mtx, corners[i]);

    dst[0] = dst[1] = dst[2] = 1e30f;
    dst[3] = dst[4] = dst[5] = -1e30f;
    for (s32 i = 0; i < 8; i++) {
        for (s32 j = 0; j < 3; j++) {
            if (transformed[i][j] < dst[j]) dst[j] = transformed[i][j];
            if (transformed[i][j] > dst[j + 3]) dst[j + 3] = transformed[i][j];
        }
    }

    return 0;
}

s32 Matrix34fOps::equals(const f32 a[3][4], const f32 b[3][4]) {
    // @addr 0x8050ff40
    for (s32 i = 0; i < 3; i++)
        for (s32 j = 0; j < 4; j++)
            if (a[i][j] != b[i][j])
                return 0;
    return 1;
}

s32 Matrix34fOps::extractRotation(f32 rot[4], const f32 mtx[3][4]) {
    // @addr 0x805107a8
    return toQuat(mtx, rot);
}

s32 Matrix34fOps::extractScale(f32 scale[3], const f32 mtx[3][4]) {
    // @addr 0x805109fc
    scale[0] = std::sqrt(mtx[0][0]*mtx[0][0] + mtx[1][0]*mtx[1][0] + mtx[2][0]*mtx[2][0]);
    scale[1] = std::sqrt(mtx[0][1]*mtx[0][1] + mtx[1][1]*mtx[1][1] + mtx[2][1]*mtx[2][1]);
    scale[2] = std::sqrt(mtx[0][2]*mtx[0][2] + mtx[1][2]*mtx[1][2] + mtx[2][2]*mtx[2][2]);
    return 0;
}

// ============================================================================
// Globals
// ============================================================================

u32 Globals::getMathState() {
    // @addr 0x80511880
    return 0;
}

u32 Globals::queryMathState(s32 param) {
    // @addr 0x805118cc
    (void)param;
    return 0;
}

u32 Globals::getMatrixState() {
    // @addr 0x8051196c
    return 0;
}

s32 Globals::setGlobalParam(s32 paramId, u32 value1, u32 value2) {
    // @addr 0x80511b68
    (void)paramId; (void)value1; (void)value2;
    return 0;
}

u32 Globals::queryGlobal(s32 param) {
    // @addr 0x80512a30
    (void)param;
    return 0;
}

u32 Globals::getGlobalFrustum() {
    // @addr 0x80514c74
    return 0;
}

u32 Globals::queryFrustumPlane(u32 planeIndex, u8 component) {
    // @addr 0x80514f20
    (void)planeIndex; (void)component;
    return 0;
}

u32 Globals::queryFrustumSphere(u32 sphereIndex, u8 component) {
    // @addr 0x80514ff4
    (void)sphereIndex; (void)component;
    return 0;
}

u32 Globals::getCameraCount() {
    // @addr 0x80515f24
    return 0;
}

} // namespace Scene3D
} // namespace EGG