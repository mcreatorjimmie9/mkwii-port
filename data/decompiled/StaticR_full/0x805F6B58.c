/* Function at 0x805F6B58, size=308 bytes */
/* Stack frame: 32 bytes */

void FUN_805F6B58(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* lis r8, 0x4330 */ // 0x805F6B5C
    /* lis r5, 0 */ // 0x805F6B60
    /* lis r7, 0 */ // 0x805F6B64
    r0 = *(0 + r5); // lwz @ 0x805F6B68
    /* lis r5, 0 */ // 0x805F6B6C
    /* lfs f6, 0(r5) */ // 0x805F6B70
    /* lis r6, 0 */ // 0x805F6B74
    /* mulli r9, r0, 0xc */ // 0x805F6B78
    r7 = r7 + 0; // 0x805F6B7C
    r0 = r4 + -3; // 0x805F6B80
    *(8 + r1) = r8; // stw @ 0x805F6B84
    /* lfd f3, 0(r6) */ // 0x805F6B88
    /* fmr f1, f6 */ // 0x805F6B8C
    r5 = r7 + r9; // 0x805F6B90
    /* lhzx r7, r7, r9 */ // 0x805F6B94
    *(0xc + r1) = r7; // stw @ 0x805F6B98
    r5 = *(2 + r5); // lhz @ 0x805F6BA0
    /* lfd f0, 8(r1) */ // 0x805F6BA4
    *(0x10 + r1) = r8; // stw @ 0x805F6BA8
    /* fsubs f4, f0, f3 */ // 0x805F6BAC
    *(0x14 + r1) = r5; // stw @ 0x805F6BB0
    /* lfd f0, 0x10(r1) */ // 0x805F6BB4
    /* fsubs f5, f0, f3 */ // 0x805F6BB8
    if (>) goto 0x0x805f6c30;
    r6 = *(0x68 + r3); // lwz @ 0x805F6BC0
    r4 = r5 rlwinm 0x1f; // rlwinm
    r0 = r7 rlwinm 0x1f; // rlwinm
    *(0xc + r1) = r0; // stw @ 0x805F6BCC
    /* srwi r5, r6, 0x1f */ // 0x805F6BD0
    *(0x14 + r1) = r4; // stw @ 0x805F6BD4
    /* clrlwi r0, r6, 0x1f */ // 0x805F6BD8
    r4 = r0 ^ r5; // 0x805F6BDC
    /* lfd f1, 8(r1) */ // 0x805F6BE0
    r0 = r5 + r6; // 0x805F6BE4
    /* lfd f0, 0x10(r1) */ // 0x805F6BE8
    /* subf r4, r5, r4 */ // 0x805F6BEC
    /* lis r5, 0 */ // 0x805F6BF0
    r0 = r0 >> 1; // srawi
    /* lfd f2, 0(r5) */ // 0x805F6BF8
    /* xoris r4, r4, 0x8000 */ // 0x805F6BFC
    *(0xc + r1) = r4; // stw @ 0x805F6C00
    /* xoris r0, r0, 0x8000 */ // 0x805F6C04
    /* fsubs f4, f1, f3 */ // 0x805F6C08
    /* lfd f1, 8(r1) */ // 0x805F6C0C
    /* fsubs f5, f0, f3 */ // 0x805F6C10
    *(0x14 + r1) = r0; // stw @ 0x805F6C14
    /* fsubs f1, f1, f2 */ // 0x805F6C18
    /* lfd f0, 0x10(r1) */ // 0x805F6C1C
    /* fsubs f0, f0, f2 */ // 0x805F6C20
    /* fmuls f6, f4, f1 */ // 0x805F6C24
    /* fmuls f1, f5, f0 */ // 0x805F6C28
    /* b 0x805f6c68 */ // 0x805F6C2C
    if (!=) goto 0x0x805f6c68;
    r0 = *(0x68 + r3); // lwz @ 0x805F6C38
    r4 = r5 rlwinm 0x1f; // rlwinm
    *(0xc + r1) = r4; // stw @ 0x805F6C40
    /* lis r4, 0 */ // 0x805F6C44
    /* xoris r0, r0, 0x8000 */ // 0x805F6C48
    /* lfd f1, 0(r4) */ // 0x805F6C4C
    *(0x14 + r1) = r0; // stw @ 0x805F6C50
    /* lfd f2, 8(r1) */ // 0x805F6C54
    /* lfd f0, 0x10(r1) */ // 0x805F6C58
    /* fsubs f5, f2, f3 */ // 0x805F6C5C
    /* fsubs f0, f0, f1 */ // 0x805F6C60
    /* fmuls f1, f5, f0 */ // 0x805F6C64
    r0 = *(0x34 + r3); // lhz @ 0x805F6C68
    /* stfs f6, 0x40(r3) */ // 0x805F6C6C
    r0 = r0 | 1; // 0x805F6C70
    /* stfs f1, 0x44(r3) */ // 0x805F6C74
    /* stfs f4, 8(r3) */ // 0x805F6C78
    *(0x34 + r3) = r0; // sth @ 0x805F6C7C
    /* stfs f5, 0xc(r3) */ // 0x805F6C80
    return;
}