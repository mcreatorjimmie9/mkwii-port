/* Function at 0x807AEC64, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807AEC64(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r5 = r4;
    *(0x24 + r1) = r0; // stw @ 0x807AEC70
    *(0x1c + r1) = r31; // stw @ 0x807AEC74
    r31 = r3;
    r4 = r31 + 4; // 0x807AEC80
    FUN_807AECB4(r3, r4); // bl 0x807AECB4
    /* lfs f0, 8(r1) */ // 0x807AEC88
    /* stfs f0, 0x1c(r31) */ // 0x807AEC8C
    /* lfs f0, 0xc(r1) */ // 0x807AEC90
    /* stfs f0, 0x20(r31) */ // 0x807AEC94
    /* lfs f0, 0x10(r1) */ // 0x807AEC98
    /* stfs f0, 0x24(r31) */ // 0x807AEC9C
    r31 = *(0x1c + r1); // lwz @ 0x807AECA0
    r0 = *(0x24 + r1); // lwz @ 0x807AECA4
    return;
}