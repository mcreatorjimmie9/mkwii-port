/* Function at 0x807F7F74, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807F7F74(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x807F7F7C
    /* lis r31, 0 */ // 0x807F7F88
    /* lfs f1, 0(r31) */ // 0x807F7F8C
    *(0x18 + r1) = r30; // stw @ 0x807F7F90
    /* lis r30, 0 */ // 0x807F7F94
    *(0x14 + r1) = r29; // stw @ 0x807F7F98
    r29 = r3;
    r3 = *(8 + r3); // lwz @ 0x807F7FA0
    /* lfs f2, 0(r30) */ // 0x807F7FA4
    r3 = *(0x28 + r3); // lwz @ 0x807F7FA8
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x807F7FB0
    /* li r4, 1 */ // 0x807F7FB4
    /* lfs f2, 0(r30) */ // 0x807F7FB8
    /* lfs f1, 0(r31) */ // 0x807F7FBC
    r3 = *(0x28 + r3); // lwz @ 0x807F7FC0
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x807F7FC8
    /* li r4, 0 */ // 0x807F7FCC
    r3 = *(0x28 + r3); // lwz @ 0x807F7FD0
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807F7FD8
    r12 = *(8 + r12); // lwz @ 0x807F7FDC
    /* mtctr r12 */ // 0x807F7FE0
    /* bctrl  */ // 0x807F7FE4
    /* lfs f0, 0(r30) */ // 0x807F7FE8
    /* li r0, 0 */ // 0x807F7FEC
    /* fdivs f0, f1, f0 */ // 0x807F7FF0
    *(0xb4 + r29) = r0; // stw @ 0x807F7FF4
    /* fctiwz f0, f0 */ // 0x807F7FF8
    /* stfd f0, 8(r1) */ // 0x807F7FFC
    r0 = *(0xc + r1); // lwz @ 0x807F8000
    *(0xc0 + r29) = r0; // stw @ 0x807F8004
    r31 = *(0x1c + r1); // lwz @ 0x807F8008
    r30 = *(0x18 + r1); // lwz @ 0x807F800C
    r29 = *(0x14 + r1); // lwz @ 0x807F8010
    r0 = *(0x24 + r1); // lwz @ 0x807F8014
    return;
}