// GHIRDA Auto-Decompiled
// Address: 0x8059aff0 (rel: 0x088754)
// Size: 72 bytes, 18 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: KartSus_ct

void KartSus_ct(void) {
    *(uint32_t*)(0xc(r1)) = r4; // stw
    float f2 = *(float*)(8(r1)); // lfs
    /* stw r0, 0x10(r1) */
    float f1 = *(float*)(0xc(r1)); // lfs
    float f0 = *(float*)(0x10(r1)); // lfs
    *(float*)(0x2c(r1)) = f2; // stfs
    *(float*)(0x3c(r1)) = f1; // stfs
    *(float*)(0x4c(r1)) = f0; // stfs
    // Call 0x805914fc
    r4 = r3; // mr
    uint32_t r3 = *(uint32_t*)(0x7c(r30)); // lwz
    uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r12 = *(uint32_t*)(0x14(r12)); // lwz
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
    uint32_t r30 = *(uint32_t*)(0x7c(r30)); // lwz
    r31 = 0x0; // li
    uint32_t r3 = *(uint32_t*)(0x14(r30)); // lwz
}
