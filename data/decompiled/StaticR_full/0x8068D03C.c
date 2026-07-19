/* Function at 0x8068D03C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8068D03C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068D04C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068D054
    r30 = r3;
    if (==) goto 0x0x8068d080;
    if (==) goto 0x0x8068d070;
    /* li r4, 0 */ // 0x8068D064
    r3 = r3 + 0x18; // 0x8068D068
    FUN_806498AC(r4, r3); // bl 0x806498AC
    if (<=) goto 0x0x8068d080;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8068D084
    r30 = *(8 + r1); // lwz @ 0x8068D088
    r0 = *(0x14 + r1); // lwz @ 0x8068D08C
    return;
}