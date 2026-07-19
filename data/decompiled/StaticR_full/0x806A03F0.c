/* Function at 0x806A03F0, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_806A03F0(int r3, int r4, int r5, int r6)
{
    r6 = r3;
    r3 = r4;
    r6 = *(0x64 + r6); // lwz @ 0x806A03F8
    r4 = r5;
    r5 = *(0xc + r6); // lwz @ 0x806A0400
    /* b 0x807a0d68 */ // 0x806A0404
}