/* Function at 0x80809A00, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80809A00(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80809A08
    /* lfs f2, 0(r5) */ // 0x80809A10
    *(0xc + r1) = r31; // stw @ 0x80809A14
    /* lis r31, 0 */ // 0x80809A18
    /* lfs f1, 0(r31) */ // 0x80809A1C
    *(8 + r1) = r30; // stw @ 0x80809A20
    r30 = r3;
    r4 = *(8 + r3); // lwz @ 0x80809A28
    r3 = *(0x28 + r4); // lwz @ 0x80809A2C
    /* li r4, 0 */ // 0x80809A30
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* lfs f1, 0(r31) */ // 0x80809A38
    r3 = r30;
    /* li r4, 0x216 */ // 0x80809A40
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    r0 = *(0x14 + r1); // lwz @ 0x80809A48
    r31 = *(0xc + r1); // lwz @ 0x80809A4C
    r30 = *(8 + r1); // lwz @ 0x80809A50
    return;
}