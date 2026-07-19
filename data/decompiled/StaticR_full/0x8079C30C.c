/* Function at 0x8079C30C, size=336 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8079C30C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x8079C320
    r30 = r30 + 0; // 0x8079C324
    *(0x14 + r1) = r29; // stw @ 0x8079C328
    r29 = r3;
    FUN_807A03C8(); // bl 0x807A03C8
    if (!=) goto 0x0x8079c490;
    /* lis r3, 0 */ // 0x8079C33C
    r3 = *(0 + r3); // lwz @ 0x8079C340
    r0 = *(0x1c + r3); // lwz @ 0x8079C344
    if (==) goto 0x0x8079c490;
    r3 = r29;
    FUN_8079C4C4(r3); // bl 0x8079C4C4
    r0 = *(0x10 + r29); // lwz @ 0x8079C358
    if (==) goto 0x0x8079c378;
    if (==) goto 0x0x8079c3ac;
    if (==) goto 0x0x8079c3e0;
    /* b 0x8079c450 */ // 0x8079C374
    /* lfs f1, 0x108(r30) */ // 0x8079C378
    /* lis r3, 0 */ // 0x8079C37C
    /* lfs f0, 0x100(r30) */ // 0x8079C380
    r4 = r29 + 0x18; // 0x8079C384
    /* stfs f1, 0x20(r29) */ // 0x8079C388
    /* li r5, 0x112 */ // 0x8079C38C
    /* stfs f0, 0x24(r29) */ // 0x8079C390
    r3 = *(0 + r3); // lwz @ 0x8079C394
    r12 = *(0 + r3); // lwz @ 0x8079C398
    r12 = *(0xb4 + r12); // lwz @ 0x8079C39C
    /* mtctr r12 */ // 0x8079C3A0
    /* bctrl  */ // 0x8079C3A4
    /* b 0x8079c464 */ // 0x8079C3A8
    /* lfs f1, 0x108(r30) */ // 0x8079C3AC
    /* lis r3, 0 */ // 0x8079C3B0
    /* lfs f0, 0x100(r30) */ // 0x8079C3B4
    r4 = r29 + 0x18; // 0x8079C3B8
    /* stfs f1, 0x20(r29) */ // 0x8079C3BC
    /* li r5, 0x10e */ // 0x8079C3C0
    /* stfs f0, 0x24(r29) */ // 0x8079C3C4
    r3 = *(0 + r3); // lwz @ 0x8079C3C8
    r12 = *(0 + r3); // lwz @ 0x8079C3CC
    r12 = *(0xb4 + r12); // lwz @ 0x8079C3D0
    /* mtctr r12 */ // 0x8079C3D4
    /* bctrl  */ // 0x8079C3D8
    /* b 0x8079c464 */ // 0x8079C3DC
    r31 = r30 + 0xec; // 0x8079C3E0
    /* lfs f1, 0x28(r29) */ // 0x8079C3E4
    /* lfs f2, 0xc(r31) */ // 0x8079C3E8
    /* lfs f0, 0x10c(r30) */ // 0x8079C3EC
    /* fadds f1, f1, f2 */ // 0x8079C3F0
    /* stfs f1, 0x28(r29) */ // 0x8079C3F4
    /* fmuls f1, f0, f1 */ // 0x8079C3F8
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8079C400
    r3 = *(0 + r3); // lwz @ 0x8079C404
    r0 = *(0x40 + r3); // lwz @ 0x8079C408
    if (!=) goto 0x0x8079c42c;
    /* lfs f2, 4(r31) */ // 0x8079C414
    /* lfs f0, 0xec(r30) */ // 0x8079C418
    /* fmuls f1, f1, f2 */ // 0x8079C41C
    /* fadds f0, f0, f1 */ // 0x8079C420
    /* stfs f0, 0x24(r29) */ // 0x8079C424
    /* b 0x8079c440 */ // 0x8079C428
    /* lfs f2, 8(r31) */ // 0x8079C42C
    /* lfs f0, 0xec(r30) */ // 0x8079C430
    /* fmuls f1, f1, f2 */ // 0x8079C434
    /* fadds f0, f0, f1 */ // 0x8079C438
    /* stfs f0, 0x24(r29) */ // 0x8079C43C
    r3 = r30 + 0xec; // 0x8079C440
    /* lfs f0, 0x10(r3) */ // 0x8079C444
    /* stfs f0, 0x20(r29) */ // 0x8079C448
    /* b 0x8079c464 */ // 0x8079C44C
    /* lfs f1, 0x100(r30) */ // 0x8079C450
    /* lfs f0, 0x104(r30) */ // 0x8079C454
    /* stfs f1, 0x24(r29) */ // 0x8079C458
}