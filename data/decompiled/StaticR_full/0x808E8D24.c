/* Function at 0x808E8D24, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E8D24(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808E8D2C
    /* slwi r0, r3, 2 */ // 0x808E8D34
    *(0xc + r1) = r31; // stw @ 0x808E8D38
    *(8 + r1) = r30; // stw @ 0x808E8D3C
    r3 = *(0 + r4); // lwz @ 0x808E8D40
    r3 = *(0 + r3); // lwz @ 0x808E8D44
    r3 = r3 + r0; // 0x808E8D48
    r30 = *(8 + r3); // lwz @ 0x808E8D4C
    if (!=) goto 0x0x808e8d60;
    /* li r30, 0 */ // 0x808E8D58
    /* b 0x808e8db4 */ // 0x808E8D5C
    /* lis r31, 0 */ // 0x808E8D60
    r31 = r31 + 0; // 0x808E8D64
    if (==) goto 0x0x808e8db0;
    r12 = *(0 + r30); // lwz @ 0x808E8D6C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E8D74
    /* mtctr r12 */ // 0x808E8D78
    /* bctrl  */ // 0x808E8D7C
    /* b 0x808e8d98 */ // 0x808E8D80
    if (!=) goto 0x0x808e8d94;
    /* li r0, 1 */ // 0x808E8D8C
    /* b 0x808e8da4 */ // 0x808E8D90
    r3 = *(0 + r3); // lwz @ 0x808E8D94
    if (!=) goto 0x0x808e8d84;
    /* li r0, 0 */ // 0x808E8DA0
    if (==) goto 0x0x808e8db0;
    /* b 0x808e8db4 */ // 0x808E8DAC
    /* li r30, 0 */ // 0x808E8DB0
    if (!=) goto 0x0x808e8dc4;
    /* li r30, 0 */ // 0x808E8DBC
    /* b 0x808e8e18 */ // 0x808E8DC0
    /* lis r31, 0 */ // 0x808E8DC4
    r31 = r31 + 0; // 0x808E8DC8
    if (==) goto 0x0x808e8e14;
    r12 = *(0 + r30); // lwz @ 0x808E8DD0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E8DD8
    /* mtctr r12 */ // 0x808E8DDC
    /* bctrl  */ // 0x808E8DE0
    /* b 0x808e8dfc */ // 0x808E8DE4
    if (!=) goto 0x0x808e8df8;
    /* li r0, 1 */ // 0x808E8DF0
    /* b 0x808e8e08 */ // 0x808E8DF4
    r3 = *(0 + r3); // lwz @ 0x808E8DF8
    if (!=) goto 0x0x808e8de8;
    /* li r0, 0 */ // 0x808E8E04
    if (==) goto 0x0x808e8e14;
    /* b 0x808e8e18 */ // 0x808E8E10
    /* li r30, 0 */ // 0x808E8E14
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E8E1C
    r30 = *(8 + r1); // lwz @ 0x808E8E20
    r0 = *(0x14 + r1); // lwz @ 0x808E8E24
    return;
}