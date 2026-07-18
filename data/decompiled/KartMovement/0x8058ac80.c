// GHIRDA Auto-Decompiled
// Address: 0x8058ac80 (rel: 0x0783e4)
// Size: 200 bytes, 50 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: PlayerSub10Bike_tryStartWheelie

void PlayerSub10Bike_tryStartWheelie(void) {
    f0 = f1 + f0; // fadds
    *(float*)(4(r31)) = f0; // stfs
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x10; // addi
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    r6 = r4; // mr
    r7 = r5; // mr
    *(uint32_t*)(0x14(r1)) = r0; // stw
    r4 = 0x4; // li
    r5 = 0xf; // li
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    r3 = r3 + 0x4; // addi
    // Call 0x8052f248
    r4 = 0x0 << 16; // lis
    float f1 = *(float*)(4(r31)); // lfs
    float f0 = *(float*)(0(r4)); // lfs
    f0 = f1 + f0; // fadds
    *(float*)(4(r31)) = f0; // stfs
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x10; // addi
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    r6 = r4; // mr
    r7 = r5; // mr
    *(uint32_t*)(0x14(r1)) = r0; // stw
    r4 = 0x4; // li
    r5 = 0xf; // li
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    r3 = r3 + 0x4; // addi
    // Call 0x8052f248
    r4 = 0x0 << 16; // lis
    float f1 = *(float*)(4(r31)); // lfs
    float f0 = *(float*)(0(r4)); // lfs
    f0 = f1 + f0; // fadds
    *(float*)(4(r31)) = f0; // stfs
    /* lwz r31, 0xc(r1) */
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */
    // Restore stack
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
}
