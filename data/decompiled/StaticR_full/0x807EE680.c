/* Function at 0x807EE680, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EE680(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807EE68C
    r31 = r3;
    FUN_808A8B3C(); // bl 0x808A8B3C
    /* lis r4, 0 */ // 0x807EE698
    r3 = r31;
    r4 = r4 + 0; // 0x807EE6A0
    *(0 + r31) = r4; // stw @ 0x807EE6A4
    r31 = *(0xc + r1); // lwz @ 0x807EE6A8
    r0 = *(0x14 + r1); // lwz @ 0x807EE6AC
    return;
}