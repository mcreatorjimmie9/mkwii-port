// GHIRDA Auto-Decompiled
// Address: 0x8059648c (rel: 0x083bf0)
// Size: 240 bytes, 60 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: __ct__Q24Kart15KartCollideAreaFv

void Kart15KartCollideArea(void) {
    r1 = r1 + 0x10; // addi
    return;
    uint32_t r0 = *(uint32_t*)(0x18(r3)); // lwz
    *(uint32_t*)(0x30(r4)) = r0; // stw
    uint32_t r0 = *(uint32_t*)(0x1c(r3)); // lwz
    *(uint32_t*)(4(r4)) = r0; // stw
    uint32_t r0 = *(uint32_t*)(0x10(r3)); // lwz
    *(uint32_t*)(0x28(r4)) = r0; // stw
    uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
    *(uint32_t*)(0x2c(r4)) = r0; // stw
    uint32_t r0 = *(uint32_t*)(0x20(r3)); // lwz
    *(uint32_t*)(0x38(r4)) = r0; // stw
    return;
    *(uint32_t*)(-0x70(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x74(r1)) = r0; // stw
    *(double*)(0x60(r1)) = f31; // stfd
    /* .word 0xf3e10068 */ // unknown instruction
    *(uint32_t*)(0x5c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0x0; // addi
    *(uint32_t*)(0x58(r1)) = r30; // stw
    *(uint32_t*)(0x54(r1)) = r29; // stw
    r29 = r3; // mr
    *(uint32_t*)(0x50(r1)) = r28; // stw
    uint32_t r4 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r4)); // lwz
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */
    if (/* eq */) goto 0x8059650c; // beq
    // Call 0x8059148c
    // Call 0x805899cc
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */
    if (/* eq */) goto 0x80596570; // beq
    r3 = r29; // mr
    // Call 0x805903ec
    uint32_t r3 = *(uint32_t*)(8(r3)); // lwz
    // Call 0x805b3c6c
    r28 = 0x0; // li
    goto 0x80596550; // b
    r3 = r29; // mr
    r4 = r28; // mr
    // Call 0x80590774
    uint32_t r3 = *(uint32_t*)(0x1c(r3)); // lwz
    // Call 0x805b3c6c
    r28 = r28 + 0x1; // addi
    r3 = r29; // mr
    // Call 0x8059032c
    /* clrlwi r0, r3, 0x10 */ // mask lower bits
    // Compare r28, r0
    if (/* lt */) goto 0x80596538; // blt
    r3 = r29; // mr
    // Call 0x805907bc
    // Call 0x805849cc
    uint32_t r3 = *(uint32_t*)(0x1c(r29)); // lwz
    // Call 0x8059478c
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
}
