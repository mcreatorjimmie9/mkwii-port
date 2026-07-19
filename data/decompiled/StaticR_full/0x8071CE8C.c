/* Function at 0x8071CE8C, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_8071CE8C(void)
{
    /* li r0, 0 */ // 0x8071CE8C
    *(0x33 + r3) = r0; // stb @ 0x8071CE90
    return;
}