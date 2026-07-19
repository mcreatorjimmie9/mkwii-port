/* Function at 0x80799F64, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80799F64(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80799F6C
    *(0x14 + r1) = r0; // stw @ 0x80799F70
    *(0xc + r1) = r31; // stw @ 0x80799F74
    r31 = r3;
    r0 = *(0xe0 + r3); // lbz @ 0x80799F7C
    *(0xf4 + r3) = r4; // stw @ 0x80799F80
    if (==) goto 0x0x80799f98;
    r3 = *(0xdc + r3); // lwz @ 0x80799F8C
    FUN_807A01C0(); // bl 0x807A01C0
    *(0xf4 + r31) = r3; // stw @ 0x80799F94
    r0 = *(0x14 + r1); // lwz @ 0x80799F98
    r31 = *(0xc + r1); // lwz @ 0x80799F9C
    return;
}