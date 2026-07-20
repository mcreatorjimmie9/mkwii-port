// =============================================================================
// Phase 18: Linkage Test Stubs
// Provides all external symbols referenced by libmkwii-genesis.a that are
// NOT provided by the standard C/C++ runtime libraries.
// =============================================================================

#include <cstdint>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <new>

// ---------------------------------------------------------------------------
// Forward-declare EGG types used in signatures below
// ---------------------------------------------------------------------------
namespace EGG { class Heap; }

// ---------------------------------------------------------------------------
// Wii SDK OS functions (shims)
// ---------------------------------------------------------------------------
struct OSThread;
struct OSMessageQueue;

extern "C" {

void* OSCreateThread(OSThread*, void*(*)(void*), void*, void*, unsigned int, int, unsigned short) { return nullptr; }
void  OSCancelThread(OSThread*) {}
void  OSDetachThread(OSThread*) {}
void* OSGetMEM1ArenaHi() { return (void*)0x81800000; }
void* OSGetMEM1ArenaLo() { return (void*)0x80004000; }
void* OSGetMEM2ArenaHi() { return (void*)0x90000000; }
void* OSGetMEM2ArenaLo() { return (void*)0x81800000; }
void* OSInitAlloc(void* lo, void* hi, int maxHeaps) { return lo; }
void  OSInitMessageQueue(OSMessageQueue*, void**, int) {}
int   OSIsThreadTerminated(OSThread*) { return 1; }
void  OSJoinThread(OSThread*, void**) {}
void  OSResumeThread(OSThread*) {}
void  OSSetMEM1ArenaHi(void*) {}
void  OSSetMEM1ArenaLo(void*) {}
void  OSSetMEM2ArenaHi(void*) {}
void  OSSetMEM2ArenaLo(void*) {}

// ---------------------------------------------------------------------------
// memfill — custom memory fill used by the game
// ---------------------------------------------------------------------------
void memfill(void* dst, int value, size_t size) {
    memset(dst, value, size);
}

// ---------------------------------------------------------------------------
// RKSystem globals
// ---------------------------------------------------------------------------
float RKSystem_ex = 0.0f;
float RKSystem_ey = 0.0f;

// ---------------------------------------------------------------------------
// DOL address stubs (functions from the original DOL not yet decompiled)
// These are referenced by decompiled code that calls into un-decompiled areas.
// ---------------------------------------------------------------------------
#define STUB_ADDR(name) extern "C" void name() { }

// 0x8052xxxx range
STUB_ADDR(sub_0x80520c4c)
STUB_ADDR(sub_0x80520d50)
STUB_ADDR(sub_0x80520e50)

// 0x8053xxxx range
STUB_ADDR(sub_0x80537f4c)
STUB_ADDR(sub_0x80537ff8)

// 0x8055xxxx range
STUB_ADDR(sub_0x80555bf4)

// 0x8056xxxx range
STUB_ADDR(sub_0x8056c748)
STUB_ADDR(sub_0x8056cad0)
STUB_ADDR(sub_0x8056d2bc)
STUB_ADDR(sub_0x8056de6c)
STUB_ADDR(sub_0x8056e6d4)

// 0x8057xxxx range
STUB_ADDR(sub_0x80576b3c)
STUB_ADDR(sub_0x80576c54)
STUB_ADDR(sub_0x80576d8c)
STUB_ADDR(sub_0x80577d7c)

// 0x8058xxxx range
STUB_ADDR(sub_0x805837cc)
STUB_ADDR(sub_0x80584084)
STUB_ADDR(sub_0x80584688)
STUB_ADDR(sub_0x8058989c)
STUB_ADDR(sub_0x80589fa4)
STUB_ADDR(sub_0x8058b1d8)
STUB_ADDR(sub_0x8058b4d4)
STUB_ADDR(sub_0x8058ba38)
STUB_ADDR(sub_0x8058be60)
STUB_ADDR(sub_0x8058ca68)
STUB_ADDR(sub_0x8058d40c)
STUB_ADDR(sub_0x8058d4e0)
STUB_ADDR(sub_0x8058d5b0)
STUB_ADDR(sub_0x8058e844)

// 0x8059xxxx range
STUB_ADDR(sub_0x80590178)
STUB_ADDR(sub_0x805901cc)
STUB_ADDR(sub_0x8059024c)
STUB_ADDR(sub_0x8059040c)
STUB_ADDR(sub_0x80590434)
STUB_ADDR(sub_0x805907a4)
STUB_ADDR(sub_0x805907bc)
STUB_ADDR(sub_0x805907e0)
STUB_ADDR(sub_0x80590a9c)
STUB_ADDR(sub_0x80590adc)
STUB_ADDR(sub_0x80590e98)
STUB_ADDR(sub_0x80591090)
STUB_ADDR(sub_0x80591498)
STUB_ADDR(sub_0x805914a8)
STUB_ADDR(sub_0x80597974)
STUB_ADDR(sub_0x80592e24)
STUB_ADDR(sub_0x8059cfe0)

// 0x805bxxxx range
STUB_ADDR(sub_0x805b42c0)
STUB_ADDR(sub_0x805b479c)
STUB_ADDR(sub_0x805b4b24)
STUB_ADDR(sub_0x805b6c90)
STUB_ADDR(sub_0x805b6ea4)

// 0x8065xxxx range
STUB_ADDR(sub_0x80656bfc)

// 0x807x/808x range
STUB_ADDR(sub_0x80789eec)
STUB_ADDR(sub_0x807bf168)
STUB_ADDR(sub_0x807c055c)
STUB_ADDR(sub_0x807c5ad0)
STUB_ADDR(sub_0x80811b84)
STUB_ADDR(sub_0x808677c4)

// Relative address stubs (from .rel segment)
STUB_ADDR(sub_4eecc)
STUB_ADDR(sub_52114)
STUB_ADDR(sub_52168)
STUB_ADDR(sub_524d0)
STUB_ADDR(sub_5322c)
STUB_ADDR(sub_53358)
STUB_ADDR(sub_53544)
STUB_ADDR(sub_536c0)
STUB_ADDR(sub_56338)
STUB_ADDR(sub_5646c)
STUB_ADDR(sub_565a0)
STUB_ADDR(sub_56a80)

// ---------------------------------------------------------------------------
// Named semantic stubs (functions from un-decompiled modules)
// ---------------------------------------------------------------------------

// Audio stubs
void audio_Play3D(int, float, float, float, int) {}
void audio_Play3DEx(int, float, float, float, int, float) {}
void audio_Stop3D(int) {}
void audio_Kill3D() {}

// Animation stubs
void anim3D_Init(void*, int) {}
void anim3D_Stop(int) {}

// Effect manager stubs
void effectMgr_65E0(void*, float, float, float) {}
void effectMgr_962A8(void*, float) {}

// Course object function pointers
void* courseObj_859398 = nullptr;
void* courseObj_DC98 = nullptr;
void* courseObj_E0F0 = nullptr;
void* courseObj_E308 = nullptr;
void* courseObj_E8C0 = nullptr;
void* courseObj_E908 = nullptr;
void* courseObj_F000 = nullptr;
void* courseObj_F03C = nullptr;

// Misc global stubs
void* sGlobalInstance = nullptr;
void* sRenderSettings = nullptr;
void* sCourseObjManager = nullptr;
void* fx_F726C = nullptr;
void* texAnim_B9838 = nullptr;

// getCompetitionWrapper
void* getCompetitionWrapper() { return nullptr; }

// Physics/gameplay semantic stubs
void sub_clearInk(void*, int) {}
void sub_endDriftEffect(void*) {}
void sub_endSquishEffect(void*) {}
void sub_getBodyInfo(void*, float*, float*) {}
void* sub_getEffectGroup(void*) { return nullptr; }
void* sub_getEffectGroup2(void*) { return nullptr; }
void sub_getPhysicsInput(void*, void*) {}
void sub_getScale(void*, float*, float*) {}
void sub_getScaleAnim(void*, float*) {}
void sub_playBoostSound(void*, int) {}
void sub_playEffectSound(int, void*) {}
void sub_playItemSound(void*, int, int) {}
void sub_playMegaSound(void*) {}
void sub_playSoundId(int, int, int) {}
void sub_playStartBoostSound(void*, int) {}
void sub_setMegaScale(void*, float) {}
void sub_setScale(void*, float, float) {}
void sub_setSound2(void*, int, float, float, int) {}
void sub_setSoundAttr(void*, int, int, int) {}
void sub_startSquishEffect(void*, int) {}
void sub_startSquishSound(void*) {}
void sub_triggerSound(int, void*, int) {}
void sub_updateInvisibility(void*) {}
void sub_updateScaleAnim(void*, float) {}

} // extern "C"

