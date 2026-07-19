/* Function at 0x80811310, size=344 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80811310(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x5c + r1) = r31; // stw @ 0x8081131C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80811324
    r12 = *(0x24 + r12); // lwz @ 0x80811328
    /* mtctr r12 */ // 0x8081132C
    /* bctrl  */ // 0x80811330
    /* clrlwi r0, r3, 0x10 */ // 0x80811334
    if (!=) goto 0x0x8081134c;
    r3 = r31;
    FUN_8089FD54(r3); // bl 0x8089FD54
    /* b 0x80811454 */ // 0x80811348
    r3 = r31;
    FUN_808A1BCC(r3, r3); // bl 0x808A1BCC
    r6 = *(0x58 + r31); // lwz @ 0x80811354
    /* lis r5, 0 */ // 0x80811358
    r0 = *(0x5c + r31); // lwz @ 0x8081135C
    /* lis r4, 0 */ // 0x80811360
    *(0x24 + r1) = r0; // stw @ 0x80811364
    /* lfs f1, 0(r5) */ // 0x8081136C
    r4 = r4 + 0; // 0x80811370
    *(0x20 + r1) = r6; // stw @ 0x80811374
    r5 = *(0x60 + r31); // lwz @ 0x80811378
    r0 = *(0x64 + r31); // lwz @ 0x8081137C
    *(0x2c + r1) = r0; // stw @ 0x80811380
    *(0x28 + r1) = r5; // stw @ 0x80811384
    /* lfs f0, 0x2c(r1) */ // 0x80811388
    r5 = *(0x68 + r31); // lwz @ 0x8081138C
    r0 = *(0x6c + r31); // lwz @ 0x80811390
    *(0x34 + r1) = r0; // stw @ 0x80811394
    *(0x30 + r1) = r5; // stw @ 0x80811398
    r5 = *(0x70 + r31); // lwz @ 0x8081139C
    r0 = *(0x74 + r31); // lwz @ 0x808113A0
    *(0x3c + r1) = r0; // stw @ 0x808113A4
    *(0x38 + r1) = r5; // stw @ 0x808113A8
    /* lfs f2, 0x3c(r1) */ // 0x808113AC
    r5 = *(0x78 + r31); // lwz @ 0x808113B0
    r0 = *(0x7c + r31); // lwz @ 0x808113B4
    *(0x44 + r1) = r0; // stw @ 0x808113B8
    *(0x40 + r1) = r5; // stw @ 0x808113BC
    r5 = *(0x80 + r31); // lwz @ 0x808113C0
    r0 = *(0x84 + r31); // lwz @ 0x808113C4
    *(0x4c + r1) = r0; // stw @ 0x808113C8
    /* lfs f3, 0x4c(r1) */ // 0x808113CC
    *(0x48 + r1) = r5; // stw @ 0x808113D0
    /* stfs f0, 0x14(r1) */ // 0x808113D4
    /* stfs f2, 0x18(r1) */ // 0x808113D8
    /* stfs f3, 0x1c(r1) */ // 0x808113DC
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x14(r1) */ // 0x808113E4
    r3 = r31;
    /* lfs f0, 8(r1) */ // 0x808113EC
    /* lfs f2, 0x18(r1) */ // 0x808113F0
    /* fadds f3, f1, f0 */ // 0x808113F4
    /* lfs f0, 0xc(r1) */ // 0x808113F8
    /* lfs f1, 0x1c(r1) */ // 0x808113FC
    /* fadds f2, f2, f0 */ // 0x80811400
    /* lfs f0, 0x10(r1) */ // 0x80811404
    /* stfs f3, 0x2c(r1) */ // 0x80811408
    /* fadds f0, f1, f0 */ // 0x8081140C
    /* stfs f2, 0x3c(r1) */ // 0x80811410
    /* stfs f0, 0x4c(r1) */ // 0x80811414
    r12 = *(0 + r31); // lwz @ 0x80811418
    /* stfs f3, 0x14(r1) */ // 0x8081141C
    r12 = *(0xd4 + r12); // lwz @ 0x80811420
    /* stfs f2, 0x18(r1) */ // 0x80811424
    /* stfs f0, 0x1c(r1) */ // 0x80811428
    /* mtctr r12 */ // 0x8081142C
    /* bctrl  */ // 0x80811430
    r6 = r3;
    r3 = *(0xac + r31); // lwz @ 0x80811438
    r5 = r31 + 0x3c; // 0x80811440
    r12 = *(0 + r3); // lwz @ 0x80811444
    r12 = *(0x10 + r12); // lwz @ 0x80811448
    /* mtctr r12 */ // 0x8081144C
    /* bctrl  */ // 0x80811450
    r0 = *(0x64 + r1); // lwz @ 0x80811454
    r31 = *(0x5c + r1); // lwz @ 0x80811458
    return;
}