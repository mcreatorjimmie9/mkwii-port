/* Function at 0x805A62B4, size=224 bytes */
/* Stack frame: 32 bytes */

void FUN_805A62B4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    r5 = *(4 + r3); // lwz @ 0x805A62B8
    /* lfs f3, 4(r4) */ // 0x805A62BC
    /* lfs f0, 8(r5) */ // 0x805A62C0
    /* lfs f2, 0(r4) */ // 0x805A62C4
    /* fsubs f6, f3, f0 */ // 0x805A62C8
    /* lfs f1, 4(r5) */ // 0x805A62CC
    /* lfs f0, 0x18(r3) */ // 0x805A62D0
    /* fsubs f5, f2, f1 */ // 0x805A62D4
    /* lfs f2, 0x14(r3) */ // 0x805A62D8
    /* fmuls f1, f6, f0 */ // 0x805A62DC
    /* lfs f3, 8(r4) */ // 0x805A62E0
    /* lfs f0, 0xc(r5) */ // 0x805A62E4
    /* fmuls f2, f5, f2 */ // 0x805A62E8
    /* stfs f5, 8(r1) */ // 0x805A62EC
    /* fsubs f7, f3, f0 */ // 0x805A62F0
    /* lfs f3, 0x1c(r3) */ // 0x805A62F4
    /* fadds f1, f2, f1 */ // 0x805A62F8
    /* lfs f0, 0x30(r3) */ // 0x805A62FC
    /* stfs f6, 0xc(r1) */ // 0x805A6300
    /* fmuls f2, f7, f3 */ // 0x805A6304
    /* stfs f7, 0x10(r1) */ // 0x805A6308
    /* fadds f1, f2, f1 */ // 0x805A630C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805A6310
    if (<=) goto 0x0x805a6320;
    /* li r3, 0 */ // 0x805A6318
    /* b 0x805a638c */ // 0x805A631C
    /* lfs f1, 0x20(r3) */ // 0x805A6320
    /* lfs f0, 0x24(r3) */ // 0x805A6324
    /* fmuls f2, f5, f1 */ // 0x805A6328
    /* lfs f4, 8(r3) */ // 0x805A632C
    /* fmuls f1, f6, f0 */ // 0x805A6330
    /* lfs f3, 0xc(r3) */ // 0x805A6334
    /* lfs f0, 0x28(r3) */ // 0x805A6338
    /* fmuls f5, f5, f4 */ // 0x805A633C
    /* fmuls f4, f6, f3 */ // 0x805A6340
    /* lfs f6, 0x10(r3) */ // 0x805A6344
    /* fmuls f3, f7, f0 */ // 0x805A6348
    /* lfs f0, 0x3c(r3) */ // 0x805A634C
    /* fadds f1, f2, f1 */ // 0x805A6350
    /* lfs f2, 0x38(r3) */ // 0x805A6354
    /* fmuls f6, f7, f6 */ // 0x805A6358
    /* fadds f3, f3, f1 */ // 0x805A635C
    /* fadds f4, f5, f4 */ // 0x805A6360
    /* fmuls f0, f0, f3 */ // 0x805A6364
    /* fadds f1, f6, f4 */ // 0x805A6368
    /* fmuls f0, f0, f0 */ // 0x805A636C
    /* fmuls f1, f1, f1 */ // 0x805A6370
    /* fadds f0, f1, f0 */ // 0x805A6374
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x805A6378
    if (>=) goto 0x0x805a6388;
    /* li r3, 0 */ // 0x805A6380
    /* b 0x805a638c */ // 0x805A6384
    /* li r3, 1 */ // 0x805A6388
    return;
}