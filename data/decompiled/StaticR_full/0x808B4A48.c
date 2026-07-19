/* Function at 0x808B4A48, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_808B4A48(int r3)
{
    /* lis r3, 0 */ // 0x808B4A48
    r3 = *(0 + r3); // lwz @ 0x808B4A4C
    r3 = *(0 + r3); // lwz @ 0x808B4A50
    r3 = *(0x400 + r3); // lwz @ 0x808B4A54
    /* b 0x806708f0 */ // 0x808B4A58
}