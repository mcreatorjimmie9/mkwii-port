/* Function at 0x8089B9C4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089B9C4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089B9D0
    r31 = r3;
    FUN_8089FDB4(); // bl 0x8089FDB4
    /* lis r3, 0 */ // 0x8089B9DC
    /* li r0, 2 */ // 0x8089B9E0
    r3 = r3 + 0; // 0x8089B9E4
    *(0 + r31) = r3; // stw @ 0x8089B9E8
    r3 = r31;
    *(4 + r31) = r0; // stw @ 0x8089B9F0
    r31 = *(0xc + r1); // lwz @ 0x8089B9F4
    r0 = *(0x14 + r1); // lwz @ 0x8089B9F8
    return;
}