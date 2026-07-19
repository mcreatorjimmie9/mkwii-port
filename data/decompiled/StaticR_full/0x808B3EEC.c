/* Function at 0x808B3EEC, size=252 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808B3EEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x808B3EF4
    *(0x14 + r1) = r0; // stw @ 0x808B3EF8
    *(0xc + r1) = r31; // stw @ 0x808B3EFC
    r31 = r3;
    r0 = *(0x3f4 + r3); // lwz @ 0x808B3F04
    *(0x42c + r3) = r4; // stb @ 0x808B3F08
    if (==) goto 0x0x808b3fd4;
    /* li r3, 0x4b */ // 0x808B3F14
    FUN_808E6DC0(r3); // bl 0x808E6DC0
    r0 = *(0x6c4 + r3); // lbz @ 0x808B3F1C
    if (==) goto 0x0x808b3f50;
    r12 = *(0 + r31); // lwz @ 0x808B3F28
    /* lis r6, 0 */ // 0x808B3F2C
    r3 = r31;
    /* li r5, 0 */ // 0x808B3F34
    r12 = *(0x1c + r12); // lwz @ 0x808B3F38
    r4 = *(0x3f4 + r31); // lwz @ 0x808B3F3C
    /* lfs f1, 0(r6) */ // 0x808B3F40
    /* mtctr r12 */ // 0x808B3F44
    /* bctrl  */ // 0x808B3F48
    /* b 0x808b3f58 */ // 0x808B3F4C
    /* li r0, -1 */ // 0x808B3F50
    *(0x3f4 + r31) = r0; // stw @ 0x808B3F54
    /* lis r3, 0 */ // 0x808B3F58
    r4 = *(0 + r3); // lwz @ 0x808B3F5C
    r3 = *(0 + r4); // lwz @ 0x808B3F60
    r0 = *(0 + r3); // lwz @ 0x808B3F64
    if (==) goto 0x0x808b3fd4;
    if (==) goto 0x0x808b3fd4;
    r3 = *(4 + r31); // lwz @ 0x808B3F78
    if (!=) goto 0x0x808b3f9c;
    if (==) goto 0x0x808b3f9c;
    if (==) goto 0x0x808b3f9c;
    if (!=) goto 0x0x808b3fd4;
    if (==) goto 0x0x808b3fd4;
    /* lis r3, 0 */ // 0x808B3FA4
    r3 = *(0 + r3); // lwz @ 0x808B3FA8
    r0 = *(0x1758 + r3); // lwz @ 0x808B3FAC
    if (>=) goto 0x0x808b3fc4;
    r3 = *(0x98 + r4); // lwz @ 0x808B3FB8
    *(0x14c + r3) = r0; // stw @ 0x808B3FBC
    /* b 0x808b3fd4 */ // 0x808B3FC0
    if (>=) goto 0x0x808b3fd4;
    r3 = *(0x98 + r4); // lwz @ 0x808B3FCC
    *(0x150 + r3) = r0; // stw @ 0x808B3FD0
    r0 = *(0x14 + r1); // lwz @ 0x808B3FD4
    r31 = *(0xc + r1); // lwz @ 0x808B3FD8
    return;
}