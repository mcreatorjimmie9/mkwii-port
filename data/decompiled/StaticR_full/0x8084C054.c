/* Function at 0x8084C054, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_8084C054(void)
{
    /* li r0, 0 */ // 0x8084C054
    *(0x4f + r3) = r0; // stb @ 0x8084C058
    return;
}