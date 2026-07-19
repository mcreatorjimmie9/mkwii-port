/* Function at 0x8076EA38, size=340 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8076EA38(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8076EA48
    *(0x38 + r1) = r30; // stw @ 0x8076EA4C
    r30 = r3;
    r0 = *(0x4a + r3); // lbz @ 0x8076EA54
    if (!=) goto 0x0x8076ecbc;
    r0 = *(0x17 + r3); // lbz @ 0x8076EA60
    if (==) goto 0x0x8076ea70;
    FUN_8076D228(); // bl 0x8076D228
    r0 = *(0x14 + r30); // lbz @ 0x8076EA70
    /* lfs f1, 0x18(r30) */ // 0x8076EA74
    /* lfs f2, 0x1c(r30) */ // 0x8076EA78
    /* lfs f0, 0x20(r30) */ // 0x8076EA80
    /* stfs f1, 0x5c(r30) */ // 0x8076EA84
    /* lfs f1, 0x40(r30) */ // 0x8076EA88
    /* stfs f2, 0x60(r30) */ // 0x8076EA8C
    /* stfs f0, 0x64(r30) */ // 0x8076EA90
    if (==) goto 0x0x8076eac4;
    r0 = *(0x44 + r30); // lbz @ 0x8076EA98
    if (==) goto 0x0x8076eab0;
    r3 = r30;
    FUN_8076EF44(r3); // bl 0x8076EF44
    /* b 0x8076eac4 */ // 0x8076EAAC
    /* lis r4, 0 */ // 0x8076EAB0
    r3 = r30;
    /* lfs f0, 0(r4) */ // 0x8076EAB8
    /* fsubs f1, f0, f1 */ // 0x8076EABC
    FUN_8076EF44(r4, r3); // bl 0x8076EF44
    r4 = *(0x46 + r30); // lha @ 0x8076EAC4
    r3 = r30;
    r5 = *(0x48 + r30); // lha @ 0x8076EACC
    FUN_8076F070(r3, r6, r7); // bl 0x8076F070
    /* lfs f0, 0x20(r1) */ // 0x8076EADC
    /* stfs f0, 0x18(r30) */ // 0x8076EAE4
    r4 = r30 + 0x18; // 0x8076EAE8
    r5 = r30 + 0x5c; // 0x8076EAEC
    /* lfs f0, 0x24(r1) */ // 0x8076EAF0
    /* stfs f0, 0x1c(r30) */ // 0x8076EAF4
    /* lfs f0, 0x28(r1) */ // 0x8076EAF8
    /* stfs f0, 0x20(r30) */ // 0x8076EAFC
    /* lfs f0, 0x14(r1) */ // 0x8076EB00
    /* stfs f0, 0x24(r30) */ // 0x8076EB04
    /* lfs f0, 0x18(r1) */ // 0x8076EB08
    /* stfs f0, 0x28(r30) */ // 0x8076EB0C
    /* lfs f0, 0x1c(r1) */ // 0x8076EB10
    /* stfs f0, 0x2c(r30) */ // 0x8076EB14
    FUN_805A4498(); // bl 0x805A4498
    /* lfs f1, 8(r1) */ // 0x8076EB1C
    /* lfs f0, 0xc(r1) */ // 0x8076EB20
    /* fmuls f1, f1, f1 */ // 0x8076EB24
    /* lfs f2, 0x10(r1) */ // 0x8076EB28
    /* fmuls f0, f0, f0 */ // 0x8076EB2C
    /* fmuls f2, f2, f2 */ // 0x8076EB30
    /* fadds f0, f1, f0 */ // 0x8076EB34
    /* fadds f1, f2, f0 */ // 0x8076EB38
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f3, 0x40(r30) */ // 0x8076EB40
    /* lis r3, 0 */ // 0x8076EB44
    /* lfs f2, 0x3c(r30) */ // 0x8076EB48
    /* lfs f0, 0(r3) */ // 0x8076EB4C
    /* fadds f2, f3, f2 */ // 0x8076EB50
    /* stfs f1, 0x68(r30) */ // 0x8076EB54
    /* stfs f2, 0x40(r30) */ // 0x8076EB58
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8076EB5C
    /* mfcr r0 */ // 0x8076EB60
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x8076EB64
    if (==) goto 0x0x8076ecec;
    r3 = r30;
    /* li r31, 1 */ // 0x8076EB70
    FUN_8076F4B0(r3); // bl 0x8076F4B0
    r0 = *(0xc + r30); // lbz @ 0x8076EB78
    if (!=) goto 0x0x8076ebc4;
    r4 = *(0x44 + r30); // lbz @ 0x8076EB84
}