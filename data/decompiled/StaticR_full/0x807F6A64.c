/* Function at 0x807F6A64, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807F6A64(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 1 */ // 0x807F6A6C
    *(0x1c + r1) = r31; // stw @ 0x807F6A74
    /* lis r31, 0 */ // 0x807F6A78
    /* lfs f2, 0(r31) */ // 0x807F6A7C
    *(0x18 + r1) = r30; // stw @ 0x807F6A80
    /* lis r30, 0 */ // 0x807F6A84
    /* lfs f1, 0(r30) */ // 0x807F6A88
    *(0x14 + r1) = r29; // stw @ 0x807F6A8C
    r29 = r3;
    r4 = *(8 + r3); // lwz @ 0x807F6A94
    r3 = *(0x28 + r4); // lwz @ 0x807F6A98
    /* li r4, 2 */ // 0x807F6A9C
    FUN_805E73A4(r4); // bl 0x805E73A4
    r3 = *(0xe8 + r29); // lwz @ 0x807F6AA4
    /* li r4, 2 */ // 0x807F6AA8
    /* lfs f1, 0(r30) */ // 0x807F6AAC
    /* li r5, 1 */ // 0x807F6AB0
    r3 = *(8 + r3); // lwz @ 0x807F6AB4
    /* lfs f2, 0(r31) */ // 0x807F6AB8
    r3 = *(0x28 + r3); // lwz @ 0x807F6ABC
    FUN_805E73A4(r5); // bl 0x805E73A4
    /* li r0, 3 */ // 0x807F6AC4
    *(0xb0 + r29) = r0; // stw @ 0x807F6AC8
    r31 = *(0x1c + r1); // lwz @ 0x807F6ACC
    r30 = *(0x18 + r1); // lwz @ 0x807F6AD0
    r29 = *(0x14 + r1); // lwz @ 0x807F6AD4
    r0 = *(0x24 + r1); // lwz @ 0x807F6AD8
    return;
}