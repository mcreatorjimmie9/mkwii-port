/* Function at 0x807F6FE8, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807F6FE8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x807F6FF0
    /* li r31, 0 */ // 0x807F6FFC
    *(0x18 + r1) = r30; // stw @ 0x807F7000
    /* lis r30, 0 */ // 0x807F7004
    /* lfs f1, 0(r30) */ // 0x807F7008
    *(0x14 + r1) = r29; // stw @ 0x807F700C
    r29 = r3;
    *(0xc0 + r3) = r31; // stw @ 0x807F7014
    r3 = *(0x20 + r3); // lwz @ 0x807F7018
    r12 = *(0 + r3); // lwz @ 0x807F701C
    r12 = *(0x10 + r12); // lwz @ 0x807F7020
    /* mtctr r12 */ // 0x807F7024
    /* bctrl  */ // 0x807F7028
    *(0xb0 + r29) = r31; // stw @ 0x807F702C
    /* lis r31, 0 */ // 0x807F7030
    r3 = *(8 + r29); // lwz @ 0x807F7034
    /* li r4, 0 */ // 0x807F7038
    /* lfs f1, 0(r30) */ // 0x807F703C
    r3 = *(0x28 + r3); // lwz @ 0x807F7040
    /* lfs f2, 0(r31) */ // 0x807F7044
    FUN_805E70EC(r4); // bl 0x805E70EC
    /* lfs f1, 0(r30) */ // 0x807F704C
    r3 = r29;
    /* lfs f0, 0(r31) */ // 0x807F7054
    /* li r4, 0 */ // 0x807F7058
    /* stfs f1, 0xb4(r29) */ // 0x807F705C
    /* stfs f1, 0xb8(r29) */ // 0x807F7060
    /* stfs f0, 0xbc(r29) */ // 0x807F7064
    FUN_808A0A44(r4); // bl 0x808A0A44
    /* li r0, 1 */ // 0x807F706C
    *(0xd4 + r29) = r0; // stb @ 0x807F7070
    r31 = *(0x1c + r1); // lwz @ 0x807F7074
    r30 = *(0x18 + r1); // lwz @ 0x807F7078
    r29 = *(0x14 + r1); // lwz @ 0x807F707C
    r0 = *(0x24 + r1); // lwz @ 0x807F7080
    return;
}