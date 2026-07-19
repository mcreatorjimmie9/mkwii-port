/* Function at 0x8072B360, size=720 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8072B360(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8072B378
    *(0x10 + r1) = r28; // stw @ 0x8072B37C
    r4 = *(0x118 + r3); // lwz @ 0x8072B380
    r4 = *(0 + r4); // lwz @ 0x8072B384
    r4 = *(4 + r4); // lwz @ 0x8072B388
    r4 = *(0xc + r4); // lwz @ 0x8072B38C
    /* clrlwi. r0, r4, 0x1f */ // 0x8072B390
    r31 = r4 rlwinm 0x1f; // rlwinm
    if (==) goto 0x0x8072b3a8;
    r0 = *(0xb9 + r3); // lbz @ 0x8072B39C
    /* cntlzw r0, r0 */ // 0x8072B3A0
    /* srwi r0, r0, 5 */ // 0x8072B3A4
    if (==) goto 0x0x8072b3bc;
    r0 = *(0x96 + r3); // lbz @ 0x8072B3B0
    /* cntlzw r0, r0 */ // 0x8072B3B4
    /* srwi r0, r0, 5 */ // 0x8072B3B8
    if (==) goto 0x0x8072b438;
    r29 = *(0x1fc + r3); // lwz @ 0x8072B3C4
    if (==) goto 0x0x8072b4e4;
    r12 = *(0 + r29); // lwz @ 0x8072B3D0
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x8072B3D8
    /* mtctr r12 */ // 0x8072B3DC
    /* bctrl  */ // 0x8072B3E0
    r12 = *(0 + r29); // lwz @ 0x8072B3E4
    r3 = r29;
    r4 = r30 + 0xc4; // 0x8072B3EC
    r12 = *(0x78 + r12); // lwz @ 0x8072B3F0
    /* mtctr r12 */ // 0x8072B3F4
    /* bctrl  */ // 0x8072B3F8
    r0 = *(0xb0 + r30); // lbz @ 0x8072B3FC
    if (==) goto 0x0x8072b420;
    r12 = *(0 + r29); // lwz @ 0x8072B408
    r3 = r29;
    r4 = r30 + 0x72c; // 0x8072B410
    r12 = *(0x70 + r12); // lwz @ 0x8072B414
    /* mtctr r12 */ // 0x8072B418
    /* bctrl  */ // 0x8072B41C
    r12 = *(0 + r29); // lwz @ 0x8072B420
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x8072B428
    /* mtctr r12 */ // 0x8072B42C
    /* bctrl  */ // 0x8072B430
    /* b 0x8072b4e4 */ // 0x8072B434
    r29 = *(0x1fc + r3); // lwz @ 0x8072B438
    if (==) goto 0x0x8072b4e4;
    r3 = r29 + 0x74; // 0x8072B444
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072b45c;
    /* li r3, 0 */ // 0x8072B454
    /* b 0x8072b460 */ // 0x8072B458
    r3 = *(0xc + r3); // lwz @ 0x8072B45C
    /* li r0, 0 */ // 0x8072B464
    if (==) goto 0x0x8072b474;
    if (!=) goto 0x0x8072b478;
    /* li r0, 1 */ // 0x8072B474
    if (==) goto 0x0x8072b4e4;
    r12 = *(0 + r29); // lwz @ 0x8072B480
    r3 = r29;
    r12 = *(0x14 + r12); // lwz @ 0x8072B488
    /* mtctr r12 */ // 0x8072B48C
    /* bctrl  */ // 0x8072B490
    r12 = *(0 + r29); // lwz @ 0x8072B494
    r3 = r29;
    r4 = r30 + 0xc4; // 0x8072B49C
    r12 = *(0x78 + r12); // lwz @ 0x8072B4A0
    /* mtctr r12 */ // 0x8072B4A4
    /* bctrl  */ // 0x8072B4A8
    r0 = *(0xb0 + r30); // lbz @ 0x8072B4AC
    if (==) goto 0x0x8072b4d0;
    r12 = *(0 + r29); // lwz @ 0x8072B4B8
    r3 = r29;
    r4 = r30 + 0x72c; // 0x8072B4C0
    r12 = *(0x70 + r12); // lwz @ 0x8072B4C4
    /* mtctr r12 */ // 0x8072B4C8
    /* bctrl  */ // 0x8072B4CC
    r12 = *(0 + r29); // lwz @ 0x8072B4D0
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x8072B4D8
    /* mtctr r12 */ // 0x8072B4DC
    /* bctrl  */ // 0x8072B4E0
    /* li r29, 0 */ // 0x8072B4E8
    if (==) goto 0x0x8072b50c;
    r0 = *(0xb9 + r30); // lbz @ 0x8072B4F0
    if (!=) goto 0x0x8072b50c;
    r0 = *(0x96 + r30); // lbz @ 0x8072B4FC
    if (!=) goto 0x0x8072b50c;
    /* li r29, 1 */ // 0x8072B508
    if (==) goto 0x0x8072b584;
    r28 = *(0x200 + r30); // lwz @ 0x8072B514
    if (==) goto 0x0x8072b584;
    r12 = *(0 + r28); // lwz @ 0x8072B520
    r3 = r28;
    r12 = *(0xc + r12); // lwz @ 0x8072B528
    /* mtctr r12 */ // 0x8072B52C
    /* bctrl  */ // 0x8072B530
    r12 = *(0 + r28); // lwz @ 0x8072B534
    r3 = r28;
    r4 = r30 + 0xc4; // 0x8072B53C
    r12 = *(0x78 + r12); // lwz @ 0x8072B540
    /* mtctr r12 */ // 0x8072B544
    /* bctrl  */ // 0x8072B548
    r0 = *(0xb0 + r30); // lbz @ 0x8072B54C
    if (==) goto 0x0x8072b570;
    r12 = *(0 + r28); // lwz @ 0x8072B558
    r3 = r28;
    r4 = r30 + 0x72c; // 0x8072B560
    r12 = *(0x70 + r12); // lwz @ 0x8072B564
    /* mtctr r12 */ // 0x8072B568
    /* bctrl  */ // 0x8072B56C
    r12 = *(0 + r28); // lwz @ 0x8072B570
    r3 = r28;
    r12 = *(0x80 + r12); // lwz @ 0x8072B578
    /* mtctr r12 */ // 0x8072B57C
    /* bctrl  */ // 0x8072B580
    /* li r3, 0 */ // 0x8072B588
    if (!=) goto 0x0x8072b5a0;
    r0 = *(0x89 + r30); // lbz @ 0x8072B590
    if (==) goto 0x0x8072b5a0;
    /* li r3, 1 */ // 0x8072B59C
    r0 = *(0x98 + r30); // lbz @ 0x8072B5A0
    /* li r4, 0 */ // 0x8072B5A4
    if (==) goto 0x0x8072b5bc;
    if (==) goto 0x0x8072b5bc;
    /* li r4, 1 */ // 0x8072B5B8
    if (!=) goto 0x0x8072b5cc;
    if (==) goto 0x0x8072b5d4;
    /* li r0, 0 */ // 0x8072B5CC
    *(0x8c + r30) = r0; // stw @ 0x8072B5D0
    r28 = *(0x8c + r30); // lwz @ 0x8072B5D4
    if (==) goto 0x0x8072b67c;
    r3 = *(0x200 + r30); // lwz @ 0x8072B5E0
    r12 = *(0 + r3); // lwz @ 0x8072B5E4
    r12 = *(0xc + r12); // lwz @ 0x8072B5E8
    /* mtctr r12 */ // 0x8072B5EC
    /* bctrl  */ // 0x8072B5F0
    r3 = *(0x200 + r30); // lwz @ 0x8072B5F4
    r4 = r30 + 0xc4; // 0x8072B5F8
    r12 = *(0 + r3); // lwz @ 0x8072B5FC
    r12 = *(0x78 + r12); // lwz @ 0x8072B600
    /* mtctr r12 */ // 0x8072B604
    /* bctrl  */ // 0x8072B608
    r3 = *(0x200 + r30); // lwz @ 0x8072B60C
    /* mulli r0, r28, 0x19 */ // 0x8072B610
    /* li r4, 0xff */ // 0x8072B614
    r12 = *(0 + r3); // lwz @ 0x8072B618
    /* li r5, 0xff */ // 0x8072B61C
    /* subfic r0, r0, 0xff */ // 0x8072B620
    /* li r6, 0xff */ // 0x8072B624
    r12 = *(0x50 + r12); // lwz @ 0x8072B628
    /* clrlwi r7, r0, 0x18 */ // 0x8072B62C
}