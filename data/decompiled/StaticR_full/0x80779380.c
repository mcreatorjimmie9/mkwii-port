/* Function at 0x80779380, size=248 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80779380(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8077938C
    r31 = r3;
    FUN_80777C70(); // bl 0x80777C70
    r12 = *(0 + r31); // lwz @ 0x80779398
    r3 = r31;
    r12 = *(0x98 + r12); // lwz @ 0x807793A0
    /* mtctr r12 */ // 0x807793A4
    /* bctrl  */ // 0x807793A8
    if (==) goto 0x0x807793c8;
    r12 = *(0 + r31); // lwz @ 0x807793B4
    r3 = r31;
    r12 = *(0x8c + r12); // lwz @ 0x807793BC
    /* mtctr r12 */ // 0x807793C0
    /* bctrl  */ // 0x807793C4
    /* lfs f6, 0xe8(r31) */ // 0x807793C8
    /* li r0, 0 */ // 0x807793CC
    /* lfs f5, 0xec(r31) */ // 0x807793D0
    /* lfs f4, 0xf0(r31) */ // 0x807793D8
    r4 = r31 + 0x124; // 0x807793DC
    /* lfs f3, 0x124(r31) */ // 0x807793E0
    /* lfs f2, 0x128(r31) */ // 0x807793E4
    /* lfs f0, 0x12c(r31) */ // 0x807793E8
    *(0x548 + r31) = r0; // sth @ 0x807793EC
    /* lfs f1, 0x550(r31) */ // 0x807793F0
    /* stfs f6, 0x530(r31) */ // 0x807793F4
    /* stfs f5, 0x534(r31) */ // 0x807793F8
    /* stfs f4, 0x538(r31) */ // 0x807793FC
    /* stfs f3, 0x53c(r31) */ // 0x80779400
    /* stfs f2, 0x540(r31) */ // 0x80779404
    /* stfs f0, 0x544(r31) */ // 0x80779408
    FUN_805A443C(); // bl 0x805A443C
    r4 = r31 + 0xe8; // 0x80779414
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x80779420
    /* lis r3, 0 */ // 0x80779424
    /* stfs f0, 0xf4(r31) */ // 0x80779428
    /* lis r4, 0 */ // 0x8077942C
    /* lfs f3, 0(r3) */ // 0x80779430
    /* lis r3, 0 */ // 0x80779434
    /* lfs f0, 0xc(r1) */ // 0x80779438
    /* stfs f0, 0xf8(r31) */ // 0x8077943C
    /* lfs f0, 0x550(r31) */ // 0x80779440
    /* lfs f1, 0x10(r1) */ // 0x80779444
    /* stfs f1, 0xfc(r31) */ // 0x80779448
    /* lfs f2, 0(r4) */ // 0x8077944C
    /* lfs f1, 0(r3) */ // 0x80779450
    /* fmuls f2, f3, f2 */ // 0x80779454
    /* fdivs f1, f2, f1 */ // 0x80779458
    /* fdivs f0, f0, f1 */ // 0x8077945C
    /* stfs f0, 0x554(r31) */ // 0x80779460
    r31 = *(0x2c + r1); // lwz @ 0x80779464
    r0 = *(0x34 + r1); // lwz @ 0x80779468
    return;
}