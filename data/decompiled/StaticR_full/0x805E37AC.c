/* Function at 0x805E37AC, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_805E37AC(int r4, int r5)
{
    /* li r0, 0 */ // 0x805E37AC
    *(0 + r3) = r0; // stb @ 0x805E37B0
    r5 = *(0 + r4); // lwz @ 0x805E37B4
    /* addis r0, r5, -0x524b */ // 0x805E37B8
    /* bnelr  */ // 0x805E37C0
    /* li r0, 1 */ // 0x805E37C4
    *(4 + r3) = r4; // stw @ 0x805E37C8
    *(0 + r3) = r0; // stb @ 0x805E37CC
    return;
}