/* Function at 0x8067E6E0, size=196 bytes */
/* Stack frame: 272 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8067E6E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -272(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r0, r5, 2 */ // 0x8067E6EC
    r3 = r3 + r0; // 0x8067E6F0
    *(0x10c + r1) = r31; // stw @ 0x8067E6F4
    /* lis r31, 0 */ // 0x8067E6F8
    /* li r0, 0 */ // 0x8067E6FC
    *(0x108 + r1) = r30; // stw @ 0x8067E700
    *(0x104 + r1) = r29; // stw @ 0x8067E704
    *(0x100 + r1) = r28; // stw @ 0x8067E708
    r28 = r4;
    r30 = *(0x1bfc + r3); // lwz @ 0x8067E714
    r3 = *(0 + r31); // lwz @ 0x8067E718
    *(0x20 + r1) = r0; // stb @ 0x8067E71C
    *(0x24 + r1) = r0; // stw @ 0x8067E720
    FUN_806F9214(r4); // bl 0x806F9214
    r0 = *(0x28 + r1); // lwz @ 0x8067E728
    if (!=) goto 0x0x8067e748;
    r3 = *(0x24 + r1); // lwz @ 0x8067E734
    r29 = *(0x30 + r1); // lwz @ 0x8067E738
    r0 = *(0x16 + r3); // lbz @ 0x8067E73C
    *(8 + r1) = r0; // stw @ 0x8067E740
    /* b 0x8067e768 */ // 0x8067E744
    r3 = *(0 + r31); // lwz @ 0x8067E748
    r4 = r30;
    FUN_806F8CCC(r4); // bl 0x806F8CCC
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x8067E758
    r4 = r30;
    FUN_806F8C24(r4, r5); // bl 0x806F8C24
    FUN_80654ECC(r4, r5, r3); // bl 0x80654ECC
    *(0xd8 + r1) = r29; // stw @ 0x8067E770
    r3 = r28;
    /* li r4, 0x19ca */ // 0x8067E77C
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    /* lis r31, 0 */ // 0x8067E784
    r6 = *(8 + r1); // lwz @ 0x8067E788
    r31 = r31 + 0; // 0x8067E78C
    r5 = r31 + 0x23f; // 0x8067E794
    /* li r4, 0xf */ // 0x8067E798
    /* crclr cr1eq */ // 0x8067E79C
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
}