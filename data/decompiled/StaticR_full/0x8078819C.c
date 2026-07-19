/* Function at 0x8078819C, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_8078819C(void)
{
    /* li r0, 1 */ // 0x8078819C
    *(0x10 + r3) = r0; // stb @ 0x807881A0
    return;
}