/* Function at 0x8064ED04, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_8064ED04(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x8064ED04
    /* li r4, 0 */ // 0x8064ED08
    /* lfs f0, 0(r5) */ // 0x8064ED0C
    /* li r0, -1 */ // 0x8064ED10
    /* stfs f0, 0(r3) */ // 0x8064ED14
    *(4 + r3) = r4; // stb @ 0x8064ED18
    *(8 + r3) = r0; // stw @ 0x8064ED1C
    return;
}