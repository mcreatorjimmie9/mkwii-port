/* Function at 0x8083780C, size=352 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8083780C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80837818
    r31 = r3;
    r0 = *(0x2c0 + r3); // lhz @ 0x80837820
    if (==) goto 0x0x80837954;
    /* li r5, 0 */ // 0x8083782C
    /* li r4, 6 */ // 0x80837830
    r0 = *(0x78 + r3); // lwz @ 0x80837834
    /* lis r6, 0 */ // 0x80837838
    *(0x2c0 + r3) = r5; // sth @ 0x8083783C
    /* rlwinm. r0, r0, 0, 0x18, 0x19 */ // 0x80837840
    *(0x2c8 + r3) = r5; // stw @ 0x80837844
    *(0x2c4 + r3) = r4; // stw @ 0x80837848
    r5 = *(0 + r6); // lwzu @ 0x8083784C
    *(8 + r1) = r5; // stw @ 0x80837850
    r4 = *(4 + r6); // lwz @ 0x80837854
    r0 = *(8 + r6); // lwz @ 0x80837858
    *(0xc + r1) = r4; // stw @ 0x8083785C
    *(0x10 + r1) = r0; // stw @ 0x80837860
    if (!=) goto 0x0x80837874;
    *(0x168 + r3) = r5; // stw @ 0x80837868
    *(0x16c + r3) = r4; // stw @ 0x8083786C
    *(0x170 + r3) = r0; // stw @ 0x80837870
    r3 = r31;
    /* li r4, 0 */ // 0x80837878
    /* li r5, 0 */ // 0x8083787C
    FUN_808289B4(r3, r4, r5); // bl 0x808289B4
    /* lfs f6, 0xb4(r31) */ // 0x80837884
    /* lfs f2, 0x2c(r31) */ // 0x80837888
    /* lfs f1, 0x30(r31) */ // 0x8083788C
    /* fmuls f5, f2, f6 */ // 0x80837890
    r0 = *(0x78 + r31); // lwz @ 0x80837894
    /* lfs f4, 0x44(r31) */ // 0x80837898
    /* fmuls f3, f1, f6 */ // 0x8083789C
    /* lfs f0, 0x34(r31) */ // 0x808378A0
    r0 = r0 rlwinm 0; // rlwinm
    r3 = r0 | 0x40; // 0x808378A8
    /* fmuls f1, f0, f6 */ // 0x808378AC
    /* lfs f2, 0x48(r31) */ // 0x808378B0
    /* fsubs f4, f4, f5 */ // 0x808378B4
    /* lfs f0, 0x4c(r31) */ // 0x808378B8
    /* rlwinm. r0, r3, 0, 0xa, 0xa */ // 0x808378BC
    /* fsubs f2, f2, f3 */ // 0x808378C0
    /* fsubs f0, f0, f1 */ // 0x808378C4
    /* stfs f4, 0x44(r31) */ // 0x808378C8
    /* stfs f2, 0x48(r31) */ // 0x808378CC
    /* stfs f0, 0x4c(r31) */ // 0x808378D0
    *(0x78 + r31) = r3; // stw @ 0x808378D4
    if (==) goto 0x0x80837900;
    r0 = *(0x7c + r31); // lwz @ 0x808378DC
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x808378E0
    if (==) goto 0x0x80837900;
    r3 = r31;
    /* li r4, 0 */ // 0x808378EC
    FUN_80829EC4(r3, r4); // bl 0x80829EC4
    r0 = *(0x7c + r31); // lwz @ 0x808378F4
    r0 = r0 | 0x8000; // 0x808378F8
    *(0x7c + r31) = r0; // stw @ 0x808378FC
    r0 = *(0x78 + r31); // lwz @ 0x80837900
    /* lis r4, 0x101 */ // 0x80837904
    r3 = *(0xa4 + r31); // lwz @ 0x80837908
    r4 = r4 + 0x101; // 0x8083790C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r31) = r0; // stw @ 0x80837914
    r0 = *(0x20 + r3); // lwz @ 0x80837918
    /* andc. r0, r4, r0 */ // 0x8083791C
    if (==) goto 0x0x80837938;
    /* lis r3, 0 */ // 0x80837924
    r4 = r31 + 0x44; // 0x80837928
    r3 = *(0 + r3); // lwz @ 0x8083792C
    r3 = *(0x74 + r3); // lwz @ 0x80837930
    FUN_8071D360(r3, r4); // bl 0x8071D360
    /* lis r3, 0 */ // 0x80837938
    r4 = *(0xa4 + r31); // lwz @ 0x8083793C
    r3 = *(0 + r3); // lwz @ 0x80837940
    /* li r5, 1 */ // 0x80837944
    /* li r6, 0 */ // 0x80837948
    /* li r7, 0x17 */ // 0x8083794C
    FUN_806320D4(r5, r6, r7); // bl 0x806320D4
    r31 = *(0x1c + r1); // lwz @ 0x80837954
    /* li r3, 1 */ // 0x80837958
    r0 = *(0x24 + r1); // lwz @ 0x8083795C
    return;
}