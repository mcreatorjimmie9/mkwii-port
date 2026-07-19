/* Function at 0x806BBB2C, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806BBB2C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BBB34
    *(0x18 + r1) = r30; // stw @ 0x806BBB40
    *(0x14 + r1) = r29; // stw @ 0x806BBB44
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BBB4C
    r3 = *(0 + r3); // lwz @ 0x806BBB50
    r30 = *(0x14c + r3); // lwz @ 0x806BBB54
    if (!=) goto 0x0x806bbb68;
    /* li r30, 0 */ // 0x806BBB60
    /* b 0x806bbbbc */ // 0x806BBB64
    /* lis r31, 0 */ // 0x806BBB68
    r31 = r31 + 0; // 0x806BBB6C
    if (==) goto 0x0x806bbbb8;
    r12 = *(0 + r30); // lwz @ 0x806BBB74
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BBB7C
    /* mtctr r12 */ // 0x806BBB80
    /* bctrl  */ // 0x806BBB84
    /* b 0x806bbba0 */ // 0x806BBB88
    if (!=) goto 0x0x806bbb9c;
    /* li r0, 1 */ // 0x806BBB94
    /* b 0x806bbbac */ // 0x806BBB98
    r3 = *(0 + r3); // lwz @ 0x806BBB9C
    if (!=) goto 0x0x806bbb8c;
    /* li r0, 0 */ // 0x806BBBA8
    if (==) goto 0x0x806bbbb8;
    /* b 0x806bbbbc */ // 0x806BBBB4
    /* li r30, 0 */ // 0x806BBBB8
    r12 = *(0 + r30); // lwz @ 0x806BBBBC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806BBBC4
    /* mtctr r12 */ // 0x806BBBC8
    /* bctrl  */ // 0x806BBBCC
    r12 = *(0 + r30); // lwz @ 0x806BBBD0
    r3 = r30;
    /* li r4, 0x1e1b */ // 0x806BBBD8
    /* li r5, 0 */ // 0x806BBBDC
    r12 = *(0x68 + r12); // lwz @ 0x806BBBE0
    /* mtctr r12 */ // 0x806BBBE4
    /* bctrl  */ // 0x806BBBE8
    r12 = *(0 + r29); // lwz @ 0x806BBBEC
    r3 = r29;
    /* li r4, 0x51 */ // 0x806BBBF4
    /* li r5, 0 */ // 0x806BBBF8
    r12 = *(0x24 + r12); // lwz @ 0x806BBBFC
    /* mtctr r12 */ // 0x806BBC00
    /* bctrl  */ // 0x806BBC04
    /* li r0, 6 */ // 0x806BBC08
    *(0x310 + r29) = r0; // stw @ 0x806BBC0C
    r31 = *(0x1c + r1); // lwz @ 0x806BBC10
    r30 = *(0x18 + r1); // lwz @ 0x806BBC14
    r29 = *(0x14 + r1); // lwz @ 0x806BBC18
    r0 = *(0x24 + r1); // lwz @ 0x806BBC1C
    return;
}