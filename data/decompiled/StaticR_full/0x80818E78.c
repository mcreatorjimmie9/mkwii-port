/* Function at 0x80818E78, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80818E78(int r4)
{
    /* lis r4, 0 */ // 0x80818E78
    r4 = *(0 + r4); // lwz @ 0x80818E7C
    *(0x1ec + r4) = r3; // stb @ 0x80818E80
    return;
}