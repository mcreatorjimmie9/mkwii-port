/* Function at 0x80670AB8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80670AB8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80670AC8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80670AD0
    r30 = r3;
    if (==) goto 0x0x80670af4;
    /* li r4, 0 */ // 0x80670ADC
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x80670af4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80670AF8
    r30 = *(8 + r1); // lwz @ 0x80670AFC
    r0 = *(0x14 + r1); // lwz @ 0x80670B00
    return;
}