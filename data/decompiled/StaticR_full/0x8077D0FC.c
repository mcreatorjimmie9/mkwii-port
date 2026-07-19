/* Function at 0x8077D0FC, size=164 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8077D0FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8077D110
    r4 = *(0xd0 + r3); // lbz @ 0x8077D114
    r3 = *(0xe0 + r3); // lwz @ 0x8077D118
    r0 = r4 + -1; // 0x8077D11C
    /* slwi r0, r0, 2 */ // 0x8077D120
    /* lwzx r30, r3, r0 */ // 0x8077D124
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r30 + 0x58; // 0x8077D134
    /* li r5, 2 */ // 0x8077D138
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lfs f1, 0x238(r31) */ // 0x8077D140
    FUN_805A443C(r5, r3, r4); // bl 0x805A443C
    r4 = *(0xd0 + r31); // lbz @ 0x8077D150
    r6 = *(0xe0 + r31); // lwz @ 0x8077D158
    r0 = r4 + -1; // 0x8077D160
    /* slwi r0, r0, 2 */ // 0x8077D164
    /* lwzx r4, r6, r0 */ // 0x8077D168
    r4 = r4 + 0x30; // 0x8077D16C
    FUN_805A4498(r5, r4); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x8077D174
    /* lis r30, 0 */ // 0x8077D178
    /* stfs f0, 0x228(r31) */ // 0x8077D17C
    /* li r4, 0 */ // 0x8077D180
    /* lfs f0, 0xc(r1) */ // 0x8077D184
    /* stfs f0, 0x22c(r31) */ // 0x8077D188
    /* lfs f0, 0x10(r1) */ // 0x8077D18C
    /* stfs f0, 0x230(r31) */ // 0x8077D190
    r3 = *(0 + r30); // lwz @ 0x8077D194
    FUN_8061D97C(); // bl 0x8061D97C
    FUN_8061DA88(); // bl 0x8061DA88
}