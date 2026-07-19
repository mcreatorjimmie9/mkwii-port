/* Function at 0x807436DC, size=64 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807436DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807436E4
    *(0x54 + r1) = r0; // stw @ 0x807436E8
    r5 = r6 + 0; // 0x807436EC
    *(0x4c + r1) = r31; // stw @ 0x807436F0
    r31 = r4;
    r4 = r3;
    /* lfs f3, 0(r6) */ // 0x80743700
    /* lfs f2, 4(r5) */ // 0x80743704
    /* lfs f0, 8(r5) */ // 0x80743708
    /* stfs f3, 0x24(r1) */ // 0x8074370C
    /* stfs f2, 0x34(r1) */ // 0x80743710
    /* stfs f0, 0x44(r1) */ // 0x80743714
    FUN_805E3430(); // bl 0x805E3430
}