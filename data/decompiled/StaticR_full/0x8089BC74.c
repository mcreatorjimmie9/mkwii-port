/* Function at 0x8089BC74, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089BC74(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089BC80
    r31 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lis r3, 0 */ // 0x8089BC8C
    /* li r0, -0x7d0 */ // 0x8089BC90
    r3 = r3 + 0; // 0x8089BC94
    *(0 + r31) = r3; // stw @ 0x8089BC98
    r3 = r31;
    *(0xfc + r31) = r0; // stw @ 0x8089BCA0
    *(0x100 + r31) = r0; // stw @ 0x8089BCA4
    r31 = *(0xc + r1); // lwz @ 0x8089BCA8
    r0 = *(0x14 + r1); // lwz @ 0x8089BCAC
    return;
}