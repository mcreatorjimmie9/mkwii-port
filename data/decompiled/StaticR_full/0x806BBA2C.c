/* Function at 0x806BBA2C, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806BBA2C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BBA34
    *(0x18 + r1) = r30; // stw @ 0x806BBA40
    *(0x14 + r1) = r29; // stw @ 0x806BBA44
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BBA4C
    r3 = *(0 + r3); // lwz @ 0x806BBA50
    r30 = *(0x14c + r3); // lwz @ 0x806BBA54
    if (!=) goto 0x0x806bba68;
    /* li r30, 0 */ // 0x806BBA60
    /* b 0x806bbabc */ // 0x806BBA64
    /* lis r31, 0 */ // 0x806BBA68
    r31 = r31 + 0; // 0x806BBA6C
    if (==) goto 0x0x806bbab8;
    r12 = *(0 + r30); // lwz @ 0x806BBA74
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BBA7C
    /* mtctr r12 */ // 0x806BBA80
    /* bctrl  */ // 0x806BBA84
    /* b 0x806bbaa0 */ // 0x806BBA88
    if (!=) goto 0x0x806bba9c;
    /* li r0, 1 */ // 0x806BBA94
    /* b 0x806bbaac */ // 0x806BBA98
    r3 = *(0 + r3); // lwz @ 0x806BBA9C
    if (!=) goto 0x0x806bba8c;
    /* li r0, 0 */ // 0x806BBAA8
    if (==) goto 0x0x806bbab8;
    /* b 0x806bbabc */ // 0x806BBAB4
    /* li r30, 0 */ // 0x806BBAB8
    r12 = *(0 + r30); // lwz @ 0x806BBABC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806BBAC4
    /* mtctr r12 */ // 0x806BBAC8
    /* bctrl  */ // 0x806BBACC
    r12 = *(0 + r30); // lwz @ 0x806BBAD0
    r3 = r30;
    /* li r4, 0x1e1a */ // 0x806BBAD8
    /* li r5, 0 */ // 0x806BBADC
    r12 = *(0x68 + r12); // lwz @ 0x806BBAE0
    /* mtctr r12 */ // 0x806BBAE4
    /* bctrl  */ // 0x806BBAE8
    r12 = *(0 + r29); // lwz @ 0x806BBAEC
    r3 = r29;
    /* li r4, 0x51 */ // 0x806BBAF4
    /* li r5, 0 */ // 0x806BBAF8
    r12 = *(0x24 + r12); // lwz @ 0x806BBAFC
    /* mtctr r12 */ // 0x806BBB00
    /* bctrl  */ // 0x806BBB04
    /* li r0, 5 */ // 0x806BBB08
    *(0x310 + r29) = r0; // stw @ 0x806BBB0C
    r31 = *(0x1c + r1); // lwz @ 0x806BBB10
    r30 = *(0x18 + r1); // lwz @ 0x806BBB14
    r29 = *(0x14 + r1); // lwz @ 0x806BBB18
    r0 = *(0x24 + r1); // lwz @ 0x806BBB1C
    return;
}