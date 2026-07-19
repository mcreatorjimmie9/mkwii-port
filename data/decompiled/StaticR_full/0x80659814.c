/* Function at 0x80659814, size=56 bytes */
/* Stack frame: 0 bytes */

int FUN_80659814(int r3, int r4)
{
    if (>) goto 0x0x80659844;
    /* mulli r0, r4, 0x1d8 */ // 0x8065981C
    r4 = r3 + r0; // 0x80659820
    /* lwzx r0, r3, r0 */ // 0x80659824
    r3 = *(4 + r4); // lwz @ 0x80659828
    /* or. r0, r3, r0 */ // 0x8065982C
    if (==) goto 0x0x8065983c;
    r3 = r4 + 8; // 0x80659834
    return;
    /* li r3, 0 */ // 0x8065983C
    return;
    /* li r3, 0 */ // 0x80659844
    return;
}