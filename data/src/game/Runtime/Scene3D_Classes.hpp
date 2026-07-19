#pragma once
// ============================================================================
// Scene3D_Classes.hpp — EGG 3D Scene Math Class Hierarchy
// Address range: 0x80500000 - 0x80520000
// Function count: 458
//
// Discovered class hierarchy (EGG Framework — Scene3D subsystem):
//
// POD math types (no vtable):
//   Vec2f           — 2-component float vector (0x08 bytes)
//   TexCoord        — UV texture coordinate (0x08 bytes)
//   Color4f         — RGBA float color (0x10 bytes)
//   BoundBox3f     — Axis-aligned bounding box (0x18 bytes)
//   BoundSphere3f  — Bounding sphere (0x10 bytes)
//   Ray3f           — 3D ray for intersection (0x18 bytes)
//   Plane3f         — 3D plane (0x10 bytes)
//   WeightSet       — Vertex skinning weight data (0x0C bytes)
//
// Classes (with methods and/or vtable):
//   Coord3D         — 3D coordinate/transform node (0x40 bytes)
//   Frustum         — View frustum with 6 planes (0x60 bytes)
//   NijiCamera      — Camera with projection settings (~0x1A0 bytes)
//   NijiTransform   — Scene graph 3D transform (~0x60 bytes)
//   CollContext     — Collision/intersection test context (~0x20 bytes)
//
// Free-function namespaces:
//   Vec3fOps        — Vector3f static operations (dot, cross, normalize, etc.)
//   QuatfOps        — Quaternion static operations (multiply, slerp, etc.)
//   Matrix34fOps    — Matrix34f static operations (multiply, inverse, etc.)
//
// Categorization: GENESIS Phase 8 (Runtime Module — Scene3D Class Extraction)
// ============================================================================
// NOTE: EGG::Vector3f, EGG::Quatf, EGG::Matrix34f, EGG::Matrix44f are
// already defined as templates in EGG/math.h. This file defines additional
// types and the classes that use them. The 458 functions in the Scene3D range
// include both free-function implementations of the template math operations
// and methods on the classes defined below.
// ============================================================================

#include "rk_types.h"
#include <cstring>

// Forward declarations of EGG math templates (defined in EGG/math.h)
namespace EGG {
    template<typename T> class Vector3;
    template<typename T> class Quat;
    template<typename T> class Matrix34;
    template<typename T> class Matrix44;

    typedef Vector3<f32> Vector3f;
    typedef Quat<f32> Quatf;
    typedef Matrix34<f32> Matrix34f;
    typedef Matrix44<f32> Matrix44f;
}

namespace EGG {
namespace Scene3D {

// ============================================================================
// Vec2f — 2-component float vector
//
// POD type used for 2D coordinates, screen-space positions, and UV data.
// Stored as two contiguous floats.
//
// Size: 0x08 bytes
// ============================================================================
struct Vec2f {
    f32 x; // 0x00
    f32 y; // 0x04

    Vec2f() : x(0.0f), y(0.0f) {}
    Vec2f(f32 _x, f32 _y) : x(_x), y(_y) {}

    static const Vec2f zero;
};

// ============================================================================
// TexCoord — UV texture coordinate pair
//
// POD type for texture mapping coordinates. Semantically distinct from Vec2f
// to indicate this is a UV pair rather than a 2D position.
//
// Size: 0x08 bytes
// ============================================================================
struct TexCoord {
    f32 u; // 0x00
    f32 v; // 0x04

    TexCoord() : u(0.0f), v(0.0f) {}
    TexCoord(f32 _u, f32 _v) : u(_u), v(_v) {}
};

// ============================================================================
// Color4f — RGBA color stored as 4 floats
//
// Used for material colors, light colors, and vertex colors in the
// Scene3D subsystem.
//
// Size: 0x10 bytes
// ============================================================================
struct Color4f {
    f32 r; // 0x00
    f32 g; // 0x04
    f32 b; // 0x08
    f32 a; // 0x0C

    Color4f() : r(0.0f), g(0.0f), b(0.0f), a(0.0f) {}
    Color4f(f32 _r, f32 _g, f32 _b, f32 _a)
        : r(_r), g(_g), b(_b), a(_a) {}

    // @addr 0x8051db3c — Set color components from packed values
    void set(u32 packed, u8 rIdx, u8 gIdx, u8 bIdx, u8 aIdx);

    // @addr 0x8051f96c — Blend two colors with index pair lookup
    void blend(const Color4f& other, u8 idxA, u8 idxB, const u32* lut);

    static const Color4f white;
    static const Color4f black;
};

// ============================================================================
// BoundBox3f — Axis-Aligned Bounding Box (AABB)
//
// Defines an axis-aligned bounding volume using min/max corner points.
// Used extensively for culling and broad-phase collision detection.
//
// Size: 0x18 bytes
//
// Key address clusters:
//   0x8050465c — Set minimum extent on one axis
//   0x80504740 — Reset bounds to initial state
//   0x80504928 — Set bounds from array of floats
//   0x80504a0c — Merge another box into this one
//   0x80504c10 — Transform bounds by a matrix
//   0x80504cf0 — Global reset
// ============================================================================
struct BoundBox3f {
    f32 minX; // 0x00
    f32 minY; // 0x04
    f32 minZ; // 0x08
    f32 maxX; // 0x0C
    f32 maxY; // 0x10
    f32 maxZ; // 0x14

    static const u32 SIZE = 0x18;

    BoundBox3f() { reset(); }

