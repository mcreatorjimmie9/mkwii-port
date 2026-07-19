/* Function at 0x8089E030, size=372 bytes */
/* Stack frame: 0 bytes */

void FUN_8089E030(int r3, int r4, int r5, int r6)
{
    /* lis r4, 0 */ // 0x8089E030
    /* li r0, 3 */ // 0x8089E034
    r4 = r4 + 0; // 0x8089E038
    /* li r6, 0 */ // 0x8089E03C
    r5 = r4 + 0x2a0; // 0x8089E040
    /* mtctr r0 */ // 0x8089E044
    r0 = *(0 + r5); // lwz @ 0x8089E048
    if (!=) goto 0x0x8089e05c;
    /* li r3, 0 */ // 0x8089E054
    return;
    r0 = *(4 + r5); // lwz @ 0x8089E05C
    if (!=) goto 0x0x8089e070;
    /* li r3, 0 */ // 0x8089E068
    return;
    r0 = *(8 + r5); // lwz @ 0x8089E070
    if (!=) goto 0x0x8089e084;
    /* li r3, 0 */ // 0x8089E07C
    return;
    r0 = *(0xc + r5); // lwz @ 0x8089E084
    if (!=) goto 0x0x8089e098;
    /* li r3, 0 */ // 0x8089E090
    return;
    r0 = *(0x10 + r5); // lwz @ 0x8089E098
    if (!=) goto 0x0x8089e0ac;
    /* li r3, 0 */ // 0x8089E0A4
    return;
    r5 = r5 + 0x14; // 0x8089E0AC
    r6 = r6 + 4; // 0x8089E0B0
    if (counter-- != 0) goto 0x0x8089e048;
    /* li r0, 0x11 */ // 0x8089E0B8
    r5 = r4 + 0x2dc; // 0x8089E0BC
    /* mtctr r0 */ // 0x8089E0C0
    r0 = *(0 + r5); // lwz @ 0x8089E0C4
    if (!=) goto 0x0x8089e0d8;
    /* li r3, 1 */ // 0x8089E0D0
    return;
    r5 = r5 + 4; // 0x8089E0D8
    if (counter-- != 0) goto 0x0x8089e0c4;
    /* li r0, 2 */ // 0x8089E0E0
    r4 = r4 + 0x320; // 0x8089E0E4
    /* li r5, 0 */ // 0x8089E0E8
    /* mtctr r0 */ // 0x8089E0EC
    r0 = *(0 + r4); // lwz @ 0x8089E0F0
    if (!=) goto 0x0x8089e104;
    /* li r3, 2 */ // 0x8089E0FC
    return;
    r0 = *(4 + r4); // lwz @ 0x8089E104
    if (!=) goto 0x0x8089e118;
    /* li r3, 2 */ // 0x8089E110
    return;
    r0 = *(8 + r4); // lwz @ 0x8089E118
    if (!=) goto 0x0x8089e12c;
    /* li r3, 2 */ // 0x8089E124
    return;
    r0 = *(0xc + r4); // lwz @ 0x8089E12C
    if (!=) goto 0x0x8089e140;
    /* li r3, 2 */ // 0x8089E138
    return;
    r0 = *(0x10 + r4); // lwz @ 0x8089E140
    if (!=) goto 0x0x8089e154;
    /* li r3, 2 */ // 0x8089E14C
    return;
    r0 = *(0x14 + r4); // lwz @ 0x8089E154
    if (!=) goto 0x0x8089e168;
    /* li r3, 2 */ // 0x8089E160
    return;
    r0 = *(0x18 + r4); // lwz @ 0x8089E168
    if (!=) goto 0x0x8089e17c;
    /* li r3, 2 */ // 0x8089E174
    return;
    r0 = *(0x1c + r4); // lwz @ 0x8089E17C
    if (!=) goto 0x0x8089e190;
    /* li r3, 2 */ // 0x8089E188
    return;
    r4 = r4 + 0x20; // 0x8089E190
    r5 = r5 + 7; // 0x8089E194
    if (counter-- != 0) goto 0x0x8089e0f0;
    /* li r3, -1 */ // 0x8089E19C
    return;
}