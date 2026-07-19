/* Function at 0x8083F990, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_8083F990(int r4)
{
    /* li r4, 0 */ // 0x8083F990
    /* li r0, 0x14 */ // 0x8083F994
    *(4 + r3) = r4; // stw @ 0x8083F998
    *(8 + r3) = r4; // stw @ 0x8083F99C
    *(0x18 + r3) = r0; // stw @ 0x8083F9A0
    *(0x1c + r3) = r0; // stw @ 0x8083F9A4
    *(0x20 + r3) = r0; // stw @ 0x8083F9A8
    *(0x24 + r3) = r0; // stw @ 0x8083F9AC
    *(0x2d + r3) = r4; // stb @ 0x8083F9B0
    *(0x2e + r3) = r4; // stb @ 0x8083F9B4
    return;
}