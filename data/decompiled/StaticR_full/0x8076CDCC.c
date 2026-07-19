/* Function at 0x8076CDCC, size=392 bytes */
/* Stack frame: 0 bytes */

void FUN_8076CDCC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* li r10, 0 */ // 0x8076CDD0
    r6 = r5;
    /* li r7, 0 */ // 0x8076CDD8
    if (<=) goto 0x0x8076ced8;
    /* rlwinm. r0, r5, 0x1f, 1, 0x1f */ // 0x8076CDE0
    /* mtctr r0 */ // 0x8076CDE4
    if (==) goto 0x0x8076ce88;
    /* clrlwi r0, r10, 0x10 */ // 0x8076CDEC
    r9 = r10 rlwinm 4; // rlwinm
    /* mulli r0, r0, 0xc */ // 0x8076CDF4
    r6 = *(0xc + r3); // lwz @ 0x8076CDF8
    r8 = r4 + r0; // 0x8076CE00
    /* lfs f3, 0(r8) */ // 0x8076CE04
    /* clrlwi r0, r10, 0x10 */ // 0x8076CE08
    /* stfsux f3, r6, r9 */ // 0x8076CE0C
    /* mulli r0, r0, 0xc */ // 0x8076CE10
    /* lfs f2, 4(r8) */ // 0x8076CE14
    /* stfs f2, 4(r6) */ // 0x8076CE18
    /* lfs f0, 8(r8) */ // 0x8076CE1C
    r8 = r4 + r0; // 0x8076CE20
    /* stfs f0, 8(r6) */ // 0x8076CE24
    /* lfsx f3, r4, r0 */ // 0x8076CE28
    r0 = *(0xc + r3); // lwz @ 0x8076CE2C
    /* lfs f2, 4(r8) */ // 0x8076CE30
    r6 = r0 + r9; // 0x8076CE34
    /* lfs f0, 8(r8) */ // 0x8076CE38
    *(0xc + r6) = r7; // sth @ 0x8076CE3C
    r0 = *(0xc + r3); // lwz @ 0x8076CE40
    r6 = r0 + r9; // 0x8076CE44
    r9 = r10 rlwinm 4; // rlwinm
    *(0xe + r6) = r7; // sth @ 0x8076CE4C
    r6 = *(0xc + r3); // lwz @ 0x8076CE54
    /* stfsux f3, r6, r9 */ // 0x8076CE58
    /* stfs f2, 4(r6) */ // 0x8076CE5C
    /* stfs f0, 8(r6) */ // 0x8076CE60
    r0 = *(0xc + r3); // lwz @ 0x8076CE64
    r6 = r0 + r9; // 0x8076CE68
    *(0xc + r6) = r7; // sth @ 0x8076CE6C
    r0 = *(0xc + r3); // lwz @ 0x8076CE70
    r6 = r0 + r9; // 0x8076CE74
    *(0xe + r6) = r7; // sth @ 0x8076CE78
    if (counter-- != 0) goto 0x0x8076cdec;
    /* andi. r6, r5, 1 */ // 0x8076CE80
    if (==) goto 0x0x8076ced8;
    /* mtctr r6 */ // 0x8076CE88
    /* clrlwi r0, r10, 0x10 */ // 0x8076CE8C
    r9 = r10 rlwinm 4; // rlwinm
    /* mulli r0, r0, 0xc */ // 0x8076CE94
    r6 = *(0xc + r3); // lwz @ 0x8076CE98
    /* lfsx f3, r4, r0 */ // 0x8076CEA0
    r8 = r4 + r0; // 0x8076CEA4
    /* stfsux f3, r6, r9 */ // 0x8076CEA8
    /* lfs f2, 4(r8) */ // 0x8076CEAC
    /* stfs f2, 4(r6) */ // 0x8076CEB0
    /* lfs f0, 8(r8) */ // 0x8076CEB4
    /* stfs f0, 8(r6) */ // 0x8076CEB8
    r0 = *(0xc + r3); // lwz @ 0x8076CEBC
    r6 = r0 + r9; // 0x8076CEC0
    *(0xc + r6) = r7; // sth @ 0x8076CEC4
    r0 = *(0xc + r3); // lwz @ 0x8076CEC8
    r6 = r0 + r9; // 0x8076CECC
    *(0xe + r6) = r7; // sth @ 0x8076CED0
    if (counter-- != 0) goto 0x0x8076ce8c;
    /* lis r8, 0 */ // 0x8076CED8
    r10 = r5;
    r7 = r8 + 0; // 0x8076CEE0
    /* li r6, 0 */ // 0x8076CEE4
    /* b 0x8076cf2c */ // 0x8076CEE8
    r0 = *(0xc + r3); // lwz @ 0x8076CEEC
    r9 = r10 rlwinm 4; // rlwinm
    /* lfs f0, 0(r8) */ // 0x8076CEF4
    /* stfsx f0, r9, r0 */ // 0x8076CEFC
    r4 = r0 + r9; // 0x8076CF00
    /* lfs f0, 4(r7) */ // 0x8076CF04
    /* stfs f0, 4(r4) */ // 0x8076CF08
    /* lfs f0, 8(r7) */ // 0x8076CF0C
    /* stfs f0, 8(r4) */ // 0x8076CF10
    r0 = *(0xc + r3); // lwz @ 0x8076CF14
    r4 = r0 + r9; // 0x8076CF18
    *(0xc + r4) = r6; // sth @ 0x8076CF1C
    r0 = *(0xc + r3); // lwz @ 0x8076CF20
    r4 = r0 + r9; // 0x8076CF24
    *(0xe + r4) = r6; // sth @ 0x8076CF28
    r0 = *(6 + r3); // lhz @ 0x8076CF2C
    /* clrlwi r4, r10, 0x10 */ // 0x8076CF30
    if (<) goto 0x0x8076ceec;
    *(8 + r3) = r5; // sth @ 0x8076CF3C
    /* stfs f1, 0x20(r3) */ // 0x8076CF40
    r12 = *(0 + r3); // lwz @ 0x8076CF44
    r12 = *(0x24 + r12); // lwz @ 0x8076CF48
    /* mtctr r12 */ // 0x8076CF4C
    /* bctr  */ // 0x8076CF50
}