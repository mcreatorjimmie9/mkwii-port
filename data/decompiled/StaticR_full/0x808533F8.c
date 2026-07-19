/* Function at 0x808533F8, size=348 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_808533F8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80853404
    r31 = r3;
    r0 = *(0x144 + r3); // lbz @ 0x8085340C
    if (==) goto 0x0x8085352c;
    r0 = *(0xd6 + r3); // lbz @ 0x80853418
    if (!=) goto 0x0x8085352c;
    FUN_80853554(); // bl 0x80853554
    r3 = r31;
    FUN_808538B0(r3); // bl 0x808538B0
    r0 = *(0x149 + r31); // lbz @ 0x80853430
    if (==) goto 0x0x80853444;
    r3 = r31;
    FUN_80853D10(r3); // bl 0x80853D10
    r3 = r31;
    FUN_80854314(r3, r3); // bl 0x80854314
    /* lfs f0, 0x32c(r31) */ // 0x8085344C
    /* lfs f1, 0x30c(r31) */ // 0x80853450
    r3 = *(0x2a4 + r31); // lwz @ 0x80853454
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80853458
    /* lfs f2, 0xc(r3) */ // 0x8085345C
    if (<=) goto 0x0x80853474;
    /* fsubs f0, f0, f1 */ // 0x80853464
    /* fmuls f0, f2, f0 */ // 0x80853468
    /* fadds f0, f1, f0 */ // 0x8085346C
    /* stfs f0, 0x30c(r31) */ // 0x80853470
    /* lfs f0, 0x334(r31) */ // 0x80853474
    /* lfs f1, 0x314(r31) */ // 0x80853478
    /* lfs f2, 0xc(r3) */ // 0x8085347C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80853480
    if (<=) goto 0x0x80853498;
    /* fsubs f0, f0, f1 */ // 0x80853488
    /* fmuls f0, f2, f0 */ // 0x8085348C
    /* fadds f0, f1, f0 */ // 0x80853490
    /* stfs f0, 0x314(r31) */ // 0x80853494
    /* lfs f0, 0x328(r31) */ // 0x80853498
    /* lfs f1, 0x30c(r31) */ // 0x8085349C
    /* lfs f2, 0xc(r3) */ // 0x808534A0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808534A4
    if (>=) goto 0x0x808534bc;
    /* fsubs f0, f0, f1 */ // 0x808534AC
    /* fmuls f0, f2, f0 */ // 0x808534B0
    /* fadds f0, f1, f0 */ // 0x808534B4
    /* stfs f0, 0x30c(r31) */ // 0x808534B8
    /* lfs f0, 0x330(r31) */ // 0x808534BC
    /* lfs f1, 0x314(r31) */ // 0x808534C0
    /* lfs f2, 0xc(r3) */ // 0x808534C4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808534C8
    if (>=) goto 0x0x808534e0;
    /* fsubs f0, f0, f1 */ // 0x808534D0
    /* fmuls f0, f2, f0 */ // 0x808534D4
    /* fadds f0, f1, f0 */ // 0x808534D8
    /* stfs f0, 0x314(r31) */ // 0x808534DC
    /* lfs f0, 0x320(r31) */ // 0x808534E0
    /* lfs f1, 0x308(r31) */ // 0x808534E4
    /* lfs f2, 0xc(r3) */ // 0x808534E8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808534EC
    if (>=) goto 0x0x80853504;
    /* fsubs f0, f0, f1 */ // 0x808534F4
    /* fmuls f0, f2, f0 */ // 0x808534F8
    /* fadds f0, f1, f0 */ // 0x808534FC
    /* stfs f0, 0x308(r31) */ // 0x80853500
    /* lfs f0, 0x324(r31) */ // 0x80853504
    /* lfs f1, 0x310(r31) */ // 0x80853508
    /* lfs f2, 0xc(r3) */ // 0x8085350C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80853510
    if (>=) goto 0x0x80853540;
    /* fsubs f0, f0, f1 */ // 0x80853518
    /* fmuls f0, f2, f0 */ // 0x8085351C
    /* fadds f0, f1, f0 */ // 0x80853520
    /* stfs f0, 0x310(r31) */ // 0x80853524
    /* b 0x80853540 */ // 0x80853528
    r0 = *(0x2e4 + r3); // lwz @ 0x8085352C
    if (==) goto 0x0x80853540;
    r3 = r31;
    FUN_80854314(r3); // bl 0x80854314
    r0 = *(0x14 + r1); // lwz @ 0x80853540
    r31 = *(0xc + r1); // lwz @ 0x80853544
    return;
}