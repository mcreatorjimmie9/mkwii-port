/* Function at 0x807E39B0, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807E39B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807E39BC
    r31 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807E39C4
    if (!=) goto 0x0x807e3a0c;
    r12 = *(0 + r3); // lwz @ 0x807E39D0
    /* li r4, 1 */ // 0x807E39D4
    r12 = *(0x68 + r12); // lwz @ 0x807E39D8
    /* mtctr r12 */ // 0x807E39DC
    /* bctrl  */ // 0x807E39E0
    r0 = *(0x1a0 + r31); // lbz @ 0x807E39E4
    /* li r3, 1 */ // 0x807E39E8
    *(0xb0 + r31) = r3; // stw @ 0x807E39EC
    if (!=) goto 0x0x807e3a0c;
    /* lis r4, 0 */ // 0x807E39F8
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x807E3A00
    /* li r4, 0x282 */ // 0x807E3A04
    FUN_808A0AC8(r4, r3, r4); // bl 0x808A0AC8
    r0 = *(0x14 + r1); // lwz @ 0x807E3A0C
    r31 = *(0xc + r1); // lwz @ 0x807E3A10
    return;
}