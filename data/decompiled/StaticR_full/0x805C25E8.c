/* Function at 0x805C25E8, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_805C25E8(int r3, int r4)
{
    /* lis r4, 0 */ // 0x805C25E8
    r4 = *(0 + r4); // lwz @ 0x805C25EC
    r0 = *(0xb70 + r4); // lwz @ 0x805C25F0
    if (<) goto 0x0x805c260c;
    if (>) goto 0x0x805c260c;
    /* li r3, 0 */ // 0x805C2604
    return;
    r0 = *(0x20 + r3); // lwz @ 0x805C260C
    /* subfic r3, r0, 0xf0 */ // 0x805C2610
    return;
}