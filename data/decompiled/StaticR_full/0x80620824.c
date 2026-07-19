/* Function at 0x80620824, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_80620824(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80620824
    /* lis r3, 0 */ // 0x80620828
    /* li r0, 0 */ // 0x8062082C
    *(0 + r4) = r0; // stb @ 0x80620830
    *(0 + r3) = r0; // stb @ 0x80620834
    return;
}