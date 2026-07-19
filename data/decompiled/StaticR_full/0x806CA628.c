/* Function at 0x806CA628, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_806CA628(int r4)
{
    if (==) goto 0x0x806ca638;
    if (!=) goto 0x0x806ca644;
    /* li r0, 0 */ // 0x806CA638
    *(0x180 + r3) = r0; // stb @ 0x806CA63C
    return;
    /* li r0, 1 */ // 0x806CA644
    *(0x180 + r3) = r0; // stb @ 0x806CA648
    return;
}