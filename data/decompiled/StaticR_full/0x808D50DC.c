/* Function at 0x808D50DC, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808D50DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808D50EC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808D50F4
    r30 = r3;
    if (==) goto 0x0x808d511c;
    /* li r4, 0 */ // 0x808D5100
    r3 = r3 + 0x18; // 0x808D5104
    FUN_806498AC(r4, r3); // bl 0x806498AC
    if (<=) goto 0x0x808d511c;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808D5120
    r30 = *(8 + r1); // lwz @ 0x808D5124
    r0 = *(0x14 + r1); // lwz @ 0x808D5128
    return;
}