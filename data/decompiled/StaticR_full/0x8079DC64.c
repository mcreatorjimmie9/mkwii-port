/* Function at 0x8079DC64, size=196 bytes */
/* Stack frame: 0 bytes */

int FUN_8079DC64(int r3, int r4, int r5, int r6)
{
    r0 = *(0x40 + r3); // lwz @ 0x8079DC64
    if (==) goto 0x0x8079dc78;
    if (!=) goto 0x0x8079dd20;
    r6 = *(0x28 + r3); // lbz @ 0x8079DC78
    r5 = r3;
    /* mtctr r6 */ // 0x8079DC80
    if (<=) goto 0x0x8079dcb8;
    r4 = *(0x18 + r5); // lwz @ 0x8079DC8C
    r4 = *(0xdc + r4); // lwz @ 0x8079DC90
    r4 = *(0 + r4); // lwz @ 0x8079DC94
    r4 = *(4 + r4); // lwz @ 0x8079DC98
    r0 = *(0xc + r4); // lwz @ 0x8079DC9C
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8079DCA0
    if (==) goto 0x0x8079dcb0;
    /* li r0, 1 */ // 0x8079DCA8
    /* b 0x8079dcbc */ // 0x8079DCAC
    r5 = r5 + 4; // 0x8079DCB0
    if (counter-- != 0) goto 0x0x8079dc8c;
    /* li r0, 0 */ // 0x8079DCB8
    if (==) goto 0x0x8079dccc;
    /* li r3, 1 */ // 0x8079DCC4
    return;
    /* mtctr r6 */ // 0x8079DCCC
    if (<=) goto 0x0x8079dd04;
    r4 = *(0x18 + r3); // lwz @ 0x8079DCD8
    r4 = *(0xdc + r4); // lwz @ 0x8079DCDC
    r4 = *(0 + r4); // lwz @ 0x8079DCE0
    r4 = *(4 + r4); // lwz @ 0x8079DCE4
    r0 = *(0xc + r4); // lwz @ 0x8079DCE8
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x8079DCEC
    if (==) goto 0x0x8079dcfc;
    /* li r0, 1 */ // 0x8079DCF4
    /* b 0x8079dd08 */ // 0x8079DCF8
    r3 = r3 + 4; // 0x8079DCFC
    if (counter-- != 0) goto 0x0x8079dcd8;
    /* li r0, 0 */ // 0x8079DD04
    if (==) goto 0x0x8079dd18;
    /* li r3, 1 */ // 0x8079DD10
    return;
    /* li r3, 0 */ // 0x8079DD18
    return;
    /* li r3, 0 */ // 0x8079DD20
    return;
}