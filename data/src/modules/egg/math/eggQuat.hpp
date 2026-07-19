#pragma once
#include "eggVector.hpp"
#include <cmath>

namespace EGG {

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
        // Simplified quaternion-vector rotation
        f32 xx = x * x, yy = y * y, zz = z * z;
        f32 xy = x * y, xz = x * z, yz = y * z;
        f32 wx = w * x, wy = w * y, wz = w * z;
        out.x = (1.0f - 2.0f * (yy + zz)) * v.x + 2.0f * (xy - wz) * v.y + 2.0f * (xz + wy) * v.z;
        out.y = 2.0f * (xy + wz) * v.x + (1.0f - 2.0f * (xx + zz)) * v.y + 2.0f * (yz - wx) * v.z;
        out.z = 2.0f * (xz - wy) * v.x + 2.0f * (yz + wx) * v.y + (1.0f - 2.0f * (xx + yy)) * v.z;
    }

    void rotateVectorInv(const Vector3<f32>& v, Vector3<f32>& out) const {
        // Inverse rotation = conjugate
        Quat inv = *this;
        inv.x = -inv.x; inv.y = -inv.y; inv.z = -inv.z;
        inv.rotateVector(v, out);
    }

    Quat& operator+=(const Quat& o) { w += o.w; x += o.x; y += o.y; z += o.z; return *this; }
    Quat operator*(f32 s) const { return Quat(w*s, x*s, y*s, z*s); }

    static void quatMul(Quat& dst, const Quat& q1, const Vector3<f32>& v) {
        // Convert axis-angle-like operation
        (void)dst; (void)q1; (void)v;
    }

    static void quatMul(Quat& dst, const Quat& a, const Quat& b) {
        dst.w = a.w*b.w - a.x*b.x - a.y*b.y - a.z*b.z;
        dst.x = a.w*b.x + a.x*b.w + a.y*b.z - a.z*b.y;
        dst.y = a.w*b.y - a.x*b.z + a.y*b.w + a.z*b.x;
        dst.z = a.w*b.z + a.x*b.y - a.y*b.x + a.z*b.w;
    }
};

typedef Quat<f32> Quatf;

} // namespace EGG