/* Function at 0x805FA010, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_805FA010(void)
{
    /* li r0, 0 */ // 0x805FA010
    *(0x10 + r3) = r0; // sth @ 0x805FA014
    *(0x12 + r3) = r0; // stb @ 0x805FA018
    return;
}