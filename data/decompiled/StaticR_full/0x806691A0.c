/* Function at 0x806691A0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806691A0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806691B0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806691B8
    r30 = r3;
    if (==) goto 0x0x806691f0;
    /* lis r5, 0 */ // 0x806691C4
    /* lis r4, 0 */ // 0x806691C8
    r5 = r5 + 0; // 0x806691CC
    *(8 + r3) = r5; // stw @ 0x806691D0
    r3 = *(0x34 + r3); // lwz @ 0x806691D4
    r4 = r4 + 0; // 0x806691D8
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    if (<=) goto 0x0x806691f0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806691F4
    r30 = *(8 + r1); // lwz @ 0x806691F8
}