/* Function at 0x807BB884, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_807BB884(int r3, int r4)
{
    r0 = *(0xc + r3); // lhz @ 0x807BB884
    r0 = r0 | r4; // 0x807BB888
    *(0xc + r3) = r0; // sth @ 0x807BB88C
    return;
}