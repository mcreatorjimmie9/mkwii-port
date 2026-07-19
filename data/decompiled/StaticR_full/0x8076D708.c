/* Function at 0x8076D708, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8076D708(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x8076D710
    *(0x14 + r1) = r0; // stw @ 0x8076D714
    *(0xc + r1) = r31; // stw @ 0x8076D718
    r31 = r3;
    r0 = *(0xa + r3); // lbz @ 0x8076D720
    *(0x44 + r3) = r4; // stb @ 0x8076D724
    if (==) goto 0x0x8076d740;
    r4 = *(8 + r3); // lhz @ 0x8076D730
    r0 = r4 + -1; // 0x8076D734
    *(0x2a + r3) = r0; // sth @ 0x8076D738
    /* b 0x8076d748 */ // 0x8076D73C
    r0 = *(8 + r3); // lhz @ 0x8076D740
    *(0x2a + r3) = r0; // sth @ 0x8076D744
    r3 = r31;
    /* li r4, 0 */ // 0x8076D74C
    FUN_8076D850(r3, r4); // bl 0x8076D850
    /* lis r3, 0 */ // 0x8076D754
    /* li r5, 0 */ // 0x8076D758
    /* lfs f0, 0(r3) */ // 0x8076D75C
    /* li r4, 0 */ // 0x8076D760
    /* stfs f0, 0x40(r31) */ // 0x8076D764
    /* b 0x8076d78c */ // 0x8076D768
    r0 = *(0x2c + r31); // lwz @ 0x8076D76C
    r5 = r5 + 1; // 0x8076D770
    /* lfs f1, 0x40(r31) */ // 0x8076D774
    r3 = r0 + r4; // 0x8076D778
    r4 = r4 + 0x38; // 0x8076D77C
    /* lfs f0, 0x30(r3) */ // 0x8076D780
    /* fadds f0, f1, f0 */ // 0x8076D784
    /* stfs f0, 0x40(r31) */ // 0x8076D788
    r0 = *(0x2a + r31); // lhz @ 0x8076D78C
    if (<) goto 0x0x8076d76c;
    r0 = *(0x14 + r1); // lwz @ 0x8076D798
    r31 = *(0xc + r1); // lwz @ 0x8076D79C
    return;
}