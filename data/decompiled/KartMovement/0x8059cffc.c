// GHIRDA Auto-Decompiled
// Address: 0x8059cffc (rel: 0x08a760)
// Size: 84 bytes, 21 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: KartTire_createPhysics

void KartTire_createPhysics(void) {
    r30 = r6; // mr
    *(uint32_t*)(0x14(r1)) = r29; // stw
    r29 = r5; // mr
    *(uint32_t*)(0x10(r1)) = r28; // stw
    r28 = r4; // mr
    // Call 0x80555bf4
    // Compare r3, 0
    if (/* eq */) goto 0x8059d024; // beq
    r4 = r31; // mr
    // Call 0x8059c0fc
    r31 = 0x0 << 16; // lis
    uint32_t r4 = *(uint32_t*)(4(r28)); // lwz
    *(uint32_t*)(0(r31)) = r3; // stw
    r5 = r29; // mr
    r6 = r30; // mr
    r4 = r4 + 0x4; // addi
    uint32_t r3 = *(uint32_t*)(8(r3)); // lwz
    // Call 0x805b3dfc
    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
    r6 = 0x0; // li
    uint32_t r7 = *(uint32_t*)(4(r28)); // lwz
}
