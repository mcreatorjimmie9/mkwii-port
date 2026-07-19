/* Function at 0x806DDA00, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_806DDA00(void)
{
    /* li r0, 1 */ // 0x806DDA00
    *(0x80 + r3) = r0; // stb @ 0x806DDA04
    return;
}