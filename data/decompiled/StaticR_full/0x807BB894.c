/* Function at 0x807BB894, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_807BB894(int r3, int r4)
{
    r0 = *(0xc + r3); // lhz @ 0x807BB894
    /* andc r0, r0, r4 */ // 0x807BB898
    *(0xc + r3) = r0; // sth @ 0x807BB89C
    return;
}