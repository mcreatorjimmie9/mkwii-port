/* Function at 0x807F8BFC, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807F8BFC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x807F8C04
    /* li r0, 1 */ // 0x807F8C0C
    *(0x1c + r1) = r31; // stw @ 0x807F8C10
    /* lis r31, 0 */ // 0x807F8C14
    /* lfs f2, 0(r31) */ // 0x807F8C18
    *(0x18 + r1) = r30; // stw @ 0x807F8C1C
    /* lis r30, 0 */ // 0x807F8C20
    /* lfs f1, 0(r30) */ // 0x807F8C24
    *(0x14 + r1) = r29; // stw @ 0x807F8C28
    r29 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x807F8C30
    r5 = *(8 + r3); // lwz @ 0x807F8C34
    r3 = *(0x28 + r5); // lwz @ 0x807F8C38
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = *(0x10 + r29); // lwz @ 0x807F8C40
    /* li r4, 1 */ // 0x807F8C44
    /* lfs f1, 0(r30) */ // 0x807F8C48
    r3 = *(0x28 + r3); // lwz @ 0x807F8C4C
    /* lfs f2, 0(r31) */ // 0x807F8C50
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* lfs f1, 0(r30) */ // 0x807F8C58
    r3 = r29;
    /* li r4, 0x328 */ // 0x807F8C60
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x807F8C68
    r31 = *(0x1c + r1); // lwz @ 0x807F8C6C
    r30 = *(0x18 + r1); // lwz @ 0x807F8C70
    r29 = *(0x14 + r1); // lwz @ 0x807F8C74
    return;
}