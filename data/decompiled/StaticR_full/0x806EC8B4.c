/* Function at 0x806EC8B4, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_806EC8B4(int r3, int r7)
{
    /* slwi r0, r7, 3 */ // 0x806EC8B4
    r3 = r3 + r0; // 0x806EC8B8
    *(0x1c + r3) = r4; // stb @ 0x806EC8BC
    *(0x1d + r3) = r5; // stb @ 0x806EC8C0
    *(0x1e + r3) = r6; // stb @ 0x806EC8C4
    *(0x1f + r3) = r8; // stb @ 0x806EC8C8
    return;
}