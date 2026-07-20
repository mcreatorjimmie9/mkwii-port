// =============================================================================
// Phase 18: Linkage Test — Minimal smoke test
// Verifies that at least one symbol from each of the 14 GENESIS modules
// resolves correctly when linking against libmkwii-genesis.a
//
// Strategy: Declare one function per module with its mangled C++ name,
// take its address (no call needed), and print results.
// =============================================================================

#include <cstdio>

// Declare one function per module using its mangled name.
// These are resolved by the linker from libmkwii-genesis.a.

// Module 1:  Physics      — PlayerBoost::reset()
extern "C" void _ZN11PlayerBoost5resetEv();
// Module 2:  KartMovement — PlayerSub10_activateMega()
extern "C" void _Z24PlayerSub10_activateMegav();
// Module 3:  RaceEngine   — System::RaceConfig::getRacePlayerCount()
extern "C" unsigned char _ZN6System10RaceConfig18getRacePlayerCountEv();
// Module 4:  AIRace       — Enemy::AIDrift::startDrift(float)
extern "C" void _ZN5Enemy7AIDrift10startDriftEf(float);
// Module 5:  Collision    — PlayerSub18_checkItemCollision()
extern "C" bool _Z30PlayerSub18_checkItemCollisionv();
// Module 6:  ItemSystem   — ITEMHandler_construct()
extern "C" void _Z21ITEMHandler_constructv();
// Module 7:  AudioEngine  — nw4r::snd::SoundHandle::setLooping(bool)
extern "C" void _ZN4nw4r3snd11SoundHandle10setLoopingEb(bool);
// Module 8:  Rendering    — FogSys_Init(FogSystem*)
extern "C" void _Z11FogSys_InitP9FogSystem(void*);
// Module 9:  Scene        — Scene::SceneDirector::getInstance()
extern "C" void* _ZN5Scene13SceneDirector11getInstanceEv();
// Module 10: UI           — UI::UIManager::getInstance()
extern "C" void* _ZN2UI9UIManager11getInstanceEv();
// Module 11: Runtime      — EGG::Core::fn_80480050(int, int)
extern "C" int _ZN3EGG4Core11fn_80480050Eii(int, int);
// Module 12: Network      — RKNetConnectionManager::getInstance()
extern "C" void* _ZN22RKNetConnectionManager11getInstanceEv();
// Module 13: SaveData     — Save::SaveManager::getInstance()
extern "C" void* _ZN4Save11SaveManager11getInstanceEv();
// Module 14: Field        — Field::KCollision::aabbOverlap(...)
extern "C" bool _ZN5Field10KCollision11aabbOverlapEPKfS2_S2_S2_(const float*, const float*, const float*, const float*);

// =============================================================================
// Test — take address of each symbol to force linker resolution
// =============================================================================
int main() {
    int passed = 0;
    const int total = 14;

    // Taking the address forces the linker to resolve the symbol.
    // We don't call the functions (they'd crash without proper setup).
    volatile auto p1  = (void*)&_ZN11PlayerBoost5resetEv;
    volatile auto p2  = (void*)&_Z24PlayerSub10_activateMegav;
    volatile auto p3  = (void*)&_ZN6System10RaceConfig18getRacePlayerCountEv;
    volatile auto p4  = (void*)&_ZN5Enemy7AIDrift10startDriftEf;
    volatile auto p5  = (void*)&_Z30PlayerSub18_checkItemCollisionv;
    volatile auto p6  = (void*)&_Z21ITEMHandler_constructv;
    volatile auto p7  = (void*)&_ZN4nw4r3snd11SoundHandle10setLoopingEb;
    volatile auto p8  = (void*)&_Z11FogSys_InitP9FogSystem;
    volatile auto p9  = (void*)&_ZN5Scene13SceneDirector11getInstanceEv;
    volatile auto p10 = (void*)&_ZN2UI9UIManager11getInstanceEv;
    volatile auto p11 = (void*)&_ZN3EGG4Core11fn_80480050Eii;
    volatile auto p12 = (void*)&_ZN22RKNetConnectionManager11getInstanceEv;
    volatile auto p13 = (void*)&_ZN4Save11SaveManager11getInstanceEv;
    volatile auto p14 = (void*)&_ZN5Field10KCollision11aabbOverlapEPKfS2_S2_S2_;

    // If we got here, ALL symbols resolved — the linker succeeded!
    printf("Linkage test PASSED — all 14 modules resolved:\n");
    printf("  1.  Physics      @ %p\n", (void*)p1);
    printf("  2.  KartMovement @ %p\n", (void*)p2);
    printf("  3.  RaceEngine   @ %p\n", (void*)p3);
    printf("  4.  AIRace       @ %p\n", (void*)p4);
    printf("  5.  Collision    @ %p\n", (void*)p5);
    printf("  6.  ItemSystem   @ %p\n", (void*)p6);
    printf("  7.  AudioEngine  @ %p\n", (void*)p7);
    printf("  8.  Rendering    @ %p\n", (void*)p8);
    printf("  9.  Scene        @ %p\n", (void*)p9);
    printf("  10. UI           @ %p\n", (void*)p10);
    printf("  11. Runtime      @ %p\n", (void*)p11);
    printf("  12. Network      @ %p\n", (void*)p12);
    printf("  13. SaveData     @ %p\n", (void*)p13);
    printf("  14. Field        @ %p\n", (void*)p14);
    printf("\nAll 14/14 modules verified.\n");
    return 0;
}