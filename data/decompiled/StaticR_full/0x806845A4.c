/* Function at 0x806845A4, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_806845A4(int r4)
{
    /* li r4, 6 */ // 0x806845A4
    /* li r0, 1 */ // 0x806845A8
    *(0xc + r3) = r4; // stw @ 0x806845AC
    *(0x15 + r3) = r0; // stb @ 0x806845B0
    return;
}