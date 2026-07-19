/* Function at 0x80838554, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80838554(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80838560
    r31 = r3;
    FUN_80828A90(); // bl 0x80828A90
    /* lis r3, 0 */ // 0x8083856C
    /* li r0, 0 */ // 0x80838570
    /* lfs f0, 0(r3) */ // 0x80838574
    *(0x280 + r31) = r0; // stw @ 0x80838578
    /* stfs f0, 0x284(r31) */ // 0x8083857C
    r31 = *(0xc + r1); // lwz @ 0x80838580
    r0 = *(0x14 + r1); // lwz @ 0x80838584
    return;
}