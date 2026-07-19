/* Function at 0x8082DE7C, size=128 bytes */
/* Stack frame: 0 bytes */

void FUN_8082DE7C(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r4, 0 */ // 0x8082DE7C
    r0 = *(4 + r3); // lwz @ 0x8082DE80
    /* lfs f2, 0(r4) */ // 0x8082DE84
    /* lis r7, 0 */ // 0x8082DE88
    /* mulli r6, r0, 0x74 */ // 0x8082DE8C
    r4 = *(0x74 + r3); // lwz @ 0x8082DE90
    /* fmuls f0, f1, f2 */ // 0x8082DE94
    r7 = r7 + 0; // 0x8082DE98
    r5 = r4 | 0x40; // 0x8082DE9C
    r0 = *(4 + r3); // lwz @ 0x8082DEA0
    r6 = r7 + r6; // 0x8082DEA4
    /* fadds f1, f2, f0 */ // 0x8082DEA8
    /* lfs f0, 0x44(r6) */ // 0x8082DEAC
    /* mulli r0, r0, 0x74 */ // 0x8082DEB0
    r4 = *(0xa4 + r3); // lwz @ 0x8082DEB4
    /* fmuls f1, f0, f1 */ // 0x8082DEB8
    *(0x74 + r3) = r5; // stw @ 0x8082DEBC
    r5 = r7 + r0; // 0x8082DEC0
    /* stfs f1, 0x68(r3) */ // 0x8082DEC4
    /* stfs f1, 0x64(r3) */ // 0x8082DEC8
    /* stfs f1, 0x60(r3) */ // 0x8082DECC
    /* stfs f1, 0x5c(r3) */ // 0x8082DED0
    /* lfs f0, 0x40(r6) */ // 0x8082DED4
    /* lfs f2, 0x38(r6) */ // 0x8082DED8
    /* fmuls f0, f1, f0 */ // 0x8082DEDC
    /* fmuls f1, f1, f2 */ // 0x8082DEE0
    /* stfs f0, 0xb8(r3) */ // 0x8082DEE4
    /* stfs f1, 0xb4(r3) */ // 0x8082DEE8
    /* lfs f1, 0x34(r5) */ // 0x8082DEEC
    /* fmuls f0, f0, f1 */ // 0x8082DEF0
    /* stfs f0, 4(r4) */ // 0x8082DEF4
    return;
}