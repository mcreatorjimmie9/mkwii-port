/* Function at 0x808E4060, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808E4060(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = r4 rlwinm 4; // rlwinm
    /* li r4, 1 */ // 0x808E4070
    *(0x1c + r1) = r31; // stw @ 0x808E4074
    r31 = r3 + r0; // 0x808E4078
    /* li r0, 0 */ // 0x808E407C
    *(0x18 + r1) = r30; // stw @ 0x808E4080
    *(0x14 + r1) = r29; // stw @ 0x808E4084
    *(0x10 + r1) = r28; // stw @ 0x808E4088
    r28 = r3;
    *(0x10 + r31) = r4; // stb @ 0x808E4090
    *(0x11 + r31) = r0; // stb @ 0x808E4094
    r0 = *(8 + r31); // lwz @ 0x808E4098
    if (==) goto 0x0x808e4104;
    /* li r29, 0 */ // 0x808E40A4
    /* b 0x808e40f4 */ // 0x808E40A8
    /* clrlwi r3, r29, 0x18 */ // 0x808E40AC
    r0 = *(8 + r31); // lwz @ 0x808E40B0
    /* mulli r30, r3, 0x2c */ // 0x808E40B4
    /* li r4, 0 */ // 0x808E40B8
    /* lwzx r12, r30, r0 */ // 0x808E40BC
    r3 = r0 + r30; // 0x808E40C0
    r12 = *(0x14 + r12); // lwz @ 0x808E40C4
    /* mtctr r12 */ // 0x808E40C8
    /* bctrl  */ // 0x808E40CC
    r0 = *(8 + r31); // lwz @ 0x808E40D0
    r3 = r0 + r30; // 0x808E40D4
    r3 = *(4 + r3); // lwz @ 0x808E40D8
    FUN_805EF474(); // bl 0x805EF474
    r0 = *(8 + r31); // lwz @ 0x808E40E0
    r3 = r0 + r30; // 0x808E40E4
    r3 = *(0x1c + r3); // lwz @ 0x808E40E8
    FUN_805EF474(); // bl 0x805EF474
    r29 = r29 + 1; // 0x808E40F0
    r0 = *(4 + r28); // lbz @ 0x808E40F4
    /* clrlwi r3, r29, 0x18 */ // 0x808E40F8
    if (<) goto 0x0x808e40ac;
    r0 = *(0x24 + r1); // lwz @ 0x808E4104
    r31 = *(0x1c + r1); // lwz @ 0x808E4108
    r30 = *(0x18 + r1); // lwz @ 0x808E410C
    r29 = *(0x14 + r1); // lwz @ 0x808E4110
    r28 = *(0x10 + r1); // lwz @ 0x808E4114
    return;
}