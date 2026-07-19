/* Function at 0x80641BC0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80641BC0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80641BD0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80641BD8
    r30 = r3;
    if (==) goto 0x0x80641bfc;
    /* li r4, 0 */ // 0x80641BE4
    FUN_805EB2DC(r4); // bl 0x805EB2DC
    if (<=) goto 0x0x80641bfc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80641C00
    r30 = *(8 + r1); // lwz @ 0x80641C04
    r0 = *(0x14 + r1); // lwz @ 0x80641C08
    return;
}