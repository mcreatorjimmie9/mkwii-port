/* Function at 0x80708910, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80708910(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80708920
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80708928
    r30 = r3;
    if (==) goto 0x0x80708968;
    /* lis r4, 0 */ // 0x80708934
    /* li r5, 0x254 */ // 0x80708938
    r4 = r4 + 0; // 0x8070893C
    /* li r6, 5 */ // 0x80708940
    r3 = r3 + 0x174; // 0x80708944
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80708950
    FUN_806A0540(r6, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x80708968;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}