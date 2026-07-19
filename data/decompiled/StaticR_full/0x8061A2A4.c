/* Function at 0x8061A2A4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8061A2A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8061A2B8
    r30 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r4, 0 */ // 0x8061A2C4
    *(0x10 + r30) = r31; // stw @ 0x8061A2C8
    r4 = r4 + 0; // 0x8061A2CC
    r3 = r30;
    *(0xc + r30) = r4; // stw @ 0x8061A2D4
    r31 = *(0xc + r1); // lwz @ 0x8061A2D8
    r30 = *(8 + r1); // lwz @ 0x8061A2DC
    r0 = *(0x14 + r1); // lwz @ 0x8061A2E0
    return;
}