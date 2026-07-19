/* Function at 0x807DDE64, size=532 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_807DDE64(int r3, int r4, int r5)
{
    /* Stack frame: -192(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x807DDE74
    r31 = r31 + 0; // 0x807DDE78
    *(0xb8 + r1) = r30; // stw @ 0x807DDE7C
    r30 = r3;
    *(0xb4 + r1) = r29; // stw @ 0x807DDE84
    *(0xb0 + r1) = r28; // stw @ 0x807DDE88
    r4 = *(0x10c + r3); // lwz @ 0x807DDE8C
    /* addic. r0, r4, -1 */ // 0x807DDE90
    *(0x10c + r3) = r0; // stw @ 0x807DDE94
    if (>=) goto 0x0x807de098;
    /* lis r4, 0 */ // 0x807DDE9C
    r5 = *(0x8c + r3); // lwz @ 0x807DDEA0
    r0 = *(0 + r4); // lwz @ 0x807DDEA4
    r0 = r5 + r0; // 0x807DDEA8
    *(0x8c + r3) = r0; // stw @ 0x807DDEAC
    if (<) goto 0x0x807dded0;
    /* lfs f0, 0x274(r31) */ // 0x807DDEB8
    /* li r0, 1 */ // 0x807DDEBC
    /* stfs f0, 0xc8(r3) */ // 0x807DDEC0
    *(8 + r3) = r0; // stw @ 0x807DDEC4
    *(0xf9 + r3) = r0; // stb @ 0x807DDEC8
    /* b 0x807ddefc */ // 0x807DDECC
    /* xoris r3, r0, 0x8000 */ // 0x807DDED0
    /* lis r0, 0x4330 */ // 0x807DDED4
    *(0xa4 + r1) = r3; // stw @ 0x807DDED8
    /* lfd f2, 0x298(r31) */ // 0x807DDEDC
    *(0xa0 + r1) = r0; // stw @ 0x807DDEE0
    /* lfs f0, 0x284(r31) */ // 0x807DDEE4
    /* lfd f1, 0xa0(r1) */ // 0x807DDEE8
    /* fsubs f1, f1, f2 */ // 0x807DDEEC
    /* fmuls f1, f1, f0 */ // 0x807DDEF0
    FUN_805E3430(); // bl 0x805E3430
    /* stfs f1, 0xc8(r30) */ // 0x807DDEF8
    /* lis r3, 0 */ // 0x807DDEFC
    r3 = r3 + 0; // 0x807DDF00
    r0 = *(4 + r3); // lwz @ 0x807DDF04
    if (>) goto 0x0x807ddf20;
    r12 = *(0 + r3); // lwz @ 0x807DDF10
    r12 = *(0x18 + r12); // lwz @ 0x807DDF14
    /* mtctr r12 */ // 0x807DDF18
    /* bctrl  */ // 0x807DDF1C
    /* lis r29, 0 */ // 0x807DDF20
    /* lfs f1, 0xc8(r30) */ // 0x807DDF24
    r29 = r29 + 0; // 0x807DDF28
    r5 = *(8 + r29); // lwz @ 0x807DDF30
    r4 = r30 + 0xac; // 0x807DDF34
    r5 = *(0 + r5); // lwz @ 0x807DDF38
    r28 = *(0x6c + r5); // lwz @ 0x807DDF3C
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r30 + 0x90; // 0x807DDF48
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0x28(r1) */ // 0x807DDF54
    /* stfs f0, 0x64(r28) */ // 0x807DDF5C
    r4 = r30 + 0xb8; // 0x807DDF60
    /* lfs f0, 0x2c(r1) */ // 0x807DDF64
    /* stfs f0, 0x68(r28) */ // 0x807DDF68
    /* lfs f0, 0x30(r1) */ // 0x807DDF6C
    /* stfs f0, 0x6c(r28) */ // 0x807DDF70
    /* lfs f1, 0xc8(r30) */ // 0x807DDF74
    FUN_805A443C(); // bl 0x805A443C
    r4 = r30 + 0x9c; // 0x807DDF80
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0x10(r1) */ // 0x807DDF8C
    /* stfs f0, 0x70(r28) */ // 0x807DDF90
    /* lfs f0, 0x14(r1) */ // 0x807DDF94
    /* stfs f0, 0x74(r28) */ // 0x807DDF98
    /* lfs f0, 0x18(r1) */ // 0x807DDF9C
    /* stfs f0, 0x78(r28) */ // 0x807DDFA0
    r0 = *(4 + r29); // lwz @ 0x807DDFA4
    if (>) goto 0x0x807ddfc4;
    r12 = *(0 + r29); // lwz @ 0x807DDFB0
    r3 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x807DDFB8
    /* mtctr r12 */ // 0x807DDFBC
    /* bctrl  */ // 0x807DDFC0
    /* lis r3, 0 */ // 0x807DDFC4
    /* lfs f1, 0xc4(r30) */ // 0x807DDFC8
    /* lfs f0, 0xc8(r30) */ // 0x807DDFCC
    r3 = r3 + 0; // 0x807DDFD0
    r3 = *(8 + r3); // lwz @ 0x807DDFD4
    /* fmuls f1, f1, f0 */ // 0x807DDFD8
    /* lfs f0, 0xa8(r30) */ // 0x807DDFDC
    r29 = *(0 + r3); // lwz @ 0x807DDFE0
    /* fadds f2, f0, f1 */ // 0x807DDFE4
    /* lfs f0, 0x10(r29) */ // 0x807DDFE8
    /* fcmpu cr0, f0, f2 */ // 0x807DDFEC
    if (==) goto 0x0x807de024;
    /* lfs f1, 0x2ac(r31) */ // 0x807DDFF4
    /* lfs f0, 0x2b0(r31) */ // 0x807DDFFC
    /* fmuls f1, f2, f1 */ // 0x807DE004
    /* stfs f2, 0x10(r29) */ // 0x807DE008
    /* fmuls f1, f0, f1 */ // 0x807DE00C
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0xc(r1) */ // 0x807DE014
    /* lfs f0, 8(r1) */ // 0x807DE018
    /* fdivs f0, f1, f0 */ // 0x807DE01C
    /* stfs f0, 0x14(r29) */ // 0x807DE020
    /* lfs f2, 0xd0(r30) */ // 0x807DE024
    /* lfs f1, 0xfc(r30) */ // 0x807DE028
    /* lfs f0, 0x27c(r31) */ // 0x807DE02C
    /* fsubs f1, f2, f1 */ // 0x807DE030
    /* stfs f1, 0xd0(r30) */ // 0x807DE034
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DE038
    if (>=) goto 0x0x807de04c;
    /* lfs f0, 0x280(r31) */ // 0x807DE040
    /* fadds f0, f1, f0 */ // 0x807DE044
    /* stfs f0, 0xd0(r30) */ // 0x807DE048
    /* lfs f1, 0xd0(r30) */ // 0x807DE04C
    /* lis r4, 0 */ // 0x807DE050
    /* lfs f0, 0x284(r31) */ // 0x807DE054
    /* fneg f1, f1 */ // 0x807DE05C
    r4 = r4 + 0; // 0x807DE060
    /* fmuls f1, f1, f0 */ // 0x807DE064
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* lfs f1, 0xcc(r30) */ // 0x807DE06C
    /* lis r4, 0 */ // 0x807DE070
    /* lfs f0, 0x284(r31) */ // 0x807DE074
}