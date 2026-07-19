/* Function at 0x806A02C8, size=260 bytes */
/* Stack frame: 0 bytes */

int FUN_806A02C8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    r0 = *(0x64 + r3); // lwz @ 0x806A02C8
    /* beqlr  */ // 0x806A02D0
    r4 = r3;
    /* li r5, 1 */ // 0x806A02D8
    /* b 0x806a02e4 */ // 0x806A02DC
    r5 = r5 + 1; // 0x806A02E0
    r4 = *(0x64 + r4); // lwz @ 0x806A02E4
    r4 = *(8 + r4); // lwz @ 0x806A02E8
    if (!=) goto 0x0x806a02e0;
    /* addic. r7, r5, -1 */ // 0x806A02F4
    /* bltlr  */ // 0x806A02F8
    /* lis r5, -0x8000 */ // 0x806A02FC
    /* b 0x806a03c0 */ // 0x806A0300
    /* cmpwi cr1, r7, 0 */
    r8 = r3;
    /* li r9, 0 */ // 0x806A030C
    if (<=) goto 0x0x806a03bc;
    r4 = r7 + -8; // 0x806A0318
    if (<=) goto 0x0x806a039c;
    /* li r6, 0 */ // 0x806A0320
    if (<) goto 0x0x806a0338;
    r0 = r5 + -2; // 0x806A0328
    if (>) goto 0x0x806a0338;
    /* li r6, 1 */ // 0x806A0334
    if (==) goto 0x0x806a039c;
    r0 = r4 + 7; // 0x806A0340
    /* srwi r0, r0, 3 */ // 0x806A0344
    /* mtctr r0 */ // 0x806A0348
    if (<=) goto 0x0x806a039c;
    r4 = *(0x64 + r8); // lwz @ 0x806A0354
    r9 = r9 + 8; // 0x806A0358
    r4 = *(8 + r4); // lwz @ 0x806A035C
    r4 = *(0x64 + r4); // lwz @ 0x806A0360
    r4 = *(8 + r4); // lwz @ 0x806A0364
    r4 = *(0x64 + r4); // lwz @ 0x806A0368
    r4 = *(8 + r4); // lwz @ 0x806A036C
    r4 = *(0x64 + r4); // lwz @ 0x806A0370
    r4 = *(8 + r4); // lwz @ 0x806A0374
    r4 = *(0x64 + r4); // lwz @ 0x806A0378
    r4 = *(8 + r4); // lwz @ 0x806A037C
    r4 = *(0x64 + r4); // lwz @ 0x806A0380
    r4 = *(8 + r4); // lwz @ 0x806A0384
    r4 = *(0x64 + r4); // lwz @ 0x806A0388
    r4 = *(8 + r4); // lwz @ 0x806A038C
    r4 = *(0x64 + r4); // lwz @ 0x806A0390
    r8 = *(8 + r4); // lwz @ 0x806A0394
    if (counter-- != 0) goto 0x0x806a0354;
    /* subf r0, r9, r7 */ // 0x806A039C
    /* mtctr r0 */ // 0x806A03A0
    if (>=) goto 0x0x806a03bc;
    r4 = *(0x64 + r8); // lwz @ 0x806A03AC
    r9 = r9 + 1; // 0x806A03B0
    r8 = *(8 + r4); // lwz @ 0x806A03B4
    if (counter-- != 0) goto 0x0x806a03ac;
    r7 = r7 + -1; // 0x806A03BC
    if (>=) goto 0x0x806a0304;
    return;
}