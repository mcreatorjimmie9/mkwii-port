/* Function at 0x8066880C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8066880C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r8, 0 */ // 0x80668814
    /* lis r4, 0 */ // 0x80668818
    *(0x14 + r1) = r0; // stw @ 0x8066881C
    /* lis r5, 0 */ // 0x80668820
    r8 = r8 + 0; // 0x80668824
    r4 = r4 + 0; // 0x80668828
    *(0xc + r1) = r31; // stw @ 0x8066882C
    /* li r31, 0 */ // 0x80668830
    r5 = r5 + 0; // 0x80668834
    /* li r6, 0x34 */ // 0x80668838
    *(8 + r1) = r30; // stw @ 0x8066883C
    r30 = r3;
    /* li r7, 5 */ // 0x80668844
    *(4 + r3) = r31; // stw @ 0x80668848
    *(0xc + r3) = r31; // stb @ 0x8066884C
    *(0xd + r3) = r31; // stb @ 0x80668850
    *(0xe + r3) = r31; // stb @ 0x80668854
    *(0 + r3) = r8; // stw @ 0x80668858
    r3 = r3 + 0x40; // 0x8066885C
    FUN_805E3430(r3); // bl 0x805E3430
}