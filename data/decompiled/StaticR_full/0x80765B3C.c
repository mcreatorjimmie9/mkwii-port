/* Function at 0x80765B3C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80765B3C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80765B48
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80765B50
    r12 = *(0xc + r12); // lwz @ 0x80765B54
    /* mtctr r12 */ // 0x80765B58
    /* bctrl  */ // 0x80765B5C
    /* li r0, 0 */ // 0x80765B60
    *(0xb0 + r31) = r0; // stb @ 0x80765B64
    r3 = r31;
    /* li r4, 0 */ // 0x80765B6C
    r12 = *(0 + r31); // lwz @ 0x80765B70
    r12 = *(0x68 + r12); // lwz @ 0x80765B74
    /* mtctr r12 */ // 0x80765B78
    /* bctrl  */ // 0x80765B7C
    r0 = *(0x14 + r1); // lwz @ 0x80765B80
    r31 = *(0xc + r1); // lwz @ 0x80765B84
    return;
}