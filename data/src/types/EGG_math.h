#pragma once
// EGG framework math types (Nintendo SDK) — PC port equivalents
#include "types.h"
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
        void normalize() { T l = length(); if (l > 0) { x/=l; y/=l; z/=l; } }
        void setAll(T v) { x = v; y = v; z = v; }
    };

    template<typename T>
    class Vector2 {
    public:
        T x, y;
        Vector2() : x(0), y(0) {}
        Vector2(T _x, T _y) : x(_x), y(_y) {}
    };

    template<typename T>
    class Quat {
    public:
        T w, x, y, z;
        Quat() : w(1), x(0), y(0), z(0) {}
        Quat(T _w, T _x, T _y, T _z) : w(_w), x(_x), y(_y), z(_z) {}
    };

    template<typename T>
    class Matrix34 {
    public:
        T m[3][4];
        Matrix34() { for (int i = 0; i < 3; i++) for (int j = 0; j < 4; j++) m[i][j] = (i == j) ? 1.0f : 0.0f; }
    };

    template<typename T>
    class Matrix44 {
    public:
        T m[4][4];
        Matrix44() { for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) m[i][j] = (i == j) ? 1.0f : 0.0f; }
    };

    // Common type aliases
    typedef Vector3<f32> Vec3f;
    typedef Vector2<f32> Vec2f;
    // NOTE: Vec3, Vec2, Quatf used in game code — redirect to f32 versions
    typedef Vector3<f32> Vec3;
    typedef Vector2<f32> Vec2;
}
