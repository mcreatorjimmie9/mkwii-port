/* Function at 0x80612B44, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80612B44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80612B50
    r31 = r3;
    r5 = *(0 + r3); // lwz @ 0x80612B58
    r4 = *(4 + r5); // lwz @ 0x80612B5C
    r0 = *(8 + r4); // lwz @ 0x80612B60
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80612B64
    if (==) goto 0x0x80612c04;
    r4 = *(4 + r5); // lwz @ 0x80612B6C
    r0 = *(8 + r4); // lwz @ 0x80612B70
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x80612B78
    r4 = *(0 + r3); // lwz @ 0x80612B7C
    r4 = *(4 + r4); // lwz @ 0x80612B80
    r0 = *(0xc + r4); // lwz @ 0x80612B84
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80612B8C
    r4 = *(0 + r3); // lwz @ 0x80612B90
    r4 = *(4 + r4); // lwz @ 0x80612B94
    r0 = *(0x10 + r4); // lwz @ 0x80612B98
    r0 = r0 | 0x40; // 0x80612B9C
    *(0x10 + r4) = r0; // stw @ 0x80612BA0
    /* lfs f3, 0x20(r3) */ // 0x80612BA4
    /* lfs f2, 0x1f4(r3) */ // 0x80612BA8
    /* lfs f1, 0x1f8(r3) */ // 0x80612BAC
    /* lfs f0, 0x1fc(r3) */ // 0x80612BB0
    /* fmuls f2, f3, f2 */ // 0x80612BB4
    /* fmuls f1, f3, f1 */ // 0x80612BB8
    /* fmuls f0, f3, f0 */ // 0x80612BBC
    /* stfs f2, 8(r1) */ // 0x80612BC0
    /* stfs f1, 0xc(r1) */ // 0x80612BC4
    /* stfs f0, 0x10(r1) */ // 0x80612BC8
    FUN_8061DC48(); // bl 0x8061DC48
    /* lfs f0, 8(r1) */ // 0x80612BD0
    /* li r4, 0 */ // 0x80612BD4
    /* stfs f0, 0x14c(r3) */ // 0x80612BD8
    /* li r5, 0 */ // 0x80612BDC
    /* lfs f0, 0xc(r1) */ // 0x80612BE0
    /* li r6, 1 */ // 0x80612BE4
    /* stfs f0, 0x150(r3) */ // 0x80612BE8
    /* lfs f0, 0x10(r1) */ // 0x80612BEC
    /* stfs f0, 0x154(r3) */ // 0x80612BF0
    r3 = r31;
    FUN_8061E8CC(r6, r3); // bl 0x8061E8CC
    r3 = r31;
    FUN_8061E754(r3, r3); // bl 0x8061E754
    r0 = *(0x24 + r1); // lwz @ 0x80612C04
    r31 = *(0x1c + r1); // lwz @ 0x80612C08
    return;
}