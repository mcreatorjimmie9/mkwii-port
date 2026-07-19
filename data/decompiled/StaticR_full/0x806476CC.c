/* Function at 0x806476CC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806476CC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806476D8
    /* li r31, 0 */ // 0x806476DC
    r0 = *(0x20 + r3); // lbz @ 0x806476E0
    if (==) goto 0x0x8064770c;
    r3 = *(0x18 + r3); // lwz @ 0x806476EC
    FUN_808E41EC(); // bl 0x808E41EC
    if (==) goto 0x0x8064770c;
    r0 = *(0x24 + r3); // lhz @ 0x806476FC
    /* clrlwi. r0, r0, 0x1f */ // 0x80647700
    if (==) goto 0x0x8064770c;
    r31 = *(0x20 + r3); // lwz @ 0x80647708
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80647710
    r0 = *(0x14 + r1); // lwz @ 0x80647714
    return;
}