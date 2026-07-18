#pragma once
// Common header for MKWii PC port — include this everywhere
#include <types.h>
#include <EGG/math.h>

// Bring EGG types into global namespace (matching original Wii code style)
using EGG::Vec3;
using EGG::Vec2;
using EGG::Vec3f;
using EGG::Vec2f;
using EGG::Quat;
using EGG::Matrix34;
using EGG::Matrix44;

// Forward declarations for common game types
class KartMove;
class KartBody;
class KartPhysics;
class KartDynamics;
class KartWheelPhysics;
class KartSusPhysics;
class ItemHandler;
class PlayerBoost;
class PlayerTrick;
class PlayerSub10;
class PlayerSub10Bike;
class RaceManager;
class RaceConfig;
class Raceinfo;
class ItemHolder;
class ITEMHandler;
class ItemObj;
class AI;
class AIControlBase;

// Common constants
static const f32 GRAVITY = 9.81f;
static const u32 MAX_PLAYERS = 12;
static const u32 NUM_ITEM_SLOTS = 3;
