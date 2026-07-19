/* Function at 0x807C25B8, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_807C25B8(void)
{
    /* li r0, 0 */ // 0x807C25B8
    *(0x18 + r3) = r0; // stw @ 0x807C25BC
    *(0x1c + r3) = r0; // stb @ 0x807C25C0
    return;
}