    // @addr 0x8050465c — Set extent on a specific axis
    void setAxis(u32 axis, f32 minVal, f32 maxVal);

    // @addr 0x80504740 — Reset to empty/initial state
    void reset();

    // @addr 0x80504928 — Set from flat array of 6 floats
    void setFromArray(const f32* data, u32 count);

    // @addr 0x80504a0c — Merge another bounding box into this one (union)
    void merge(const BoundBox3f& other);

    // @addr 0x80504c10 — Transform this box by a 3x4 matrix
    void transformByMatrix(const f32 mtx[3][4], u32 flags);

    // @addr 0x80504cf0 — Static: global AABB reset
    static void resetGlobal();

    // Utility
    f32 getCenterX() const { return (minX + maxX) * 0.5f; }
    f32 getCenterY() const { return (minY + maxY) * 0.5f; }
    f32 getCenterZ() const { return (minZ + maxZ) * 0.5f; }
};

// ============================================================================
// BoundSphere3f — Bounding Sphere
//
// Defines a bounding volume using a center point and radius.
// Used for frustum culling and broad-phase collision.
//
// Size: 0x10 bytes
//
// Key address clusters:
//   0x80502314 — Set radius
//   0x80502444 — Set center component
//   0x80502578 — Set center and radius from matrix
//   0x805027e4 — Set center from vector
//   0x80502910 — Set full sphere from point and radius
//   0x80502b98 — Reset
//   0x80502c30 — Get radius squared
//   0x80502e1c — Merge another sphere
//   0x80502fe0 — Transform by matrix
// ============================================================================
struct BoundSphere3f {
    f32 centerX; // 0x00
    f32 centerY; // 0x04
    f32 centerZ; // 0x08
    f32 radius;  // 0x0C

    static const u32 SIZE = 0x10;

    BoundSphere3f() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x80502314 — Set radius value
    void setRadius(f32 r);

    // @addr 0x80502444 — Set one component of the center
    void setCenterComponent(u32 axis, f32 val);

    // @addr 0x80502578 — Set center and radius from matrix transform
    void setFromMatrix(const f32 mtx[3][4], s32 radiusScale);

    // @addr 0x805027e4 — Set center from a 3D vector
    void setCenter(const f32 vec[3]);

    // @addr 0x80502910 — Set full sphere definition
    void set(const f32 pos[3], f32 r);

    // @addr 0x80502b98 — Reset to zero
    void reset();

    // @addr 0x80502c30 — Get radius squared
    f32 getRadiusSq() const;

    // @addr 0x80502e1c — Merge another sphere into this one
    void merge(const BoundSphere3f& other);

    // @addr 0x80502fe0 — Transform sphere by a matrix
    void transformByMatrix(const f32 mtx[3][4], u32 flags);
};

// ============================================================================
// Ray3f — 3D Ray for intersection testing
//
// Defines a ray with an origin point and a direction vector.
// Used for ray-box, ray-sphere, and ray-plane intersection tests.
//
// Size: 0x18 bytes
//
// Key addresses:
//   0x805055a8 — Set ray from point and direction
//   0x80505640 — Set ray direction from two points
//   0x80505670 — Set ray from end-points
//   0x80505b20 — Normalize direction
//   0x80505c10 — Set from packed float data
// ============================================================================
struct Ray3f {
    f32 originX;    // 0x00
    f32 originY;    // 0x04
    f32 originZ;    // 0x08
    f32 directionX; // 0x0C
    f32 directionY; // 0x10
    f32 directionZ; // 0x14

    static const u32 SIZE = 0x18;

    Ray3f() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x805055a8 — Set ray from origin and direction vectors
    void set(const f32 origin[3], const f32 dir[3]);

    // @addr 0x80505640 — Set direction from two points (end - start)
    void setDirectionFromPoints(const f32 start[3], const f32 end[3]);

    // @addr 0x80505670 — Set ray from start and end points
    void setFromPoints(const f32 start[3], const f32 end[3]);

    // @addr 0x80505b20 — Normalize the direction vector
    void normalizeDirection();

    // @addr 0x80505c10 — Set from packed float array
    void setFromPacked(const u32* packed);
};

// ============================================================================
// Plane3f — 3D Plane
//
// Defines a plane using a normal vector and a distance from the origin.
// Stored as (nx, ny, nz, d) where the plane equation is:
//   nx*x + ny*y + nz*z + d = 0
//
// Used by the Frustum class and for general plane math.
//
// Size: 0x10 bytes
//
// Key addresses:
//   0x805057c0 — Set from normal and distance
//   0x8050586c — Normalize the plane
//   0x80505ae8 — Set from three points
//   0x80505b7c — Compute distance to a point
// ============================================================================
struct Plane3f {
    f32 nx; // 0x00
    f32 ny; // 0x04
    f32 nz; // 0x08
    f32 d;  // 0x0C

    static const u32 SIZE = 0x10;

    Plane3f() : nx(0.0f), ny(0.0f), nz(1.0f), d(0.0f) {}

    // @addr 0x805057c0 — Set from normal and distance
    void set(f32 normalX, f32 normalY, f32 normalZ, f32 dist);

    // @addr 0x8050586c — Normalize the plane
    void normalize();

    // @addr 0x80505ae8 — Set from three points on the plane
    void setFromThreePoints(const f32 p0[3], const f32 p1[3], const f32 p2[3]);

    // @addr 0x80505b7c — Signed distance from point to plane
    f32 distanceToPoint(const f32 point[3]) const;

