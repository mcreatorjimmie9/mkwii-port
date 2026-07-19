/* Function at 0x80858544, size=168 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80858544(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8085854C
    r0 = *(0x14b + r3); // lbz @ 0x80858550
    if (==) goto 0x0x80858568;
    r0 = *(0x145 + r3); // lbz @ 0x8085855C
    if (!=) goto 0x0x80858570;
    /* li r3, 0 */ // 0x80858568
    /* b 0x808585dc */ // 0x8085856C
    r4 = *(0 + r3); // lwz @ 0x80858570
    r4 = *(4 + r4); // lwz @ 0x80858574
    r0 = *(0xc + r4); // lwz @ 0x80858578
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x8085857C
    if (==) goto 0x0x8085858c;
    /* li r3, 0 */ // 0x80858584
    /* b 0x808585dc */ // 0x80858588
    r0 = *(0xfa + r3); // lhz @ 0x8085858C
    r4 = r3 + r0; // 0x80858590
    r0 = *(0x14c + r4); // lbz @ 0x80858594
    /* rlwinm. r0, r0, 0x1e, 0x1f, 0x1f */ // 0x80858598
    if (==) goto 0x0x808585d8;
    r0 = *(0xfc + r3); // lhz @ 0x808585A0
    r4 = r3 + r0; // 0x808585A4
    r0 = *(0x14c + r4); // lbz @ 0x808585A8
    /* rlwinm. r0, r0, 0x1e, 0x1f, 0x1f */ // 0x808585AC
    if (!=) goto 0x0x808585d8;
    r0 = *(0xf8 + r3); // lbz @ 0x808585B4
    if (==) goto 0x0x808585cc;
    r3 = *(0x6c + r3); // lwz @ 0x808585C0
    FUN_805EEF9C(); // bl 0x805EEF9C
    /* b 0x808585d0 */ // 0x808585C8
    /* li r3, 0 */ // 0x808585CC
    /* cntlzw r0, r3 */ // 0x808585D0
    /* srwi r0, r0, 5 */ // 0x808585D4
    r3 = r0;
    r0 = *(0x14 + r1); // lwz @ 0x808585DC
    return;
}