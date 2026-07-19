/* Function at 0x8089A31C, size=236 bytes */
/* Stack frame: 32 bytes */

void FUN_8089A31C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* lis r0, 0x4330 */ // 0x8089A320
    r5 = *(0x130 + r3); // lwz @ 0x8089A324
    *(8 + r1) = r0; // stw @ 0x8089A328
    *(0x10 + r1) = r0; // stw @ 0x8089A330
    if (>=) goto 0x0x8089a354;
    /* xoris r0, r4, 0x8000 */ // 0x8089A338
    *(0xc + r1) = r0; // stw @ 0x8089A33C
    /* lis r3, 0 */ // 0x8089A340
    /* lfd f1, 0(r3) */ // 0x8089A344
    /* lfd f0, 8(r1) */ // 0x8089A348
    /* fsubs f1, f0, f1 */ // 0x8089A34C
    /* b 0x8089a400 */ // 0x8089A350
    r0 = *(0x134 + r3); // lwz @ 0x8089A354
    if (>=) goto 0x0x8089a380;
    /* subf r0, r5, r4 */ // 0x8089A360
    /* lis r3, 0 */ // 0x8089A364
    /* xoris r0, r0, 0x8000 */ // 0x8089A368
    *(0x14 + r1) = r0; // stw @ 0x8089A36C
    /* lfd f1, 0(r3) */ // 0x8089A370
    /* lfd f0, 0x10(r1) */ // 0x8089A374
    /* fsubs f1, f0, f1 */ // 0x8089A378
    /* b 0x8089a400 */ // 0x8089A37C
    r5 = *(0x138 + r3); // lwz @ 0x8089A380
    if (>=) goto 0x0x8089a3ac;
    /* subf r0, r0, r4 */ // 0x8089A38C
    /* lis r3, 0 */ // 0x8089A390
    /* xoris r0, r0, 0x8000 */ // 0x8089A394
    *(0xc + r1) = r0; // stw @ 0x8089A398
    /* lfd f1, 0(r3) */ // 0x8089A39C
    /* lfd f0, 8(r1) */ // 0x8089A3A0
    /* fsubs f1, f0, f1 */ // 0x8089A3A4
    /* b 0x8089a400 */ // 0x8089A3A8
    /* lis r3, 0 */ // 0x8089A3AC
    r6 = *(0 + r3); // lwz @ 0x8089A3B0
    r0 = r5 + r6; // 0x8089A3B4
    if (>=) goto 0x0x8089a3e0;
    /* subf r0, r5, r4 */ // 0x8089A3C0
    /* lis r3, 0 */ // 0x8089A3C4
    /* xoris r0, r0, 0x8000 */ // 0x8089A3C8
    *(0x14 + r1) = r0; // stw @ 0x8089A3CC
    /* lfd f1, 0(r3) */ // 0x8089A3D0
    /* lfd f0, 0x10(r1) */ // 0x8089A3D4
    /* fsubs f1, f0, f1 */ // 0x8089A3D8
    /* b 0x8089a400 */ // 0x8089A3DC
    /* subf r0, r5, r4 */ // 0x8089A3E0
    /* lis r3, 0 */ // 0x8089A3E4
    /* subf r0, r6, r0 */ // 0x8089A3E8
    /* lfd f1, 0(r3) */ // 0x8089A3EC
    /* xoris r0, r0, 0x8000 */ // 0x8089A3F0
    *(0xc + r1) = r0; // stw @ 0x8089A3F4
    /* lfd f0, 8(r1) */ // 0x8089A3F8
    /* fsubs f1, f0, f1 */ // 0x8089A3FC
    return;
}