    // Dot product of plane with point
    f32 dotPoint(const f32 point[3]) const {
        return nx * point[0] + ny * point[1] + nz * point[2] + d;
    }
};

// ============================================================================
// Frustum — View Frustum for culling
//
// Represents a view frustum as 6 planes (left, right, top, bottom, near, far).
// Used for visibility culling of scene objects.
//
// Size: 0x60 bytes (6 x Plane3f)
//
// Key address clusters:
//   0x80514620-0x80514e20 — 8 no-arg init/reset functions
//   0x80514f20 — Test point against frustum
//   0x80514ff4 — Test sphere against frustum
//   0x805150e0-0x80515494 — Per-plane operations
//   0x805155e4 — Extract frustum from view-projection matrix
//   0x805156bc-0x8051572c — Individual plane setters
//   0x80515808 — Full setup from 4 parameters
//   0x80515e58 — Set from packed data
//   0x80515fcc — Global frustum reset
// ============================================================================
struct Frustum {
    Plane3f planes[6]; // 0x00-0x5C

    static const u32 SIZE = 0x60;

    enum PlaneIndex {
        PLANE_LEFT   = 0,
        PLANE_RIGHT  = 1,
        PLANE_TOP    = 2,
        PLANE_BOTTOM = 3,
        PLANE_NEAR   = 4,
        PLANE_FAR    = 5,
        PLANE_COUNT  = 6,
    };

    enum TestResult {
        OUTSIDE   = 0,
        INTERSECT = 1,
        INSIDE    = 2,
    };

    Frustum() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x80514620 — Static: global frustum init (plane 0)
    static void globalInit_0();
    // @addr 0x80514718 — Static: global frustum init (plane 1)
    static void globalInit_1();
    // @addr 0x80514808 — Static: global frustum init (plane 2)
    static void globalInit_2();
    // @addr 0x8051496c — Static: global frustum init (plane 3)
    static void globalInit_3();
    // @addr 0x80514a5c — Static: global frustum init (plane 4)
    static void globalInit_4();
    // @addr 0x80514b4c — Static: global frustum init (plane 5)
    static void globalInit_5();
    // @addr 0x80514d2c — Static: global frustum init (all planes)
    static void globalInitAll();
    // @addr 0x80514e20 — Static: global frustum reset
    static void globalReset();

    // @addr 0x80514f20 — Test a point against the frustum
    u32 testPoint(const f32 point[3], u32 planeMask) const;

    // @addr 0x80514ff4 — Test a sphere against the frustum
    u32 testSphere(const f32 center[3], f32 radius, u32 planeMask) const;

    // @addr 0x805150e0 — Reset all planes to zero
    void reset();

    // @addr 0x805151d8 — Set plane from normal and distance
    void setPlane(u32 index, f32 pnx, f32 pny, f32 pnz, f32 pd);

    // @addr 0x805152f8 — Normalize all planes
    void normalizeAll();

    // @addr 0x8051534c — Normalize a specific plane
    void normalizePlane(u32 index);

    // @addr 0x80515494 — Get plane by index
    const Plane3f& getPlane(u32 index) const;

    // @addr 0x805155e4 — Extract frustum planes from a view-projection matrix
    void extractFromMatrix(const f32 vpMatrix[4][4], s32 flags);

    // @addr 0x805156bc — Set left/right plane
    void setHorizontalPlanes(u32 fov, s32 aspect);

    // @addr 0x805156f4 — Set top/bottom plane
    void setVerticalPlanes(u32 fov, s32 aspect);

    // @addr 0x8051572c — Set near/far plane
    void setDepthPlanes(f32 nearDist, f32 farDist);

    // @addr 0x80515808 — Full frustum setup from projection parameters
    void setup(u32 fov, s32 aspect, u32 nearPlane, s32 farPlane);

    // @addr 0x80515e58 — Set from packed float data array
    void setFromPacked(const u32* packed);

    // @addr 0x80515fcc — Static: global frustum destroy
    static void globalDestroy();

    // @addr 0x805159b4 — Test box against specific plane
    u32 testBoxPlane(const BoundBox3f& box, u32 planeIndex) const;

    // @addr 0x805159ec — Static: test global frustum
    static void testGlobal();
};

// ============================================================================
// Coord3D — 3D Coordinate/Transform Node
//
// A lightweight 3D coordinate node used in the EGG scene system.
// Stores position, rotation (quaternion), and scale.
//
// Layout:
//   0x00  vtable/type     — vtable pointer or type identifier
//   0x04  posX            — world X position
//   0x08  posY            — world Y position
//   0x0C  posZ            — world Z position
//   0x10  scaleX          — X scale factor
//   0x14  scaleY          — Y scale factor
//   0x18  scaleZ          — Z scale factor
//   0x1C  quatW           — quaternion W component
//   0x20  quatX           — quaternion X component
//   0x24  quatY           — quaternion Y component
//   0x28  quatZ           — quaternion Z component
//   0x2C  flags           — state flags
//   0x30  parentPtr       — pointer to parent Coord3D
//   0x34  childPtr        — pointer to first child
//   0x38  siblingPtr      — pointer to next sibling
//   0x3C  padding
//
// Size: 0x40 bytes
//
// Key addresses:
//   0x80500018 — Constructor: init with type and flags
//   0x80500024 — Constructor variant: init with parent
//   0x8050004c — Destructor: unlink from parent/children
//   0x805001d0 — Calculate world transform
//   0x80500288 — Get world position as float array
//   0x805002c8 — Set world position from float array
//   0x805003cc — Set rotation from axis and angle
//   0x805003f0 — Set rotation from quaternion
// ============================================================================
class Coord3D {
public:
    static const u32 SIZE = 0x40;