// ---------------------------------------------------------------------------
// C++ namespace stubs — cross-module references
// ---------------------------------------------------------------------------

// --- Global-namespace PlayerSub10 (distinct from Kart::PlayerSub10) ---
class PlayerSub10_Global {
public:
    void activateStar() {}
    void applyInk(int) {}
    bool canHop() { return false; }
    void hop() {}
    void init(bool, bool) {}
    void setTurnParams() {}
    void updateTurn() {}
    void updateUpsWhileAirborne() {}
    void updateVehicleSpeed() {}
    PlayerSub10_Global() {}
    ~PlayerSub10_Global() {}
};
// The archive references these with global-namespace mangling
void _ZN11PlayerSub1012activateStarEv() {}
void _ZN11PlayerSub1013cancelWheelieEv() {}
void _ZN11PlayerSub1018updateVehicleSpeedEv() {}
// Provide constructors/destructors that the archive expects
// (These are in Physics/KartMovement namespace, but the Collision module
//  references them in global namespace)

// --- PlayerTrick::end() (global namespace version) ---
void _ZN11PlayerTrick3endEv() {}

// --- Kart namespace stubs that some modules expect but aren't defined ---
namespace Kart {
    void PlayerSub10_activateStar() {}
    void PlayerSub10_cancelWheelie() {}
}

