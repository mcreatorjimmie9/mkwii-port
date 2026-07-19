/* Function at 0x807A8504, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_807A8504(void)
{
    /* li r0, 0 */ // 0x807A8504
    *(0x10 + r3) = r0; // stb @ 0x807A8508
    return;
}