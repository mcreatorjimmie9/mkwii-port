#pragma once
// KPadDirector.hpp — Controller/director input management shim
#include "../rk_types.h"
#include "../EGG/math.h"

class KPadDirector {
public:
    static KPadDirector* getInstance();
    void update();
    int getPlayerCount() const;
};
