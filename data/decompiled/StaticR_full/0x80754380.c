/* Function at 0x80754380, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80754380(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8075438C
    r31 = r3;
    r0 = *(0x116 + r3); // lbz @ 0x80754394
    if (==) goto 0x0x80754434;
    r5 = *(0x118 + r3); // lhz @ 0x807543A0
    if (==) goto 0x0x807543d8;
    r6 = *(0xbc + r3); // lwz @ 0x807543AC
    if (<) goto 0x0x807543d8;
    /* lis r4, 0 */ // 0x807543B8
    r0 = *(0 + r4); // lha @ 0x807543BC
    r0 = r5 + r0; // 0x807543C0
    if (>=) goto 0x0x807543d8;
    /* subf r0, r5, r6 */ // 0x807543CC
    *(0x11c + r3) = r0; // sth @ 0x807543D0
    /* b 0x8075440c */ // 0x807543D4
    r5 = *(0x11a + r3); // lhz @ 0x807543D8
    if (==) goto 0x0x8075440c;
    r6 = *(0xbc + r3); // lwz @ 0x807543E4
    if (<) goto 0x0x8075440c;
    /* lis r4, 0 */ // 0x807543F0
    r0 = *(0 + r4); // lha @ 0x807543F4
    r0 = r5 + r0; // 0x807543F8
    if (>=) goto 0x0x8075440c;
    /* subf r0, r5, r6 */ // 0x80754404
    *(0x11e + r3) = r0; // sth @ 0x80754408
    /* lis r4, 0 */ // 0x8075440C
    /* lfs f1, 0(r4) */ // 0x80754410
    /* stfs f1, 0x108(r3) */ // 0x80754414
    r3 = *(0x20 + r3); // lwz @ 0x80754418
    r12 = *(0 + r3); // lwz @ 0x8075441C
    r12 = *(0x18 + r12); // lwz @ 0x80754420
    /* mtctr r12 */ // 0x80754424
    /* bctrl  */ // 0x80754428
    /* li r0, 1 */ // 0x8075442C
    *(0xb8 + r31) = r0; // stw @ 0x80754430
    r0 = *(0x14 + r1); // lwz @ 0x80754434
    r31 = *(0xc + r1); // lwz @ 0x80754438
    return;
}