/* Function at 0x8089BA08, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089BA08(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089BA14
    r31 = r3;
    FUN_8089FF48(); // bl 0x8089FF48
    /* lis r3, 0 */ // 0x8089BA20
    /* li r0, 2 */ // 0x8089BA24
    r3 = r3 + 0; // 0x8089BA28
    *(0 + r31) = r3; // stw @ 0x8089BA2C
    r3 = r31;
    *(4 + r31) = r0; // stw @ 0x8089BA34
    r31 = *(0xc + r1); // lwz @ 0x8089BA38
    r0 = *(0x14 + r1); // lwz @ 0x8089BA3C
    return;
}