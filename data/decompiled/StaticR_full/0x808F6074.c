/* Function at 0x808F6074, size=192 bytes */
/* Stack frame: 0 bytes */

int FUN_808F6074(int r3, int r4, int r5, int r6)
{
    r6 = *(0x9c + r3); // lhz @ 0x808F6074
    if (==) goto 0x0x808f6090;
    if (==) goto 0x0x808f6090;
    if (!=) goto 0x0x808f6098;
    /* li r0, 1 */ // 0x808F6090
    /* b 0x808f609c */ // 0x808F6094
    /* li r0, 0 */ // 0x808F6098
    if (==) goto 0x0x808f60ac;
    /* li r3, -1 */ // 0x808F60A4
    return;
    r0 = *(0x6fb + r3); // lbz @ 0x808F60AC
    /* lis r4, 0 */ // 0x808F60B0
    r5 = r6 rlwinm 2; // rlwinm
    r4 = r4 + 0; // 0x808F60B8
    /* lwzx r4, r4, r5 */ // 0x808F60C0
    if (==) goto 0x0x808f60d4;
    r0 = *(0x11c + r3); // lwz @ 0x808F60C8
    /* slwi r4, r0, 2 */ // 0x808F60CC
    r4 = r4 + 0x188; // 0x808F60D0
    r0 = *(0x6fa + r3); // lbz @ 0x808F60D4
    if (!=) goto 0x0x808f611c;
    /* addis r0, r4, 1 */ // 0x808F60E0
    if (==) goto 0x0x808f611c;
    if (==) goto 0x0x808f6104;
    if (==) goto 0x0x808f6104;
    if (!=) goto 0x0x808f610c;
    /* li r0, 1 */ // 0x808F6104
    /* b 0x808f6110 */ // 0x808F6108
    /* li r0, 0 */ // 0x808F610C
    if (!=) goto 0x0x808f611c;
    r4 = r4 + 1; // 0x808F6118
    /* addis r0, r4, 1 */ // 0x808F611C
    if (==) goto 0x0x808f612c;
    r4 = r4 + 2; // 0x808F6128
    r3 = r4;
    return;
}