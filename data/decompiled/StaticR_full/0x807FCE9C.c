/* Function at 0x807FCE9C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807FCE9C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807FCEB4
    r29 = r3;
    r3 = r30;
    FUN_8061E584(r3); // bl 0x8061E584
    r31 = r3;
    r3 = r30;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    r12 = *(0 + r29); // lwz @ 0x807FCED0
    r0 = r3;
    r3 = r29;
    r5 = r31;
    r12 = *(0xf8 + r12); // lwz @ 0x807FCEE0
    /* clrlwi r4, r0, 0x18 */ // 0x807FCEE4
    /* mtctr r12 */ // 0x807FCEE8
    /* bctrl  */ // 0x807FCEEC
    r12 = *(0 + r29); // lwz @ 0x807FCEF0
    r3 = r29;
    r12 = *(0x100 + r12); // lwz @ 0x807FCEF8
    /* mtctr r12 */ // 0x807FCEFC
    /* bctrl  */ // 0x807FCF00
    /* lis r4, 0 */ // 0x807FCF04
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x807FCF0C
    /* li r4, 0x1e0 */ // 0x807FCF10
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x807FCF18
    r31 = *(0x1c + r1); // lwz @ 0x807FCF1C
    r30 = *(0x18 + r1); // lwz @ 0x807FCF20
    r29 = *(0x14 + r1); // lwz @ 0x807FCF24
    return;
}