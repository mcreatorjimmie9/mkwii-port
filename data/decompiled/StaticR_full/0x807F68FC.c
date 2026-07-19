/* Function at 0x807F68FC, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807F68FC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 1 */ // 0x807F6904
    *(0x1c + r1) = r31; // stw @ 0x807F690C
    /* lis r31, 0 */ // 0x807F6910
    /* lfs f2, 0(r31) */ // 0x807F6914
    *(0x18 + r1) = r30; // stw @ 0x807F6918
    /* lis r30, 0 */ // 0x807F691C
    /* lfs f1, 0(r30) */ // 0x807F6920
    *(0x14 + r1) = r29; // stw @ 0x807F6924
    r29 = r3;
    r4 = *(8 + r3); // lwz @ 0x807F692C
    r3 = *(0x28 + r4); // lwz @ 0x807F6930
    /* li r4, 0 */ // 0x807F6934
    FUN_805E73A4(r4); // bl 0x805E73A4
    r3 = *(0xe8 + r29); // lwz @ 0x807F693C
    /* li r4, 0 */ // 0x807F6940
    /* lfs f1, 0(r30) */ // 0x807F6944
    /* li r5, 1 */ // 0x807F6948
    r3 = *(8 + r3); // lwz @ 0x807F694C
    /* lfs f2, 0(r31) */ // 0x807F6950
    r3 = *(0x28 + r3); // lwz @ 0x807F6954
    FUN_805E73A4(r5); // bl 0x805E73A4
    /* li r3, 0 */ // 0x807F695C
    /* li r0, 1 */ // 0x807F6960
    *(0xb0 + r29) = r3; // stw @ 0x807F6964
    *(0xd4 + r29) = r0; // stb @ 0x807F6968
    r31 = *(0x1c + r1); // lwz @ 0x807F696C
    r30 = *(0x18 + r1); // lwz @ 0x807F6970
    r29 = *(0x14 + r1); // lwz @ 0x807F6974
    r0 = *(0x24 + r1); // lwz @ 0x807F6978
    return;
}