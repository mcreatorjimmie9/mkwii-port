/* Function at 0x807E63A8, size=416 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807E63A8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807E63B4
    r31 = r3;
    r0 = *(0xb4 + r3); // lwz @ 0x807E63BC
    if (==) goto 0x0x807e63ec;
    if (==) goto 0x0x807e6428;
    if (==) goto 0x0x807e645c;
    if (==) goto 0x0x807e64b0;
    if (==) goto 0x0x807e64f8;
    /* b 0x807e6508 */ // 0x807E63E8
    /* lis r4, 0 */ // 0x807E63EC
    r0 = *(0xbc + r3); // lwz @ 0x807E63F0
    /* lfs f0, 0(r4) */ // 0x807E63F4
    /* lfs f1, 0x34(r3) */ // 0x807E63F8
    /* addic. r0, r0, -1 */ // 0x807E63FC
    r4 = *(0x2c + r3); // lhz @ 0x807E6400
    /* fadds f0, f0, f1 */ // 0x807E6404
    *(0xbc + r3) = r0; // stw @ 0x807E6408
    r0 = r4 | 1; // 0x807E640C
    *(0x2c + r3) = r0; // sth @ 0x807E6410
    /* stfs f0, 0x34(r3) */ // 0x807E6414
    if (!=) goto 0x0x807e6508;
    /* li r0, 2 */ // 0x807E641C
    *(0xb4 + r3) = r0; // stw @ 0x807E6420
    /* b 0x807e6508 */ // 0x807E6424
    /* lis r4, 0 */ // 0x807E6428
    r0 = *(0x2c + r3); // lhz @ 0x807E642C
    /* lfs f1, 0xd0(r3) */ // 0x807E6430
    /* lfs f0, 0(r4) */ // 0x807E6434
    r0 = r0 | 1; // 0x807E6438
    /* lfs f2, 0x34(r3) */ // 0x807E643C
    /* fsubs f0, f1, f0 */ // 0x807E6440
    *(0x2c + r3) = r0; // sth @ 0x807E6444
    /* stfs f0, 0xd0(r3) */ // 0x807E6448
    /* fadds f0, f0, f2 */ // 0x807E644C
    /* stfs f0, 0x34(r3) */ // 0x807E6450
    FUN_807E68C0(); // bl 0x807E68C0
    /* b 0x807e6508 */ // 0x807E6458
    r0 = *(0xc4 + r3); // lwz @ 0x807E645C
    /* addic. r0, r0, -1 */ // 0x807E6460
    *(0xc4 + r3) = r0; // stw @ 0x807E6464
    if (!=) goto 0x0x807e6508;
    /* li r0, 4 */ // 0x807E646C
    *(0xb4 + r3) = r0; // stw @ 0x807E6470
    r3 = *(8 + r3); // lwz @ 0x807E6474
    /* li r4, 3 */ // 0x807E6478
    r3 = *(0x28 + r3); // lwz @ 0x807E647C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807E6484
    r12 = *(8 + r12); // lwz @ 0x807E6488
    /* mtctr r12 */ // 0x807E648C
    /* bctrl  */ // 0x807E6490
    r5 = *(8 + r31); // lwz @ 0x807E6494
    /* lis r3, 0 */ // 0x807E6498
    /* lfs f2, 0(r3) */ // 0x807E649C
    /* li r4, 0 */ // 0x807E64A0
    r3 = *(0x28 + r5); // lwz @ 0x807E64A4
    FUN_805E70EC(r3, r4); // bl 0x805E70EC
    /* b 0x807e6508 */ // 0x807E64AC
    /* lis r4, 0 */ // 0x807E64B0
    /* lfs f2, 0x34(r3) */ // 0x807E64B4
    /* lfs f1, 0(r4) */ // 0x807E64B8
    /* lfs f0, 0xd8(r3) */ // 0x807E64BC
    /* fadds f1, f1, f2 */ // 0x807E64C0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807E64C4
    /* cror cr0eq, cr0gt, cr0eq */ // 0x807E64C8
    if (!=) goto 0x0x807e64e4;
    r0 = *(0x2c + r3); // lhz @ 0x807E64D0
    /* stfs f0, 0x34(r3) */ // 0x807E64D4
    r0 = r0 | 1; // 0x807E64D8
    *(0x2c + r3) = r0; // sth @ 0x807E64DC
    /* b 0x807e6508 */ // 0x807E64E0
    r0 = *(0x2c + r3); // lhz @ 0x807E64E4
    /* stfs f1, 0x34(r3) */ // 0x807E64E8
    r0 = r0 | 1; // 0x807E64EC
    *(0x2c + r3) = r0; // sth @ 0x807E64F0
    /* b 0x807e6508 */ // 0x807E64F4
    r12 = *(0 + r3); // lwz @ 0x807E64F8
    r12 = *(0xf8 + r12); // lwz @ 0x807E64FC
    /* mtctr r12 */ // 0x807E6500
    /* bctrl  */ // 0x807E6504
    r0 = *(0xf0 + r31); // lwz @ 0x807E6508
    if (!=) goto 0x0x807e6528;
    r12 = *(0 + r31); // lwz @ 0x807E6514
    r3 = r31;
    r12 = *(0x100 + r12); // lwz @ 0x807E651C
    /* mtctr r12 */ // 0x807E6520
    /* bctrl  */ // 0x807E6524
    r3 = *(0xf0 + r31); // lwz @ 0x807E6528
    r0 = r3 + -1; // 0x807E652C
    *(0xf0 + r31) = r0; // stw @ 0x807E6530
    r31 = *(0xc + r1); // lwz @ 0x807E6534
    r0 = *(0x14 + r1); // lwz @ 0x807E6538
    return;
}