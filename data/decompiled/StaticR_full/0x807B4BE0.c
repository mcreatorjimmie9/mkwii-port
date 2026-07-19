/* Function at 0x807B4BE0, size=240 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_807B4BE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807B4BF0
    /* lfs f1, 0(r31) */ // 0x807B4BF4
    *(8 + r1) = r30; // stw @ 0x807B4BF8
    r30 = r3;
    r4 = *(4 + r3); // lwz @ 0x807B4C00
    r3 = *(0x28 + r4); // lwz @ 0x807B4C04
    /* li r4, 0 */ // 0x807B4C08
    FUN_805E558C(r4); // bl 0x805E558C
    r3 = *(8 + r30); // lwz @ 0x807B4C10
    /* li r4, 0 */ // 0x807B4C14
    /* lfs f1, 0(r31) */ // 0x807B4C18
    r3 = *(0x28 + r3); // lwz @ 0x807B4C1C
    FUN_805E558C(r4); // bl 0x805E558C
    r3 = *(4 + r30); // lwz @ 0x807B4C24
    /* li r4, 0 */ // 0x807B4C28
    r3 = *(0x28 + r3); // lwz @ 0x807B4C2C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807B4C34
    /* lis r31, 0 */ // 0x807B4C38
    /* lfs f1, 0(r31) */ // 0x807B4C3C
    r12 = *(0x1c + r12); // lwz @ 0x807B4C40
    /* mtctr r12 */ // 0x807B4C44
    /* bctrl  */ // 0x807B4C48
    r3 = *(8 + r30); // lwz @ 0x807B4C4C
    /* li r4, 0 */ // 0x807B4C50
    r3 = *(0x28 + r3); // lwz @ 0x807B4C54
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807B4C5C
    /* lfs f1, 0(r31) */ // 0x807B4C60
    r12 = *(0x1c + r12); // lwz @ 0x807B4C64
    /* mtctr r12 */ // 0x807B4C68
    /* bctrl  */ // 0x807B4C6C
    r3 = *(0x24 + r30); // lwz @ 0x807B4C70
    /* li r4, 0 */ // 0x807B4C74
    r3 = *(0x28 + r3); // lwz @ 0x807B4C78
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807B4C80
    /* lfs f1, 0(r31) */ // 0x807B4C84
    r12 = *(0x1c + r12); // lwz @ 0x807B4C88
    /* mtctr r12 */ // 0x807B4C8C
    /* bctrl  */ // 0x807B4C90
    r3 = *(0x24 + r30); // lwz @ 0x807B4C94
    /* li r4, 1 */ // 0x807B4C98
    r3 = *(0x28 + r3); // lwz @ 0x807B4C9C
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807B4CA4
    /* lfs f1, 0(r31) */ // 0x807B4CA8
    r12 = *(0x1c + r12); // lwz @ 0x807B4CAC
    /* mtctr r12 */ // 0x807B4CB0
    /* bctrl  */ // 0x807B4CB4
    r0 = *(0x14 + r1); // lwz @ 0x807B4CB8
    r31 = *(0xc + r1); // lwz @ 0x807B4CBC
    r30 = *(8 + r1); // lwz @ 0x807B4CC0
    return;
}