/* Function at 0x80764BE4, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80764BE4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80764BF4
    /* lfs f2, 0(r31) */ // 0x80764BF8
    *(0x18 + r1) = r30; // stw @ 0x80764BFC
    /* lis r30, 0 */ // 0x80764C00
    /* lfs f1, 0(r30) */ // 0x80764C04
    *(0x14 + r1) = r29; // stw @ 0x80764C08
    r29 = r3;
    r4 = *(8 + r3); // lwz @ 0x80764C10
    r3 = *(0x28 + r4); // lwz @ 0x80764C14
    /* li r4, 1 */ // 0x80764C18
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x80764C20
    /* li r4, 0 */ // 0x80764C24
    r3 = *(0x28 + r3); // lwz @ 0x80764C28
    FUN_805E7060(r4, r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80764C30
    r12 = *(0xc + r12); // lwz @ 0x80764C34
    /* mtctr r12 */ // 0x80764C38
    /* bctrl  */ // 0x80764C3C
    r3 = *(0xd4 + r29); // lwz @ 0x80764C40
    /* li r4, 1 */ // 0x80764C44
    /* lfs f2, 0(r31) */ // 0x80764C48
    r3 = *(8 + r3); // lwz @ 0x80764C4C
    r3 = *(0x28 + r3); // lwz @ 0x80764C50
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* lfs f1, 0(r30) */ // 0x80764C58
    r3 = r29;
    /* li r4, 0x2c1 */ // 0x80764C60
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x80764C68
    r31 = *(0x1c + r1); // lwz @ 0x80764C6C
    r30 = *(0x18 + r1); // lwz @ 0x80764C70
    r29 = *(0x14 + r1); // lwz @ 0x80764C74
    return;
}