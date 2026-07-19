/* Function at 0x805D7FD4, size=224 bytes */
/* Stack frame: 0 bytes */

int FUN_805D7FD4(int r3, int r4, int r5, int r6, int r7)
{
    /* li r0, 6 */ // 0x805D7FD4
    /* li r5, -1 */ // 0x805D7FD8
    /* li r6, 0 */ // 0x805D7FDC
    /* li r7, 0 */ // 0x805D7FE0
    /* mtctr r0 */ // 0x805D7FE4
    /* addis r4, r3, 1 */ // 0x805D7FE8
    r0 = *(-0x6d04 + r4); // lhz @ 0x805D7FEC
    if (<=) goto 0x0x805d8000;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8000
    r7 = r7 + 1; // 0x805D8004
    /* addis r4, r3, 1 */ // 0x805D8008
    r0 = *(-0x6d04 + r4); // lhz @ 0x805D800C
    if (<=) goto 0x0x805d8020;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8020
    r7 = r7 + 1; // 0x805D8024
    /* addis r4, r3, 1 */ // 0x805D8028
    r0 = *(-0x6d04 + r4); // lhz @ 0x805D802C
    if (<=) goto 0x0x805d8040;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8040
    r7 = r7 + 1; // 0x805D8044
    /* addis r4, r3, 1 */ // 0x805D8048
    r0 = *(-0x6d04 + r4); // lhz @ 0x805D804C
    if (<=) goto 0x0x805d8060;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8060
    r7 = r7 + 1; // 0x805D8064
    /* addis r4, r3, 1 */ // 0x805D8068
    r0 = *(-0x6d04 + r4); // lhz @ 0x805D806C
    if (<=) goto 0x0x805d8080;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8080
    r7 = r7 + 1; // 0x805D8084
    /* addis r4, r3, 1 */ // 0x805D8088
    r0 = *(-0x6d04 + r4); // lhz @ 0x805D808C
    if (<=) goto 0x0x805d80a0;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D80A0
    r7 = r7 + 1; // 0x805D80A4
    if (counter-- != 0) goto 0x0x805d7fe8;
    r3 = r5;
    return;
}