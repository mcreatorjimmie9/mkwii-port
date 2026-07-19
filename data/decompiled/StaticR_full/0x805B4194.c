/* Function at 0x805B4194, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_805B4194(void)
{
    /* li r0, 1 */ // 0x805B4194
    *(0xe8 + r3) = r0; // stb @ 0x805B4198
    *(0x1d4 + r3) = r0; // stb @ 0x805B419C
    *(0x2c0 + r3) = r0; // stb @ 0x805B41A0
    *(0x3ac + r3) = r0; // stb @ 0x805B41A4
    return;
}