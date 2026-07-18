// GHIRDA Auto-Decompiled
// Address: 0x8059cf2c (rel: 0x08a690)
// Size: 108 bytes, 27 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: KartTire_ct

void KartTire_ct(void) {
    *(float*)(0xd0(r3)) = f1; // stfs
    *(float*)(0xd4(r3)) = f2; // stfs
    *(float*)(0xd8(r3)) = f3; // stfs
    *(float*)(0xdc(r3)) = f4; // stfs
    *(float*)(0xe0(r3)) = f5; // stfs
    *(float*)(0xe4(r3)) = f6; // stfs
    *(float*)(0xe8(r3)) = f7; // stfs
    *(float*)(0xec(r3)) = f8; // stfs
    return;
    *(uint32_t*)(-0x20(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x24(r1)) = r0; // stw
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    float f2 = *(float*)(0(r31)); // lfs
    *(uint32_t*)(0x18(r1)) = r30; // stw
    r30 = 0x0 << 16; // lis
    f3 = f2; // fmr
    float f1 = *(float*)(0(r30)); // lfs
    *(uint32_t*)(0x14(r1)) = r29; // stw
    f4 = f2; // fmr
    r29 = r3; // mr
    r3 = r3 + 0x24; // addi
    // Call 0x80555bf4
    float f2 = *(float*)(0(r31)); // lfs
    r3 = r29 + 0x54; // addi
    float f1 = *(float*)(0(r30)); // lfs
}
