/* Function at 0x808E6DC0, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808E6DC0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808E6DC8
    /* slwi r0, r3, 2 */ // 0x808E6DD0
    *(0xc + r1) = r31; // stw @ 0x808E6DD4
    *(8 + r1) = r30; // stw @ 0x808E6DD8
    r3 = *(0 + r4); // lwz @ 0x808E6DDC
    r3 = *(0 + r3); // lwz @ 0x808E6DE0
    r3 = r3 + r0; // 0x808E6DE4
    r30 = *(8 + r3); // lwz @ 0x808E6DE8
    if (!=) goto 0x0x808e6dfc;
    /* li r30, 0 */ // 0x808E6DF4
    /* b 0x808e6e50 */ // 0x808E6DF8
    /* lis r31, 0 */ // 0x808E6DFC
    r31 = r31 + 0; // 0x808E6E00
    if (==) goto 0x0x808e6e4c;
    r12 = *(0 + r30); // lwz @ 0x808E6E08
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E6E10
    /* mtctr r12 */ // 0x808E6E14
    /* bctrl  */ // 0x808E6E18
    /* b 0x808e6e34 */ // 0x808E6E1C
    if (!=) goto 0x0x808e6e30;
    /* li r0, 1 */ // 0x808E6E28
    /* b 0x808e6e40 */ // 0x808E6E2C
    r3 = *(0 + r3); // lwz @ 0x808E6E30
    if (!=) goto 0x0x808e6e20;
    /* li r0, 0 */ // 0x808E6E3C
    if (==) goto 0x0x808e6e4c;
    /* b 0x808e6e50 */ // 0x808E6E48
    /* li r30, 0 */ // 0x808E6E4C
    if (!=) goto 0x0x808e6e60;
    /* li r30, 0 */ // 0x808E6E58
    /* b 0x808e6eb4 */ // 0x808E6E5C
    /* lis r31, 0 */ // 0x808E6E60
    r31 = r31 + 0; // 0x808E6E64
    if (==) goto 0x0x808e6eb0;
    r12 = *(0 + r30); // lwz @ 0x808E6E6C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E6E74
    /* mtctr r12 */ // 0x808E6E78
    /* bctrl  */ // 0x808E6E7C
    /* b 0x808e6e98 */ // 0x808E6E80
    if (!=) goto 0x0x808e6e94;
    /* li r0, 1 */ // 0x808E6E8C
    /* b 0x808e6ea4 */ // 0x808E6E90
    r3 = *(0 + r3); // lwz @ 0x808E6E94
    if (!=) goto 0x0x808e6e84;
    /* li r0, 0 */ // 0x808E6EA0
    if (==) goto 0x0x808e6eb0;
    /* b 0x808e6eb4 */ // 0x808E6EAC
    /* li r30, 0 */ // 0x808E6EB0
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E6EB8
    r30 = *(8 + r1); // lwz @ 0x808E6EBC
    r0 = *(0x14 + r1); // lwz @ 0x808E6EC0
    return;
}