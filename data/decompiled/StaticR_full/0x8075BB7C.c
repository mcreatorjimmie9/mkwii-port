/* Function at 0x8075BB7C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8075BB7C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8075BB8C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8075BB94
    r30 = r3;
    if (==) goto 0x0x8075bbcc;
    /* addic. r0, r3, 0xb0 */ // 0x8075BBA0
    if (==) goto 0x0x8075bbbc;
    /* lis r4, 0 */ // 0x8075BBA8
    r4 = r4 + 0; // 0x8075BBAC
    *(0xb0 + r3) = r4; // stw @ 0x8075BBB0
    r3 = *(0xc4 + r3); // lwz @ 0x8075BBB4
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x8075bbcc;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8075BBD0
    r30 = *(8 + r1); // lwz @ 0x8075BBD4
    r0 = *(0x14 + r1); // lwz @ 0x8075BBD8
    return;
}