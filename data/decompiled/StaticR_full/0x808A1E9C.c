/* Function at 0x808A1E9C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808A1E9C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x808A1EA8
    *(0xc + r1) = r31; // stw @ 0x808A1EAC
    r31 = r3;
    r6 = *(0x2c + r3); // lhz @ 0x808A1EB4
    r3 = r4;
    *(0x54 + r31) = r0; // stb @ 0x808A1EBC
    r4 = r5;
    r0 = r6 | 4; // 0x808A1EC4
    r5 = r31 + 0x58; // 0x808A1EC8
    *(0x2c + r31) = r0; // sth @ 0x808A1ECC
    FUN_80743DF8(r4, r5); // bl 0x80743DF8
    /* lfs f2, 0x30(r31) */ // 0x808A1ED4
    /* lfs f1, 0x34(r31) */ // 0x808A1ED8
    /* lfs f0, 0x38(r31) */ // 0x808A1EDC
    /* stfs f2, 0x64(r31) */ // 0x808A1EE0
    /* stfs f1, 0x74(r31) */ // 0x808A1EE4
    /* stfs f0, 0x84(r31) */ // 0x808A1EE8
    r31 = *(0xc + r1); // lwz @ 0x808A1EEC
    r0 = *(0x14 + r1); // lwz @ 0x808A1EF0
    return;
}