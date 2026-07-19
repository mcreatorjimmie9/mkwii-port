/* Function at 0x80633C54, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80633C54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x80633C64
    *(8 + r1) = r30; // stw @ 0x80633C68
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80633C70
    r12 = *(0x14 + r12); // lwz @ 0x80633C74
    /* mtctr r12 */ // 0x80633C78
    /* bctrl  */ // 0x80633C7C
    /* lis r4, 0 */ // 0x80633C80
    r3 = *(0 + r3); // lwz @ 0x80633C84
    /* lfs f1, 0xc(r30) */ // 0x80633C88
    /* lfs f0, 0(r4) */ // 0x80633C8C
    /* lfs f2, 0x44(r3) */ // 0x80633C90
    /* fadds f0, f1, f0 */ // 0x80633C94
    /* stfs f0, 0xc(r30) */ // 0x80633C98
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80633C9C
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80633CA0
    if (!=) goto 0x0x80633cb8;
    /* lis r3, 0 */ // 0x80633CA8
    /* li r31, 1 */ // 0x80633CAC
    /* lfs f0, 0(r3) */ // 0x80633CB0
    /* stfs f0, 0xc(r30) */ // 0x80633CB4
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80633CBC
    r30 = *(8 + r1); // lwz @ 0x80633CC0
    r0 = *(0x14 + r1); // lwz @ 0x80633CC4
    return;
}