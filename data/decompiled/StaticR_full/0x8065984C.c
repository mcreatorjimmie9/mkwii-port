/* Function at 0x8065984C, size=56 bytes */
/* Stack frame: 0 bytes */

int FUN_8065984C(int r3, int r4)
{
    if (>) goto 0x0x8065987c;
    /* mulli r0, r4, 0x1d8 */ // 0x80659854
    r4 = r3 + r0; // 0x80659858
    /* lwzx r0, r3, r0 */ // 0x8065985C
    r3 = *(4 + r4); // lwz @ 0x80659860
    /* or. r0, r3, r0 */ // 0x80659864
    if (==) goto 0x0x80659874;
    r3 = *(0x1d0 + r4); // lwz @ 0x8065986C
    return;
    /* li r3, -1 */ // 0x80659874
    return;
    /* li r3, -1 */ // 0x8065987C
    return;
}