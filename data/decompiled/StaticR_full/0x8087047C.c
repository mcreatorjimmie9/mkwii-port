/* Function at 0x8087047C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8087047C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8087048C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80870494
    r30 = r3;
    if (==) goto 0x0x808704b8;
    /* li r4, 0 */ // 0x808704A0
    FUN_805EB2DC(r4); // bl 0x805EB2DC
    if (<=) goto 0x0x808704b8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808704BC
    r30 = *(8 + r1); // lwz @ 0x808704C0
    r0 = *(0x14 + r1); // lwz @ 0x808704C4
    return;
}