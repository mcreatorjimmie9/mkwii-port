/* Function at 0x8091C974, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8091C974(int r3, int r4, int r5, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x8091C97C
    /* frsp f0, f1 */ // 0x8091C980
    /* lfs f3, 0(r7) */ // 0x8091C984
    /* lis r7, 0 */ // 0x8091C988
    *(0x14 + r1) = r0; // stw @ 0x8091C98C
    /* lis r8, 0 */ // 0x8091C990
    /* fdivs f0, f3, f0 */ // 0x8091C994
    *(0xc + r1) = r31; // stw @ 0x8091C998
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8091C9A0
    r30 = r5;
    r0 = *(0 + r7); // lbz @ 0x8091C9A8
    *(0 + r3) = r0; // stb @ 0x8091C9AC
    /* mulli r7, r5, 0x18 */ // 0x8091C9B0
    *(4 + r3) = r4; // stw @ 0x8091C9B4
    *(0x18 + r3) = r5; // sth @ 0x8091C9B8
    /* stfs f1, 0x20(r3) */ // 0x8091C9BC
    *(0x38 + r3) = r6; // sth @ 0x8091C9C0
    /* stfs f2, 0x40(r3) */ // 0x8091C9C4
    /* stfs f0, 0x24(r3) */ // 0x8091C9C8
    r4 = *(0 + r8); // lwz @ 0x8091C9CC
    r0 = *(0 + r4); // lhz @ 0x8091C9D0
    *(8 + r3) = r0; // sth @ 0x8091C9D4
    r0 = *(4 + r4); // lwz @ 0x8091C9D8
    *(0xc + r3) = r0; // stw @ 0x8091C9DC
    r0 = *(8 + r4); // lhz @ 0x8091C9E0
    *(0x10 + r3) = r0; // sth @ 0x8091C9E4
    r0 = *(0xc + r4); // lwz @ 0x8091C9E8
    *(0x14 + r3) = r0; // stw @ 0x8091C9EC
    r3 = r7 + 0x10; // 0x8091C9F0
    FUN_805E3430(r3); // bl 0x805E3430
}