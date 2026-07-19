/* Function at 0x80676054, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80676054(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80676064
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8067606C
    r30 = r3;
    if (==) goto 0x0x80676090;
    /* li r4, 0 */ // 0x80676078
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x80676090;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80676094
    r30 = *(8 + r1); // lwz @ 0x80676098
    r0 = *(0x14 + r1); // lwz @ 0x8067609C
    return;
}