#pragma once
#include "eggVector.hpp"
#include "eggQuat.hpp"

namespace EGG {

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

    void inverseToC(Matrix34& out) const {
        // Simplified: just copy (full inverse would be more complex)
        out = *this;
    }
};

template<typename T>
class Matrix44 {
public:
    T m[4][4];
    Matrix44() { for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) m[i][j] = (i == j) ? 1.0f : 0.0f; }
};

typedef Matrix34<f32> Matrix34f;
typedef Matrix44<f32> Matrix44f;

} // namespace EGG