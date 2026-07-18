// GHIRDA Auto-Decompiled
// Address: 0x805a1aa4 (rel: 0x08f208)
// Size: 188 bytes, 47 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: __ct__Q24Kart11KartPhysicsFb

void Kart11KartPhysicsFb(bool flag) {
    uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
    /* rlwinm. r0, r0, 0, 6, 6 */
    if (/* eq */) goto 0x805a1b54; // beq
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    float f0 = *(float*)(0(r31)); // lfs
    float f1 = *(float*)(0x88(r3)); // lfs
    f1 = fabsf(f1); // fabs
    /* .word 0xfc010040 */ // unknown instruction
    if (/* le */) goto 0x805a1b54; // ble
    uint32_t r5 = *(uint32_t*)(0x38(r24)); // lwz
    f2 = -f31; // fneg
    uint32_t r0 = *(uint32_t*)(0x3c(r24)); // lwz
    r3 = r1 + 0x78; // addi
    float f0 = *(float*)(0x60(r1)); // lfs
    r4 = r1 + 0x24; // addi
    *(uint32_t*)(0x24(r1)) = r5; // stw
    float f1 = *(float*)(0x64(r1)); // lfs
    f5 = f2 * f0; // fmuls
    *(uint32_t*)(0x28(r1)) = r0; // stw
    r5 = r1 + 0x60; // addi
    float f0 = *(float*)(0x68(r1)); // lfs
    f3 = f2 * f1; // fmuls
    uint32_t r0 = *(uint32_t*)(0x40(r24)); // lwz
    f1 = f2 * f0; // fmuls
    *(uint32_t*)(0x2c(r1)) = r0; // stw
    float f4 = *(float*)(0x24(r1)); // lfs
    float f2 = *(float*)(0x28(r1)); // lfs
    float f0 = *(float*)(0x2c(r1)); // lfs
    f4 = f4 + f5; // fadds
    f2 = f2 + f3; // fadds
    f0 = f0 + f1; // fadds
    *(float*)(0x24(r1)) = f4; // stfs
    *(float*)(0x28(r1)) = f2; // stfs
    *(float*)(0x2c(r1)) = f0; // stfs
    // Call 0x805aa8a8
    r3 = r25; // mr
    // Call 0x8059024c
    r4 = r3; // mr
    r3 = r1 + 0x78; // addi
    // Call 0x805aaa2c
    // Compare r3, 0
    if (/* eq */) goto 0x805a1b54; // beq
    r0 = 0x1; // li
    *(uint32_t*)(0x6c(r24)) = r0; // stw
    r3 = 0x20e8 << 16; // lis
    uint32_t r4 = *(uint32_t*)(8(r1)); // lwz
    r0 = r3 + 0xfff; // addi
}
