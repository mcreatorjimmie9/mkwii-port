/* Function at 0x80683BFC, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80683BFC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80683C08
    r31 = r3;
    r3 = r3 + 0x24; // 0x80683C10
    FUN_805ABE9C(r3); // bl 0x805ABE9C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80683C1C
    r0 = *(0x14 + r1); // lwz @ 0x80683C20
    return;
}