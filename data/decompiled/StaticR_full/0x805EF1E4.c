/* Function at 0x805EF1E4, size=68 bytes */
/* Stack frame: 0 bytes */

int FUN_805EF1E4(int r3, int r4, int r5, int r6)
{
    r0 = *(0x3c + r3); // lwz @ 0x805EF1E4
    r6 = r3;
    r5 = r4;
    /* li r3, 0 */ // 0x805EF1F0
    if (==) goto 0x0x805ef208;
    if (==) goto 0x0x805ef214;
    /* b 0x805ef220 */ // 0x805EF204
    /* lis r3, 0 */ // 0x805EF208
    r3 = *(0 + r3); // lwz @ 0x805EF20C
    /* b 0x805ef220 */ // 0x805EF210
    /* lis r3, 0 */ // 0x805EF214
    r3 = r3 + 0; // 0x805EF218
    r3 = *(4 + r3); // lwz @ 0x805EF21C
    r4 = r6;
    /* b 0x805f3d94 */ // 0x805EF224
}