/* Function at 0x80683F90, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_80683F90(int r4)
{
    /* li r4, 0 */ // 0x80683F90
    /* li r0, -1 */ // 0x80683F94
    *(0 + r3) = r4; // stb @ 0x80683F98
    *(1 + r3) = r4; // stb @ 0x80683F9C
    *(2 + r3) = r4; // stb @ 0x80683FA0
    *(3 + r3) = r4; // stb @ 0x80683FA4
    *(4 + r3) = r4; // stb @ 0x80683FA8
    *(5 + r3) = r4; // stb @ 0x80683FAC
    *(8 + r3) = r0; // stw @ 0x80683FB0
    *(0xc + r3) = r4; // stw @ 0x80683FB4
    *(0x10 + r3) = r4; // stw @ 0x80683FB8
    *(0x16 + r3) = r4; // stb @ 0x80683FBC
    return;
}