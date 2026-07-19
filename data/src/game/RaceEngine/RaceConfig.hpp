#pragma once

// RaceConfig.hpp - Adapted from community decomp with address annotations
// Original: data/decompiled/existing/src/system/RaceConfig.hpp

#include <rk_types.h>
#include <host_system/ParameterFile.hpp>
#include <system/Competition.hpp>
#include <system/GhostFile.hpp>
#include <system/Mii.hpp>
#include <system/ResourceManager.hpp>
#include <system/KPadDirector.hpp>
#include <system/InitScene.hpp>
#include <system/Rating.hpp>
#include <rk_common.h>

#define __RACECONFIG_DEFINED__

namespace System {

#define STANDARD_KART_M ((VehicleId)0)
#define MARIO ((CharacterId)0)

enum CupId {
  MUSHROOM_CUP,
  FLOWER_CUP,
  STAR_CUP,
  SPECIAL_CUP,
  SHELL_CUP,
  BANANA_CUP,
  LEAF_CUP,
  LIGHTNING_CUP,
};

class RaceConfigEx {
public:
  inline RaceConfigEx() {}
};

class RaceConfig : public RaceConfigEx, public ParameterFile {
public:
  class Player {
  public:
    enum Type {
      TYPE_REAL_LOCAL,
      TYPE_CPU,
      TYPE_UNUSED,
      TYPE_GHOST,
      TYPE_REAL_ONLINE,
      TYPE_NONE,
    };

    Player();
    virtual ~Player();

    void appendParamFile(RaceConfig* raceConfig);
    // @addr 0x8052ffd8
    s32 computeGpRank() const;
    void reset(s8 pos);

    CharacterId getCharacter();
    Mii& getMii();
    const Type getPlayerType() const;

    BattleTeam getTeam();
    u8 getUnkPos();
    VehicleId getVehicle();

    void setCharacter(CharacterId character);
    // @addr 0x80533418
    void setMii(const Mii& mii);
    void setPlayerType(Type playerType);
    void setPrevFinishPos(s8 pos);
    void setUnkPos(s8 pos);
    void setVehicle(VehicleId vehicle);
    s8 getPlayerInputIdx() const { return mPlayerInputIdx; }

    u8 _04;
    s8 mLocalPlayerNum;
    s8 mPlayerInputIdx;
    VehicleId mVehicleId;
    CharacterId mCharacterId;
    Type mPlayerType;
    Mii mMii;
    BattleTeam mTeam;
    s32 mControllerId;
    u32 _d4;
    u16 mPreviousScore;
    u16 mGpScore;
    u16 _dc;
    s16 mGpRankScore;
    s16 mGpStarRankScore;
    u8 _e0;
    u8 mPrevFinishPos;
    u8 mFinishPos;
    Rating mRating;
    s8 _ec;
  };

  struct Settings {
    enum GameMode {
      GAMEMODE_GRAND_PRIX,
      GAMEMODE_VS_RACE,
      GAMEMODE_TIME_TRIAL,
      GAMEMODE_BATTLE,
      GAMEMODE_MISSION_TOURNAMENT,
      GAMEMODE_GHOST_RACE,
      GAMEMODE_UNKNOWN,
      GAMEMODE_PRIVATE_VS,
      GAMEMODE_PUBLIC_VS,
      GAMEMODE_PUBLIC_BATTLE,
      GAMEMODE_PRIVATE_BATTLE,
      GAMEMODE_AWARDS,
      GAMEMODE_CREDITS,
    };

    enum CameraMode {
      CAMERA_MODE_GAMEPLAY_NO_INTRO,
      CAMERA_MODE_REPLAY,
      CAMERA_MODE_TITLE_ONE_PLAYER,
      CAMERA_MODE_TITLE_TWO_PLAYER,
      CAMERA_MODE_TITLE_FOUR_PLAYER,
      CAMERA_MODE_GAMEPLAY_INTRO,
      CAMERA_MODE_LIVE_VIEW,
      CAMERA_MODE_GRAND_PRIX_WIN,
      CAMERA_MODE_SOLO_VS_WIN,
      CAMERA_MODE_TEAM_VS_WIN,
      CAMERA_MODE_BATTLE_WIN,
      CAMERA_MODE_UNK_11,
      CAMERA_MODE_LOSS,
    };

    enum ModeFlags {
      MODE_FLAG_MIRROR = 1,
      MODE_FLAG_TEAMS = 2,
      MODE_FLAG_COMPETITION = 4,
    };

