/* Function at 0x80781D3C, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80781D3C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80781D48
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x80781D50
    r12 = *(0 + r3); // lwz @ 0x80781D54
    r12 = *(0x14 + r12); // lwz @ 0x80781D58
    /* mtctr r12 */ // 0x80781D5C
    /* bctrl  */ // 0x80781D60
    if (!=) goto 0x0x80781db4;
    r3 = *(0x20 + r31); // lwz @ 0x80781D6C
    /* lis r4, 0 */ // 0x80781D70
    /* lfs f1, 0(r4) */ // 0x80781D74
    r12 = *(0 + r3); // lwz @ 0x80781D78
    r12 = *(0x1c + r12); // lwz @ 0x80781D7C
    /* mtctr r12 */ // 0x80781D80
    /* bctrl  */ // 0x80781D84
    r3 = *(0x20 + r31); // lwz @ 0x80781D88
    r0 = *(0x46 + r3); // lha @ 0x80781D8C
    r3 = *(8 + r3); // lwz @ 0x80781D90
    /* slwi r0, r0, 4 */ // 0x80781D94
    r3 = r3 + r0; // 0x80781D98
    r3 = *(0xc + r3); // lhz @ 0x80781D9C
    if (==) goto 0x0x80781db4;
    /* li r0, 0 */ // 0x80781DA8
    *(0xdc + r31) = r3; // stw @ 0x80781DAC
    *(0xb8 + r31) = r0; // stw @ 0x80781DB0
    r0 = *(0x14 + r1); // lwz @ 0x80781DB4
    r31 = *(0xc + r1); // lwz @ 0x80781DB8
    return;
}