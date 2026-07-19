/* Function at 0x805D5DE8, size=240 bytes */
/* Stack frame: 0 bytes */

int FUN_805D5DE8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r7, 1 */ // 0x805D5DE8
    r0 = *(0xa + r4); // lbz @ 0x805D5DEC
    r7 = r7 + -0x7340; // 0x805D5DF0
    r5 = r5 * r7; // 0x805D5DF4
    r3 = r3 + r5; // 0x805D5DFC
    r7 = r3 + 8; // 0x805D5E00
    if (==) goto 0x0x805d5ec0;
    /* slwi r8, r6, 3 */ // 0x805D5E08
    r6 = *(4 + r4); // lhz @ 0x805D5E0C
    r3 = r7 + r8; // 0x805D5E10
    /* li r5, 0x63 */ // 0x805D5E14
    r0 = *(0x55c4 + r3); // lhz @ 0x805D5E18
    r0 = r0 | 0x8000; // 0x805D5E20
    *(0x55c4 + r3) = r0; // sth @ 0x805D5E24
    if (>) goto 0x0x805d5e30;
    r5 = r6;
    r0 = *(4 + r4); // lhz @ 0x805D5E30
    r6 = r7 + r8; // 0x805D5E34
    r3 = *(0x55c0 + r6); // lwz @ 0x805D5E38
    r3 = r5 rlwimi 0x19; // rlwimi
    *(0x55c0 + r6) = r3; // stw @ 0x805D5E44
    if (<=) goto 0x0x805d5e54;
    /* li r5, 0x3b */ // 0x805D5E4C
    /* b 0x805d5e58 */ // 0x805D5E50
    r5 = *(6 + r4); // lbz @ 0x805D5E54
    r0 = *(4 + r4); // lhz @ 0x805D5E58
    r3 = *(0x55c0 + r6); // lwz @ 0x805D5E5C
    r3 = r5 rlwimi 0x12; // rlwimi
    *(0x55c0 + r6) = r3; // stw @ 0x805D5E68
    if (<=) goto 0x0x805d5e78;
    /* li r0, 0x3e7 */ // 0x805D5E70
    /* b 0x805d5e7c */ // 0x805D5E74
    r0 = *(8 + r4); // lhz @ 0x805D5E78
    r7 = r7 + r8; // 0x805D5E7C
    r5 = *(0xc + r4); // lwz @ 0x805D5E80
    r6 = *(0x55c0 + r7); // lwz @ 0x805D5E84
    r6 = r0 rlwimi 8; // rlwimi
    *(0x55c0 + r7) = r6; // stw @ 0x805D5E8C
    r0 = *(0x10 + r4); // lwz @ 0x805D5E90
    r3 = *(0x55c4 + r7); // lhz @ 0x805D5E94
    r3 = r5 rlwimi 8; // rlwimi
    *(0x55c4 + r7) = r3; // sth @ 0x805D5E9C
    r6 = r0 rlwimi 2; // rlwimi
    r0 = *(0x14 + r4); // lwz @ 0x805D5EA4
    *(0x55c0 + r7) = r6; // stw @ 0x805D5EA8
    r3 = r0 rlwimi 5; // rlwimi
    r0 = *(0x18 + r4); // lwz @ 0x805D5EB0
    *(0x55c4 + r7) = r3; // sth @ 0x805D5EB4
    *(0x55c6 + r7) = r0; // sth @ 0x805D5EB8
    return;
    /* slwi r0, r6, 3 */ // 0x805D5EC0
    r3 = r7 + r0; // 0x805D5EC4
    r0 = *(0x55c4 + r3); // lhz @ 0x805D5EC8
    r0 = r0 rlwinm 0; // rlwinm
    *(0x55c4 + r3) = r0; // sth @ 0x805D5ED0
    return;
}