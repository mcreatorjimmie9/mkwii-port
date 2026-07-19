/* Function at 0x8065924C, size=272 bytes */
/* Stack frame: 0 bytes */

int FUN_8065924C(int r3, int r4, int r5)
{
    /* li r0, 3 */ // 0x8065924C
    /* li r5, 0 */ // 0x80659250
    /* mtctr r0 */ // 0x80659254
    r0 = *(0 + r3); // lwz @ 0x80659258
    r4 = *(4 + r3); // lwz @ 0x8065925C
    /* or. r0, r4, r0 */ // 0x80659260
    if (!=) goto 0x0x80659270;
    /* li r3, 0 */ // 0x80659268
    return;
    r0 = *(0x1d8 + r3); // lwz @ 0x80659270
    r4 = *(0x1dc + r3); // lwz @ 0x80659274
    /* or. r0, r4, r0 */ // 0x80659278
    if (!=) goto 0x0x80659288;
    /* li r3, 0 */ // 0x80659280
    return;
    r0 = *(0x3b0 + r3); // lwz @ 0x80659288
    r4 = *(0x3b4 + r3); // lwz @ 0x8065928C
    /* or. r0, r4, r0 */ // 0x80659290
    if (!=) goto 0x0x806592a0;
    /* li r3, 0 */ // 0x80659298
    return;
    r0 = *(0x588 + r3); // lwz @ 0x806592A0
    r4 = *(0x58c + r3); // lwz @ 0x806592A4
    /* or. r0, r4, r0 */ // 0x806592A8
    if (!=) goto 0x0x806592b8;
    /* li r3, 0 */ // 0x806592B0
    return;
    r0 = *(0x760 + r3); // lwz @ 0x806592B8
    r4 = *(0x764 + r3); // lwz @ 0x806592BC
    /* or. r0, r4, r0 */ // 0x806592C0
    if (!=) goto 0x0x806592d0;
    /* li r3, 0 */ // 0x806592C8
    return;
    r0 = *(0x938 + r3); // lwz @ 0x806592D0
    r4 = *(0x93c + r3); // lwz @ 0x806592D4
    /* or. r0, r4, r0 */ // 0x806592D8
    if (!=) goto 0x0x806592e8;
    /* li r3, 0 */ // 0x806592E0
    return;
    r0 = *(0xb10 + r3); // lwz @ 0x806592E8
    r4 = *(0xb14 + r3); // lwz @ 0x806592EC
    /* or. r0, r4, r0 */ // 0x806592F0
    if (!=) goto 0x0x80659300;
    /* li r3, 0 */ // 0x806592F8
    return;
    r0 = *(0xce8 + r3); // lwz @ 0x80659300
    r4 = *(0xcec + r3); // lwz @ 0x80659304
    /* or. r0, r4, r0 */ // 0x80659308
    if (!=) goto 0x0x80659318;
    /* li r3, 0 */ // 0x80659310
    return;
    r0 = *(0xec0 + r3); // lwz @ 0x80659318
    r4 = *(0xec4 + r3); // lwz @ 0x8065931C
    /* or. r0, r4, r0 */ // 0x80659320
    if (!=) goto 0x0x80659330;
    /* li r3, 0 */ // 0x80659328
    return;
    r0 = *(0x1098 + r3); // lwz @ 0x80659330
    r4 = *(0x109c + r3); // lwz @ 0x80659334
    /* or. r0, r4, r0 */ // 0x80659338
    if (!=) goto 0x0x80659348;
    /* li r3, 0 */ // 0x80659340
    return;
    r3 = r3 + 0x1270; // 0x80659348
    r5 = r5 + 9; // 0x8065934C
    if (counter-- != 0) goto 0x0x80659258;
    /* li r3, 1 */ // 0x80659354
    return;
}