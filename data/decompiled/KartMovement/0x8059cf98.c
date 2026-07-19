// GHIRDA Auto-Decompiled
// Address: 0x8059cf98 (rel: 0x08a6fc)
// Size: 100 bytes, 25 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: KartTire_init

void KartTire_init(void) {
    f3 = f2; // fmr
    f4 = f2; // fmr
    // Call 0x80555bf4
    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
    uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
    uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x20; // addi
    return;
    r5 = 0x0 << 16; // lis
    r4 = 0x0 << 16; // lis
    r0 = 0x0; // li
    r3 = 0x0 << 16; // lis
    *(float*)(0(r5)) = f1; // stfs
    *(uint32_t*)(0(r4)) = r0; // stw
    *(uint16_t*)(0(r3)) = r0; // sth
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x24(r1)) = r0; // stw
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = r3; // mr
    r3 = 0x100; // li
    *(uint32_t*)(0x18(r1)) = r30; // stw
}
