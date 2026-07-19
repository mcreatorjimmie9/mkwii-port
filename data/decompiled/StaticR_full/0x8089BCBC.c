/* Function at 0x8089BCBC, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089BCBC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089BCC8
    r31 = r3;
    FUN_8089BA08(); // bl 0x8089BA08
    /* lis r3, 0 */ // 0x8089BCD4
    /* li r0, -0x7d0 */ // 0x8089BCD8
    r3 = r3 + 0; // 0x8089BCDC
    *(0 + r31) = r3; // stw @ 0x8089BCE0
    r3 = r31;
    *(0xfc + r31) = r0; // stw @ 0x8089BCE8
    *(0x100 + r31) = r0; // stw @ 0x8089BCEC
    r31 = *(0xc + r1); // lwz @ 0x8089BCF0
    r0 = *(0x14 + r1); // lwz @ 0x8089BCF4
    return;
}