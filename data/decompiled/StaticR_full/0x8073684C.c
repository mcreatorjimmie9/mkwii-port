/* Function at 0x8073684C, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8073684C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073685C
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x80736864
    if (!=) goto 0x0x807368e0;
    /* lis r4, 0 */ // 0x80736870
    r4 = *(0 + r4); // lwz @ 0x80736874
    r0 = *(0x10 + r4); // lbz @ 0x80736878
    if (!=) goto 0x0x807368e0;
    r0 = *(0x12b + r3); // lbz @ 0x80736884
    if (==) goto 0x0x80736894;
    /* b 0x807368e0 */ // 0x80736890
    r31 = *(0x268 + r3); // lwz @ 0x80736894
    if (==) goto 0x0x807368d8;
    r12 = *(0 + r31); // lwz @ 0x807368A0
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x807368A8
    /* mtctr r12 */ // 0x807368AC
    /* bctrl  */ // 0x807368B0
    r0 = *(0xb0 + r30); // lbz @ 0x807368B4
    if (==) goto 0x0x807368d8;
    r12 = *(0 + r31); // lwz @ 0x807368C0
    r3 = r31;
    r4 = r30 + 0x72c; // 0x807368C8
    r12 = *(0x70 + r12); // lwz @ 0x807368CC
    /* mtctr r12 */ // 0x807368D0
    /* bctrl  */ // 0x807368D4
    /* li r0, 1 */ // 0x807368D8
    *(0x94 + r30) = r0; // stb @ 0x807368DC
    r0 = *(0x14 + r1); // lwz @ 0x807368E0
    r31 = *(0xc + r1); // lwz @ 0x807368E4
    r30 = *(8 + r1); // lwz @ 0x807368E8
    return;
}