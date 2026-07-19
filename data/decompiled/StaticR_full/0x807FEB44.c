/* Function at 0x807FEB44, size=308 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807FEB44(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x807FEB4C
    r7 = r7 + 0; // 0x807FEB54
    r6 = r7 + 0x40; // 0x807FEB58
    *(0x1c + r1) = r31; // stw @ 0x807FEB5C
    /* lis r31, 0 */ // 0x807FEB60
    r5 = r7 + 0x28; // 0x807FEB64
    *(0x18 + r1) = r30; // stw @ 0x807FEB68
    r31 = r31 + 0; // 0x807FEB6C
    *(0x14 + r1) = r29; // stw @ 0x807FEB70
    r29 = r3;
    r4 = *(0x104 + r3); // lwz @ 0x807FEB78
    /* lfs f0, 0x40(r7) */ // 0x807FEB7C
    r30 = *(0x10 + r4); // lwz @ 0x807FEB80
    r4 = r7 + 0x10; // 0x807FEB84
    r8 = *(0x6c + r30); // lwz @ 0x807FEB88
    /* stfs f0, 0x7c(r8) */ // 0x807FEB8C
    r3 = r8;
    /* lfs f0, 4(r6) */ // 0x807FEB94
    /* stfs f0, 0x80(r8) */ // 0x807FEB98
    /* lfs f0, 8(r6) */ // 0x807FEB9C
    /* stfs f0, 0x84(r8) */ // 0x807FEBA0
    /* lfs f0, 0x28(r7) */ // 0x807FEBA4
    /* stfs f0, 0x70(r8) */ // 0x807FEBA8
    /* lfs f0, 4(r5) */ // 0x807FEBAC
    /* stfs f0, 0x74(r8) */ // 0x807FEBB0
    /* lfs f0, 8(r5) */ // 0x807FEBB4
    /* stfs f0, 0x78(r8) */ // 0x807FEBB8
    /* lfs f0, 0x10(r7) */ // 0x807FEBBC
    /* stfs f0, 0x64(r8) */ // 0x807FEBC0
    /* lfs f0, 4(r4) */ // 0x807FEBC4
    /* stfs f0, 0x68(r8) */ // 0x807FEBC8
    /* lfs f0, 8(r4) */ // 0x807FEBCC
    /* stfs f0, 0x6c(r8) */ // 0x807FEBD0
    r12 = *(0 + r8); // lwz @ 0x807FEBD4
    r12 = *(0x14 + r12); // lwz @ 0x807FEBD8
    /* mtctr r12 */ // 0x807FEBDC
    /* bctrl  */ // 0x807FEBE0
    /* lfs f0, 0x10(r30) */ // 0x807FEBE4
    /* lfs f2, 0xc(r31) */ // 0x807FEBE8
    /* fcmpu cr0, f0, f2 */ // 0x807FEBEC
    if (==) goto 0x0x807fec24;
    /* lfs f1, 0x10(r31) */ // 0x807FEBF4
    /* lfs f0, 0x14(r31) */ // 0x807FEBFC
    /* fmuls f1, f2, f1 */ // 0x807FEC04
    /* stfs f2, 0x10(r30) */ // 0x807FEC08
    /* fmuls f1, f0, f1 */ // 0x807FEC0C
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 0xc(r1) */ // 0x807FEC14
    /* lfs f0, 8(r1) */ // 0x807FEC18
    /* fdivs f0, f1, f0 */ // 0x807FEC1C
    /* stfs f0, 0x14(r30) */ // 0x807FEC20
    /* lfs f0, 0x13c(r29) */ // 0x807FEC24
    /* lis r4, 0 */ // 0x807FEC28
    /* stfs f0, 0x28(r30) */ // 0x807FEC2C
    r3 = r4 + 0; // 0x807FEC30
    /* lfs f0, 0(r31) */ // 0x807FEC34
    /* li r0, 1 */ // 0x807FEC38
    /* lfs f1, 0x140(r29) */ // 0x807FEC3C
    /* stfs f1, 0x2c(r30) */ // 0x807FEC40
    /* lfs f1, 0x144(r29) */ // 0x807FEC44
    /* stfs f1, 0x30(r30) */ // 0x807FEC48
    /* lfs f1, 0(r4) */ // 0x807FEC4C
    /* stfs f1, 0x108(r29) */ // 0x807FEC50
    /* lfs f1, 4(r3) */ // 0x807FEC54
    /* stfs f1, 0x10c(r29) */ // 0x807FEC58
    /* lfs f1, 8(r3) */ // 0x807FEC5C
    /* stfs f1, 0x110(r29) */ // 0x807FEC60
    /* stfs f0, 0x114(r29) */ // 0x807FEC64
    *(0x118 + r29) = r0; // stb @ 0x807FEC68
    r31 = *(0x1c + r1); // lwz @ 0x807FEC6C
    r30 = *(0x18 + r1); // lwz @ 0x807FEC70
    r29 = *(0x14 + r1); // lwz @ 0x807FEC74
}