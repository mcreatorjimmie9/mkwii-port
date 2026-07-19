/* Function at 0x8077AC60, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8077AC60(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8077AC68
    /* stfd f31, 0x18(r1) */ // 0x8077AC70
    /* fmr f31, f1 */ // 0x8077AC74
    *(0x14 + r1) = r31; // stw @ 0x8077AC78
    r31 = r4;
    r4 = r5 + 0; // 0x8077AC80
    *(0x10 + r1) = r30; // stw @ 0x8077AC84
    r30 = r3;
    FUN_808A8CF8(r4); // bl 0x808A8CF8
    /* lis r3, 0 */ // 0x8077AC90
    r3 = r3 + 0; // 0x8077AC98
    *(0 + r30) = r3; // stw @ 0x8077AC9C
    if (==) goto 0x0x8077acc4;
    /* li r3, 0x6c */ // 0x8077ACA4
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x8077acc0;
    /* fmr f1, f31 */ // 0x8077ACB4
    r4 = r31;
    FUN_8076E67C(r4); // bl 0x8076E67C
    *(0x20 + r30) = r3; // stw @ 0x8077ACC0
    /* lfd f31, 0x18(r1) */ // 0x8077ACC4
    r3 = r30;
}