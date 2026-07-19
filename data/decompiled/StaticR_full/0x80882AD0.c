/* Function at 0x80882AD0, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80882AD0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80882AE0
    r31 = r31 + 0; // 0x80882AE4
    *(0x18 + r1) = r30; // stw @ 0x80882AE8
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80882AF0
    r12 = *(0x38 + r12); // lwz @ 0x80882AF4
    /* mtctr r12 */ // 0x80882AF8
    /* bctrl  */ // 0x80882AFC
    r6 = *(4 + r31); // lwz @ 0x80882B00
    /* li r0, 0 */ // 0x80882B04
    *(0x10 + r1) = r3; // stw @ 0x80882B08
    r3 = r30;
    *(0xc + r1) = r6; // stw @ 0x80882B18
    /* li r6, 1 */ // 0x80882B20
    *(8 + r1) = r0; // stb @ 0x80882B24
    FUN_808A1444(r5, r7, r6); // bl 0x808A1444
    r3 = *(8 + r30); // lwz @ 0x80882B2C
    /* li r4, 0 */ // 0x80882B30
    /* lfs f1, 0(r31) */ // 0x80882B34
    r3 = *(0x28 + r3); // lwz @ 0x80882B38
    /* lfs f2, 0x20(r31) */ // 0x80882B3C
    FUN_805E70EC(r4); // bl 0x805E70EC
    r0 = *(0x24 + r1); // lwz @ 0x80882B44
    r31 = *(0x1c + r1); // lwz @ 0x80882B48
    r30 = *(0x18 + r1); // lwz @ 0x80882B4C
    return;
}