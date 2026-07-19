#pragma once
// KPadDirector.hpp — Controller/director input management shim
#include "../rk_types.h"
#include "../EGG/math.h"

class Controller {
public:
    virtual ~Controller() {}
    s32 getControllerId() const { return 0; }
    u32 getType() const { return 0; }
    bool driftIsAuto;
};

enum {
    CONTROLLER_TYPE_UNKNOWN = 0,
    CONTROLLER_TYPE_WII_WHEEL = 1,
};

struct KPadPlayerInput {
    Controller* controller;
};

class KPadDirector {
public:
    static KPadDirector* spInstance;
    static KPadDirector* getInstance();
    void update();
    int getPlayerCount() const;

    KPadPlayerInput playerInputs[4];
    void setGhostController(s8 idx, u16* inputs, bool driftIsAuto) {
        (void)idx; (void)inputs; (void)driftIsAuto;
    }
};