    enum Flag {
        FLAG_DIRTY       = BIT(0),
        FLAG_CALCULATING = BIT(1),
        FLAG_VISIBLE     = BIT(2),
        FLAG_STATIC      = BIT(3),
    };

    u32      m_vtable;     // 0x00
    f32      m_posX;       // 0x04
    f32      m_posY;       // 0x08
    f32      m_posZ;       // 0x0C
    f32      m_scaleX;     // 0x10
    f32      m_scaleY;     // 0x14
    f32      m_scaleZ;     // 0x18
    f32      m_quatW;      // 0x1C
    f32      m_quatX;      // 0x20
    f32      m_quatY;      // 0x24
    f32      m_quatZ;      // 0x28
    u32      m_flags;      // 0x2C
    Coord3D* m_parent;     // 0x30
    Coord3D* m_child;      // 0x34
    Coord3D* m_sibling;    // 0x38
    u32      m_pad3C;      // 0x3C

    Coord3D() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x80500018 — Constructor: initialize with type and flags
    void init(u32 type, u32 flags);

    // @addr 0x80500024 — Constructor variant: init with parent
    void initWithParent(u32 type, u32 parentFlags);

    // @addr 0x8050004c — Destructor: unlink from scene graph
    void destroy();

    // @addr 0x805001d0 — Calculate world transform from local
    void calcWorld();

    // @addr 0x80500288 — Get position as float array [x, y, z]
    void getPosition(f32 out[3]) const;

    // @addr 0x805002c8 — Set position from float array
    void setPosition(const f32 pos[3]);

    // @addr 0x805003cc — Set rotation from axis-angle
    void setRotationAxisAngle(f32 axisX, f32 axisY, f32 axisZ, f32 angle);

    // @addr 0x805003f0 — Set rotation from quaternion values
    void setRotationQuat(f32 w, f32 x, f32 y, f32 z);

    bool isDirty() const { return (m_flags & FLAG_DIRTY) != 0; }
    void setDirty() { m_flags |= FLAG_DIRTY; }
    void clearDirty() { m_flags &= ~FLAG_DIRTY; }
};

// ============================================================================
// NijiCamera — Camera with Projection Settings
//
// A camera object that stores both view and projection matrices along with
// projection parameters (FOV, near, far, aspect). Part of the EGG rendering
// pipeline. "Niji" (虹) follows Nintendo's internal naming convention.
//
// Size: ~0x1A0 bytes (estimated)
//
// Key address clusters:
//   0x8051647c-0x80516e6c — Camera lifecycle
//   0x80517120-0x805173e0 — Projection parameter setters
//   0x80517334-0x80518530 — Matrix computation
//   0x80518598-0x805197b8 — Transform operations
//   0x8051982c-0x8051a58c — Camera queries
// ============================================================================
class NijiCamera {
public:
    static const u32 SIZE = 0x1A0;

    enum Flag {
        FLAG_PERSPECTIVE  = BIT(0),
        FLAG_ORTHOGRAPHIC = BIT(1),
        FLAG_DIRTY        = BIT(2),
        FLAG_ACTIVE       = BIT(3),
    };

    u32*  m_vtable;        // 0x000
    u32   m_flags;         // 0x004
    f32   m_viewMtx[3][4]; // 0x008
    f32   m_projMtx[4][4]; // 0x038
    f32   m_vpMtx[4][4];   // 0x078
    f32   m_posX;          // 0x0B8
    f32   m_posY;          // 0x0BC
    f32   m_posZ;          // 0x0C0
    f32   m_targetX;       // 0x0C4
    f32   m_targetY;       // 0x0C8
    f32   m_targetZ;       // 0x0CC
    f32   m_upX;           // 0x0D0
    f32   m_upY;           // 0x0D4
    f32   m_upZ;           // 0x0D8
    f32   m_fov;           // 0x0DC
    f32   m_aspect;        // 0x0E0
    f32   m_near;          // 0x0E4
    f32   m_far;           // 0x0E8
    Frustum m_frustum;     // 0x0EC

    NijiCamera() {
        std::memset(this, 0, sizeof(*this));
        m_fov = 60.0f;
        m_aspect = 4.0f / 3.0f;
        m_near = 1.0f;
        m_far = 1000.0f;
    }

    // --- Lifecycle ---
    // @addr 0x8051647c
    void init();
    // @addr 0x80516558
    void setFromData(const f32* data);
    // @addr 0x805167f8
    void reset();
    // @addr 0x805169bc
    void calcViewMatrix();
    // @addr 0x80516a40
    void calcProjectionMatrix();
    // @addr 0x80516be0
    void calc();
    // @addr 0x80516e6c
    static void globalReset();

    // --- Projection ---
    // @addr 0x80517120
    void setProjectionType(u32 type);
    // @addr 0x80517150
    void setProjectionParams(u32 params);
    // @addr 0x805171ac
    static void resetProjection();
    // @addr 0x805173e0
    void applyProjection();

    // --- Matrix ops ---
    // @addr 0x80517334
    void computeViewProj();
    // @addr 0x80517a40
    void multiplyView(const f32 mtx[3][4]);
    // @addr 0x80517eec
    void setViewMatrix(const f32 mtx[3][4]);
    // @addr 0x80518124
    const f32* getViewMatrix() const;
    // @addr 0x80518530
    const f32* getProjectionMatrix() const;

