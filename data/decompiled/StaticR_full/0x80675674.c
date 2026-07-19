/* Function at 0x80675674, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80675674(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80675688
    r30 = r3;
    r0 = *(0x204 + r3); // lwz @ 0x80675690
    if (==) goto 0x0x806756b4;
    /* mulli r0, r0, 0x17c */ // 0x8067569C
    r3 = *(0x294 + r3); // lwz @ 0x806756A0
    /* li r4, 0 */ // 0x806756A4
    r3 = r3 + r0; // 0x806756A8
    FUN_80676408(r4); // bl 0x80676408
    *(0x204 + r30) = r31; // stw @ 0x806756B0
    r0 = *(0x204 + r30); // lwz @ 0x806756B4
    /* li r4, 1 */ // 0x806756B8
    r3 = *(0x294 + r30); // lwz @ 0x806756BC
    /* mulli r0, r0, 0x17c */ // 0x806756C0
    r3 = r3 + r0; // 0x806756C4
    FUN_80676408(r4); // bl 0x80676408
    r0 = *(0x14 + r1); // lwz @ 0x806756CC
    r31 = *(0xc + r1); // lwz @ 0x806756D0
    r30 = *(8 + r1); // lwz @ 0x806756D4
    return;
}