/* Function at 0x806D53B0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806D53B0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D53C0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D53C8
    r30 = r3;
    if (==) goto 0x0x806d53fc;
    /* lis r4, 0 */ // 0x806D53D4
    /* li r5, 0x68 */ // 0x806D53D8
    r4 = r4 + 0; // 0x806D53DC
    /* li r6, 0xa */ // 0x806D53E0
    r3 = r3 + 4; // 0x806D53E4
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (<=) goto 0x0x806d53fc;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806D5400
    r30 = *(8 + r1); // lwz @ 0x806D5404
}