    // --- Transforms ---
    // @addr 0x80517634
    void transformByView(f32* out, const f32 in[3]) const;
    // @addr 0x80517850
    void transformByProjection(f32* out, const f32 in[3]) const;
    // @addr 0x805178dc
    void setVPEntry(u32 row, u32 col);
    // @addr 0x80517ae0
    void setPosition(f32 x, f32 y, f32 z);
    // @addr 0x80517cc0
    void setTarget(const f32 target[3]);
    // @addr 0x80517f54
    void getPosition(f32 out[3]) const;
    // @addr 0x80517fb0
    void getDirection(f32 out[3]) const;
    // @addr 0x80518090
    static void resetTransform();
    // @addr 0x805181b0
    void applyTransform();
    // @addr 0x805182d8
    void inverseTransformPoint(f32* out, const f32 in[3]) const;
    // @addr 0x80518388
    void setFov(u32 fov);
    // @addr 0x805183cc
    void setAspect(u32 aspect);
    // @addr 0x80518430
    void setClipPlanes(f32 nearDist, u32 farDist);
    // @addr 0x8051847c
    static void resetMatrices();
    // @addr 0x80518598
    void setFromPacked(const f32* packed);
    // @addr 0x80518604
    void getPacked(f32* packed) const;

    // --- Frustum ---
    // @addr 0x80518a24
    void extractFrustum();
    // @addr 0x80518b94
    u32 testFrustumPoint(const f32 point[3]) const;
    // @addr 0x8051909c
    u32 testFrustumSphere(const f32 center[3], f32 radius) const;
    // @addr 0x805192a0
    u32 testFrustumBox(const BoundBox3f& box) const;

    // --- Effects ---
    // @addr 0x80519450
    void setEffect(u32 effectType, u32 param);
    // @addr 0x80519480
    void updateEffect(u32 effectType, u32 param);
    // @addr 0x805194d0
    static void resetEffect();
    // @addr 0x80519564
    void setEffect3(u32 p1, u32 p2, u32 p3);
    // @addr 0x80519618
    void resetState();
    // @addr 0x80519650
    void resetAnimation();
    // @addr 0x80519688
    void resetShake();
    // @addr 0x805196c0
    void getShakeData(u32* out) const;

    // --- Queries ---
    // @addr 0x8051950c
    s32 queryState(s32 stateId) const;
    // @addr 0x8051975c
    static void resetGlobalState();
    // @addr 0x805197b8
    s32 compare(const NijiCamera& other) const;
    // @addr 0x8051982c
    u32 getCameraId() const;
    // @addr 0x80519e44
    static void globalQuery();
    // @addr 0x8051a1f4
    static void globalUpdate();

    // --- Params ---
    // @addr 0x8051a230
    s32 setParam(s32 paramId, s32 value);
    // @addr 0x8051a288
    void setParamU32(s32 paramId, u32 value);
    // @addr 0x8051a380
    void getParam(s32 paramId);
    // @addr 0x8051a3b8
    void getParamU32(s32 paramId);
    // @addr 0x8051a3f0
    void getParamF32(s32 paramId);
    // @addr 0x8051a428
    u32 queryParam(s32 paramId) const;
    // @addr 0x8051a470
    void getParamArray(u32* out) const;
    // @addr 0x8051a50c
    u32 getParamCount() const;
    // @addr 0x8051a58c
    static void resetParams();

    // --- Behavior ---
    // @addr 0x8051a800
    void setBehavior(s32 mode);
    // @addr 0x8051a930
    void getBehavior(s32 mode);
    // @addr 0x8051a9fc
    static void resetBehavior();
    // @addr 0x8051aa90
    u32 getBehaviorParam(u32* out) const;
    // @addr 0x8051ab40
    void updateBehavior(s32 dt);
    // @addr 0x8051ad2c
    void applyBehavior();

    bool isDirty() const { return (m_flags & FLAG_DIRTY) != 0; }
    bool isPerspective() const { return (m_flags & FLAG_PERSPECTIVE) != 0; }
};

// ============================================================================
// NijiTransform — Scene Graph 3D Transform
//
// A 3D transform node combining position, rotation (quaternion),
// scale, and a computed world matrix. Used in the scene graph hierarchy.
//
// Size: ~0x60 bytes (estimated)
//
// Key address clusters:
//   0x8051bdc8-0x8051c774 — Transform lifecycle
//   0x8051c820-0x8051dae4 — Matrix computation
//   0x8051dc28-0x8051e63c — Transform operations
//   0x8051e708-0x8051fcdc — Transform queries
// ============================================================================
class NijiTransform {
public:
    static const u32 SIZE = 0x60;

    enum Flag {
        FLAG_DIRTY_LOCAL  = BIT(0),
        FLAG_DIRTY_WORLD  = BIT(1),
        FLAG_USE_QUAT     = BIT(2),
        FLAG_USE_EULER    = BIT(3),
    };

    u32*  m_vtable;         // 0x000
    u32   m_flags;          // 0x004
    f32   m_localMtx[3][4]; // 0x008
    f32   m_worldMtx[3][4]; // 0x038

