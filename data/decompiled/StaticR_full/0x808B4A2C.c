/* Function at 0x808B4A2C, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_808B4A2C(int r3, int r6, int r7, int r8)
{
    /* lis r6, 0 */ // 0x808B4A2C
    /* li r7, 0 */ // 0x808B4A30
    r8 = *(0 + r6); // lwz @ 0x808B4A34
    r6 = r3 + 0x410; // 0x808B4A38
    r3 = *(0 + r8); // lwz @ 0x808B4A3C
    r3 = *(0x400 + r3); // lwz @ 0x808B4A40
    /* b 0x80670600 */ // 0x808B4A44
}