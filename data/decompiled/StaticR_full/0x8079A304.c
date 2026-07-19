/* Function at 0x8079A304, size=296 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8079A304(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8079A314
    r31 = r31 + 0; // 0x8079A318
    *(0x28 + r1) = r30; // stw @ 0x8079A31C
    r30 = r3;
    FUN_8079B544(); // bl 0x8079B544
    r0 = *(0x9c + r30); // lhz @ 0x8079A328
    if (==) goto 0x0x8079a350;
    if (==) goto 0x0x8079a370;
    if (==) goto 0x0x8079a3a4;
    if (==) goto 0x0x8079a3a4;
    /* b 0x8079a3e8 */ // 0x8079A34C
    r12 = *(0 + r30); // lwz @ 0x8079A350
    r3 = r30;
    r4 = *(0x98 + r30); // lwz @ 0x8079A358
    r12 = *(0x30 + r12); // lwz @ 0x8079A35C
    r4 = r4 + 0x10; // 0x8079A360
    /* mtctr r12 */ // 0x8079A364
    /* bctrl  */ // 0x8079A368
    /* b 0x8079a414 */ // 0x8079A36C
    /* lfs f2, 0x1c(r31) */ // 0x8079A370
    r3 = r30;
    /* lfs f1, 0x20(r31) */ // 0x8079A378
    /* lfs f0, 0x24(r31) */ // 0x8079A380
    /* stfs f2, 0x14(r1) */ // 0x8079A384
    /* stfs f1, 0x18(r1) */ // 0x8079A388
    /* stfs f0, 0x1c(r1) */ // 0x8079A38C
    r12 = *(0 + r30); // lwz @ 0x8079A390
    r12 = *(0x30 + r12); // lwz @ 0x8079A394
    /* mtctr r12 */ // 0x8079A398
    /* bctrl  */ // 0x8079A39C
    /* b 0x8079a414 */ // 0x8079A3A0
    r3 = r30 + 0x94; // 0x8079A3A4
    FUN_807900D0(r3); // bl 0x807900D0
    /* lfs f1, 0x28(r31) */ // 0x8079A3AC
    /* lfs f0, 4(r3) */ // 0x8079A3B4
    /* lfs f3, 8(r3) */ // 0x8079A3B8
    /* lfs f2, 0(r3) */ // 0x8079A3BC
    /* fadds f0, f1, f0 */ // 0x8079A3C0
    /* stfs f2, 8(r1) */ // 0x8079A3C4
    r3 = r30;
    /* stfs f0, 0xc(r1) */ // 0x8079A3CC
    /* stfs f3, 0x10(r1) */ // 0x8079A3D0
    r12 = *(0 + r30); // lwz @ 0x8079A3D4
    r12 = *(0x30 + r12); // lwz @ 0x8079A3D8
    /* mtctr r12 */ // 0x8079A3DC
    /* bctrl  */ // 0x8079A3E0
    /* b 0x8079a414 */ // 0x8079A3E4
    r0 = *(0xb0 + r30); // lbz @ 0x8079A3E8
    if (!=) goto 0x0x8079a414;
    r3 = r30 + 0x94; // 0x8079A3F4
    FUN_807900D0(r3); // bl 0x807900D0
    r12 = *(0 + r30); // lwz @ 0x8079A3FC
    r4 = r3;
    r3 = r30;
    r12 = *(0x30 + r12); // lwz @ 0x8079A408
    /* mtctr r12 */ // 0x8079A40C
    /* bctrl  */ // 0x8079A410
    r0 = *(0x34 + r1); // lwz @ 0x8079A414
    r31 = *(0x2c + r1); // lwz @ 0x8079A418
    r30 = *(0x28 + r1); // lwz @ 0x8079A41C
    return;
}