    NijiTransform() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x8051bdc8
    void init();
    // @addr 0x8051bed0
    void setFromMatrix(u32 param);
    // @addr 0x8051bf00
    void setFromParams(u32 param);
    // @addr 0x8051bf30
    void setFlags(u32 param);
    // @addr 0x8051bf9c
    static void globalReset();
    // @addr 0x8051c030
    void reset();
    // @addr 0x8051c0b0
    void resetLocal();
    // @addr 0x8051c114
    void resetWorld();
    // @addr 0x8051c1c0
    static void globalInit();
    // @addr 0x8051c2b0
    void initTransform();
    // @addr 0x8051c22c
    s32 setLocalMatrix(s32 param1, s32 param2);
    // @addr 0x8051c400
    void setLocalFromArray(f32* data);
    // @addr 0x8051c58c
    static void resetGlobalMatrix();
    // @addr 0x8051c774
    s32 compare(const NijiTransform& other) const;

    // @addr 0x8051c820
    void calcLocal();
    // @addr 0x8051ca58
    void calcWorld(const f32 parentMtx[3][4]);
    // @addr 0x8051cb1c
    static void globalCalc();

    // @addr 0x8051d2ac
    void transformPoint(f32* out, const f32 in[3]) const;
    // @addr 0x8051d55c
    void inverseTransformPoint(f32* out, const f32 in[3]) const;
    // @addr 0x8051d598
    void setFromPosition(f32* pos);
    // @addr 0x8051d680
    void setFromRotation(f32* rot);
    // @addr 0x8051d774
    void setFromScale(f32* scale);
    // @addr 0x8051d920
    void setFromPRS(f32* pos, f32* rot, f32* scale);
    // @addr 0x8051da70
    static void globalSet();

    // @addr 0x8051db3c
    void setBlend(u32 type, u8 srcFactor, u8 dstFactor, u8 op);
    // @addr 0x8051dc28
    void getLocalMatrix(f32* out) const;
    // @addr 0x8051dd14
    void getWorldMatrix(f32* out) const;
    // @addr 0x8051de90
    void setWorldMatrix(u32 index, s32 value);
    // @addr 0x8051dfa8
    void setLocalEntry(u32 index, s32 value);
    // @addr 0x8051e00c
    void applyToGX();
    // @addr 0x8051e0bc
    void applyWorldToGX();
    // @addr 0x8051e14c
    void getGXData(u32* out) const;
    // @addr 0x8051e288
    void calcBounds();
    // @addr 0x8051e3c4
    void getBounds(f32* out) const;
    // @addr 0x8051e534
    void setBounds(s32 param);
    // @addr 0x8051e63c
    void transformBounds();

    // @addr 0x8051e708
    static void globalQuery();
    // @addr 0x8051e754
    static void globalUpdate();
    // @addr 0x8051e1e0
    u32 queryState(s32 stateId) const;
    // @addr 0x8051f2c4
    u32 getData(u32* out, s32 index) const;
    // @addr 0x8051f494
    s32 compareTo(s32 param) const;
    // @addr 0x8051f54c
    void setFromPacked(u32* packed);
    // @addr 0x8051f96c
    void blendWith(const NijiTransform& other, u8 idxA, u8 idxB, const u32* lut);
    // @addr 0x8051fcdc
    void getPacked(u32* packed);
    // @addr 0x8051fdac
    static void globalDestroy();
    // @addr 0x8051fd38
    u32 getTransformId() const;
    // @addr 0x8051ff04
    void finalize();

    bool isLocalDirty() const { return (m_flags & FLAG_DIRTY_LOCAL) != 0; }
    bool isWorldDirty() const { return (m_flags & FLAG_DIRTY_WORLD) != 0; }
};

// ============================================================================
// CollContext — Collision / Intersection Test Context
//
// Stores the result of a collision/intersection test along with
// hit point and normal information.
//
// Size: 0x20 bytes
//
// Key addresses:
//   0x8050553c — Test ray against sphere
//   0x80505768 — Test ray against box
//   0x80505bd8 — Test sphere against box (boolean)
//   0x80505d3c — Test point against box
// ============================================================================
struct CollContext {
    enum Result {
        RESULT_NONE   = 0,
        RESULT_HIT    = 1,
        RESULT_INSIDE = 2,
        RESULT_BEHIND = 3,
    };

    u32  m_result;  // 0x00
    f32  m_hitDist; // 0x04
    f32  m_hitX;    // 0x08
    f32  m_hitY;    // 0x0C
    f32  m_hitZ;    // 0x10
    f32  m_normalX; // 0x14
    f32  m_normalY; // 0x18
    f32  m_normalZ; // 0x1C

    static const u32 SIZE = 0x20;

    CollContext() { std::memset(this, 0, sizeof(*this)); }

    // @addr 0x8050553c — Ray-sphere intersection
    s32 testRaySphere(const Ray3f& ray, const BoundSphere3f& sphere);

    // @addr 0x80505768 — Ray-box intersection
    s32 testRayBox(const Ray3f& ray, const BoundBox3f& box);

    // @addr 0x80505bd8 — Sphere-box overlap (boolean)
    bool testSphereBox(const BoundSphere3f& sphere, const BoundBox3f& box);

    // @addr 0x80505d3c — Point inside box test
    u32 testPointBox(const f32 point[3], const BoundBox3f& box);

    bool hasHit() const { return m_result == RESULT_HIT; }
};

// ============================================================================
// WeightSet — Vertex Skinning Weight Data
//
// Stores per-vertex skinning information as pairs of weight indices and
// blend indices for skeletal animation.
//
// Size: 0x0C bytes
//
// Key addresses:
//   0x80503044 — Set weight and blend index arrays
//   0x80503188 — Set weight indices only
//   0x80503bf4 — Get weight and blend index arrays
//   0x80503ca8 — Get weight indices only
// ============================================================================
struct WeightSet {
    u16* m_weightIndices; // 0x00
    u16* m_blendIndices;  // 0x04
    u32  m_count;         // 0x08

