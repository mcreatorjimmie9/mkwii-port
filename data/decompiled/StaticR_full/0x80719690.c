/* Function at 0x80719690, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80719690(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807196A4
    /* lis r30, 0 */ // 0x807196A8
    r30 = r30 + 0; // 0x807196AC
    FUN_80718104(); // bl 0x80718104
    r3 = *(0xac + r31); // lwz @ 0x807196B4
    /* lfs f1, 0(r30) */ // 0x807196B8
    /* stfs f1, 4(r3) */ // 0x807196BC
    r3 = *(0xac + r31); // lwz @ 0x807196C0
    /* stfs f1, 0x10(r3) */ // 0x807196C4
    r3 = *(0xac + r31); // lwz @ 0x807196C8
    /* stfs f1, 0x1c(r3) */ // 0x807196CC
    r3 = *(0xac + r31); // lwz @ 0x807196D0
    /* stfs f1, 0x28(r3) */ // 0x807196D4
    r3 = *(0xac + r31); // lwz @ 0x807196D8
    /* lfs f0, 0xc4(r31) */ // 0x807196DC
    /* stfs f0, 0x34(r3) */ // 0x807196E0
    r3 = *(0xac + r31); // lwz @ 0x807196E4
    /* lfs f0, 0xc4(r31) */ // 0x807196E8
    /* stfs f0, 0x40(r3) */ // 0x807196EC
    r3 = *(0xac + r31); // lwz @ 0x807196F0
    /* lfs f0, 0xc4(r31) */ // 0x807196F4
    /* stfs f0, 0x4c(r3) */ // 0x807196F8
    r3 = *(0xac + r31); // lwz @ 0x807196FC
    /* lfs f0, 0xc4(r31) */ // 0x80719700
    /* stfs f0, 0x58(r3) */ // 0x80719704
    /* lfs f3, 0xcc(r31) */ // 0x80719708
    /* fcmpu cr0, f1, f3 */ // 0x8071970C
    if (!=) goto 0x0x80719718;
    /* b 0x80719744 */ // 0x80719714
    r3 = *(0xd8 + r31); // lwz @ 0x80719718
    /* lis r0, 0x4330 */ // 0x8071971C
    *(8 + r1) = r0; // stw @ 0x80719720
    /* xoris r0, r3, 0x8000 */ // 0x80719724
    /* lfd f2, 0x18(r30) */ // 0x80719728
    *(0xc + r1) = r0; // stw @ 0x8071972C
    /* lfs f0, 0x3c(r30) */ // 0x80719730
    /* lfd f1, 8(r1) */ // 0x80719734
    /* fsubs f1, f1, f2 */ // 0x80719738
    /* fmuls f0, f1, f0 */ // 0x8071973C
    /* fdivs f1, f0, f3 */ // 0x80719740
    /* lfs f0, 0x40(r30) */ // 0x80719744
    /* fmuls f1, f0, f1 */ // 0x80719748
    FUN_805E3430(); // bl 0x805E3430
}