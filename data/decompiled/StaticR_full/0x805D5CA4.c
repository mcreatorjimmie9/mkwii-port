/* Function at 0x805D5CA4, size=300 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5CA4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* lis r8, 1 */ // 0x805D5CA4
    r0 = *(0x56 + r4); // lbz @ 0x805D5CA8
    r8 = r8 + -0x7340; // 0x805D5CAC
    r5 = r5 * r8; // 0x805D5CB0
    r3 = r3 + r5; // 0x805D5CB8
    r8 = r3 + 8; // 0x805D5CBC
    if (==) goto 0x0x805d5db0;
    /* mulli r10, r6, 0xc00 */ // 0x805D5CC4
    /* li r0, 0x26 */ // 0x805D5CC8
    r5 = r4 + -1; // 0x805D5CCC
    /* mulli r9, r7, 0x60 */ // 0x805D5CD0
    r3 = r8 + r10; // 0x805D5CD4
    r7 = r3 + r9; // 0x805D5CD8
    r3 = *(0xe10 + r7); // lbz @ 0x805D5CDC
    r6 = r7 + 0xdbf; // 0x805D5CE0
    r3 = r3 | 0x80; // 0x805D5CE4
    *(0xe10 + r7) = r3; // stb @ 0x805D5CE8
    /* mtctr r0 */ // 0x805D5CEC
    r3 = *(1 + r5); // lbz @ 0x805D5CF0
    /* lbzu r0, 2(r5) */ // 0x805D5CF4
    *(1 + r6) = r3; // stb @ 0x805D5CF8
    /* stbu r0, 2(r6) */ // 0x805D5CFC
    if (counter-- != 0) goto 0x0x805d5cf0;
    r0 = *(0x50 + r4); // lhz @ 0x805D5D04
    /* li r3, 0x63 */ // 0x805D5D08
    if (>) goto 0x0x805d5d18;
    r3 = r0;
    r0 = r8 + r10; // 0x805D5D18
    r5 = r0 + r9; // 0x805D5D1C
    r0 = *(0xe0c + r5); // lwz @ 0x805D5D20
    r0 = r3 rlwimi 0x19; // rlwimi
    *(0xe0c + r5) = r0; // stw @ 0x805D5D28
    r0 = *(0x50 + r4); // lhz @ 0x805D5D2C
    if (<=) goto 0x0x805d5d40;
    /* li r3, 0x3b */ // 0x805D5D38
    /* b 0x805d5d44 */ // 0x805D5D3C
    r3 = *(0x52 + r4); // lbz @ 0x805D5D40
    r0 = *(0xe0c + r5); // lwz @ 0x805D5D44
    r0 = r3 rlwimi 0x12; // rlwimi
    *(0xe0c + r5) = r0; // stw @ 0x805D5D4C
    r0 = *(0x50 + r4); // lhz @ 0x805D5D50
    if (<=) goto 0x0x805d5d64;
    /* li r3, 0x3e7 */ // 0x805D5D5C
    /* b 0x805d5d68 */ // 0x805D5D60
    r3 = *(0x54 + r4); // lhz @ 0x805D5D64
    r0 = r8 + r10; // 0x805D5D68
    r5 = r0 + r9; // 0x805D5D6C
    r0 = *(0xe0c + r5); // lwz @ 0x805D5D70
    r0 = r3 rlwimi 8; // rlwimi
    *(0xe0c + r5) = r0; // stw @ 0x805D5D78
    r3 = *(0x58 + r4); // lwz @ 0x805D5D7C
    r0 = *(0xe10 + r7); // lbz @ 0x805D5D80
    r0 = r3 rlwimi 0; // rlwimi
    *(0xe10 + r7) = r0; // stb @ 0x805D5D88
    r3 = *(0x5c + r4); // lwz @ 0x805D5D8C
    r0 = *(0xe0c + r5); // lwz @ 0x805D5D90
    r0 = r3 rlwimi 2; // rlwimi
    *(0xe0c + r5) = r0; // stw @ 0x805D5D98
    r3 = *(0x60 + r4); // lwz @ 0x805D5D9C
    r0 = *(0xe11 + r5); // lbz @ 0x805D5DA0
    r0 = r3 rlwimi 5; // rlwimi
    *(0xe11 + r5) = r0; // stb @ 0x805D5DA8
    return;
    /* mulli r3, r6, 0xc00 */ // 0x805D5DB0
    /* mulli r0, r7, 0x60 */ // 0x805D5DB4
    r3 = r8 + r3; // 0x805D5DB8
    r3 = r3 + r0; // 0x805D5DBC
    r0 = *(0xe10 + r3); // lbz @ 0x805D5DC0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xe10 + r3) = r0; // stb @ 0x805D5DC8
    return;
}