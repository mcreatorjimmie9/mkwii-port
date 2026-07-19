/* Function at 0x8068AC6C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8068AC6C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068AC7C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068AC84
    r30 = r3;
    if (==) goto 0x0x8068acac;
    /* li r4, 0 */ // 0x8068AC90
    r3 = r3 + 0x18; // 0x8068AC94
    FUN_806A0540(r4, r3); // bl 0x806A0540
    if (<=) goto 0x0x8068acac;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8068ACB0
    r30 = *(8 + r1); // lwz @ 0x8068ACB4
    r0 = *(0x14 + r1); // lwz @ 0x8068ACB8
    return;
}