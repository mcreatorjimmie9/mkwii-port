/* Function at 0x80765B94, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80765B94(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80765BA0
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80765BA8
    r12 = *(0xc + r12); // lwz @ 0x80765BAC
    /* mtctr r12 */ // 0x80765BB0
    /* bctrl  */ // 0x80765BB4
    /* li r0, 1 */ // 0x80765BB8
    *(0xb0 + r31) = r0; // stb @ 0x80765BBC
    r3 = r31;
    /* li r4, 1 */ // 0x80765BC4
    r12 = *(0 + r31); // lwz @ 0x80765BC8
    r12 = *(0x68 + r12); // lwz @ 0x80765BCC
    /* mtctr r12 */ // 0x80765BD0
    /* bctrl  */ // 0x80765BD4
    r0 = *(0x14 + r1); // lwz @ 0x80765BD8
    r31 = *(0xc + r1); // lwz @ 0x80765BDC
    return;
}