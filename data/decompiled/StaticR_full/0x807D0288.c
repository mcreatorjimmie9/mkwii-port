/* Function at 0x807D0288, size=300 bytes */
/* Stack frame: 0 bytes */

void FUN_807D0288(int r3, int r4, int r5, int r6, int r7)
{
    r0 = *(8 + r3); // lwz @ 0x807D0288
    /* lis r5, 0 */ // 0x807D028C
    r6 = *(4 + r3); // lwz @ 0x807D0290
    /* mulli r0, r0, 0x14 */ // 0x807D0298
    r5 = r5 + 0; // 0x807D029C
    /* stfsx f1, r6, r0 */ // 0x807D02A0
    r7 = *(8 + r3); // lwz @ 0x807D02A4
    r6 = *(4 + r3); // lwz @ 0x807D02A8
    r0 = r7 + -1; // 0x807D02AC
    /* mulli r0, r0, 0x14 */ // 0x807D02B0
    r6 = r6 + 4; // 0x807D02B4
    /* lfsx f0, r6, r0 */ // 0x807D02B8
    /* mulli r0, r7, 0x14 */ // 0x807D02BC
    /* fadds f0, f2, f0 */ // 0x807D02C0
    /* stfsx f0, r6, r0 */ // 0x807D02C4
    if (==) goto 0x0x807d02e8;
    if (==) goto 0x0x807d0318;
    if (==) goto 0x0x807d0348;
    if (==) goto 0x0x807d0378;
    /* b 0x807d03a4 */ // 0x807D02E4
    r0 = *(8 + r3); // lwz @ 0x807D02E8
    r4 = r5 + 0; // 0x807D02EC
    r7 = *(4 + r3); // lwz @ 0x807D02F0
    /* mulli r6, r0, 0x14 */ // 0x807D02F4
    r0 = *(4 + r4); // lwz @ 0x807D02F8
    r5 = *(0 + r5); // lwz @ 0x807D02FC
    r6 = r7 + r6; // 0x807D0300
    *(8 + r6) = r5; // stw @ 0x807D0304
    *(0xc + r6) = r0; // stw @ 0x807D0308
    r0 = *(8 + r4); // lwz @ 0x807D030C
    *(0x10 + r6) = r0; // stw @ 0x807D0310
    /* b 0x807d03a4 */ // 0x807D0314
    r0 = *(8 + r3); // lwz @ 0x807D0318
    r4 = r5 + 0xc; // 0x807D031C
    r7 = *(4 + r3); // lwz @ 0x807D0320
    /* mulli r6, r0, 0x14 */ // 0x807D0324
    r0 = *(4 + r4); // lwz @ 0x807D0328
    r5 = *(0xc + r5); // lwz @ 0x807D032C
    r6 = r7 + r6; // 0x807D0330
    *(8 + r6) = r5; // stw @ 0x807D0334
    *(0xc + r6) = r0; // stw @ 0x807D0338
    r0 = *(8 + r4); // lwz @ 0x807D033C
    *(0x10 + r6) = r0; // stw @ 0x807D0340
    /* b 0x807d03a4 */ // 0x807D0344
    r0 = *(8 + r3); // lwz @ 0x807D0348
    r4 = r5 + 0x18; // 0x807D034C
    r7 = *(4 + r3); // lwz @ 0x807D0350
    /* mulli r6, r0, 0x14 */ // 0x807D0354
    r0 = *(4 + r4); // lwz @ 0x807D0358
    r5 = *(0x18 + r5); // lwz @ 0x807D035C
    r6 = r7 + r6; // 0x807D0360
    *(8 + r6) = r5; // stw @ 0x807D0364
    *(0xc + r6) = r0; // stw @ 0x807D0368
    r0 = *(8 + r4); // lwz @ 0x807D036C
    *(0x10 + r6) = r0; // stw @ 0x807D0370
    /* b 0x807d03a4 */ // 0x807D0374
    r0 = *(8 + r3); // lwz @ 0x807D0378
    r4 = r5 + 0x24; // 0x807D037C
    r7 = *(4 + r3); // lwz @ 0x807D0380
    /* mulli r6, r0, 0x14 */ // 0x807D0384
    r0 = *(4 + r4); // lwz @ 0x807D0388
    r5 = *(0x24 + r5); // lwz @ 0x807D038C
    r6 = r7 + r6; // 0x807D0390
    *(8 + r6) = r5; // stw @ 0x807D0394
    *(0xc + r6) = r0; // stw @ 0x807D0398
    r0 = *(8 + r4); // lwz @ 0x807D039C
    *(0x10 + r6) = r0; // stw @ 0x807D03A0
    r4 = *(8 + r3); // lwz @ 0x807D03A4
    r0 = r4 + 1; // 0x807D03A8
    *(8 + r3) = r0; // stw @ 0x807D03AC
    return;
}