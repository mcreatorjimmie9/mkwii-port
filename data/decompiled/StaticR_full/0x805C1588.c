/* Function at 0x805C1588, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_805C1588(int r3, int r4)
{
    r0 = *(0xb70 + r3); // lwz @ 0x805C1588
    /* li r3, 0 */ // 0x805C158C
    if (==) goto 0x0x805c15a0;
    /* bnelr  */ // 0x805C159C
    /* lis r4, 0 */ // 0x805C15A0
    r4 = *(0 + r4); // lwz @ 0x805C15A4
    r0 = *(0x24 + r4); // lbz @ 0x805C15A8
    /* beqlr  */ // 0x805C15B0
    r0 = *(0x38 + r4); // lwz @ 0x805C15B4
    /* bnelr  */ // 0x805C15BC
    /* li r3, 1 */ // 0x805C15C0
    return;
}