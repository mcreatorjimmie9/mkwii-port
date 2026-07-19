/* Function at 0x808D0BB4, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808D0BB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x808D0BC8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808D0BD0
    r29 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x808D0BD8
    *(0x644 + r3) = r0; // stw @ 0x808D0BDC
    /* li r3, 0x78 */ // 0x808D0BE0
    FUN_808E4258(r3); // bl 0x808E4258
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_808E4954(r3, r4, r5, r6); // bl 0x808E4954
    r0 = *(0x24 + r1); // lwz @ 0x808D0BF8
    r31 = *(0x1c + r1); // lwz @ 0x808D0BFC
    r30 = *(0x18 + r1); // lwz @ 0x808D0C00
    r29 = *(0x14 + r1); // lwz @ 0x808D0C04
    return;
}