/* Function at 0x8082AE18, size=172 bytes */
/* Stack frame: 0 bytes */

void FUN_8082AE18(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r6, 0 */ // 0x8082AE18
    /* lfs f0, 0x140(r3) */ // 0x8082AE1C
    r6 = r6 + 0; // 0x8082AE20
    /* lfs f1, 0(r6) */ // 0x8082AE24
    /* fcmpu cr0, f1, f0 */ // 0x8082AE28
    if (==) goto 0x0x8082aebc;
    /* lfs f3, 0x60(r3) */ // 0x8082AE30
    /* lis r5, 0 */ // 0x8082AE34
    r0 = *(4 + r3); // lwz @ 0x8082AE38
    r5 = r5 + 0; // 0x8082AE3C
    /* fsubs f1, f0, f3 */ // 0x8082AE40
    /* lfs f0, 0x38(r6) */ // 0x8082AE44
    /* mulli r7, r0, 0x74 */ // 0x8082AE48
    r4 = *(0x74 + r3); // lwz @ 0x8082AE4C
    r0 = *(4 + r3); // lwz @ 0x8082AE50
    /* fmuls f2, f0, f1 */ // 0x8082AE54
    /* lfs f1, 0x40(r6) */ // 0x8082AE58
    r4 = r4 | 0x40; // 0x8082AE5C
    /* lfs f0, 0x68(r3) */ // 0x8082AE60
    r6 = r5 + r7; // 0x8082AE64
    /* fadds f2, f3, f2 */ // 0x8082AE68
    /* fmuls f0, f1, f0 */ // 0x8082AE6C
    *(0x74 + r3) = r4; // stw @ 0x8082AE70
    /* mulli r0, r0, 0x74 */ // 0x8082AE74
    r4 = *(0xa4 + r3); // lwz @ 0x8082AE78
    /* stfs f2, 0x60(r3) */ // 0x8082AE7C
    /* fsubs f0, f0, f2 */ // 0x8082AE80
    r5 = r5 + r0; // 0x8082AE84
    /* stfs f0, 0x5c(r3) */ // 0x8082AE88
    /* stfs f0, 0x64(r3) */ // 0x8082AE8C
    /* lfs f1, 0x40(r6) */ // 0x8082AE90
    /* lfs f3, 0x38(r6) */ // 0x8082AE94
    /* fmuls f0, f0, f1 */ // 0x8082AE98
    /* fmuls f1, f2, f3 */ // 0x8082AE9C
    /* stfs f0, 0xb8(r3) */ // 0x8082AEA0
    /* stfs f1, 0xb4(r3) */ // 0x8082AEA4
    /* li r3, 1 */ // 0x8082AEA8
    /* lfs f1, 0x34(r5) */ // 0x8082AEAC
    /* fmuls f0, f0, f1 */ // 0x8082AEB0
    /* stfs f0, 4(r4) */ // 0x8082AEB4
    return;
    /* li r3, 0 */ // 0x8082AEBC
    return;
}