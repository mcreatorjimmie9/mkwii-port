/* Function at 0x808263CC, size=96 bytes */
/* Stack frame: 0 bytes */

int FUN_808263CC(int r3, int r4, int r5, int r6, int r7)
{
    if (==) goto 0x0x80826424;
    if (==) goto 0x0x808263f0;
    r0 = *(0 + r5); // lbz @ 0x808263DC
    r7 = *(0 + r4); // lhz @ 0x808263E0
    /* slwi r0, r0, 0xc */ // 0x808263E4
    r0 = r7 | r0; // 0x808263E8
    /* clrlwi r7, r0, 0x10 */ // 0x808263EC
    if (==) goto 0x0x80826400;
    *(0 + r3) = r7; // sth @ 0x808263F8
    /* b 0x80826404 */ // 0x808263FC
    r7 = *(0 + r3); // lhz @ 0x80826400
    r3 = r3 + 2; // 0x80826408
    /* bnelr  */ // 0x8082640C
    /* clrlwi r0, r7, 0x14 */ // 0x80826410
    *(0 + r4) = r0; // sth @ 0x80826414
    r0 = r7 rlwinm 0x14; // rlwinm
    *(0 + r5) = r0; // stb @ 0x8082641C
    return;
    r3 = r3 + 2; // 0x80826424
    return;
}