/* Function at 0x807B66FC, size=116 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807B66FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807B6704
    /* lfs f1, 0(r5) */ // 0x807B670C
    *(0x3c + r1) = r31; // stw @ 0x807B6710
    *(0x38 + r1) = r30; // stw @ 0x807B6714
    r30 = r4;
    r6 = *(0xc4 + r3); // lwz @ 0x807B671C
    /* lis r3, 0 */ // 0x807B6720
    /* lfs f0, 0(r3) */ // 0x807B6724
    r31 = *(0 + r6); // lwz @ 0x807B6728
    /* stfs f1, 0x2c(r1) */ // 0x807B672C
    r3 = r31;
    /* stfs f0, 0x30(r1) */ // 0x807B6734
    /* stfs f1, 0x34(r1) */ // 0x807B6738
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r6 = *(0x74 + r3); // lwz @ 0x807B6740
    r0 = *(0x78 + r3); // lwz @ 0x807B6748
    *(0x24 + r1) = r0; // stw @ 0x807B6750
    *(0x20 + r1) = r6; // stw @ 0x807B6754
    r0 = *(0x7c + r3); // lwz @ 0x807B6758
    *(0x28 + r1) = r0; // stw @ 0x807B6760
    FUN_805C6D88(r3); // bl 0x805C6D88
    r3 = r31;
    FUN_8061DA88(r3, r3); // bl 0x8061DA88
}