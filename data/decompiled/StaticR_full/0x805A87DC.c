/* Function at 0x805A87DC, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_805A87DC(int r3, int r4)
{
    /* lis r4, 0 */ // 0x805A87DC
    r4 = *(0 + r4); // lwz @ 0x805A87E0
    r4 = *(4 + r4); // lwz @ 0x805A87E4
    r0 = *(8 + r4); // lwz @ 0x805A87E8
    if (<=) goto 0x0x805a8800;
    r3 = *(0 + r3); // lwz @ 0x805A87F4
    r3 = *(8 + r3); // lbz @ 0x805A87F8
    return;
    /* li r3, 0x4b */ // 0x805A8800
    return;
}