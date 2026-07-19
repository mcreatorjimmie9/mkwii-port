/* Function at 0x805D6A10, size=92 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6A10(int r3, int r4, int r5, int r6, int r7)
{
    /* lis r7, 1 */ // 0x805D6A10
    r0 = r7 + -0x7340; // 0x805D6A18
    r0 = r6 * r0; // 0x805D6A1C
    r3 = r3 + r0; // 0x805D6A20
    if (==) goto 0x0x805d6a3c;
    if (==) goto 0x0x805d6a4c;
    if (==) goto 0x0x805d6a5c;
    return;
    r0 = *(0x5688 + r3); // lwz @ 0x805D6A3C
    r0 = r5 rlwimi 0xb; // rlwimi
    *(0x5688 + r3) = r0; // stw @ 0x805D6A44
    return;
    r0 = *(0x5688 + r3); // lwz @ 0x805D6A4C
    r0 = r5 rlwimi 6; // rlwimi
    *(0x5688 + r3) = r0; // stw @ 0x805D6A54
    return;
    r0 = *(0x5688 + r3); // lwz @ 0x805D6A5C
    r0 = r5 rlwimi 1; // rlwimi
    *(0x5688 + r3) = r0; // stw @ 0x805D6A64
    return;
}