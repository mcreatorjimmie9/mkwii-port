/* Function at 0x8080D1A4, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8080D1A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8080D1B4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8080D1BC
    r30 = r3;
    if (==) goto 0x0x8080d200;
    r0 = *(8 + r3); // lwz @ 0x8080D1C8
    /* lis r4, 0 */ // 0x8080D1CC
    r4 = r4 + 0; // 0x8080D1D0
    *(0 + r3) = r4; // stw @ 0x8080D1D4
    if (==) goto 0x0x8080d1f0;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x8080D1E8
    *(8 + r30) = r0; // stw @ 0x8080D1EC
    if (<=) goto 0x0x8080d200;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8080D204
    r30 = *(8 + r1); // lwz @ 0x8080D208
    r0 = *(0x14 + r1); // lwz @ 0x8080D20C
}