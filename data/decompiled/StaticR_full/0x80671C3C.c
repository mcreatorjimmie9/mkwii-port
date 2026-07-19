/* Function at 0x80671C3C, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80671C3C(void)
{
    /* li r0, 1 */ // 0x80671C3C
    *(0xc + r3) = r0; // stb @ 0x80671C40
    return;
}