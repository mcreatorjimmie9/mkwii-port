// GHIRDA Auto-Decompiled
// Address: 0x8059bfb8 (rel: 0x08971c)
// Size: 716 bytes, 179 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: calc__Q24Kart16KartWheelPhysicsFRCQ23EGG8Vector3fRCQ23EGG8Vector3f

void calc__Kart16KartWheelPhysics(EGG::Vector3f* a, EGG::Vector3f* b) {
    float f0 = *(float*)(8(r1)); // lfs
    *(float*)(0x7c(r27)) = f0; // stfs
    float f0 = *(float*)(0xc(r1)); // lfs
    *(float*)(0x80(r27)) = f0; // stfs
    float f0 = *(float*)(0x10(r1)); // lfs
    *(float*)(0x84(r27)) = f0; // stfs
    uint32_t r12 = *(uint32_t*)(0(r27)); // lwz
    uint32_t r12 = *(uint32_t*)(0x14(r12)); // lwz
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    r4 = 0x0; // li
    // Call 0x80566624
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    r4 = 0x1; // li
    // Call 0x80566624
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    r4 = 0x2; // li
    // Call 0x80566624
    uint32_t r3 = *(uint32_t*)(0x20(r20)); // lwz
    r4 = 0x3; // li
    // Call 0x80566624
    /* .word 0xe3e10078 */ // unknown instruction
    r11 = r1 + 0x70; // addi
    double f31 = *(double*)(0x70(r1)); // lfd
    // Call 0x80555bf4
    uint32_t r0 = *(uint32_t*)(0x84(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x80; // addi
    return;
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
    /* rlwinm. r0, r0, 0, 0xb, 0xb */
    /* beqlr  */
    goto 0x80561830; // b
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x14(r1)) = r0; // stw
    *(uint32_t*)(0xc(r1)) = r31; // stw
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    // Call 0x80566ecc
    uint32_t r12 = *(uint32_t*)(0(r30)); // lwz
    r3 = r30; // mr
    uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
    uint32_t r3 = *(uint32_t*)(0x10(r30)); // lwz
    // Call 0x8056909c
    uint32_t r3 = *(uint32_t*)(0x10(r30)); // lwz
    r4 = 0x0; // li
    // Call 0x80568284
    uint32_t r3 = *(uint32_t*)(0x10(r30)); // lwz
    // Call 0x80569104
    r31 = 0x0 << 16; // lis
    r4 = 0x1; // li
    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    // Call 0x805f8114
    uint32_t r3 = *(uint32_t*)(0x10(r30)); // lwz
    // Call 0x8056909c
    uint32_t r3 = *(uint32_t*)(0x10(r30)); // lwz
    r4 = 0x0; // li
    // Call 0x80568284
    uint32_t r3 = *(uint32_t*)(0x10(r30)); // lwz
    // Call 0x80569104
    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
    r4 = 0x0; // li
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    // Call 0x805f8114
    uint32_t r3 = *(uint32_t*)(0x10(r30)); // lwz
    r4 = 0x0; // li
    // Call 0x8056819c
    // Call 0x80566ef8
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(8(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x10; // addi
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    r5 = 0x0 << 16; // lis
    *(uint32_t*)(0x14(r1)) = r0; // stw
    r5 = r5 + 0x0; // addi
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r4; // mr
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    *(uint32_t*)(0(r3)) = r5; // stw
    r3 = r3 + 0x9c; // addi
    // Call 0x80555bf4
    // Compare r31, 0
    if (/* ne */) goto 0x8059c14c; // bne
    r3 = 0x1b4; // li
    // Call 0x80555bf4
    // Compare r3, 0
    if (/* eq */) goto 0x8059c174; // beq
    // Call 0x805b0434
    goto 0x8059c174; // b
    r3 = 0x1b4; // li
    // Call 0x80555bf4
    // Compare r3, 0
    r31 = r3; // mr
    if (/* eq */) goto 0x8059c170; // beq
    // Call 0x805b0434
    r3 = 0x0 << 16; // lis
    r3 = r3 + 0x0; // addi
    *(uint32_t*)(0(r31)) = r3; // stw
    r3 = r31; // mr
    *(uint32_t*)(4(r30)) = r3; // stw
    r3 = 0x9c; // li
    // Call 0x80555bf4
    // Compare r3, 0
    if (/* eq */) goto 0x8059c18c; // beq
    // Call 0x805b3bf8
    r4 = 0x0 << 16; // lis
    *(uint32_t*)(8(r30)) = r3; // stw
    float f0 = *(float*)(0(r4)); // lfs
    r3 = r30; // mr
    *(float*)(0xfc(r30)) = f0; // stfs
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(8(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x10; // addi
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    // Compare r3, 0
    *(uint32_t*)(0x14(r1)) = r0; // stw
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    if (/* eq */) goto 0x8059c1e0; // beq
    // Compare r4, 0
    if (/* le */) goto 0x8059c1e0; // ble
    // Call 0x80555bf4
    r3 = r31; // mr
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x10; // addi
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    // Compare r3, 0
    *(uint32_t*)(0x14(r1)) = r0; // stw
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    if (/* eq */) goto 0x8059c220; // beq
    // Compare r4, 0
    if (/* le */) goto 0x8059c220; // ble
    // Call 0x80555bf4
    r3 = r31; // mr
    uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x10; // addi
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    // Compare r3, 0
    *(uint32_t*)(0x14(r1)) = r0; // stw
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r4; // mr
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    if (/* eq */) goto 0x8059c2ac; // beq
    uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
    r4 = 0x0 << 16; // lis
    r4 = r4 + 0x0; // addi
    *(uint32_t*)(0(r3)) = r4; // stw
    // Compare r0, 0
    if (/* eq */) goto 0x8059c28c; // beq
    r3 = r0; // mr
    r4 = 0x1; // li
    uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r12 = *(uint32_t*)(8(r12)); // lwz
}
