/* Function at 0x805ACCE8, size=32 bytes */
/* Stack frame: 0 bytes */

int FUN_805ACCE8(int r3, int r4, int r5)
{
    r0 = *(4 + r3); // lhz @ 0x805ACCE8
    /* bgelr  */ // 0x805ACCF0
    /* mulli r0, r4, 0xd8 */ // 0x805ACCF4
    r3 = *(0xc + r3); // lwz @ 0x805ACCF8
    r4 = r5;
    r3 = r3 + r0; // 0x805ACD00
    /* b 0x805ac15c */ // 0x805ACD04
}