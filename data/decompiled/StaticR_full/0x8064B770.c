/* Function at 0x8064B770, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8064B770(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8064B780
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8064B788
    r30 = r3;
    if (==) goto 0x0x8064b7ac;
    /* li r4, 0 */ // 0x8064B794
    FUN_806498AC(r4); // bl 0x806498AC
    if (<=) goto 0x0x8064b7ac;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8064B7B0
    r30 = *(8 + r1); // lwz @ 0x8064B7B4
    r0 = *(0x14 + r1); // lwz @ 0x8064B7B8
    return;
}