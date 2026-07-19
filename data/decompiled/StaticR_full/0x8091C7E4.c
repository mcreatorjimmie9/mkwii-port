/* Function at 0x8091C7E4, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8091C7E4(int r3, int r4, int r5, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x8091C7EC
    /* frsp f0, f1 */ // 0x8091C7F0
    /* lfs f3, 0(r7) */ // 0x8091C7F4
    /* lis r7, 0 */ // 0x8091C7F8
    *(0x14 + r1) = r0; // stw @ 0x8091C7FC
    /* lis r8, 0 */ // 0x8091C800
    /* fdivs f0, f3, f0 */ // 0x8091C804
    *(0xc + r1) = r31; // stw @ 0x8091C808
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8091C810
    r30 = r5;
    r0 = *(0 + r7); // lbz @ 0x8091C818
    *(0 + r3) = r0; // stb @ 0x8091C81C
    /* mulli r7, r5, 0x18 */ // 0x8091C820
    *(4 + r3) = r4; // stw @ 0x8091C824
    *(0x18 + r3) = r5; // stb @ 0x8091C828
    /* stfs f1, 0x20(r3) */ // 0x8091C82C
    *(0x38 + r3) = r6; // stb @ 0x8091C830
    /* stfs f2, 0x40(r3) */ // 0x8091C834
    /* stfs f0, 0x24(r3) */ // 0x8091C838
    r4 = *(0 + r8); // lwz @ 0x8091C83C
    r0 = *(0 + r4); // lhz @ 0x8091C840
    *(8 + r3) = r0; // sth @ 0x8091C844
    r0 = *(4 + r4); // lwz @ 0x8091C848
    *(0xc + r3) = r0; // stw @ 0x8091C84C
    r0 = *(8 + r4); // lhz @ 0x8091C850
    *(0x10 + r3) = r0; // sth @ 0x8091C854
    r0 = *(0xc + r4); // lwz @ 0x8091C858
    *(0x14 + r3) = r0; // stw @ 0x8091C85C
    r3 = r7 + 0x10; // 0x8091C860
    FUN_805E3430(r3); // bl 0x805E3430
}