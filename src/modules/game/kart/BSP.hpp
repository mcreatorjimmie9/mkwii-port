#pragma once
// BSP.hpp — Binary Space Partition for kart collision
#include "../../rk_types.h"
#include "../../EGG/math.h"

class BSPNode {
public:
    EGG::Vector3f normal;
    f32 distance;
    int planeIndex;
};
