/* Function at 0x8090C778, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8090C778(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r6 = r3;
    *(0x1c + r1) = r31; // stw @ 0x8090C788
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8090C790
    r30 = r4;
    r0 = *(0 + r4); // lwz @ 0x8090C798
    /* rlwinm. r0, r0, 0x10, 0x10, 0x10 */ // 0x8090C79C
    if (!=) goto 0x0x8090c7e0;
    r4 = r4 + 8; // 0x8090C7A8
    r5 = r6 + 0xb0; // 0x8090C7AC
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f1, 8(r1) */ // 0x8090C7B4
    /* stfs f1, 0(r31) */ // 0x8090C7B8
    /* lfs f0, 0xc(r1) */ // 0x8090C7BC
    /* stfs f0, 4(r31) */ // 0x8090C7C0
    /* lfs f0, 0x10(r1) */ // 0x8090C7C4
    /* stfs f0, 8(r31) */ // 0x8090C7C8
    /* stfs f1, 8(r30) */ // 0x8090C7CC
    /* lfs f0, 4(r31) */ // 0x8090C7D0
    /* stfs f0, 0xc(r30) */ // 0x8090C7D4
    /* lfs f0, 8(r31) */ // 0x8090C7D8
    /* stfs f0, 0x10(r30) */ // 0x8090C7DC
    r0 = *(0x24 + r1); // lwz @ 0x8090C7E0
    r31 = *(0x1c + r1); // lwz @ 0x8090C7E4
    r30 = *(0x18 + r1); // lwz @ 0x8090C7E8
    return;
}