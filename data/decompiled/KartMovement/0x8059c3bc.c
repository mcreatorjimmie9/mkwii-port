// GHIRDA Auto-Decompiled
// Address: 0x8059c3bc (rel: 0x089b20)
// Size: 128 bytes, 32 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: __ct__Q24Kart14KartSusPhysicsFUlQ24Kart13KartWheelTypel

void Kart14KartSusPhysics(uint idx, KartWheelType type, int param) {
    float f2 = *(float*)(0(r31)); // lfs
    r3 = r29 + 0x64; // addi
    float f1 = *(float*)(0(r30)); // lfs
    f3 = f2; // fmr
    f4 = f2; // fmr
    // Call 0x80555bf4
    float f2 = *(float*)(0(r31)); // lfs
    r3 = r29 + 0x74; // addi
    float f1 = *(float*)(0(r30)); // lfs
    f3 = f2; // fmr
    f4 = f2; // fmr
    // Call 0x80555bf4
    float f0 = *(float*)(0(r31)); // lfs
    r3 = r29 + 0x9c; // addi
    *(float*)(0x8c(r29)) = f0; // stfs
    *(float*)(0x88(r29)) = f0; // stfs
    *(float*)(0x84(r29)) = f0; // stfs
    *(float*)(0x98(r29)) = f0; // stfs
    *(float*)(0x94(r29)) = f0; // stfs
    *(float*)(0x90(r29)) = f0; // stfs
    // Call 0x80555bf4
    float f0 = *(float*)(0x9c(r29)); // lfs
    float f1 = *(float*)(0xac(r29)); // lfs
    float f2 = *(float*)(0xbc(r29)); // lfs
    float f3 = *(float*)(0xa0(r29)); // lfs
    float f4 = *(float*)(0xb0(r29)); // lfs
    float f5 = *(float*)(0xc0(r29)); // lfs
    float f6 = *(float*)(0xa4(r29)); // lfs
    float f7 = *(float*)(0xb4(r29)); // lfs
    float f8 = *(float*)(0xc4(r29)); // lfs
    *(float*)(0xcc(r29)) = f0; // stfs
    uint32_t r3 = *(uint32_t*)(4(r29)); // lwz
}
