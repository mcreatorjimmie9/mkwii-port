/* Function at 0x80779F04, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80779F04(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x80779F0C
    *(0xc + r1) = r31; // stw @ 0x80779F14
    *(8 + r1) = r30; // stw @ 0x80779F18
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80779F20
    r12 = *(0x68 + r12); // lwz @ 0x80779F24
    /* mtctr r12 */ // 0x80779F28
    /* bctrl  */ // 0x80779F2C
    /* lis r31, 0 */ // 0x80779F30
    /* lis r5, 0 */ // 0x80779F34
    /* lfs f0, 0(r31) */ // 0x80779F38
    r3 = r30 + 0x100; // 0x80779F3C
    /* stfs f0, 0x10c(r30) */ // 0x80779F40
    r4 = r30 + 0xfc; // 0x80779F44
    /* lfs f2, 0xf8(r30) */ // 0x80779F48
    /* lfs f1, 0(r5) */ // 0x80779F4C
    FUN_80745624(r3, r4); // bl 0x80745624
    /* lfs f1, 0(r31) */ // 0x80779F54
    r3 = r30;
    /* li r4, 0x1da */ // 0x80779F5C
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x14 + r1); // lwz @ 0x80779F64
    r31 = *(0xc + r1); // lwz @ 0x80779F68
    r30 = *(8 + r1); // lwz @ 0x80779F6C
    return;
}