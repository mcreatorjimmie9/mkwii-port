// GHIRDA Auto-Decompiled
// Address: 0x80590ef4 (rel: 0x07e658)
// Size: 508 bytes, 127 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: PlayerKart_createTires

void PlayerKart_createTires(void) {
    /* bnelr  */
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x24(r3)); // lwz
    // Compare r3, 0
    /* beqlr  */
    uint16_t r0 = *(uint16_t*)(0x334(r3)); // lhz
    /* ori r0, r0, 0x40 */ // 0x60000040
    *(uint16_t*)(0x334(r3)) = r0; // sth
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x24(r3)); // lwz
    // Compare r3, 0
    /* beqlr  */
    uint16_t r0 = *(uint16_t*)(0x334(r3)); // lhz
    /* rlwinm r0, r0, 0, 0x1a, 0x18 */
    *(uint16_t*)(0x334(r3)) = r0; // sth
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x24(r3)); // lwz
    // Compare r3, 0
    /* beqlr  */
    uint16_t r0 = *(uint16_t*)(0x334(r3)); // lhz
    /* ori r0, r0, 8 */ // 0x60000008
    *(uint16_t*)(0x334(r3)) = r0; // sth
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x24(r3)); // lwz
    // Compare r3, 0
    /* beqlr  */
    uint16_t r0 = *(uint16_t*)(0x334(r3)); // lhz
    /* ori r0, r0, 0x18 */ // 0x60000018
    *(uint16_t*)(0x334(r3)) = r0; // sth
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x24(r3)); // lwz
    // Compare r3, 0
    /* beqlr  */
    uint16_t r0 = *(uint16_t*)(0x334(r3)); // lhz
    /* ori r0, r0, 0x108 */ // 0x60000108
    *(uint16_t*)(0x334(r3)) = r0; // sth
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x24(r3)); // lwz
    // Compare r3, 0
    /* beqlr  */
    goto 0x805a25f8; // b
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x24(r3)); // lwz
    // Compare r3, 0
    /* beqlr  */
    uint16_t r0 = *(uint16_t*)(0x334(r3)); // lhz
    /* ori r0, r0, 0x400 */ // 0x60000400
    *(uint16_t*)(0x334(r3)) = r0; // sth
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x54(r3)); // lwz
    goto 0x8056d300; // b
    *(uint32_t*)(-0x30(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    r12 = 0x0 << 16; // lis
    *(uint32_t*)(0x34(r1)) = r0; // stw
    r12 = r12 + 0x0; // addi
    *(uint32_t*)(0x2c(r1)) = r31; // stw
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x24(r3)); // lwz
    // Compare r3, 0
    if (/* eq */) goto 0x80591058; // beq
    r5 = r12 + 0x8; // addi
    r6 = r12 + 0x14; // addi
    uint32_t r11 = *(uint32_t*)(8(r12)); // lwz
    /* rlwinm r31, r4, 2, 0x16, 0x1d */
    uint32_t r10 = *(uint32_t*)(4(r5)); // lwz
    r4 = r1 + 0x14; // addi
    uint32_t r9 = *(uint32_t*)(8(r5)); // lwz
    r5 = r1 + 0x8; // addi
    uint32_t r8 = *(uint32_t*)(0x14(r12)); // lwz
    uint32_t r7 = *(uint32_t*)(4(r6)); // lwz
    uint32_t r0 = *(uint32_t*)(8(r6)); // lwz
    *(uint32_t*)(0x14(r1)) = r11; // stw
    float f1 = *(float*)(4(r12)); // lfs
    *(uint32_t*)(0x18(r1)) = r10; // stw
    *(uint32_t*)(0x1c(r1)) = r9; // stw
    *(uint32_t*)(8(r1)) = r8; // stw
    uint32_t r4 = *(uint32_t*)(r4, r31); // lwzx
    *(uint32_t*)(0xc(r1)) = r7; // stw
    *(uint32_t*)(0x10(r1)) = r0; // stw
    uint32_t r5 = *(uint32_t*)(r5, r31); // lwzx
    // Call 0x805a22e4
    uint32_t r0 = *(uint32_t*)(0x34(r1)); // lwz
    uint32_t r31 = *(uint32_t*)(0x2c(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x30; // addi
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x54(r3)); // lwz
    goto 0x8056d324; // b
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x54(r3)); // lwz
    goto 0x8056d5e0; // b
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(8(r3)); // lwz
    goto 0x8056e45c; // b
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    r0 = r5; // mr
    r7 = r6; // mr
    r5 = r4; // mr
    uint32_t r3 = *(uint32_t*)(8(r3)); // lwz
    r6 = r0; // mr
    r4 = 0x9; // li
    goto 0x8056e570; // b
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x54(r3)); // lwz
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x54(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x14(r3)); // lwz
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x58(r3)); // lwz
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x58(r3)); // lwz
    return;
    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r3 = *(uint32_t*)(0x5c(r3)); // lwz
    return;
}
