/* Function at 0x80649164, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80649164(void)
{
    /* li r0, 1 */ // 0x80649164
    *(0x54 + r3) = r0; // stb @ 0x80649168
    return;
}