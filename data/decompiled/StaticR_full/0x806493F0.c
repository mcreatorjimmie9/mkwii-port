/* Function at 0x806493F0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806493F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80649400
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80649408
    r30 = r3;
    if (==) goto 0x0x8064942c;
    /* li r4, 0 */ // 0x80649414
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x8064942c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80649430
    r30 = *(8 + r1); // lwz @ 0x80649434
    r0 = *(0x14 + r1); // lwz @ 0x80649438
    return;
}