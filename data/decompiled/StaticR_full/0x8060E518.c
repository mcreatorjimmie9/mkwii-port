/* Function at 0x8060E518, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8060E518(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8060E52C
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060E534
    r4 = *(4 + r5); // lwz @ 0x8060E538
    r0 = *(0xc + r4); // lwz @ 0x8060E53C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060E544
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060E54C
    /* clrlwi r0, r3, 0x18 */ // 0x8060E550
    r3 = *(0 + r4); // lwz @ 0x8060E554
    /* mulli r0, r0, 0x248 */ // 0x8060E558
    r3 = *(0x14 + r3); // lwz @ 0x8060E55C
    r3 = r3 + r0; // 0x8060E560
    FUN_808237A0(); // bl 0x808237A0
    if (!=) goto 0x0x8060e594;
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060E578
    /* lis r4, 0 */ // 0x8060E57C
    /* lfs f1, 0(r4) */ // 0x8060E580
    /* li r4, 0x113 */ // 0x8060E584
    r12 = *(0xe0 + r12); // lwz @ 0x8060E588
    /* mtctr r12 */ // 0x8060E58C
    /* bctrl  */ // 0x8060E590
    /* li r0, 0 */ // 0x8060E594
    *(0x194 + r30) = r0; // sth @ 0x8060E598
    r3 = r30;
    FUN_8061DFE0(r3); // bl 0x8061DFE0
    /* lis r4, 0 */ // 0x8060E5A4
    /* lfs f1, 0(r4) */ // 0x8060E5A8
    FUN_80625BB4(r3, r4); // bl 0x80625BB4
    r0 = *(0x196 + r30); // lbz @ 0x8060E5B0
    if (!=) goto 0x0x8060e5d0;
    r3 = *(0x260 + r30); // lwz @ 0x8060E5BC
    /* li r4, 1 */ // 0x8060E5C0
    FUN_80642784(r4); // bl 0x80642784
    /* li r0, 1 */ // 0x8060E5C8
    *(0x196 + r30) = r0; // stb @ 0x8060E5CC
    if (==) goto 0x0x8060e5e4;
    /* lis r3, 0 */ // 0x8060E5D8
    /* lfs f0, 0(r3) */ // 0x8060E5DC
    /* stfs f0, 0x17c(r30) */ // 0x8060E5E0
    r0 = *(0x14 + r1); // lwz @ 0x8060E5E4
    r31 = *(0xc + r1); // lwz @ 0x8060E5E8
    r30 = *(8 + r1); // lwz @ 0x8060E5EC
    return;
}