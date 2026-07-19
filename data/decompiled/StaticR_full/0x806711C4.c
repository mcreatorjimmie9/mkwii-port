/* Function at 0x806711C4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806711C4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806711D4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806711DC
    r30 = r3;
    if (==) goto 0x0x80671204;
    /* li r4, -1 */ // 0x806711E8
    r3 = r3 + 0x24; // 0x806711EC
    FUN_8064DB0C(r4, r3); // bl 0x8064DB0C
    if (<=) goto 0x0x80671204;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80671208
    r30 = *(8 + r1); // lwz @ 0x8067120C
    r0 = *(0x14 + r1); // lwz @ 0x80671210
    return;
}