#pragma once
// KartObjectProxy.hpp — Kart entity proxy
#include "../../rk_types.h"
#include "../../EGG/math.h"

class KartObjectProxy {
public:
    EGG::Vector3f position;
    EGG::Quaternion rotation;
    u32 kartId;
    u32 playerId;
};