    static const u32 SIZE = 0x0C;

    WeightSet() : m_weightIndices(nullptr), m_blendIndices(nullptr), m_count(0) {}

    // @addr 0x80503044
    void set(u16* weights, u16* blends);

    // @addr 0x80503188
    void setWeights(u16* weights);

    // @addr 0x80503bf4
    void get(const u16*& weights, const u16*& blends) const;

    // @addr 0x80503ca8
    void getWeights(const u16*& weights) const;

    // @addr 0x80503250
    void reset();

    // @addr 0x80503330
    static void globalInit();

    // @addr 0x8050345c
    void allocate(u32 count);

    // @addr 0x8050357c
    void deallocate();

    // @addr 0x80503620
    static void globalReset();
};

// ============================================================================
// Vec3fOps — Free functions for Vector3f operations
//
// Implements the static methods on EGG::Vector3f called throughout the
// codebase (e.g., Vector3f::cross, Vector3f::dot).
//
// Key address clusters:
//   0x805005d4-0x80500d70 — Vector arithmetic
//   0x8050e440-0x8050e560 — Component accessors
//   0x80517dcc-0x80517e5c — Transform operations
// ============================================================================
namespace Vec3fOps {

// @addr 0x805005d4
void add(f32 dst[3], const f32 a[3], const f32 b[3]);

// @addr 0x80500640
void sub(f32 dst[3], const f32 a[3], const f32 b[3]);

// @addr 0x80500680
void scale(f32 dst[3], const f32 v[3], f32 s);

// @addr 0x80500740
f32 dot(const f32 a[3], const f32 b[3]);

// @addr 0x80500780
void cross(f32 dst[3], const f32 a[3], const f32 b[3]);

// @addr 0x80500804
f32 lengthSq(const f32 v[3]);

// @addr 0x8050093c
f32 normalize(f32 dst[3], const f32 v[3]);

// @addr 0x80500a34
void lerp(f32 dst[3], const f32 a[3], const f32 b[3], f32 t);

// @addr 0x80500a74
void copy(f32 dst[3], const f32 src[3]);

// @addr 0x80500b6c
void setComponent(f32 v[3], u32 axis, f32 val);

// @addr 0x80500c48
void zero(f32 v[3]);

// @addr 0x80500c80
void setAll(f32 v[3], f32 val);

// @addr 0x80500d70
void globalInit();

// @addr 0x8050e440
void setX(f32 v[3], f32 val);
// @addr 0x8050e470
void setY(f32 v[3], f32 val);
// @addr 0x8050e4a0
void setZ(f32 v[3], f32 val);
// @addr 0x8050e4d0
f32 getX(const f32 v[3]);
// @addr 0x8050e500
f32 getY(const f32 v[3]);
// @addr 0x8050e530
f32 getZ(const f32 v[3]);
// @addr 0x8050e560
f32 getComponent(const f32 v[3], u32 index);

// @addr 0x80517dcc
void transformPoint(f32 dst[3], const f32 mtx[3][4], const f32 pt[3]);
// @addr 0x80517dfc
void transformVector(f32 dst[3], const f32 mtx[3][4], const f32 vec[3]);
// @addr 0x80517e2c
void transformPoint44(f32 dst[3], const f32 mtx[4][4], const f32 pt[3]);
// @addr 0x80517e5c
void transformVector44(f32 dst[3], const f32 mtx[4][4], const f32 vec[3]);

} // namespace Vec3fOps

// ============================================================================
// QuatfOps — Free functions for Quaternion operations
//
// Implements the static methods on EGG::Quatf (e.g., Quatf::quatMul).
//
// Key address clusters:
//   0x80500540 — Quaternion multiply
//   0x80500fa8 — Quaternion normalize
//   0x80501428 — Quaternion conjugate
//   0x805017dc — Quaternion dot product
// ============================================================================
namespace QuatfOps {

// @addr 0x80500540
s32 multiply(f32 dst[4], const f32 q1[4], const f32 q2[4]);

// @addr 0x80500fa8
u32 normalize(f32 dst[4], const f32 q[4]);

// @addr 0x80501428
s32 conjugate(f32 dst[4], const f32 q[4]);

// @addr 0x805017dc
u32 dot(const f32 q1[4], const f32 q2[4]);

// @addr 0x80502a7c
s32 inverse(f32 dst[4], const f32 q[4]);

// @addr 0x805032bc
u32 fromAxisAngle(f32 dst[4], f32 axisX, f32 axisY, f32 axisZ, f32 angle);

// @addr 0x80503ae8
u32 toAxisAngle(const f32 q[4], f32& axisX, f32& axisY, f32& axisZ, f32& angle);

// @addr 0x80503d9c
s32 slerp(f32 dst[4], const f32 q1[4], const f32 q2[4], f32 t);

// @addr 0x805042a4
s32 lerp(f32 dst[4], const f32 q1[4], const f32 q2[4], f32 t);

// @addr 0x8050120c
void identity(f32 q[4]);

// @addr 0x8050129c
void setFromArray(f32 q[4], const f32 arr[4]);

} // namespace QuatfOps

// ============================================================================
// Matrix34fOps — Free functions for Matrix34f operations
//
// Implements methods on EGG::Matrix34f.
//
// Key address clusters:
//   0x8050093c — Matrix operations
//   0x8050ab8c-0x8050acac — Matrix entry setters
//   0x8050ca74-0x8050cc70 — Matrix transforms
// ============================================================================
namespace Matrix34fOps {

// @addr 0x80500b6c
void identity(f32 mtx[3][4]);

// @addr 0x80500c48
void makeTranslation(f32 mtx[3][4], f32 tx, f32 ty, f32 tz);

// @addr 0x80500c80
void makeScale(f32 mtx[3][4], f32 sx, f32 sy, f32 sz);

// @addr 0x80500a34
void makeRotationX(f32 mtx[3][4], f32 angle);

// @addr 0x80500a74
void makeRotationY(f32 mtx[3][4], f32 angle);

// @addr 0x80500a6f4
void makeRotationZ(f32 mtx[3][4], f32 angle);

// @addr 0x80500ad4c
void multiply(f32 dst[3][4], const f32 a[3][4], const f32 b[3][4]);

// @addr 0x80500b2a4
void multiply34x44(f32 dst[3][4], const f32 a[3][4], const f32 b[4][4]);

// @addr 0x8050ab8c
void setRow(f32 mtx[3][4], u32 row, f32 x, f32 y, f32 z, f32 w);
// @addr 0x8050abbc
void setColumn(f32 mtx[3][4], u32 col, f32 x, f32 y, f32 z);
// @addr 0x8050abec
void setEntry(f32 mtx[3][4], u32 row, u32 col, f32 val);
// @addr 0x8050ac1c
f32 getEntry(const f32 mtx[3][4], u32 row, u32 col);
// @addr 0x8050ac4c
void getRow(const f32 mtx[3][4], u32 row, f32& x, f32& y, f32& z, f32& w);
// @addr 0x8050ac7c
void getColumn(const f32 mtx[3][4], u32 col, f32& x, f32& y, f32& z);
// @addr 0x8050acac
void copy(f32 dst[3][4], const f32 src[3][4]);

// @addr 0x8050bd68
void transformPoint(f32 dst[3], const f32 mtx[3][4], const f32 pt[3]);

// @addr 0x8050bdd4
void transformVector(f32 dst[3], const f32 mtx[3][4], const f32 vec[3]);

// @addr 0x8050bef0
void makePerspective(f32 mtx[4][4], f32 fovY, f32 aspect, f32 nearZ, f32 farZ);

// @addr 0x8050bfc8
void makePerspectiveF64(f32 mtx[4][4], f64 fovY, f64 aspect, f64 nearZ, f64 farZ);

// @addr 0x8050bc00
void makeOrthographic(f32 mtx[4][4], f32 left, f32 right, f32 bottom, f32 top, f32 nearZ, f32 farZ);

// @addr 0x8050bc84
void makeLookAt(f32 mtx[3][4], const f32 eye[3], const f32 target[3], const f32 up[3]);

// @addr 0x8050b99c
s32 inverse3x3(f32 dst[3][4], const f32 src[3][4]);

// @addr 0x8050bd00
s32 inverse(f32 dst[3][4], const f32 src[3][4]);

// @addr 0x8050c088
s32 transpose(f32 dst[4][3], const f32 src[3][4]);

// @addr 0x8050c5dc
s32 decompose(const f32 mtx[3][4], f32 pos[3], f32 rot[4], f32 scale[3]);

// @addr 0x8050cefc
s32 compose(f32 mtx[3][4], const f32 pos[3], const f32 rot[4], const f32 scale[3]);

// @addr 0x8050d764
s32 computeInertiaTensor(f32 dst[3][4], f32 mass, f32 ix, f32 iy, f32 iz);

// @addr 0x8050e614
s32 fromQuat(f32 mtx[3][4], const f32 q[4]);

// @addr 0x8050e930
s32 toQuat(const f32 mtx[3][4], f32 q[4]);

// @addr 0x8050eda0
s32 multiplyVariant(f32 dst[3][4], const f32 a[3][4], const f32 b[3][4]);

// @addr 0x8050f820
s32 transformBounds(f32 dst[6], const f32 mtx[3][4], const f32 src[6]);

// @addr 0x8050ff40
s32 equals(const f32 a[3][4], const f32 b[3][4]);

// @addr 0x805107a8
s32 extractRotation(f32 rot[4], const f32 mtx[3][4]);

// @addr 0x805109fc
s32 extractScale(f32 scale[3], const f32 mtx[3][4]);

} // namespace Matrix34fOps

// ============================================================================
// Global singleton getters
//
// Four no-argument u32-returning functions suggest singleton patterns:
//   0x80511880 — Get global vector math state
//   0x8051196c — Get global matrix math state
//   0x80514c74 — Get global frustum state
// ============================================================================
namespace Globals {

// @addr 0x80511880
u32 getMathState();

// @addr 0x805118cc
u32 queryMathState(s32 param);

// @addr 0x8051196c
u32 getMatrixState();

// @addr 0x80511b68
s32 setGlobalParam(s32 paramId, u32 value1, u32 value2);

// @addr 0x80512a30
u32 queryGlobal(s32 param);

// @addr 0x80514c74
u32 getGlobalFrustum();

// @addr 0x80514f20
u32 queryFrustumPlane(u32 planeIndex, u8 component);

// @addr 0x80514ff4
u32 queryFrustumSphere(u32 sphereIndex, u8 component);

// @addr 0x80515f24
u32 getCameraCount();

} // namespace Globals

} // namespace Scene3D
} // namespace EGG