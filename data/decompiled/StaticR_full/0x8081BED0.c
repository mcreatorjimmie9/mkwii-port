/* Function at 0x8081BED0, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_8081BED0(int r3)
{
    /* lis r3, 0 */ // 0x8081BED0
    r3 = *(0 + r3); // lwz @ 0x8081BED4
    r3 = *(0x28 + r3); // lwz @ 0x8081BED8
    if (==) goto 0x0x8081beec;
    r3 = *(4 + r3); // lhz @ 0x8081BEE4
    return;
    /* li r3, 0 */ // 0x8081BEEC
    return;
}