// --- KPadDirector::spInstance ---
namespace System { class KPadDirector; }
namespace System { void* KPadDirector_spInstance = nullptr; }
void* _ZN12KPadDirector10spInstanceE = nullptr;

// --- System::RaceConfig::spInstance (already defined in the library, remove duplicate) ---
// void* _ZN6System10RaceConfig10spInstanceE = nullptr;

// --- System::RaceManager::spInstance ---
void* _ZN6System11RaceManager10spInstanceE = nullptr;

// --- System::ResourceManager::spInstance ---
void* _ZN6System15ResourceManager10spInstanceE = nullptr;

// --- System::InitScene::spInstance ---
void* _ZN6System9InitScene10spInstanceE = nullptr;

// --- System::ptr_Nwc24Manager ---
void* _ZN6System16ptr_Nwc24ManagerE = nullptr;

// --- Kart::RKSystem_ey (static member) ---
namespace Kart { float RKSystem_ey = 0.0f; }

// --- Kart::isPlayerOnlineLocal / isPlayerOnlineRemote ---
bool _ZN4Kart19isPlayerOnlineLocalE = false;
bool _ZN4Kart20isPlayerOnlineRemoteE = false;

// --- UI::MenuPage static tables ---
void* _ZN2UI8MenuPage12sPageIdTableE = nullptr;
void* _ZN2UI8MenuPage14sPageTypeTableE = nullptr;

// --- UI stubs (use asm labels to force exact mangled names) ---
extern "C" {
// UI::Layout::onPaneEvent(unsigned int) — virtual, vtable slot
void _ZN2UI6Layout11onPaneEventEj(unsigned int) __attribute__((used));
void _ZN2UI6Layout11onPaneEventEj(unsigned int) {}

// UI::LayoutLoader::setAnimationFrame(void*, unsigned int, unsigned int) — static
void _ZN2UI12LayoutLoader17setAnimationFrameEPvjj(void*, unsigned int, unsigned int) __attribute__((used));
void _ZN2UI12LayoutLoader17setAnimationFrameEPvjj(void*, unsigned int, unsigned int) {}

// UI::PaneWrapper::onTransitionComplete(int) — virtual
void _ZN2UI11PaneWrapper20onTransitionCompleteEi(int) __attribute__((used));
void _ZN2UI11PaneWrapper20onTransitionCompleteEi(int) {}

// UI::PaneWrapper::setupGroupPane(unsigned int, unsigned int, unsigned int) — virtual
void _ZN2UI11PaneWrapper14setupGroupPaneEjjj(unsigned int, unsigned int, unsigned int) __attribute__((used));
void _ZN2UI11PaneWrapper14setupGroupPaneEjjj(unsigned int, unsigned int, unsigned int) {}

// UI::PageManager::createPageByType(unsigned int, bool)
void* _ZN2UI11PageManager16createPageByTypeEjb(unsigned int, bool) __attribute__((used));
void* _ZN2UI11PageManager16createPageByTypeEjb(unsigned int j, bool b) { return nullptr; }
}

// --- std::nothrow ---
std::nothrow_t _ZSt7nothrow{};

// ---------------------------------------------------------------------------
// Kart::KartDynamics::stabilize() and addForce() — referenced but might not
// be defined in objects that get pulled in
// ---------------------------------------------------------------------------
namespace Kart {
    class TVector3f { float v[3]; };
    class KartDynamics {
    public:
        void addForce(const TVector3f&) {}
        void stabilize() {}
    };
}

// ---------------------------------------------------------------------------
// Kart::KartCollideArea constructor ---
namespace Kart {
    class KartCollideArea {
    public:
        KartCollideArea() {}
    };
    void _ZN4Kart15KartCollideAreaC1Ev() {}
}

// ---------------------------------------------------------------------------
// License constructor/destructor ---
class License_Stub {
public:
    License_Stub() {}
    ~License_Stub() {}
};

// ---------------------------------------------------------------------------
// RecordData (global namespace, used by SaveData module) ---
// These are defined in the archive, but with specific mangling. The Collision
// module's PlayerSub10 references them.