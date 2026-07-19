/* Function at 0x806A03CC, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_806A03CC(int r3, int r4, int r5, int r6)
{
    r6 = r3;
    r3 = r4;
    r6 = *(0x64 + r6); // lwz @ 0x806A03D4
    r4 = r5;
    r5 = *(0xc + r6); // lwz @ 0x806A03DC
    /* b 0x807a0ca4 */ // 0x806A03E0
}