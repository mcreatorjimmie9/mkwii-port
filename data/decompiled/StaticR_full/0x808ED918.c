/* Function at 0x808ED918, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808ED918(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808ED924
    r31 = r3;
    r3 = r4;
    FUN_808F2A08(r3); // bl 0x808F2A08
    /* li r0, 0x1fe4 */ // 0x808ED934
    *(0x314 + r31) = r3; // stw @ 0x808ED938
    *(0x3e4 + r31) = r0; // stw @ 0x808ED93C
    r31 = *(0xc + r1); // lwz @ 0x808ED940
    r0 = *(0x14 + r1); // lwz @ 0x808ED944
    return;
}