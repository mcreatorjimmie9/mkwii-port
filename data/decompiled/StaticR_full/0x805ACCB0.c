/* Function at 0x805ACCB0, size=56 bytes */
/* Stack frame: 0 bytes */

int FUN_805ACCB0(int r3, int r4)
{
    r0 = *(4 + r3); // lhz @ 0x805ACCB0
    if (<) goto 0x0x805accc4;
    /* li r3, 0 */ // 0x805ACCBC
    return;
    /* mulli r4, r4, 0xd8 */ // 0x805ACCC4
    r3 = *(0xc + r3); // lwz @ 0x805ACCC8
    /* lbzx r0, r3, r4 */ // 0x805ACCCC
    if (==) goto 0x0x805acce0;
    r3 = r3 + r4; // 0x805ACCD8
    return;
    /* li r3, 0 */ // 0x805ACCE0
    return;
}