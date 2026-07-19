/* Function at 0x806845B8, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_806845B8(int r3)
{
    r0 = *(0xc + r3); // lwz @ 0x806845B8
    /* bnelr  */ // 0x806845C0
    /* li r0, 1 */ // 0x806845C4
    *(0 + r3) = r0; // stb @ 0x806845C8
    return;
}