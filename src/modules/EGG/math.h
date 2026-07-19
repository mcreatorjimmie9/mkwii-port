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
};

typedef TVector2<f32> Vector2f;
typedef TVector2<s32> Vector2i;

template<typename T>
class TVector3 {
public:
    T x, y, z;
    TVector3() : x(0), y(0), z(0) {}
    TVector3(T _x, T _y, T _z) : x(_x), y(_y), z(_z) {}
};

typedef TVector3<f32> Vector3f;
typedef TVector3<s32> Vector3i;

class Quaternion {
public:
    f32 x, y, z, w;
    Quaternion() : x(0), y(0), z(0), w(1) {}
};

class Matrix44f {
public:
    f32 m[4][4];
    Matrix44f() { std::memset(m, 0, sizeof(m)); m[0][0] = m[1][1] = m[2][2] = m[3][3] = 1.0f; }
};

static const f32 PI = 3.14159265358979323846f;
static const f32 DEG_TO_RAD = PI / 180.0f;
static const f32 RAD_TO_DEG = 180.0f / PI;

inline f32 DegToRad(f32 deg) { return deg * DEG_TO_RAD; }
inline f32 RadToDeg(f32 rad) { return rad * RAD_TO_DEG; }

} // namespace EGG

typedef EGG::Vector3f Vec;
typedef EGG::Vector2f Vec2;
typedef EGG::Quaternion Quat;
