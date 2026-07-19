/* Function at 0x807F163C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F163C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x807F1644
    *(0x14 + r1) = r0; // stw @ 0x807F1648
    *(0xc + r1) = r31; // stw @ 0x807F164C
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807F1658
    /* lis r4, 0 */ // 0x807F165C
    /* lfs f0, 0(r3) */ // 0x807F1660
    r4 = r4 + 0; // 0x807F1664
    *(0 + r31) = r4; // stw @ 0x807F1668
    r3 = r31;
    /* stfs f0, 0xdc(r31) */ // 0x807F1670
    r31 = *(0xc + r1); // lwz @ 0x807F1674
    r0 = *(0x14 + r1); // lwz @ 0x807F1678
    return;
}