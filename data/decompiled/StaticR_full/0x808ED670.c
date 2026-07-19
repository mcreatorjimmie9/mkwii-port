/* Function at 0x808ED670, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808ED670(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808ED688
    r29 = r3;
    r3 = r30;
    FUN_808F2CF8(r3); // bl 0x808F2CF8
    r31 = r3;
    r3 = r30;
    FUN_808F2DB4(r3, r3); // bl 0x808F2DB4
    r5 = r3;
    r3 = r29;
    r4 = r31;
    FUN_808ED730(r3, r5, r3, r4); // bl 0x808ED730
    r0 = *(0x24 + r1); // lwz @ 0x808ED6B4
    r31 = *(0x1c + r1); // lwz @ 0x808ED6B8
    r30 = *(0x18 + r1); // lwz @ 0x808ED6BC
    r29 = *(0x14 + r1); // lwz @ 0x808ED6C0
    return;
}