    inline Settings& operator=(const Settings& other) {
      mCourseId = other.mCourseId;
      mEngineClass = other.mEngineClass;
      mGameMode = other.mGameMode;
      mCameraMode = other.mCameraMode;
      mBattleType = other.mBattleType;
      mCpuMode = other.mCpuMode;
      mItemMode = other.mItemMode;
      mHudPlayerIds[0] = other.mHudPlayerIds[0];
      mHudPlayerIds[1] = other.mHudPlayerIds[1];
      mHudPlayerIds[2] = other.mHudPlayerIds[2];
      mHudPlayerIds[3] = other.mHudPlayerIds[3];
      mCupId = other.mCupId;
      mRaceNumber = other.mRaceNumber;
      mLapCount = other.mLapCount;
      mModeFlags = other.mModeFlags;
      mSeed1 = other.mSeed1;
      mSeed2 = other.mSeed2;
      return *this;
    }

    CourseId mCourseId;
    u32 mEngineClass;

    u32 getEngineClass() const { return mEngineClass; }
    u32 getCourseId() const { return (u32)mCourseId; }
    GameMode mGameMode;
    CameraMode mCameraMode;
    u32 mBattleType;
    u32 mCpuMode;
    u32 mItemMode;
    s8 mHudPlayerIds[4];
    CupId mCupId;
    u8 mRaceNumber;
    u8 mLapCount;
    ModeFlags mModeFlags;
    u32 mSeed1;
    u32 mSeed2;
  };

  class Scenario {
  public:
    Scenario(RawGhostFile* ghost);
    virtual ~Scenario();

    // @addr 0x80532a94
    Scenario& copy(const Scenario& other);

    // @addr 0x805342cc
    void appendParamFile(RaceConfig* raceConfig);
    // @addr 0x80530b50
    void clear();
    // @addr 0x80531c70
    void computePlayerCounts(u8& playerCount, u8& hudCount,
                             u8& localPlayerCount);
    BattleTeam computeWinningTeam();
    // @addr 0x805316c8
    void copyPrevPositions();
    // @addr 0x80531ef4
    void initCompetitionSettings();
    // @addr 0x805319d0
    void initControllers(u8 controllerCount);
    // @addr 0x805313d8
    bool initGhost(u8 playerIdx, s8 playerInputIdx);
    // @addr 0x8053154c
    void initPlayers(u8 playerCount);
    // @addr 0x80532078
    void initRace(Scenario* scenario);
    // @addr 0x80531e0c
    void initRng();
    bool isTeamMode();
    // @addr 0x80531210
    void postInitControllers(Scenario* scenario);
    void resetPlayers();
    // @addr 0x80530c58
    u8 update();

    Settings::CameraMode getCameraMode();
    const Player& getPlayer(u8 idx) const;
    Player& getPlayer(u8 idx);
    inline const Player::Type getPlayerType(u8 idx) const { return mPlayers[idx].mPlayerType; }
    inline BattleTeam getPlayerTeam(u8 idx) { return mPlayers[idx].mTeam; }

    inline bool isOnline(Settings::GameMode mode) {
      bool ret = false;
      switch ((Settings::GameMode)(u32)mode) {
      case Settings::GAMEMODE_PRIVATE_VS:
      case Settings::GAMEMODE_PUBLIC_VS:
      case Settings::GAMEMODE_PUBLIC_BATTLE:
      case Settings::GAMEMODE_PRIVATE_BATTLE:
        ret = true;
      }
      return ret;
    }

    u8 mPlayerCount;
    u8 mHudCount;
    u8 mLocalPlayerCount;
    u8 mHudCount2;
    Player mPlayers[MAX_PLAYER_COUNT];
    Settings mSettings;
    CompetitionSettings mCompetitionSettings;
    RawGhostFile* mGhost;
  };

  // @addr 0x80532644
  RaceConfig();
  // @addr 0x80532520
  ~RaceConfig();

  // @addr 0x8053093c
  void clear();
  // @addr 0x80530228
  void init();
  // @addr 0x805327ac
  void initRace();
  bool isLiveView(u8 hudPlayerIdx);
  bool isTimeAttackReplay();
  void loadNextCourse();
  // @addr 0x805341cc
  u8 update();
  // @addr 0x80530d58
  s16 updateRating(u8 playerIdx);

  s8 getHudPlayerId(u8 playerIdx);
  s32 getLocalPlayerCount(u8 playerIdx);

  void setGhost(RawGhostFile* ghost);

  static const u8 getRacePlayerCount();
  // @addr 0x80532340
  static RaceConfig* createInstance();
  static void destroyInstance();

  static RaceConfig* spInstance;

  Scenario mRaceScenario;
  Scenario mMenuScenario;
  Scenario mAwardsScenario;
  RawGhostFile mGhosts[2];
};

} // namespace System