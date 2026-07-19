/* Function at 0x8066E138, size=264 bytes */
/* Stack frame: 0 bytes */

void FUN_8066E138(int r3, int r4, int r5)
{
    r0 = *(8 + r3); // lwz @ 0x8066E138
    /* mulli r5, r4, 0x24 */ // 0x8066E13C
    if (==) goto 0x0x8066e160;
    r4 = r5 + r0; // 0x8066E148
    r0 = *(0x20 + r4); // lbz @ 0x8066E14C
    if (!=) goto 0x0x8066e160;
    /* li r3, 0 */ // 0x8066E158
    return;
    r0 = *(0xc + r3); // lwz @ 0x8066E160
    if (==) goto 0x0x8066e184;
    r4 = r5 + r0; // 0x8066E16C
    r0 = *(0x20 + r4); // lbz @ 0x8066E170
    if (!=) goto 0x0x8066e184;
    /* li r3, 0 */ // 0x8066E17C
    return;
    r0 = *(0x10 + r3); // lwz @ 0x8066E184
    if (==) goto 0x0x8066e1a8;
    r4 = r5 + r0; // 0x8066E190
    r0 = *(0x20 + r4); // lbz @ 0x8066E194
    if (!=) goto 0x0x8066e1a8;
    /* li r3, 0 */ // 0x8066E1A0
    return;
    r0 = *(0x14 + r3); // lwz @ 0x8066E1A8
    if (==) goto 0x0x8066e1cc;
    r4 = r5 + r0; // 0x8066E1B4
    r0 = *(0x20 + r4); // lbz @ 0x8066E1B8
    if (!=) goto 0x0x8066e1cc;
    /* li r3, 0 */ // 0x8066E1C4
    return;
    r0 = *(0x18 + r3); // lwz @ 0x8066E1CC
    if (==) goto 0x0x8066e1f0;
    r4 = r5 + r0; // 0x8066E1D8
    r0 = *(0x20 + r4); // lbz @ 0x8066E1DC
    if (!=) goto 0x0x8066e1f0;
    /* li r3, 0 */ // 0x8066E1E8
    return;
    r0 = *(0x1c + r3); // lwz @ 0x8066E1F0
    if (==) goto 0x0x8066e214;
    r4 = r5 + r0; // 0x8066E1FC
    r0 = *(0x20 + r4); // lbz @ 0x8066E200
    if (!=) goto 0x0x8066e214;
    /* li r3, 0 */ // 0x8066E20C
    return;
    r0 = *(0x20 + r3); // lwz @ 0x8066E214
    if (==) goto 0x0x8066e238;
    r4 = r5 + r0; // 0x8066E220
    r0 = *(0x20 + r4); // lbz @ 0x8066E224
    if (!=) goto 0x0x8066e238;
    /* li r3, 0 */ // 0x8066E230
    return;
    /* li r3, 1 */ // 0x8066E238
    return;
}