/* Function at 0x80881920, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_80881920(int r7)
{
    /* lis r7, 0 */ // 0x80881920
    /* li r0, 1 */ // 0x80881924
    r7 = r7 + 0; // 0x80881928
    *(0 + r3) = r7; // stw @ 0x8088192C
    *(0xa + r3) = r0; // stb @ 0x80881930
    *(4 + r3) = r4; // sth @ 0x80881934
    *(6 + r3) = r5; // stb @ 0x80881938
    *(8 + r3) = r6; // sth @ 0x8088193C
    return;
}