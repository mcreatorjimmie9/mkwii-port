/* Function at 0x80731420, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_80731420(int r5)
{
    /* li r5, 1 */ // 0x80731420
    /* li r0, 0 */ // 0x80731424
    *(0x15 + r3) = r5; // stb @ 0x80731428
    *(0x18 + r3) = r4; // sth @ 0x8073142C
    *(0x16 + r3) = r0; // sth @ 0x80731430
    return;
}