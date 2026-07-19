/* Function at 0x80647B2C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80647B2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80647B38
    r31 = r3;
    FUN_80633FD4(); // bl 0x80633FD4
    /* lis r3, 0 */ // 0x80647B44
    /* li r4, 0 */ // 0x80647B48
    r3 = r3 + 0; // 0x80647B4C
    /* li r0, 1 */ // 0x80647B50
    *(0 + r31) = r3; // stw @ 0x80647B54
    r3 = r31;
    *(0x200 + r31) = r4; // stb @ 0x80647B5C
    *(0x201 + r31) = r4; // stb @ 0x80647B60
    *(0x4c + r31) = r0; // stw @ 0x80647B64
    r31 = *(0xc + r1); // lwz @ 0x80647B68
    r0 = *(0x14 + r1); // lwz @ 0x80647B6C
    return;
}