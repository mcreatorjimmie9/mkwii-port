/* Function at 0x805F47FC, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805F47FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F4808
    /* lis r31, 0 */ // 0x805F480C
    r31 = r31 + 0; // 0x805F4810
    r0 = *(0x44 + r31); // lwz @ 0x805F4814
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805F4818
    if (!=) goto 0x0x805f4888;
    r3 = *(0x20 + r31); // lwz @ 0x805F4820
    /* lis r4, 0 */ // 0x805F4824
    /* li r0, 0 */ // 0x805F4828
    *(0 + r4) = r0; // stw @ 0x805F482C
    if (==) goto 0x0x805f4850;
    r12 = *(0 + r3); // lwz @ 0x805F4838
    r12 = *(0x14 + r12); // lwz @ 0x805F483C
    /* mtctr r12 */ // 0x805F4840
    /* bctrl  */ // 0x805F4844
    r3 = *(0x20 + r31); // lwz @ 0x805F4848
    FUN_805F25A8(); // bl 0x805F25A8
    /* li r0, 0 */ // 0x805F4850
    *(0x18 + r31) = r0; // stw @ 0x805F4854
    /* b 0x805f4870 */ // 0x805F4858
    r3 = *(0x18 + r31); // lwz @ 0x805F485C
    r12 = *(0 + r3); // lwz @ 0x805F4860
    r12 = *(0xc + r12); // lwz @ 0x805F4864
    /* mtctr r12 */ // 0x805F4868
    /* bctrl  */ // 0x805F486C
    r4 = *(0x18 + r31); // lwz @ 0x805F4870
    r3 = r31 + 0; // 0x805F4874
    FUN_805E3430(r3); // bl 0x805E3430
}