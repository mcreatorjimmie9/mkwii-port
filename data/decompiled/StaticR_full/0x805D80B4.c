/* Function at 0x805D80B4, size=288 bytes */
/* Stack frame: 0 bytes */

int FUN_805D80B4(int r3, int r4, int r5, int r6, int r7)
{
    /* li r0, 4 */ // 0x805D80B4
    /* li r5, -1 */ // 0x805D80B8
    /* li r6, 0 */ // 0x805D80BC
    /* li r7, 0 */ // 0x805D80C0
    /* mtctr r0 */ // 0x805D80C4
    /* addis r4, r3, 1 */ // 0x805D80C8
    r0 = *(-0x6cbc + r4); // lhz @ 0x805D80CC
    if (<=) goto 0x0x805d80e0;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D80E0
    r7 = r7 + 1; // 0x805D80E4
    /* addis r4, r3, 1 */ // 0x805D80E8
    r0 = *(-0x6cbc + r4); // lhz @ 0x805D80EC
    if (<=) goto 0x0x805d8100;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8100
    r7 = r7 + 1; // 0x805D8104
    /* addis r4, r3, 1 */ // 0x805D8108
    r0 = *(-0x6cbc + r4); // lhz @ 0x805D810C
    if (<=) goto 0x0x805d8120;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8120
    r7 = r7 + 1; // 0x805D8124
    /* addis r4, r3, 1 */ // 0x805D8128
    r0 = *(-0x6cbc + r4); // lhz @ 0x805D812C
    if (<=) goto 0x0x805d8140;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8140
    r7 = r7 + 1; // 0x805D8144
    /* addis r4, r3, 1 */ // 0x805D8148
    r0 = *(-0x6cbc + r4); // lhz @ 0x805D814C
    if (<=) goto 0x0x805d8160;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8160
    r7 = r7 + 1; // 0x805D8164
    /* addis r4, r3, 1 */ // 0x805D8168
    r0 = *(-0x6cbc + r4); // lhz @ 0x805D816C
    if (<=) goto 0x0x805d8180;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D8180
    r7 = r7 + 1; // 0x805D8184
    /* addis r4, r3, 1 */ // 0x805D8188
    r0 = *(-0x6cbc + r4); // lhz @ 0x805D818C
    if (<=) goto 0x0x805d81a0;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D81A0
    r7 = r7 + 1; // 0x805D81A4
    /* addis r4, r3, 1 */ // 0x805D81A8
    r0 = *(-0x6cbc + r4); // lhz @ 0x805D81AC
    if (<=) goto 0x0x805d81c0;
    r5 = r7;
    r6 = r0;
    r3 = r3 + 2; // 0x805D81C0
    r7 = r7 + 1; // 0x805D81C4
    if (counter-- != 0) goto 0x0x805d80c8;
    r3 = r5;
    return;
}