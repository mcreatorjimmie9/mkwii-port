/* Function at 0x80761368, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80761368(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x80761370
    *(0x14 + r1) = r0; // stw @ 0x80761374
    *(0xc + r1) = r31; // stw @ 0x80761378
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80761380
    r12 = *(0x68 + r12); // lwz @ 0x80761384
    /* mtctr r12 */ // 0x80761388
    /* bctrl  */ // 0x8076138C
    /* lis r4, 0 */ // 0x80761390
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80761398
    /* li r4, 0x22b */ // 0x8076139C
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    /* li r3, 1 */ // 0x807613A4
    /* li r0, 0 */ // 0x807613A8
    *(0x144 + r31) = r3; // stb @ 0x807613AC
    *(0x148 + r31) = r0; // stw @ 0x807613B0
    r31 = *(0xc + r1); // lwz @ 0x807613B4
    r0 = *(0x14 + r1); // lwz @ 0x807613B8
    return;
}