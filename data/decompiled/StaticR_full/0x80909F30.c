/* Function at 0x80909F30, size=236 bytes */
/* Stack frame: 0 bytes */

int FUN_80909F30(int r3, int r4, int r5, int r6, int r7, int r8)
{
    r0 = *(0x437e + r3); // lbz @ 0x80909F30
    /* bnelr  */ // 0x80909F38
    r7 = r3 + r4; // 0x80909F3C
    r0 = *(0x1eed + r3); // lbz @ 0x80909F40
    r6 = *(0x1efa + r7); // lbz @ 0x80909F44
    /* bgelr  */ // 0x80909F4C
    r0 = *(0x1f50 + r7); // lbz @ 0x80909F50
    /* li r7, 0 */ // 0x80909F54
    if (!=) goto 0x0x80909f80;
    /* lis r6, 0 */ // 0x80909F60
    r0 = r4 rlwinm 2; // rlwinm
    r6 = *(0 + r6); // lwz @ 0x80909F68
    r6 = *(0xc + r6); // lwz @ 0x80909F6C
    /* lwzx r6, r6, r0 */ // 0x80909F70
    r0 = *(0x38 + r6); // lwz @ 0x80909F74
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80909F78
    if (==) goto 0x0x80909f84;
    /* li r7, 1 */ // 0x80909F80
    /* bnelr  */ // 0x80909F88
    /* mulli r0, r5, 0x1c */ // 0x80909F8C
    r5 = *(0x1eec + r3); // lbz @ 0x80909F90
    r7 = r3 + r0; // 0x80909F94
    r0 = *(0x12 + r7); // lbz @ 0x80909F98
    /* bltlr  */ // 0x80909FA0
    r8 = *(0x13 + r7); // lbz @ 0x80909FA4
    if (>=) goto 0x0x80909fc8;
    r6 = r3 + r4; // 0x80909FB0
    r5 = r3 + r8; // 0x80909FB4
    r6 = *(0x1f06 + r6); // lbz @ 0x80909FB8
    r0 = *(0x1f06 + r5); // lbz @ 0x80909FBC
    /* bgelr  */ // 0x80909FC4
    *(0x13 + r7) = r4; // stb @ 0x80909FC8
    /* li r4, 1 */ // 0x80909FCC
    r0 = *(0x1eec + r3); // lbz @ 0x80909FD0
    *(0x210a + r3) = r4; // stb @ 0x80909FD4
    /* bltlr  */ // 0x80909FDC
    /* lis r3, 0 */ // 0x80909FE0
    /* lis r4, 0 */ // 0x80909FE4
    r5 = *(0 + r3); // lwz @ 0x80909FE8
    r3 = *(0 + r4); // lwz @ 0x80909FEC
    r0 = *(0xb70 + r5); // lwz @ 0x80909FF0
    /* bnelr  */ // 0x80909FF8
    r0 = *(0xb9e + r5); // lhz @ 0x80909FFC
    /* bnelr  */ // 0x8090A004
    r4 = *(0x10 + r3); // lwz @ 0x8090A008
    r3 = *(8 + r4); // lwz @ 0x8090A00C
    r0 = r3 + 1; // 0x8090A010
    *(8 + r4) = r0; // stw @ 0x8090A014
    return;
}