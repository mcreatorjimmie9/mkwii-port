/* Function at 0x808B39D8, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808B39D8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x808B39E0
    /* slwi r0, r4, 2 */ // 0x808B39E8
    /* stfd f31, 0x18(r1) */ // 0x808B39EC
    /* fmr f31, f1 */ // 0x808B39F0
    *(0x14 + r1) = r31; // stw @ 0x808B39F4
    *(0x10 + r1) = r30; // stw @ 0x808B39F8
    *(0xc + r1) = r29; // stw @ 0x808B39FC
    r29 = r3;
    *(0x3e8 + r3) = r4; // stw @ 0x808B3A04
    r4 = *(0 + r5); // lwz @ 0x808B3A08
    r3 = *(0 + r4); // lwz @ 0x808B3A0C
    r3 = r3 + r0; // 0x808B3A10
    r30 = *(8 + r3); // lwz @ 0x808B3A14
    if (!=) goto 0x0x808b3a28;
    /* li r30, 0 */ // 0x808B3A20
    /* b 0x808b3a7c */ // 0x808B3A24
    /* lis r31, 0 */ // 0x808B3A28
    r31 = r31 + 0; // 0x808B3A2C
    if (==) goto 0x0x808b3a78;
    r12 = *(0 + r30); // lwz @ 0x808B3A34
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B3A3C
    /* mtctr r12 */ // 0x808B3A40
    /* bctrl  */ // 0x808B3A44
    /* b 0x808b3a60 */ // 0x808B3A48
    if (!=) goto 0x0x808b3a5c;
    /* li r0, 1 */ // 0x808B3A54
    /* b 0x808b3a6c */ // 0x808B3A58
    r3 = *(0 + r3); // lwz @ 0x808B3A5C
    if (!=) goto 0x0x808b3a4c;
    /* li r0, 0 */ // 0x808B3A68
    if (==) goto 0x0x808b3a78;
    /* b 0x808b3a7c */ // 0x808B3A74
    /* li r30, 0 */ // 0x808B3A78
    if (==) goto 0x0x808b3a8c;
    r0 = *(4 + r29); // lwz @ 0x808B3A84
    *(0x3e8 + r30) = r0; // stw @ 0x808B3A88
    r0 = *(0x42c + r29); // lbz @ 0x808B3A8C
    if (!=) goto 0x0x808b3abc;
    r0 = *(8 + r29); // lwz @ 0x808B3A98
    if (!=) goto 0x0x808b3abc;
    /* fmr f1, f31 */ // 0x808B3AA4
    r3 = r29;
    /* li r4, 1 */ // 0x808B3AAC
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B3AB4
    *(0x42c + r29) = r0; // stb @ 0x808B3AB8
    r0 = *(0x24 + r1); // lwz @ 0x808B3ABC
    /* lfd f31, 0x18(r1) */ // 0x808B3AC0
    r31 = *(0x14 + r1); // lwz @ 0x808B3AC4
    r30 = *(0x10 + r1); // lwz @ 0x808B3AC8
    r29 = *(0xc + r1); // lwz @ 0x808B3ACC
    return;
}