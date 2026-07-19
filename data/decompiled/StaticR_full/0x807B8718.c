/* Function at 0x807B8718, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 4 function(s) */

int FUN_807B8718(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807B8724
    r26 = r3;
    /* lis r31, 0 */ // 0x807B872C
    r3 = *(0 + r31); // lwz @ 0x807B8730
    r4 = *(0x38 + r26); // lwz @ 0x807B8734
    r3 = *(0x94 + r3); // lwz @ 0x807B8738
    r4 = *(0 + r4); // lwz @ 0x807B873C
    FUN_807D1EA8(); // bl 0x807D1EA8
    *(0x1b4 + r26) = r3; // stb @ 0x807B8744
    r27 = *(0x194 + r26); // lwz @ 0x807B8748
    r4 = *(0 + r31); // lwz @ 0x807B874C
    r3 = *(4 + r27); // lwz @ 0x807B8750
    r28 = *(0x94 + r4); // lwz @ 0x807B8754
    r3 = *(0 + r3); // lwz @ 0x807B8758
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r29, r3, 0x18 */ // 0x807B8760
    r3 = r28;
    r4 = r29;
    FUN_807D1E00(r3, r4); // bl 0x807D1E00
    r31 = r3;
    /* li r30, 0 */ // 0x807B8774
    /* b 0x807b8798 */ // 0x807B8778
    r3 = r28;
    r4 = r29;
    r5 = r30;
    FUN_807D1E58(r3, r4, r5); // bl 0x807D1E58
    *(0xc + r27) = r3; // stw @ 0x807B878C
    r27 = r27 + 4; // 0x807B8790
    r30 = r30 + 1; // 0x807B8794
    if (<) goto 0x0x807b877c;
    /* lis r31, 0 */ // 0x807B87A0
    r3 = *(0 + r31); // lwz @ 0x807B87A4
    r3 = *(0x94 + r3); // lwz @ 0x807B87A8
    r3 = *(0xbc + r3); // lwz @ 0x807B87AC
    r12 = *(0 + r3); // lwz @ 0x807B87B0
    r12 = *(0x20 + r12); // lwz @ 0x807B87B4
    /* mtctr r12 */ // 0x807B87B8
    /* bctrl  */ // 0x807B87BC
    r4 = *(0x1a0 + r26); // lwz @ 0x807B87C0
    *(0xc + r4) = r3; // stw @ 0x807B87C4
    r3 = *(0 + r31); // lwz @ 0x807B87C8
    r3 = *(0x94 + r3); // lwz @ 0x807B87CC
    r3 = *(0xbc + r3); // lwz @ 0x807B87D0
    r12 = *(0 + r3); // lwz @ 0x807B87D4
    r12 = *(0x14 + r12); // lwz @ 0x807B87D8
    /* mtctr r12 */ // 0x807B87DC
    /* bctrl  */ // 0x807B87E0
    r4 = *(0x19c + r26); // lwz @ 0x807B87E4
    *(0xc + r4) = r3; // stw @ 0x807B87E8
    r0 = *(0x24 + r1); // lwz @ 0x807B87F0
    return;
}