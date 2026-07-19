/* Function at 0x805FAAF8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FAAF8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FAB04
    r31 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x805FAB10
    /* li r0, -1 */ // 0x805FAB14
    r3 = r3 + 0; // 0x805FAB18
    *(0xc + r31) = r3; // stw @ 0x805FAB1C
    r3 = r31;
    *(0x14 + r31) = r0; // stw @ 0x805FAB24
    r31 = *(0xc + r1); // lwz @ 0x805FAB28
    r0 = *(0x14 + r1); // lwz @ 0x805FAB2C
    return;
}