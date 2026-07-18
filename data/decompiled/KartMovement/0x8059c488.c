// GHIRDA Auto-Decompiled
// Address: 0x8059c488 (rel: 0x089bec)
// Size: 140 bytes, 35 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: init__Q24Kart14KartSusPhysicsFv

void init__Kart14KartSusPhysics(void) {
    *(float*)(0xf8(r29)) = f0; // stfs
    uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
    uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x20; // addi
    return;
    *(uint32_t*)(-0x60(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x64(r1)) = r0; // stw
    *(double*)(0x50(r1)) = f31; // stfd
    /* xscmpgtdp vs31, f1, f0 */ // 0xf3e10058
    *(double*)(0x40(r1)) = f30; // stfd
    /* xsmaddmsp f30, f1, f0 */ // 0xf3c10048
    *(double*)(0x30(r1)) = f29; // stfd
    /* xxsel vs29, vs1, vs0, v0 */ // 0xf3a10038
    f30 = f1; // fmr
    f31 = f2; // fmr
    *(uint32_t*)(0x2c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0x0; // addi
    *(uint32_t*)(0x28(r1)) = r30; // stw
    r30 = r5; // mr
    *(uint32_t*)(0x24(r1)) = r29; // stw
    r29 = r4; // mr
    *(uint32_t*)(0x20(r1)) = r28; // stw
    r28 = r3; // mr
    float f10 = *(float*)(0x40(r3)); // lfs
    float f0 = *(float*)(0x30(r3)); // lfs
    float f29 = *(float*)(0x34(r3)); // lfs
    float f13 = *(float*)(0x24(r3)); // lfs
    f7 = f10 * f0; // fmuls
    float f12 = *(float*)(0x38(r3)); // lfs
    f5 = f29 * f0; // fmuls
}
