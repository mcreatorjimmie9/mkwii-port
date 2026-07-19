/* Function at 0x805D9CC8, size=68 bytes */
/* Stack frame: 32 bytes */

void FUN_805D9CC8(int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* fctiwz f1, f1 */ // 0x805D9CCC
    /* fctiwz f0, f2 */ // 0x805D9CD0
    /* stfd f1, 8(r1) */ // 0x805D9CD4
    r5 = *(0xc + r1); // lwz @ 0x805D9CD8
    /* stfd f0, 0x10(r1) */ // 0x805D9CDC
    r0 = r5 + -1; // 0x805D9CE0
    r6 = *(0x14 + r1); // lwz @ 0x805D9CE4
    r4 = r0 rlwinm 0; // rlwinm
    *(4 + r3) = r5; // sth @ 0x805D9CEC
    r0 = r6 + -1; // 0x805D9CF0
    r0 = r0 rlwinm 0; // rlwinm
    *(6 + r3) = r6; // sth @ 0x805D9CF8
    *(8 + r3) = r4; // sth @ 0x805D9CFC
    *(0xa + r3) = r0; // sth @ 0x805D9D00
    return;
}