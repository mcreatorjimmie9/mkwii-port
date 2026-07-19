/* Function at 0x806DE914, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806DE914(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806DE91C
    /* lfs f0, 0(r4) */ // 0x806DE920
    *(0x24 + r1) = r0; // stw @ 0x806DE924
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806DE928
    *(0x1c + r1) = r31; // stw @ 0x806DE92C
    if (>=) goto 0x0x806de980;
    r4 = *(0x40 + r3); // lwz @ 0x806DE934
    /* lis r0, 0x4330 */ // 0x806DE938
    /* lis r5, 0 */ // 0x806DE93C
    *(8 + r1) = r0; // stw @ 0x806DE940
    /* xoris r4, r4, 0x8000 */ // 0x806DE944
    /* lfd f2, 0(r5) */ // 0x806DE948
    *(0xc + r1) = r4; // stw @ 0x806DE94C
    /* lis r31, 0 */ // 0x806DE950
    r4 = r31 + 0; // 0x806DE954
    r3 = r3 + 0xa8; // 0x806DE958
    /* lfd f1, 8(r1) */ // 0x806DE95C
    /* lfs f0, 4(r4) */ // 0x806DE960
    /* fsubs f1, f1, f2 */ // 0x806DE964
    /* fmuls f1, f1, f0 */ // 0x806DE968
    FUN_805E3728(r3); // bl 0x805E3728
    /* lfs f0, 0(r31) */ // 0x806DE970
    /* fneg f0, f0 */ // 0x806DE974
    /* fadds f1, f0, f1 */ // 0x806DE978
    /* b 0x806de9f0 */ // 0x806DE97C
    r4 = *(0x40 + r3); // lwz @ 0x806DE980
    /* lis r0, 0x4330 */ // 0x806DE984
    /* lfs f0, 8(r3) */ // 0x806DE988
    /* lis r5, 0 */ // 0x806DE98C
    /* xoris r4, r4, 0x8000 */ // 0x806DE990
    *(0xc + r1) = r4; // stw @ 0x806DE994
    /* lis r6, 0 */ // 0x806DE998
    /* lfd f2, 0(r5) */ // 0x806DE99C
    *(8 + r1) = r0; // stw @ 0x806DE9A0
    /* fsubs f5, f1, f0 */ // 0x806DE9A4
    /* lfs f4, 0x14(r3) */ // 0x806DE9A8
    r4 = r6 + 0; // 0x806DE9AC
    /* lfd f0, 8(r1) */ // 0x806DE9B0
    /* lfs f3, 0(r6) */ // 0x806DE9B4
    /* fmuls f4, f4, f5 */ // 0x806DE9B8
    /* fsubs f1, f0, f2 */ // 0x806DE9BC
    /* lfs f0, 4(r4) */ // 0x806DE9C0
    /* fneg f2, f3 */ // 0x806DE9C4
    /* fmuls f0, f1, f0 */ // 0x806DE9C8
    /* fadds f1, f2, f0 */ // 0x806DE9CC
    /* .byte 0xfc, 0x04, 0x08, 0x40 */ // 0x806DE9D0
    if (>=) goto 0x0x806de9dc;
    /* b 0x806de9f0 */ // 0x806DE9D8
    /* .byte 0xfc, 0x04, 0x18, 0x40 */ // 0x806DE9DC
    if (<=) goto 0x0x806de9ec;
    /* fmr f1, f3 */ // 0x806DE9E4
    /* b 0x806de9f0 */ // 0x806DE9E8
    /* fmr f1, f4 */ // 0x806DE9EC
    r0 = *(0x24 + r1); // lwz @ 0x806DE9F0
    r31 = *(0x1c + r1); // lwz @ 0x806DE9F4
    return;
}