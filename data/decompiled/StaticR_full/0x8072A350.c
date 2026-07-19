/* Function at 0x8072A350, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8072A350(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8072A35C
    r31 = r3;
    r0 = *(0x13a + r3); // lbz @ 0x8072A364
    if (!=) goto 0x0x8072a518;
    r0 = *(0x96 + r3); // lbz @ 0x8072A370
    if (!=) goto 0x0x8072a388;
    r0 = *(0x3a + r3); // lbz @ 0x8072A37C
    if (==) goto 0x0x8072a4a0;
    r3 = *(0x2a0 + r3); // lwz @ 0x8072A388
    r3 = r3 + 0x74; // 0x8072A38C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072a3a4;
    /* li r3, 0 */ // 0x8072A39C
    /* b 0x8072a3a8 */ // 0x8072A3A0
    r3 = *(0xc + r3); // lwz @ 0x8072A3A4
    /* li r0, 0 */ // 0x8072A3AC
    if (==) goto 0x0x8072a3bc;
    if (!=) goto 0x0x8072a3c0;
    /* li r0, 1 */ // 0x8072A3BC
    if (==) goto 0x0x8072a3e4;
    r3 = *(0x2a0 + r31); // lwz @ 0x8072A3C8
    r12 = *(0 + r3); // lwz @ 0x8072A3CC
    r12 = *(0x18 + r12); // lwz @ 0x8072A3D0
    /* mtctr r12 */ // 0x8072A3D4
    /* bctrl  */ // 0x8072A3D8
    /* li r0, 0 */ // 0x8072A3DC
    *(0xc1 + r31) = r0; // stb @ 0x8072A3E0
    r3 = *(0x2a4 + r31); // lwz @ 0x8072A3E4
    r3 = r3 + 0x74; // 0x8072A3E8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072a400;
    /* li r3, 0 */ // 0x8072A3F8
    /* b 0x8072a404 */ // 0x8072A3FC
    r3 = *(0xc + r3); // lwz @ 0x8072A400
    /* li r0, 0 */ // 0x8072A408
    if (==) goto 0x0x8072a418;
    if (!=) goto 0x0x8072a41c;
    /* li r0, 1 */ // 0x8072A418
}