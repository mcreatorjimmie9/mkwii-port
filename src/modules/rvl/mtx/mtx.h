#pragma once
// Wii SDK matrix utilities — stub
#include <egg/math/eggVector.hpp>
#include <egg/math/eggMatrix.hpp>

// Already provided via BSP.hpp, just re-export
inline void VEC3Transform(EGG::Vector3f* out, const EGG::Matrix34f* mtx, const EGG::Vector3f* v);