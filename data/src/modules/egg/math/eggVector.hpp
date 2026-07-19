#pragma once
#include "rk_types.h"
#include <cmath>

namespace EGG {

template<typename T>
class Vector3 {
public:
    T x, y, z;
    Vector3() : x(0), y(0), z(0) {}
    Vector3(T _x, T _y, T _z) : x(_x), y(_y), z(_z) {}
    Vector3 operator+(const Vector3& o) const { return Vector3(x+o.x, y+o.y, z+o.z); }
    Vector3 operator-(const Vector3& o) const { return Vector3(x-o.x, y-o.y, z-o.z); }
    Vector3 operator*(T s) const { return Vector3(x*s, y*s, z*s); }
    Vector3 operator/(T s) const { return Vector3(x/s, y/s, z/s); }
    Vector3& operator+=(const Vector3& o) { x+=o.x; y+=o.y; z+=o.z; return *this; }
    Vector3& operator-=(const Vector3& o) { x-=o.x; y-=o.y; z-=o.z; return *this; }
    T dot(const Vector3& o) const { return x*o.x + y*o.y + z*o.z; }
    Vector3 cross(const Vector3& o) const {
        return Vector3(y*o.z - z*o.y, z*o.x - x*o.z, x*o.y - y*o.x);
    }
    T length() const { return std::sqrt(x*x + y*y + z*z); }
    T lengthSquared() const { return x*x + y*y + z*z; }
    T lenSq() const { return x*x + y*y + z*z; }
    T squaredLength() const { return x*x + y*y + z*z; }
    void normalize() { T l = length(); if (l > 0) { x/=l; y/=l; z/=l; } }
    void normalise() { normalize(); }
    void setAll(T v) { x = v; y = v; z = v; }
    void setZero() { x = y = z = 0; }
    void setUp() { x = 0; y = 1; z = 0; }
    static const Vector3& ez() { static const Vector3 v(0,0,1); return v; }
    static const Vector3& ey() { static const Vector3 v(0,1,0); return v; }
    static const Vector3& ex() { static const Vector3 v(1,0,0); return v; }
    static void projAndRej(Vector3& proj, const Vector3& v, const Vector3& v2, const Vector3& axis) {
        T d = v.dot(axis);
        proj = axis * d;
    }
};

template<typename T>
class Vector2 {
public:
    T x, y;
    Vector2() : x(0), y(0) {}
    Vector2(T _x, T _y) : x(_x), y(_y) {}
};

typedef Vector3<f32> Vec3f;
typedef Vector2<f32> Vec2f;
typedef Vector3<f32> Vec3;
typedef Vector2<f32> Vec2;

// Additional typedefs used in Kart code
typedef Vector3<f32> Vector3f;
typedef Vector2<f32> Vector2f;

} // namespace EGG