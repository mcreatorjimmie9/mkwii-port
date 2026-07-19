/* Function at 0x808B3BEC, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808B3BEC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808B3BF4
    /* stfd f31, 0x18(r1) */ // 0x808B3BFC
    /* fmr f31, f1 */ // 0x808B3C00
    *(0x14 + r1) = r31; // stw @ 0x808B3C04
    *(0x10 + r1) = r30; // stw @ 0x808B3C08
    *(0xc + r1) = r29; // stw @ 0x808B3C0C
    r29 = r3;
    r0 = *(0x3ec + r3); // lwz @ 0x808B3C14
    *(0x3e8 + r3) = r0; // stw @ 0x808B3C18
    /* slwi r0, r0, 2 */ // 0x808B3C1C
    r3 = *(0 + r4); // lwz @ 0x808B3C20
    r3 = *(0 + r3); // lwz @ 0x808B3C24
    r3 = r3 + r0; // 0x808B3C28
    r30 = *(8 + r3); // lwz @ 0x808B3C2C
    if (!=) goto 0x0x808b3c40;
    /* li r30, 0 */ // 0x808B3C38
    /* b 0x808b3c94 */ // 0x808B3C3C
    /* lis r31, 0 */ // 0x808B3C40
    r31 = r31 + 0; // 0x808B3C44
    if (==) goto 0x0x808b3c90;
    r12 = *(0 + r30); // lwz @ 0x808B3C4C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B3C54
    /* mtctr r12 */ // 0x808B3C58
    /* bctrl  */ // 0x808B3C5C
    /* b 0x808b3c78 */ // 0x808B3C60
    if (!=) goto 0x0x808b3c74;
    /* li r0, 1 */ // 0x808B3C6C
    /* b 0x808b3c84 */ // 0x808B3C70
    r3 = *(0 + r3); // lwz @ 0x808B3C74
    if (!=) goto 0x0x808b3c64;
    /* li r0, 0 */ // 0x808B3C80
    if (==) goto 0x0x808b3c90;
    /* b 0x808b3c94 */ // 0x808B3C8C
    /* li r30, 0 */ // 0x808B3C90
    if (==) goto 0x0x808b3ca4;
    r0 = *(4 + r29); // lwz @ 0x808B3C9C
    *(0x3e8 + r30) = r0; // stw @ 0x808B3CA0
    r0 = *(0x42c + r29); // lbz @ 0x808B3CA4
    if (!=) goto 0x0x808b3cd4;
    r0 = *(8 + r29); // lwz @ 0x808B3CB0
    if (!=) goto 0x0x808b3cd4;
    /* fmr f1, f31 */ // 0x808B3CBC
    r3 = r29;
    /* li r4, 1 */ // 0x808B3CC4
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B3CCC
    *(0x42c + r29) = r0; // stb @ 0x808B3CD0
    r0 = *(0x24 + r1); // lwz @ 0x808B3CD4
    /* lfd f31, 0x18(r1) */ // 0x808B3CD8
    r31 = *(0x14 + r1); // lwz @ 0x808B3CDC
    r30 = *(0x10 + r1); // lwz @ 0x808B3CE0
    r29 = *(0xc + r1); // lwz @ 0x808B3CE4
    return;
}