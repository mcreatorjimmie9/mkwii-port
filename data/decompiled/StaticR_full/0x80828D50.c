/* Function at 0x80828D50, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80828D50(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80828D5C
    r31 = r3;
    r0 = *(0x9c + r3); // lwz @ 0x80828D64
    if (==) goto 0x0x80828d88;
    r3 = r0;
    /* li r4, 0 */ // 0x80828D74
    r12 = *(0 + r3); // lwz @ 0x80828D78
    r12 = *(0xc + r12); // lwz @ 0x80828D7C
    /* mtctr r12 */ // 0x80828D80
    /* bctrl  */ // 0x80828D84
    r3 = *(0xa0 + r31); // lwz @ 0x80828D88
    if (==) goto 0x0x80828da8;
    r12 = *(0 + r3); // lwz @ 0x80828D94
    /* li r4, 0 */ // 0x80828D98
    r12 = *(0xc + r12); // lwz @ 0x80828D9C
    /* mtctr r12 */ // 0x80828DA0
    /* bctrl  */ // 0x80828DA4
    r3 = *(0xa8 + r31); // lwz @ 0x80828DA8
    if (==) goto 0x0x80828dd4;
    r0 = *(0x78 + r31); // lwz @ 0x80828DB4
    r12 = *(0 + r3); // lwz @ 0x80828DB8
    r0 = r0 rlwinm 0; // rlwinm
    /* cntlzw r0, r0 */ // 0x80828DC0
    r12 = *(0xc + r12); // lwz @ 0x80828DC4
    /* srwi r4, r0, 5 */ // 0x80828DC8
    /* mtctr r12 */ // 0x80828DCC
    /* bctrl  */ // 0x80828DD0
    r4 = *(0xa4 + r31); // lwz @ 0x80828DD4
    /* li r3, 2 */ // 0x80828DD8
    r0 = *(0x20 + r4); // lwz @ 0x80828DDC
    r0 = r0 | 0x2121; // 0x80828DE0
    r0 = r0 | 0x2121; // 0x80828DE4
    *(0x20 + r4) = r0; // stw @ 0x80828DE8
    r31 = *(0xc + r1); // lwz @ 0x80828DEC
    r0 = *(0x14 + r1); // lwz @ 0x80828DF0
    return;
}