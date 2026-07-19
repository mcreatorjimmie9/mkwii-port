/* Function at 0x8079C4AC, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_8079C4AC(int r3, int r4)
{
    /* bgtlr  */ // 0x8079C4B0
    r3 = r3 + r4; // 0x8079C4B4
    /* li r0, 0 */ // 0x8079C4B8
    *(0x14 + r3) = r0; // stb @ 0x8079C4BC
    return;
}