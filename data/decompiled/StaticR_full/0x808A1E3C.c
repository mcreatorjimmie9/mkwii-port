/* Function at 0x808A1E3C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808A1E3C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x808A1E48
    *(0xc + r1) = r31; // stw @ 0x808A1E4C
    r31 = r3;
    r5 = *(0x2c + r3); // lhz @ 0x808A1E54
    r3 = r4;
    *(0x54 + r31) = r0; // stb @ 0x808A1E5C
    r4 = r31 + 0x58; // 0x808A1E60
    r0 = r5 | 4; // 0x808A1E64
    *(0x2c + r31) = r0; // sth @ 0x808A1E68
    FUN_807438BC(r3, r4); // bl 0x807438BC
    /* lfs f2, 0x30(r31) */ // 0x808A1E70
    /* lfs f1, 0x34(r31) */ // 0x808A1E74
    /* lfs f0, 0x38(r31) */ // 0x808A1E78
    /* stfs f2, 0x64(r31) */ // 0x808A1E7C
    /* stfs f1, 0x74(r31) */ // 0x808A1E80
    /* stfs f0, 0x84(r31) */ // 0x808A1E84
    r31 = *(0xc + r1); // lwz @ 0x808A1E88
    r0 = *(0x14 + r1); // lwz @ 0x808A1E8C
    return;
}