/* Function at 0x80918F20, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80918F20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80918F2C
    r31 = r3;
    r0 = *(0xdd + r3); // lbz @ 0x80918F34
    if (==) goto 0x0x80918f50;
    *(0xdd + r3) = r4; // stb @ 0x80918F40
    FUN_80918DDC(); // bl 0x80918DDC
    /* li r0, 1 */ // 0x80918F48
    *(0x110 + r31) = r0; // stb @ 0x80918F4C
    r0 = *(0x14 + r1); // lwz @ 0x80918F50
    r31 = *(0xc + r1); // lwz @ 0x80918F54
    return;
}