/* Function at 0x807A5110, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_807A5110(void)
{
    /* li r0, 0 */ // 0x807A5110
    *(0x10 + r3) = r0; // stb @ 0x807A5114
    return;
}