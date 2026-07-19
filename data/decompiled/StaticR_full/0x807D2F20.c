/* Function at 0x807D2F20, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D2F20(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D2F2C
    r31 = r3;
    FUN_807D2780(); // bl 0x807D2780
    /* lis r3, 0 */ // 0x807D2F38
    /* li r0, 0 */ // 0x807D2F3C
    r3 = r3 + 0; // 0x807D2F40
    *(0 + r31) = r3; // stw @ 0x807D2F44
    r3 = r31;
    *(0x1a8 + r31) = r0; // stw @ 0x807D2F4C
    r31 = *(0xc + r1); // lwz @ 0x807D2F50
    r0 = *(0x14 + r1); // lwz @ 0x807D2F54
    return;
}