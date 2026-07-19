/* Function at 0x805AE794, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_805AE794(int r4, int r5)
{
    *(0x13 + r3) = r4; // stb @ 0x805AE794
    /* lis r5, 0 */ // 0x805AE798
    r5 = *(0 + r5); // lwz @ 0x805AE79C
    r0 = *(0x4155 + r5); // lbz @ 0x805AE7A0
    if (==) goto 0x0x805ae7cc;
    if (==) goto 0x0x805ae7c0;
    if (==) goto 0x0x805ae7c8;
    /* b 0x805ae7cc */ // 0x805AE7BC
    /* li r4, 4 */ // 0x805AE7C0
    /* b 0x805ae7cc */ // 0x805AE7C4
    /* li r4, 3 */ // 0x805AE7C8
    *(0x12 + r3) = r4; // stb @ 0x805AE7CC
    return;
}