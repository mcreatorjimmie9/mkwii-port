/* Function at 0x805D81D4, size=176 bytes */
/* Stack frame: 0 bytes */

int FUN_805D81D4(int r3, int r4, int r5, int r6, int r7)
{
    /* li r0, 2 */ // 0x805D81D4
    /* li r5, -1 */ // 0x805D81D8
    /* li r6, 0 */ // 0x805D81DC
    /* li r7, 0 */ // 0x805D81E0
    /* mtctr r0 */ // 0x805D81E4
    /* addis r4, r3, 1 */ // 0x805D81E8
    r0 = *(-0x6c7c + r4); // lhz @ 0x805D81EC
    if (<=) goto 0x0x805d8200;
    r5 = r7 + 0x20; // 0x805D81F8
    r6 = r0;
    r3 = r3 + 2; // 0x805D8200
    /* addis r4, r3, 1 */ // 0x805D8204
    r0 = *(-0x6c7c + r4); // lhz @ 0x805D8208
    if (<=) goto 0x0x805d821c;
    r5 = r7 + 0x21; // 0x805D8214
    r6 = r0;
    r3 = r3 + 2; // 0x805D821C
    /* addis r4, r3, 1 */ // 0x805D8220
    r0 = *(-0x6c7c + r4); // lhz @ 0x805D8224
    if (<=) goto 0x0x805d8238;
    r5 = r7 + 0x22; // 0x805D8230
    r6 = r0;
    r3 = r3 + 2; // 0x805D8238
    /* addis r4, r3, 1 */ // 0x805D823C
    r0 = *(-0x6c7c + r4); // lhz @ 0x805D8240
    if (<=) goto 0x0x805d8254;
    r5 = r7 + 0x23; // 0x805D824C
    r6 = r0;
    r3 = r3 + 2; // 0x805D8254
    /* addis r4, r3, 1 */ // 0x805D8258
    r0 = *(-0x6c7c + r4); // lhz @ 0x805D825C
    if (<=) goto 0x0x805d8270;
    r5 = r7 + 0x24; // 0x805D8268
    r6 = r0;
    r3 = r3 + 2; // 0x805D8270
    r7 = r7 + 5; // 0x805D8274
    if (counter-- != 0) goto 0x0x805d81e8;
    r3 = r5;
    return;
}