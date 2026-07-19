/* Function at 0x807E1534, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807E1534(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807E1544
    r30 = r5;
    r0 = *(0xb0 + r3); // lwz @ 0x807E154C
    if (==) goto 0x0x807e1568;
    if (==) goto 0x0x807e1568;
    if (!=) goto 0x0x807e15b4;
    /* slwi r0, r4, 2 */ // 0x807E1568
    r31 = r3 + r0; // 0x807E156C
    r3 = *(0x14c + r31); // lwz @ 0x807E1570
    r12 = *(0 + r3); // lwz @ 0x807E1574
    r12 = *(0xc + r12); // lwz @ 0x807E1578
    /* mtctr r12 */ // 0x807E157C
    /* bctrl  */ // 0x807E1580
    r3 = *(0x14c + r31); // lwz @ 0x807E1584
    r4 = r30;
    r12 = *(0 + r3); // lwz @ 0x807E158C
    r12 = *(0x78 + r12); // lwz @ 0x807E1590
    /* mtctr r12 */ // 0x807E1594
    /* bctrl  */ // 0x807E1598
    r3 = *(0x14c + r31); // lwz @ 0x807E159C
    r12 = *(0 + r3); // lwz @ 0x807E15A0
    r12 = *(0x80 + r12); // lwz @ 0x807E15A4
    /* mtctr r12 */ // 0x807E15A8
    /* bctrl  */ // 0x807E15AC
    /* b 0x807e15d0 */ // 0x807E15B0
    /* slwi r0, r4, 2 */ // 0x807E15B4
    r3 = r3 + r0; // 0x807E15B8
    r3 = *(0x14c + r3); // lwz @ 0x807E15BC
    r12 = *(0 + r3); // lwz @ 0x807E15C0
    r12 = *(0x10 + r12); // lwz @ 0x807E15C4
    /* mtctr r12 */ // 0x807E15C8
    /* bctrl  */ // 0x807E15CC
    r0 = *(0x14 + r1); // lwz @ 0x807E15D0
    r31 = *(0xc + r1); // lwz @ 0x807E15D4
    r30 = *(8 + r1); // lwz @ 0x807E15D8
    return;
}