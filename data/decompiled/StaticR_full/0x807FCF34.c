/* Function at 0x807FCF34, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807FCF34(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x807FCF3C
    *(0x18 + r1) = r30; // stw @ 0x807FCF48
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807FCF50
    r29 = r3;
    r3 = *(0 + r5); // lwz @ 0x807FCF58
    r0 = *(0x55 + r3); // lbz @ 0x807FCF5C
    if (!=) goto 0x0x807fcfc4;
    r3 = r30;
    FUN_8061E584(r3); // bl 0x8061E584
    r31 = r3;
    r3 = r30;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    r12 = *(0 + r29); // lwz @ 0x807FCF7C
    r0 = r3;
    r3 = r29;
    r5 = r31;
    r12 = *(0xf8 + r12); // lwz @ 0x807FCF8C
    /* clrlwi r4, r0, 0x18 */ // 0x807FCF90
    /* mtctr r12 */ // 0x807FCF94
    /* bctrl  */ // 0x807FCF98
    r12 = *(0 + r29); // lwz @ 0x807FCF9C
    r3 = r29;
    r12 = *(0x100 + r12); // lwz @ 0x807FCFA4
    /* mtctr r12 */ // 0x807FCFA8
    /* bctrl  */ // 0x807FCFAC
    /* lis r4, 0 */ // 0x807FCFB0
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x807FCFB8
    /* li r4, 0x1e0 */ // 0x807FCFBC
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x807FCFC4
    r31 = *(0x1c + r1); // lwz @ 0x807FCFC8
    r30 = *(0x18 + r1); // lwz @ 0x807FCFCC
    r29 = *(0x14 + r1); // lwz @ 0x807FCFD0
    return;
}