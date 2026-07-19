/* Function at 0x8089BBC4, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089BBC4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089BBD0
    r31 = r3;
    r0 = *(0x2c + r3); // lhz @ 0x8089BBD8
    /* clrlwi. r0, r0, 0x1e */ // 0x8089BBDC
    if (==) goto 0x0x8089bbe8;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r3 = *(0x2c + r31); // lhz @ 0x8089BBE8
    /* rlwinm. r0, r3, 0, 0x1d, 0x1d */ // 0x8089BBEC
    if (==) goto 0x0x8089bc24;
    r0 = r3 rlwinm 0; // rlwinm
    *(0x2c + r31) = r0; // sth @ 0x8089BBF8
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x8089BC00
    r12 = *(0x6c + r12); // lwz @ 0x8089BC04
    /* mtctr r12 */ // 0x8089BC08
    /* bctrl  */ // 0x8089BC0C
    r12 = *(0 + r31); // lwz @ 0x8089BC10
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x8089BC18
    /* mtctr r12 */ // 0x8089BC1C
    /* bctrl  */ // 0x8089BC20
    r3 = *(0x2c + r31); // lhz @ 0x8089BC24
    /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x8089BC28
    if (==) goto 0x0x8089bc60;
    r0 = r3 rlwinm 0; // rlwinm
    *(0x2c + r31) = r0; // sth @ 0x8089BC34
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x8089BC3C
    r12 = *(0x78 + r12); // lwz @ 0x8089BC40
    /* mtctr r12 */ // 0x8089BC44
    /* bctrl  */ // 0x8089BC48
    r12 = *(0 + r31); // lwz @ 0x8089BC4C
    r3 = r31;
    r12 = *(0x7c + r12); // lwz @ 0x8089BC54
    /* mtctr r12 */ // 0x8089BC58
    /* bctrl  */ // 0x8089BC5C
    r0 = *(0x14 + r1); // lwz @ 0x8089BC60
    r31 = *(0xc + r1); // lwz @ 0x8089BC64
    return;
}