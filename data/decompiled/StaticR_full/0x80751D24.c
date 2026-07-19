/* Function at 0x80751D24, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80751D24(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x80751D2C
    /* li r31, 0 */ // 0x80751D38
    *(0x18 + r1) = r30; // stw @ 0x80751D3C
    /* li r30, -1 */ // 0x80751D40
    *(0x14 + r1) = r29; // stw @ 0x80751D44
    r29 = r3;
    *(0xc4 + r3) = r30; // stw @ 0x80751D4C
    *(0xd2 + r3) = r31; // stb @ 0x80751D50
    *(0xd1 + r3) = r31; // stb @ 0x80751D54
    *(0xdf + r3) = r31; // stb @ 0x80751D58
    r12 = *(0 + r3); // lwz @ 0x80751D5C
    r12 = *(0x100 + r12); // lwz @ 0x80751D60
    /* mtctr r12 */ // 0x80751D64
    /* bctrl  */ // 0x80751D68
    /* li r0, 0xff */ // 0x80751D6C
    *(0xd8 + r29) = r30; // sth @ 0x80751D70
    r3 = r29;
    /* li r4, 0 */ // 0x80751D78
    *(0xd4 + r29) = r31; // stb @ 0x80751D7C
    *(0xd5 + r29) = r31; // stb @ 0x80751D80
    *(0xd6 + r29) = r31; // stb @ 0x80751D84
    *(0xd7 + r29) = r0; // stb @ 0x80751D88
    *(0xdc + r29) = r30; // sth @ 0x80751D8C
    FUN_808A0A44(); // bl 0x808A0A44
    *(0xec + r29) = r31; // stb @ 0x80751D94
    r31 = *(0x1c + r1); // lwz @ 0x80751D98
    r30 = *(0x18 + r1); // lwz @ 0x80751D9C
    r29 = *(0x14 + r1); // lwz @ 0x80751DA0
    r0 = *(0x24 + r1); // lwz @ 0x80751DA4
    return;
}