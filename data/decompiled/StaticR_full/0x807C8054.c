/* Function at 0x807C8054, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807C8054(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C8060
    r31 = r3;
    r3 = *(0x14 + r3); // lwz @ 0x807C8068
    FUN_807C36A8(); // bl 0x807C36A8
    /* lis r4, 0 */ // 0x807C8070
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807C8078
    r3 = *(0xc + r3); // lwz @ 0x807C807C
    /* lwzx r3, r3, r0 */ // 0x807C8080
    r0 = *(0x26 + r3); // lbz @ 0x807C8084
    if (<=) goto 0x0x807c80b8;
    /* lis r4, 0 */ // 0x807C8090
    /* lis r3, 0 */ // 0x807C8094
    /* lfs f2, 0x24(r31) */ // 0x807C8098
    /* lfs f1, 0(r4) */ // 0x807C809C
    /* lfs f0, 0(r3) */ // 0x807C80A0
    /* fsubs f1, f2, f1 */ // 0x807C80A4
    /* stfs f1, 0x24(r31) */ // 0x807C80A8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807C80AC
    if (>=) goto 0x0x807c80b8;
    /* stfs f0, 0x24(r31) */ // 0x807C80B4
    r4 = *(8 + r31); // lwz @ 0x807C80B8
    /* lis r3, 0 */ // 0x807C80BC
    /* lfs f2, 0x20(r31) */ // 0x807C80C0
    /* lfs f1, 0x24(r31) */ // 0x807C80C4
    /* lfs f3, 0(r4) */ // 0x807C80C8
    /* lfs f0, 0(r3) */ // 0x807C80CC
    /* fmuls f1, f2, f1 */ // 0x807C80D0
    r31 = *(0xc + r1); // lwz @ 0x807C80D4
    /* fadds f0, f0, f3 */ // 0x807C80D8
    r0 = *(0x14 + r1); // lwz @ 0x807C80DC
    /* fadds f1, f1, f0 */ // 0x807C80E0
    return;
}