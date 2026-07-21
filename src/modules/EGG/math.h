#pragma once
// EGG/math.h — Nintendo EGG framework math compatibility shim

#include "../rk_types.h"
#include <cstring>

namespace EGG {

template<typename T>
class TVector2 {
public:
    T x, y;
    TVector2() : x(0), y(0) {}
    TVector2(T _x, T _y) : x(_x), y(_y) {}
    void set(T _x, T _y) { x = _x; y = _y; }
};

#ifndef _EGG_VECTOR2F_DEFINED_
#define _EGG_VECTOR2F_DEFINED_
typedef TVector2<f32> Vector2f;
typedef TVector2<s32> Vector2i;
#endif

template<typename T>
class TVector3 {
public:
    T x, y, z;
    TVector3() : x(0), y(0), z(0) {}
    TVector3(T _x, T _y, T _z) : x(_x), y(_y), z(_z) {}
    void set(T _x, T _y, T _z) { x = _x; y = _y; z = _z; }
    void setZero() { x = y = z = 0; }
    void setUp() { x = 0; y = 1; z = 0; }
    void setAll(T v) { x = y = z = v; }
    TVector3 operator+(const TVector3& o) const { return TVector3(x+o.x, y+o.y, z+o.z); }
    TVector3 operator-(const TVector3& o) const { return TVector3(x-o.x, y-o.y, z-o.z); }
    TVector3 operator*(T s) const { return TVector3(x*s, y*s, z*s); }
    TVector3 operator/(T s) const { return TVector3(x/s, y/s, z/s); }
    TVector3& operator+=(const TVector3& o) { x+=o.x; y+=o.y; z+=o.z; return *this; }
    TVector3& operator-=(const TVector3& o) { x-=o.x; y-=o.y; z-=o.z; return *this; }
    TVector3& operator*=(T s) { x*=s; y*=s; z*=s; return *this; }
    T dot(const TVector3& o) const { return x*o.x + y*o.y + z*o.z; }
    T squaredLength() const { return x*x + y*y + z*z; }
    T normalise() { T n = squaredLength(); if (n > 0) { T inv = 1.0f / n; x*=inv; y*=inv; z*=inv; } return n; }
    static TVector3 cross(const TVector3& a, const TVector3& b) {
        return TVector3(a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x);
    }
    static const TVector3 zero;
    static const TVector3 ez;
};

// Vector3f: always defined in EGG namespace from either this header or eggVector.hpp
#ifndef _EGG_VECTOR3F_FROM_EGGVECTOR_DEFINED_
#define _EGG_VECTOR3F_FROM_EGGVECTOR_DEFINED_
typedef TVector3<f32> Vector3f;
#endif
typedef TVector3<s32> Vector3i;

class Quaternion {
public:
    f32 x, y, z, w;
    Quaternion() : x(0), y(0), z(0), w(1) {}
    Quaternion(f32 _x, f32 _y, f32 _z, f32 _w) : x(_x), y(_y), z(_z), w(_w) {}
    void setIdentity() { x = y = z = 0.0f; w = 1.0f; }
    f32 squareNorm() const { return x*x + y*y + z*z + w*w; }
    void normalise() { f32 n = squareNorm(); if (n > 0.0f) { f32 inv = 1.0f / n; x*=inv; y*=inv; z*=inv; w*=inv; } }
    // Rotate a vector by this quaternion: v' = q * v * q^{-1}
    // Uses the optimized form: v' = v + 2*cross(q.xyz, cross(q.xyz, v) + w*v)
    void rotateVector(const Vector3f& src, Vector3f& dst) const {
        Vector3f qxyz(x, y, z);
        Vector3f cross1 = TVector3<f32>::cross(qxyz, src);
        Vector3f tmp = cross1 + src * w;
        Vector3f cross2 = TVector3<f32>::cross(qxyz, tmp);
        dst = src + cross2 * 2.0f;
    }
    // Inverse rotation: v' = q^{-1} * v * q = conj(q) * v * q
    void rotateVectorInv(const Vector3f& src, Vector3f& dst) const {
        // Conjugate: (x, y, z, w) -> (-x, -y, -z, w)
        Vector3f qxyz(-x, -y, -z);
        Vector3f cross1 = TVector3<f32>::cross(qxyz, src);
        Vector3f tmp = cross1 + src * w;
        Vector3f cross2 = TVector3<f32>::cross(qxyz, tmp);
        dst = src + cross2 * 2.0f;
    }
    Quaternion operator+(const Quaternion& o) const { return Quaternion(x+o.x, y+o.y, z+o.z, w+o.w); }
    Quaternion operator*(f32 s) const { return Quaternion(x*s, y*s, z*s, w*s); }
    Quaternion& operator+=(const Quaternion& o) { x+=o.x; y+=o.y; z+=o.z; w+=o.w; return *this; }
    Quaternion& operator*=(f32 s) { x*=s; y*=s; z*=s; w*=s; return *this; }
    // Hamilton product: dst = a * b
    static void quatMul(Quaternion& dst, const Quaternion& a, const Quaternion& b) {
        dst.x = a.w*b.x + a.x*b.w + a.y*b.z - a.z*b.y;
        dst.y = a.w*b.y - a.x*b.z + a.y*b.w + a.z*b.x;
        dst.z = a.w*b.z + a.x*b.y - a.y*b.x + a.z*b.w;
        dst.w = a.w*b.w - a.x*b.x - a.y*b.y - a.z*b.z;
    }
    // Rotate vector v by quaternion q and store result: dst = q * v * q^{-1}
    // This produces a pure rotation quaternion (w=0) representing the rotated vector.
    static void fromRotated(Quaternion& dst, const Quaternion& q, const Vector3f& v) {
        // Construct pure quaternion from v
        Quaternion vp(v.x, v.y, v.z, 0.0f);
        Quaternion qc(-q.x, -q.y, -q.z, q.w); // conjugate
        Quaternion tmp;
        quatMul(tmp, q, vp);
        quatMul(dst, tmp, qc);
        // Result should have w ≈ 0, extract xyz as rotated vector
        dst.w = 0.0f;
    }
    void toMatrix(class Matrix34f& dst) const; // defined after Matrix34f
};
typedef Quaternion Quatf;
typedef Quaternion Quat;

class Matrix44f {
public:
    f32 m[4][4];
    Matrix44f() { std::memset(m, 0, sizeof(m)); m[0][0] = m[1][1] = m[2][2] = m[3][3] = 1.0f; }
    void makeIdentity() { std::memset(m, 0, sizeof(m)); m[0][0] = m[1][1] = m[2][2] = m[3][3] = 1.0f; }
};

class Matrix34f {
public:
    union {
        f32 m[3][4];
        f32 mtx[3][4];
    };
    Matrix34f() { std::memset(m, 0, sizeof(m)); m[0][0] = m[1][1] = m[2][2] = 1.0f; }
    void makeIdentity() { std::memset(m, 0, sizeof(m)); m[0][0] = m[1][1] = m[2][2] = 1.0f; }
    f32& operator()(int r, int c) { return m[r][c]; }
    const f32& operator()(int r, int c) const { return m[r][c]; }
    EGG::Vector3f operator*(const EGG::Vector3f& v) const {
        return EGG::Vector3f(
            m[0][0]*v.x + m[0][1]*v.y + m[0][2]*v.z,
            m[1][0]*v.x + m[1][1]*v.y + m[1][2]*v.z,
            m[2][0]*v.x + m[2][1]*v.y + m[2][2]*v.z
        );
    }
    EGG::Vector3f getRow(int r) const { return EGG::Vector3f(m[r][0], m[r][1], m[r][2]); }
    void makeZero() { std::memset(m, 0, sizeof(m)); }
    // Compute inverse of this 3x4 affine matrix, store in dst.
    // For a 3x4 matrix [R|t], the inverse is [R^T | -R^T * t].
    void inverseToC(Matrix34f& dst) const {
        // Transpose the 3x3 rotation part
        dst.m[0][0] = m[0][0]; dst.m[0][1] = m[1][0]; dst.m[0][2] = m[2][0];
        dst.m[1][0] = m[0][1]; dst.m[1][1] = m[1][1]; dst.m[1][2] = m[2][1];
        dst.m[2][0] = m[0][2]; dst.m[2][1] = m[1][2]; dst.m[2][2] = m[2][2];
        // Inverse translation: -R^T * t
        Vector3f t(m[0][3], m[1][3], m[2][3]);
        dst.m[0][3] = -(dst.m[0][0]*t.x + dst.m[0][1]*t.y + dst.m[0][2]*t.z);
        dst.m[1][3] = -(dst.m[1][0]*t.x + dst.m[1][1]*t.y + dst.m[1][2]*t.z);
        dst.m[2][3] = -(dst.m[2][0]*t.x + dst.m[2][1]*t.y + dst.m[2][2]*t.z);
    }
};

// Quaternion::toMatrix implementation (needs Matrix34f to be complete)
inline void Quaternion::toMatrix(Matrix34f& dst) const {
    // Convert unit quaternion to 3x3 rotation matrix (extended to 3x4 with zero translation)
    // Standard formula from quaternion (w, x, y, z) to rotation matrix.
    f32 xx = x*x, yy = y*y, zz = z*z;
    f32 xy = x*y, xz = x*z, yz = y*z;
    f32 wx = w*x, wy = w*y, wz = w*z;
    dst.m[0][0] = 1.0f - 2.0f*(yy + zz);
    dst.m[0][1] = 2.0f*(xy - wz);
    dst.m[0][2] = 2.0f*(xz + wy);
    dst.m[0][3] = 0.0f;
    dst.m[1][0] = 2.0f*(xy + wz);
    dst.m[1][1] = 1.0f - 2.0f*(xx + zz);
    dst.m[1][2] = 2.0f*(yz - wx);
    dst.m[1][3] = 0.0f;
    dst.m[2][0] = 2.0f*(xz - wy);
    dst.m[2][1] = 2.0f*(yz + wx);
    dst.m[2][2] = 1.0f - 2.0f*(xx + yy);
    dst.m[2][3] = 0.0f;
}

static const f32 PI = 3.14159265358979323846f;
static const f32 DEG_TO_RAD = PI / 180.0f;
static const f32 RAD_TO_DEG = 180.0f / PI;

inline f32 DegToRad(f32 deg) { return deg * DEG_TO_RAD; }
inline f32 RadToDeg(f32 rad) { return rad * RAD_TO_DEG; }

} // namespace EGG

// Static member definitions
template<typename T>
const EGG::TVector3<T> EGG::TVector3<T>::zero = EGG::TVector3<T>(T(0), T(0), T(0));
template<typename T>
const EGG::TVector3<T> EGG::TVector3<T>::ez = EGG::TVector3<T>(T(0), T(0), T(1));

// Non-member operator for scalar * vector
template<typename T>
EGG::TVector3<T> operator*(T s, const EGG::TVector3<T>& v) { return v * s; }

// Convenience global typedefs (only if not already defined elsewhere)
#ifndef _EGG_VEC_TYPEDEF_DEFINED_
#define _EGG_VEC_TYPEDEF_DEFINED_
typedef EGG::Vector3f Vec;
typedef EGG::Vector3f Vec3;
typedef EGG::Vector3f Vec3f;
typedef EGG::TVector2<f32> Vec2;
typedef EGG::TVector2<f32> Vec2f;
typedef EGG::Quaternion Quat;
typedef EGG::Quaternion Quatf;
typedef EGG::Matrix44f Mat44;
typedef EGG::Matrix34f Mat34;
#endif
