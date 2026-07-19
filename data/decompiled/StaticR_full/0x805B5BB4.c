/* Function at 0x805B5BB4, size=108 bytes */
/* Stack frame: 16 bytes */

void FUN_805B5BB4(int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* li r9, 0 */ // 0x805B5BB8
    /* li r5, -1 */ // 0x805B5BBC
    /* lis r8, 0 */ // 0x805B5BC0
    *(4 + r3) = r4; // stw @ 0x805B5BC4
    /* li r0, 6 */ // 0x805B5BC8
    *(8 + r3) = r9; // stb @ 0x805B5BCC
    *(9 + r3) = r5; // stb @ 0x805B5BD0
    *(0xa4 + r3) = r9; // stb @ 0x805B5BD4
    /* lbzu r7, 0(r8) */ // 0x805B5BD8
    *(8 + r1) = r7; // stb @ 0x805B5BDC
    r6 = *(1 + r8); // lbz @ 0x805B5BE0
    r5 = *(2 + r8); // lbz @ 0x805B5BE4
    r4 = *(3 + r8); // lbz @ 0x805B5BE8
    *(9 + r1) = r6; // stb @ 0x805B5BEC
    *(0xa + r1) = r5; // stb @ 0x805B5BF0
    *(0xb + r1) = r4; // stb @ 0x805B5BF4
    *(0x60 + r3) = r7; // stb @ 0x805B5BF8
    *(0x61 + r3) = r6; // stb @ 0x805B5BFC
    *(0x62 + r3) = r5; // stb @ 0x805B5C00
    *(0x63 + r3) = r4; // stb @ 0x805B5C04
    *(0x64 + r3) = r9; // stw @ 0x805B5C08
    *(0xc + r3) = r0; // stw @ 0x805B5C0C
    *(0xa5 + r3) = r9; // stb @ 0x805B5C10
    *(0xa6 + r3) = r9; // stb @ 0x805B5C14
    return;
}