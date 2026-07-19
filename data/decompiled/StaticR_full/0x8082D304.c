/* Function at 0x8082D304, size=220 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

int FUN_8082D304(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r7, 0 */ // 0x8082D30C
    /* lfs f0, 0(r4) */ // 0x8082D310
    *(0x24 + r1) = r0; // stw @ 0x8082D314
    r7 = r7 + 0; // 0x8082D318
    /* lfs f1, 8(r4) */ // 0x8082D31C
    /* lfs f3, 0x50(r3) */ // 0x8082D320
    /* lfs f2, 0x58(r3) */ // 0x8082D324
    /* fmuls f3, f3, f0 */ // 0x8082D328
    /* lfs f0, 0(r7) */ // 0x8082D32C
    /* fmuls f1, f2, f1 */ // 0x8082D330
    /* fadds f1, f3, f1 */ // 0x8082D334
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082D338
    if (<=) goto 0x0x8082d39c;
    /* lfs f3, 0x70(r7) */ // 0x8082D340
    /* lfs f1, 4(r4) */ // 0x8082D344
    /* fsubs f3, f3, f0 */ // 0x8082D348
    /* fcmpu cr0, f0, f3 */ // 0x8082D34C
    if (!=) goto 0x0x8082d35c;
    /* lfs f0, 0x74(r7) */ // 0x8082D354
    /* b 0x8082d374 */ // 0x8082D358
    /* fsubs f2, f1, f0 */ // 0x8082D35C
    /* lfs f1, 0x78(r7) */ // 0x8082D360
    /* lfs f0, 0x74(r7) */ // 0x8082D364
    /* fmuls f1, f1, f2 */ // 0x8082D368
    /* fdivs f1, f1, f3 */ // 0x8082D36C
    /* fadds f0, f0, f1 */ // 0x8082D370
    /* lfs f3, 0x74(r7) */ // 0x8082D374
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x8082D378
    if (>=) goto 0x0x8082d384;
    /* b 0x8082d3a0 */ // 0x8082D380
    /* lfs f3, 0x7c(r7) */ // 0x8082D384
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x8082D388
    if (<=) goto 0x0x8082d394;
    /* b 0x8082d3a0 */ // 0x8082D390
    /* fmr f3, f0 */ // 0x8082D394
    /* b 0x8082d3a0 */ // 0x8082D398
    /* lfs f3, 0x74(r7) */ // 0x8082D39C
    r5 = *(0 + r4); // lwz @ 0x8082D3A0
    r3 = r3 + 0x50; // 0x8082D3A4
    r6 = *(4 + r4); // lwz @ 0x8082D3A8
    r0 = *(8 + r4); // lwz @ 0x8082D3AC
    r4 = r3;
    *(8 + r1) = r5; // stw @ 0x8082D3B4
    /* lfs f1, 0x70(r7) */ // 0x8082D3BC
    *(0xc + r1) = r6; // stw @ 0x8082D3C0
    /* lfs f2, 0x80(r7) */ // 0x8082D3C4
    *(0x10 + r1) = r0; // stw @ 0x8082D3C8
    FUN_808623B4(r5); // bl 0x808623B4
    r0 = *(0x24 + r1); // lwz @ 0x8082D3D0
    return;
}