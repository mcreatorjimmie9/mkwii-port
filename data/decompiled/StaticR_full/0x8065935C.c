/* Function at 0x8065935C, size=232 bytes */
/* Stack frame: 0 bytes */

int FUN_8065935C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* li r0, 5 */ // 0x8065935C
    /* li r8, 0 */ // 0x80659360
    /* mtctr r0 */ // 0x80659364
    r6 = *(0 + r4); // lwz @ 0x80659368
    r0 = *(0 + r3); // lwz @ 0x8065936C
    r7 = *(4 + r4); // lwz @ 0x80659370
    r5 = *(4 + r3); // lwz @ 0x80659374
    r0 = r6 ^ r0; // 0x80659378
    r5 = r7 ^ r5; // 0x8065937C
    /* or. r0, r5, r0 */ // 0x80659380
    if (!=) goto 0x0x80659390;
    /* li r3, 1 */ // 0x80659388
    return;
    r0 = *(0x1d8 + r3); // lwz @ 0x80659390
    r5 = *(0x1dc + r3); // lwz @ 0x80659394
    r0 = r6 ^ r0; // 0x80659398
    r5 = r7 ^ r5; // 0x8065939C
    /* or. r0, r5, r0 */ // 0x806593A0
    if (!=) goto 0x0x806593b0;
    /* li r3, 1 */ // 0x806593A8
    return;
    r0 = *(0x3b0 + r3); // lwz @ 0x806593B0
    r5 = *(0x3b4 + r3); // lwz @ 0x806593B4
    r0 = r6 ^ r0; // 0x806593B8
    r5 = r7 ^ r5; // 0x806593BC
    /* or. r0, r5, r0 */ // 0x806593C0
    if (!=) goto 0x0x806593d0;
    /* li r3, 1 */ // 0x806593C8
    return;
    r0 = *(0x588 + r3); // lwz @ 0x806593D0
    r5 = *(0x58c + r3); // lwz @ 0x806593D4
    r0 = r6 ^ r0; // 0x806593D8
    r5 = r7 ^ r5; // 0x806593DC
    /* or. r0, r5, r0 */ // 0x806593E0
    if (!=) goto 0x0x806593f0;
    /* li r3, 1 */ // 0x806593E8
    return;
    r0 = *(0x760 + r3); // lwz @ 0x806593F0
    r5 = *(0x764 + r3); // lwz @ 0x806593F4
    r0 = r6 ^ r0; // 0x806593F8
    r5 = r7 ^ r5; // 0x806593FC
    /* or. r0, r5, r0 */ // 0x80659400
    if (!=) goto 0x0x80659410;
    /* li r3, 1 */ // 0x80659408
    return;
    r0 = *(0x938 + r3); // lwz @ 0x80659410
    r5 = *(0x93c + r3); // lwz @ 0x80659414
    r0 = r6 ^ r0; // 0x80659418
    r5 = r7 ^ r5; // 0x8065941C
    /* or. r0, r5, r0 */ // 0x80659420
    if (!=) goto 0x0x80659430;
    /* li r3, 1 */ // 0x80659428
    return;
    r3 = r3 + 0xb10; // 0x80659430
    r8 = r8 + 5; // 0x80659434
    if (counter-- != 0) goto 0x0x80659368;
    /* li r3, 0 */ // 0x8065943C
    return;
}