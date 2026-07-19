/* Function at 0x80668134, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_80668134(int r4)
{
    /* lis r4, 0 */ // 0x80668134
    /* li r0, 0 */ // 0x80668138
    r4 = r4 + 0; // 0x8066813C
    *(0 + r3) = r4; // stw @ 0x80668140
    *(4 + r3) = r0; // stw @ 0x80668144
    *(0xc + r3) = r0; // stb @ 0x80668148
    *(0xd + r3) = r0; // stb @ 0x8066814C
    *(0xe + r3) = r0; // stb @ 0x80668150
    return;
}