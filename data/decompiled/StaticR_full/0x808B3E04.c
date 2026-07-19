/* Function at 0x808B3E04, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808B3E04(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* stfd f31, 0x18(r1) */ // 0x808B3E10
    /* fmr f31, f1 */ // 0x808B3E14
    *(0x14 + r1) = r31; // stw @ 0x808B3E18
    r31 = r4;
    *(0x10 + r1) = r30; // stw @ 0x808B3E20
    r30 = r3;
    r0 = *(0x42c + r3); // lbz @ 0x808B3E28
    if (!=) goto 0x0x808b3ea8;
    r0 = *(8 + r3); // lwz @ 0x808B3E34
    if (==) goto 0x0x808b3e44;
    /* b 0x808b3ea8 */ // 0x808B3E40
    /* li r0, -1 */ // 0x808B3E44
    *(0x3e8 + r3) = r0; // stw @ 0x808B3E48
    r3 = r31;
    FUN_808CFE50(r3); // bl 0x808CFE50
    if (==) goto 0x0x808b3e80;
    *(0x3f4 + r30) = r31; // stw @ 0x808B3E5C
    r3 = r30;
    /* li r4, 0x4b */ // 0x808B3E64
    /* li r5, 0 */ // 0x808B3E68
    r12 = *(0 + r30); // lwz @ 0x808B3E6C
    r12 = *(0x24 + r12); // lwz @ 0x808B3E70
    /* mtctr r12 */ // 0x808B3E74
    /* bctrl  */ // 0x808B3E78
    /* b 0x808b3ea0 */ // 0x808B3E7C
    r12 = *(0 + r30); // lwz @ 0x808B3E80
    /* fmr f1, f31 */ // 0x808B3E84
    r3 = r30;
    r4 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x808B3E90
    /* li r5, 0 */ // 0x808B3E94
    /* mtctr r12 */ // 0x808B3E98
    /* bctrl  */ // 0x808B3E9C
    /* li r0, 1 */ // 0x808B3EA0
    *(0x42c + r30) = r0; // stb @ 0x808B3EA4
    r0 = *(0x24 + r1); // lwz @ 0x808B3EA8
    /* lfd f31, 0x18(r1) */ // 0x808B3EAC
    r31 = *(0x14 + r1); // lwz @ 0x808B3EB0
    r30 = *(0x10 + r1); // lwz @ 0x808B3EB4
    return;
}