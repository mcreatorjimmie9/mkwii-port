/* Function at 0x806EB358, size=196 bytes */
/* Stack frame: 0 bytes */

int FUN_806EB358(int r3, int r4)
{
    /* li r0, 3 */ // 0x806EB358
    r3 = r3 + 4; // 0x806EB35C
    /* li r4, 0 */ // 0x806EB360
    /* mtctr r0 */ // 0x806EB364
    r0 = *(0x19 + r3); // lbz @ 0x806EB368
    if (!=) goto 0x0x806eb37c;
    /* li r3, 1 */ // 0x806EB374
    return;
    r0 = *(0x39 + r3); // lbz @ 0x806EB37C
    if (!=) goto 0x0x806eb390;
    /* li r3, 1 */ // 0x806EB388
    return;
    r0 = *(0x59 + r3); // lbz @ 0x806EB390
    if (!=) goto 0x0x806eb3a4;
    /* li r3, 1 */ // 0x806EB39C
    return;
    r0 = *(0x79 + r3); // lbz @ 0x806EB3A4
    if (!=) goto 0x0x806eb3b8;
    /* li r3, 1 */ // 0x806EB3B0
    return;
    r0 = *(0x99 + r3); // lbz @ 0x806EB3B8
    if (!=) goto 0x0x806eb3cc;
    /* li r3, 1 */ // 0x806EB3C4
    return;
    r0 = *(0xb9 + r3); // lbz @ 0x806EB3CC
    if (!=) goto 0x0x806eb3e0;
    /* li r3, 1 */ // 0x806EB3D8
    return;
    r0 = *(0xd9 + r3); // lbz @ 0x806EB3E0
    if (!=) goto 0x0x806eb3f4;
    /* li r3, 1 */ // 0x806EB3EC
    return;
    r0 = *(0xf9 + r3); // lbz @ 0x806EB3F4
    if (!=) goto 0x0x806eb408;
    /* li r3, 1 */ // 0x806EB400
    return;
    r3 = r3 + 0x100; // 0x806EB408
    r4 = r4 + 7; // 0x806EB40C
    if (counter-- != 0) goto 0x0x806eb368;
    /* li r3, 0 */ // 0x806EB414
    return;
}