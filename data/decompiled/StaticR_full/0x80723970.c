/* Function at 0x80723970, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_80723970(int r4)
{
    if (==) goto 0x0x80723988;
    /* li r0, 1 */ // 0x80723978
    *(5 + r3) = r0; // stb @ 0x8072397C
    *(7 + r3) = r0; // stb @ 0x80723980
    return;
    /* li r0, 0 */ // 0x80723988
    *(7 + r3) = r0; // stb @ 0x8072398C
    *(5 + r3) = r0; // stb @ 0x80723990
    *(6 + r3) = r0; // stb @ 0x80723994
    return;
}