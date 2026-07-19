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

    template<typename T>
    class Quat {
    public:
        T w, x, y, z;
        Quat() : w(1), x(0), y(0), z(0) {}
        Quat(T _w, T _x, T _y, T _z) : w(_w), x(_x), y(_y), z(_z) {}

        T squareNorm() const { return w*w + x*x + y*y + z*z; }
        void setIdentity() { w = 1; x = 0; y = 0; z = 0; }
        void normalise() {
            f32 n = std::sqrt(squareNorm());
            if (n > 0.0f) { w /= n; x /= n; y /= n; z /= n; }
        }
        void rotateVector(const Vector3<f32>& v, Vector3<f32>& out) const {
            f32 xx = x * x, yy = y * y, zz = z * z;
            f32 xy = x * y, xz = x * z, yz = y * z;
            f32 wx = w * x, wy = w * y, wz = w * z;
            out.x = (1.0f - 2.0f * (yy + zz)) * v.x + 2.0f * (xy - wz) * v.y + 2.0f * (xz + wy) * v.z;
            out.y = 2.0f * (xy + wz) * v.x + (1.0f - 2.0f * (xx + zz)) * v.y + 2.0f * (yz - wx) * v.z;
            out.z = 2.0f * (xz - wy) * v.x + 2.0f * (yz + wx) * v.y + (1.0f - 2.0f * (xx + yy)) * v.z;
        }
        void rotateVectorInv(const Vector3<f32>& v, Vector3<f32>& out) const {
            Quat inv = *this;
            inv.x = -inv.x; inv.y = -inv.y; inv.z = -inv.z;
            inv.rotateVector(v, out);
        }
        Quat& operator+=(const Quat& o) { w += o.w; x += o.x; y += o.y; z += o.z; return *this; }
        Quat operator*(f32 s) const { return Quat(w*s, x*s, y*s, z*s); }
        static void quatMul(Quat& dst, const Quat& q1, const Vector3<f32>& v) {
            (void)dst; (void)q1; (void)v;
        }
        static void quatMul(Quat& dst, const Quat& a, const Quat& b) {
            dst.w = a.w*b.w - a.x*b.x - a.y*b.y - a.z*b.z;
            dst.x = a.w*b.x + a.x*b.w + a.y*b.z - a.z*b.y;
            dst.y = a.w*b.y - a.x*b.z + a.y*b.w + a.z*b.x;
            dst.z = a.w*b.z + a.x*b.y - a.y*b.x + a.z*b.w;
        }
    };

    template<typename T>
    class Matrix34 {
    public:
        T m[3][4];
        Matrix34() { for (int i = 0; i < 3; i++) for (int j = 0; j < 4; j++) m[i][j] = (i == j) ? 1.0f : 0.0f; }
        void makeIdentity() { for (int i = 0; i < 3; i++) for (int j = 0; j < 4; j++) m[i][j] = (i == j) ? 1.0f : 0.0f; }
        void makeZero() { for (int i = 0; i < 3; i++) for (int j = 0; j < 4; j++) m[i][j] = 0; }
        T& operator()(int r, int c) { return m[r][c]; }
        const T& operator()(int r, int c) const { return m[r][c]; }
        Vector3<T> operator*(const Vector3<T>& v) const {
            Vector3<T> out;
            out.x = m[0][0]*v.x + m[0][1]*v.y + m[0][2]*v.z + m[0][3];
            out.y = m[1][0]*v.x + m[1][1]*v.y + m[1][2]*v.z + m[1][3];
            out.z = m[2][0]*v.x + m[2][1]*v.y + m[2][2]*v.z + m[2][3];
            return out;
        }
        void inverseToC(Matrix34& out) const { out = *this; }
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
    typedef Vector3<f32> Vec3;
    typedef Vector2<f32> Vec2;
    typedef Quat<f32> Quatf;
    typedef Matrix34<f32> Matrix34f;
    typedef Matrix44<f32> Matrix44f;
    typedef Vector3<f32> Vector3f;
    typedef Vector2<f32> Vector2f;
}