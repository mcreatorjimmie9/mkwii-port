/* Function at 0x80671C64, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80671C64(void)
{
    /* li r0, 1 */ // 0x80671C64
    *(0xc + r3) = r0; // stb @ 0x80671C68
    return;
}