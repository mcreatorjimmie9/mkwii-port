/* Function at 0x805D6A6C, size=56 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6A6C(int r3, int r4, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6A6C
    /* li r0, 0x26 */ // 0x805D6A70
    r6 = r6 + -0x7340; // 0x805D6A74
    r4 = r4 + -1; // 0x805D6A78
    r5 = r5 * r6; // 0x805D6A7C
    r3 = r3 + r5; // 0x805D6A80
    r5 = r3 + 0x568b; // 0x805D6A84
    /* mtctr r0 */ // 0x805D6A88
    r3 = *(1 + r4); // lbz @ 0x805D6A8C
    /* lbzu r0, 2(r4) */ // 0x805D6A90
    *(1 + r5) = r3; // stb @ 0x805D6A94
    /* stbu r0, 2(r5) */ // 0x805D6A98
    if (counter-- != 0) goto 0x0x805d6a8c;
    return;
}