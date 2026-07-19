/* Function at 0x80668D34, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_80668D34(int r3, int r4)
{
    /* slwi r0, r4, 2 */ // 0x80668D34
    r4 = r3 + r4; // 0x80668D38
    r3 = r3 + r0; // 0x80668D3C
    *(0x10 + r3) = r5; // stw @ 0x80668D40
    *(0x34 + r4) = r6; // stb @ 0x80668D44
    return;
}