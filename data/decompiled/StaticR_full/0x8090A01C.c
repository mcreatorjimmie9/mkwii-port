/* Function at 0x8090A01C, size=140 bytes */
/* Stack frame: 0 bytes */

int FUN_8090A01C(int r3, int r4, int r5, int r6, int r7)
{
    r0 = *(0x437e + r3); // lbz @ 0x8090A01C
    /* bnelr  */ // 0x8090A024
    r0 = *(0x1eed + r3); // lbz @ 0x8090A028
    /* beqlr  */ // 0x8090A030
    /* lis r5, 0 */ // 0x8090A034
    r5 = *(0 + r5); // lwz @ 0x8090A038
    r0 = *(0x1c + r5); // lbz @ 0x8090A03C
    /* bnelr  */ // 0x8090A044
    /* mulli r5, r4, 0x1c */ // 0x8090A048
    r4 = r3 + r5; // 0x8090A04C
    r6 = *(0xc + r4); // lwz @ 0x8090A050
    r7 = *(0x168 + r6); // lwz @ 0x8090A054
    r4 = *(0x160 + r6); // lwz @ 0x8090A058
    /* slwi r0, r7, 4 */ // 0x8090A05C
    /* lwzx r0, r4, r0 */ // 0x8090A060
    /* bnelr  */ // 0x8090A068
    r0 = *(0x164 + r6); // lwz @ 0x8090A06C
    /* li r4, 0 */ // 0x8090A070
    if (!=) goto 0x0x8090a08c;
    r0 = *(0x16d + r6); // lbz @ 0x8090A07C
    if (==) goto 0x0x8090a08c;
    /* li r4, 1 */ // 0x8090A088
    if (!=) goto 0x0x8090a098;
    return;
    r3 = r3 + r5; // 0x8090A098
    /* li r0, 1 */ // 0x8090A09C
    *(0x18 + r3) = r0; // stb @ 0x8090A0A0
    return;
}