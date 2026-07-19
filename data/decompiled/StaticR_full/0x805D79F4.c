/* Function at 0x805D79F4, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805D79F4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805D7A0C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805D7A14
    r29 = r5;
    if (==) goto 0x0x805d7acc;
    r3 = r6;
    FUN_805E0ED8(r3); // bl 0x805E0ED8
    /* extsh. r4, r3 */ // 0x805D7A28
    if (<) goto 0x0x805d7acc;
    /* mulli r8, r29, 0xc80 */ // 0x805D7A30
    /* li r0, 0x26 */ // 0x805D7A34
    r5 = r31 + -1; // 0x805D7A38
    /* mulli r7, r4, 0x64 */ // 0x805D7A3C
    r4 = r30 + r8; // 0x805D7A40
    r4 = r4 + r7; // 0x805D7A44
    r6 = r4 + 0xe1f; // 0x805D7A48
    /* mtctr r0 */ // 0x805D7A4C
    r4 = *(1 + r5); // lbz @ 0x805D7A50
    /* lbzu r0, 2(r5) */ // 0x805D7A54
    *(1 + r6) = r4; // stb @ 0x805D7A58
    /* stbu r0, 2(r6) */ // 0x805D7A5C
    if (counter-- != 0) goto 0x0x805d7a50;
    r0 = r30 + r8; // 0x805D7A64
    r5 = *(0x50 + r31); // lhz @ 0x805D7A68
    r4 = r0 + r7; // 0x805D7A6C
    *(0xe70 + r4) = r5; // sth @ 0x805D7A74
    r0 = *(0x52 + r31); // lbz @ 0x805D7A78
    *(0xe72 + r4) = r0; // stb @ 0x805D7A7C
    r0 = *(0x54 + r31); // lhz @ 0x805D7A80
    *(0xe74 + r4) = r0; // sth @ 0x805D7A84
    r0 = *(0x56 + r31); // lbz @ 0x805D7A88
    *(0xe76 + r4) = r0; // stb @ 0x805D7A8C
    r0 = *(0x58 + r31); // lwz @ 0x805D7A90
    *(0xe78 + r4) = r0; // stw @ 0x805D7A94
    r0 = *(0x5c + r31); // lwz @ 0x805D7A98
    *(0xe7c + r4) = r0; // stw @ 0x805D7A9C
    r0 = *(0x60 + r31); // lwz @ 0x805D7AA0
    *(0xe80 + r4) = r0; // stw @ 0x805D7AA4
    if (!=) goto 0x0x805d7acc;
    /* addis r5, r30, 1 */ // 0x805D7AAC
    /* li r4, 1 */ // 0x805D7AB0
    /* clrlwi r0, r3, 0x18 */ // 0x805D7AB4
    r3 = *(-0x6ff0 + r5); // lwz @ 0x805D7AB8
    r0 = r4 << r0; // slw
    *(-0x6c67 + r5) = r4; // stb @ 0x805D7AC0
    r0 = r3 | r0; // 0x805D7AC4
    *(-0x6ff0 + r5) = r0; // stw @ 0x805D7AC8
    r0 = *(0x24 + r1); // lwz @ 0x805D7ACC
    r31 = *(0x1c + r1); // lwz @ 0x805D7AD0
    r30 = *(0x18 + r1); // lwz @ 0x805D7AD4
    r29 = *(0x14 + r1); // lwz @ 0x805D7AD8
    return;
}