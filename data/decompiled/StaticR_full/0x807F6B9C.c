/* Function at 0x807F6B9C, size=316 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807F6B9C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807F6BAC
    r30 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807F6BB4
    if (==) goto 0x0x807f6cc0;
    *(0xd8 + r3) = r0; // stw @ 0x807F6BC0
    if (==) goto 0x0x807f6cc0;
    /* lis r4, 0 */ // 0x807F6BC8
    /* li r5, 5 */ // 0x807F6BCC
    /* lfs f0, 0(r4) */ // 0x807F6BD0
    /* li r0, 0xb4 */ // 0x807F6BD4
    *(0xb0 + r3) = r5; // stw @ 0x807F6BD8
    /* li r31, 0 */ // 0x807F6BDC
    *(0xc0 + r3) = r0; // stw @ 0x807F6BE0
    /* stfs f0, 0xc4(r3) */ // 0x807F6BE4
    r12 = *(0 + r3); // lwz @ 0x807F6BE8
    r12 = *(0x30 + r12); // lwz @ 0x807F6BEC
    /* mtctr r12 */ // 0x807F6BF0
    /* bctrl  */ // 0x807F6BF4
    /* lis r4, 0x101 */ // 0x807F6BF8
    r0 = *(0x20 + r3); // lwz @ 0x807F6BFC
    r3 = r4 + 0x101; // 0x807F6C00
    /* andc. r0, r3, r0 */ // 0x807F6C04
    if (!=) goto 0x0x807f6c24;
    /* lis r3, 0 */ // 0x807F6C0C
    r3 = *(0 + r3); // lwz @ 0x807F6C10
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f6c24;
    /* li r31, 1 */ // 0x807F6C20
    if (!=) goto 0x0x807f6c8c;
    r3 = *(0xc8 + r30); // lwz @ 0x807F6C2C
    r12 = *(0 + r3); // lwz @ 0x807F6C30
    r12 = *(0xc + r12); // lwz @ 0x807F6C34
    /* mtctr r12 */ // 0x807F6C38
    /* bctrl  */ // 0x807F6C3C
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xc8 + r30); // lwz @ 0x807F6C48
    r4 = r30 + 0x58; // 0x807F6C4C
    r12 = *(0 + r3); // lwz @ 0x807F6C50
    r12 = *(0x78 + r12); // lwz @ 0x807F6C54
    /* mtctr r12 */ // 0x807F6C58
    /* bctrl  */ // 0x807F6C5C
    r3 = *(0xc8 + r30); // lwz @ 0x807F6C60
    /* lfs f1, 0xd0(r30) */ // 0x807F6C64
    r12 = *(0 + r3); // lwz @ 0x807F6C68
    r12 = *(0x6c + r12); // lwz @ 0x807F6C6C
    /* mtctr r12 */ // 0x807F6C70
    /* bctrl  */ // 0x807F6C74
    r3 = *(0xc8 + r30); // lwz @ 0x807F6C78
    r12 = *(0 + r3); // lwz @ 0x807F6C7C
    r12 = *(0x80 + r12); // lwz @ 0x807F6C80
    /* mtctr r12 */ // 0x807F6C84
    /* bctrl  */ // 0x807F6C88
    r12 = *(0 + r30); // lwz @ 0x807F6C8C
    r3 = r30;
    /* li r31, 0x34e */ // 0x807F6C94
    r12 = *(0x24 + r12); // lwz @ 0x807F6C98
    /* mtctr r12 */ // 0x807F6C9C
    /* bctrl  */ // 0x807F6CA0
    /* clrlwi r0, r3, 0x10 */ // 0x807F6CA4
    if (!=) goto 0x0x807f6cb4;
    /* li r31, 0x345 */ // 0x807F6CB0
    r3 = r30;
    r4 = r31;
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    r0 = *(0x14 + r1); // lwz @ 0x807F6CC0
    r31 = *(0xc + r1); // lwz @ 0x807F6CC4
    r30 = *(8 + r1); // lwz @ 0x807F6CC8
    return;
}