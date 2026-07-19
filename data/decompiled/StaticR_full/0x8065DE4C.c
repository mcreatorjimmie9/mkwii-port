/* Function at 0x8065DE4C, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8065DE4C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8065DE54
    *(0x18 + r1) = r30; // stw @ 0x8065DE60
    *(0x14 + r1) = r29; // stw @ 0x8065DE64
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x8065DE6C
    r3 = *(0 + r3); // lwz @ 0x8065DE70
    r30 = *(0x140 + r3); // lwz @ 0x8065DE74
    if (!=) goto 0x0x8065de88;
    /* li r30, 0 */ // 0x8065DE80
    /* b 0x8065dedc */ // 0x8065DE84
    /* lis r31, 0 */ // 0x8065DE88
    r31 = r31 + 0; // 0x8065DE8C
    if (==) goto 0x0x8065ded8;
    r12 = *(0 + r30); // lwz @ 0x8065DE94
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065DE9C
    /* mtctr r12 */ // 0x8065DEA0
    /* bctrl  */ // 0x8065DEA4
    /* b 0x8065dec0 */ // 0x8065DEA8
    if (!=) goto 0x0x8065debc;
    /* li r0, 1 */ // 0x8065DEB4
    /* b 0x8065decc */ // 0x8065DEB8
    r3 = *(0 + r3); // lwz @ 0x8065DEBC
    if (!=) goto 0x0x8065deac;
    /* li r0, 0 */ // 0x8065DEC8
    if (==) goto 0x0x8065ded8;
    /* b 0x8065dedc */ // 0x8065DED4
    /* li r30, 0 */ // 0x8065DED8
    r0 = *(0x270 + r30); // lwz @ 0x8065DEDC
    if (!=) goto 0x0x8065df04;
    /* lis r4, 0 */ // 0x8065DEE8
    /* li r0, 0x99 */ // 0x8065DEEC
    /* lfs f1, 0(r4) */ // 0x8065DEF0
    r3 = r29;
    *(0xb24 + r29) = r0; // stw @ 0x8065DEF8
    /* li r4, 0 */ // 0x8065DEFC
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x8065DF04
    r31 = *(0x1c + r1); // lwz @ 0x8065DF08
    r30 = *(0x18 + r1); // lwz @ 0x8065DF0C
    r29 = *(0x14 + r1); // lwz @ 0x8065DF10
    return;
}