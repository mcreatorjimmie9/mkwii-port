/* Function at 0x80732668, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80732668(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0x11 */ // 0x80732678
    *(0x18 + r1) = r30; // stw @ 0x8073267C
    *(0x14 + r1) = r29; // stw @ 0x80732680
    r29 = r3;
    r4 = *(0x530 + r3); // lwz @ 0x80732688
    r30 = r4 + 0x44; // 0x8073268C
    r3 = *(0 + r30); // lwz @ 0x80732690
    if (==) goto 0x0x807326ec;
    r3 = r3 + 0x74; // 0x8073269C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807326b4;
    /* li r3, 0 */ // 0x807326AC
    /* b 0x807326b8 */ // 0x807326B0
    r3 = *(0xc + r3); // lwz @ 0x807326B4
    /* li r0, 0 */ // 0x807326BC
    if (==) goto 0x0x807326cc;
    if (!=) goto 0x0x807326d0;
    /* li r0, 1 */ // 0x807326CC
    if (==) goto 0x0x807326ec;
    r3 = *(0 + r30); // lwz @ 0x807326D8
    r12 = *(0 + r3); // lwz @ 0x807326DC
    r12 = *(0x18 + r12); // lwz @ 0x807326E0
    /* mtctr r12 */ // 0x807326E4
    /* bctrl  */ // 0x807326E8
    r31 = r31 + 1; // 0x807326EC
    r30 = r30 + 4; // 0x807326F0
    if (<) goto 0x0x80732690;
    r3 = *(0x530 + r29); // lwz @ 0x807326FC
}