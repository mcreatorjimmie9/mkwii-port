/* Function at 0x807F8B74, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807F8B74(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x807F8B7C
    /* li r0, 0 */ // 0x807F8B84
    *(0x1c + r1) = r31; // stw @ 0x807F8B88
    /* lis r31, 0 */ // 0x807F8B8C
    /* lfs f2, 0(r31) */ // 0x807F8B90
    *(0x18 + r1) = r30; // stw @ 0x807F8B94
    /* lis r30, 0 */ // 0x807F8B98
    /* lfs f1, 0(r30) */ // 0x807F8B9C
    *(0x14 + r1) = r29; // stw @ 0x807F8BA0
    r29 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x807F8BA8
    r5 = *(8 + r3); // lwz @ 0x807F8BAC
    r3 = *(0x28 + r5); // lwz @ 0x807F8BB0
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(0x10 + r29); // lwz @ 0x807F8BB8
    /* li r4, 0 */ // 0x807F8BBC
    /* lfs f1, 0(r30) */ // 0x807F8BC0
    r3 = *(0x28 + r3); // lwz @ 0x807F8BC4
    /* lfs f2, 0(r31) */ // 0x807F8BC8
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* lfs f1, 0(r30) */ // 0x807F8BD0
    r3 = r29;
    /* li r4, 0x329 */ // 0x807F8BD8
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x807F8BE0
    r31 = *(0x1c + r1); // lwz @ 0x807F8BE4
    r30 = *(0x18 + r1); // lwz @ 0x807F8BE8
    r29 = *(0x14 + r1); // lwz @ 0x807F8BEC
    return;
}