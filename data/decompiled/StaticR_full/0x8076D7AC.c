/* Function at 0x8076D7AC, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8076D7AC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x8076D7B4
    *(0x14 + r1) = r0; // stw @ 0x8076D7B8
    *(0xc + r1) = r31; // stw @ 0x8076D7BC
    r31 = r3;
    r0 = *(0xa + r3); // lbz @ 0x8076D7C4
    *(0x44 + r3) = r4; // stb @ 0x8076D7C8
    if (==) goto 0x0x8076d7e4;
    r4 = *(8 + r3); // lhz @ 0x8076D7D4
    r0 = r4 + -1; // 0x8076D7D8
    *(0x2a + r3) = r0; // sth @ 0x8076D7DC
    /* b 0x8076d7ec */ // 0x8076D7E0
    r0 = *(8 + r3); // lhz @ 0x8076D7E4
    *(0x2a + r3) = r0; // sth @ 0x8076D7E8
    r3 = r31;
    /* li r4, 1 */ // 0x8076D7F0
    FUN_8076D850(r3, r4); // bl 0x8076D850
    /* lis r3, 0 */ // 0x8076D7F8
    /* li r5, 0 */ // 0x8076D7FC
    /* lfs f0, 0(r3) */ // 0x8076D800
    /* li r4, 0 */ // 0x8076D804
    /* stfs f0, 0x40(r31) */ // 0x8076D808
    /* b 0x8076d830 */ // 0x8076D80C
    r0 = *(0x2c + r31); // lwz @ 0x8076D810
    r5 = r5 + 1; // 0x8076D814
    /* lfs f1, 0x40(r31) */ // 0x8076D818
    r3 = r0 + r4; // 0x8076D81C
    r4 = r4 + 0x38; // 0x8076D820
    /* lfs f0, 0x30(r3) */ // 0x8076D824
    /* fadds f0, f1, f0 */ // 0x8076D828
    /* stfs f0, 0x40(r31) */ // 0x8076D82C
    r0 = *(0x2a + r31); // lhz @ 0x8076D830
    if (<) goto 0x0x8076d810;
    r0 = *(0x14 + r1); // lwz @ 0x8076D83C
    r31 = *(0xc + r1); // lwz @ 0x8076D840
    return;
}