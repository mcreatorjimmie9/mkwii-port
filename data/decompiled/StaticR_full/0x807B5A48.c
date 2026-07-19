/* Function at 0x807B5A48, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_807B5A48(int r5)
{
    /* lis r5, 0 */ // 0x807B5A48
    /* li r0, 0 */ // 0x807B5A4C
    r5 = r5 + 0; // 0x807B5A50
    *(4 + r3) = r4; // stb @ 0x807B5A54
    *(5 + r3) = r0; // stb @ 0x807B5A58
    *(6 + r3) = r0; // stb @ 0x807B5A5C
    *(0 + r3) = r5; // stw @ 0x807B5A60
    return;
}