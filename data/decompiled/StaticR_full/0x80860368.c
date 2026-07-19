/* Function at 0x80860368, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80860368(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80860378
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80860380
    r30 = r3;
    if (==) goto 0x0x808603a4;
    /* li r4, 0 */ // 0x8086038C
    FUN_805EB2DC(r4); // bl 0x805EB2DC
    if (<=) goto 0x0x808603a4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808603A8
    r30 = *(8 + r1); // lwz @ 0x808603AC
    r0 = *(0x14 + r1); // lwz @ 0x808603B0
    return;
}