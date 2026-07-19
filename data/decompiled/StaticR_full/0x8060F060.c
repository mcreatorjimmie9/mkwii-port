/* Function at 0x8060F060, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8060F060(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8060F074
    r4 = *(0 + r3); // lwz @ 0x8060F078
    r4 = *(4 + r4); // lwz @ 0x8060F07C
    r0 = *(8 + r4); // lwz @ 0x8060F080
    /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x8060F084
    if (==) goto 0x0x8060f0cc;
    r4 = *(0x1a8 + r3); // lha @ 0x8060F08C
    /* li r30, 0 */ // 0x8060F090
    r0 = r4 + -1; // 0x8060F094
    *(0x1a8 + r3) = r0; // sth @ 0x8060F098
    /* extsh. r0, r0 */ // 0x8060F09C
    if (>) goto 0x0x8060f0bc;
    r3 = *(0 + r3); // lwz @ 0x8060F0A4
    /* li r30, 1 */ // 0x8060F0A8
    r3 = *(4 + r3); // lwz @ 0x8060F0AC
    r0 = *(8 + r3); // lwz @ 0x8060F0B0
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x8060F0B8
    r3 = r31;
    FUN_8061E908(r3); // bl 0x8061E908
    r4 = r30;
    FUN_805FA020(r3, r4); // bl 0x805FA020
    /* lis r3, 0 */ // 0x8060F0CC
    r3 = *(0 + r3); // lwz @ 0x8060F0D0
    r0 = *(0xb78 + r3); // lwz @ 0x8060F0D4
    if (!=) goto 0x0x8060f190;
    r5 = *(0 + r31); // lwz @ 0x8060F0E0
    r3 = *(4 + r5); // lwz @ 0x8060F0E4
    r4 = *(0x14 + r3); // lwz @ 0x8060F0E8
    /* rlwinm. r0, r4, 0, 0xf, 0xf */ // 0x8060F0EC
    if (==) goto 0x0x8060f190;
    /* rlwinm. r0, r4, 0, 0x1c, 0x1c */ // 0x8060F0F4
    if (!=) goto 0x0x8060f190;
    r0 = *(4 + r3); // lwz @ 0x8060F0FC
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060F100
    if (!=) goto 0x0x8060f190;
    r0 = *(0xc + r3); // lwz @ 0x8060F108
    /* rlwinm. r0, r0, 0, 0x11, 0x12 */ // 0x8060F10C
    if (!=) goto 0x0x8060f190;
    r4 = *(0x1ac + r31); // lha @ 0x8060F114
    /* lis r3, 0 */ // 0x8060F118
    r0 = r4 + 1; // 0x8060F11C
    *(0x1ac + r31) = r0; // sth @ 0x8060F120
    /* extsh r4, r0 */ // 0x8060F124
    r0 = *(0 + r3); // lha @ 0x8060F128
    if (<) goto 0x0x8060f190;
    r3 = *(4 + r5); // lwz @ 0x8060F134
    r0 = *(0xc + r3); // lwz @ 0x8060F138
    /* rlwinm. r0, r0, 0, 0xc, 0xd */ // 0x8060F13C
    if (!=) goto 0x0x8060f154;
    r3 = *(4 + r5); // lwz @ 0x8060F144
    r0 = *(0xc + r3); // lwz @ 0x8060F148
    r0 = r0 | 4; // 0x8060F14C
    *(0xc + r3) = r0; // stw @ 0x8060F150
    r3 = r31;
    /* li r4, 6 */ // 0x8060F158
    FUN_8061F070(r3, r4); // bl 0x8061F070
    /* li r0, 0 */ // 0x8060F160
    *(0x1ac + r31) = r0; // sth @ 0x8060F164
    r3 = *(0 + r31); // lwz @ 0x8060F168
    r3 = *(4 + r3); // lwz @ 0x8060F16C
    r0 = *(0x14 + r3); // lwz @ 0x8060F170
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r3) = r0; // stw @ 0x8060F178
    r3 = *(0 + r31); // lwz @ 0x8060F17C
    r3 = *(4 + r3); // lwz @ 0x8060F180
    r0 = *(0x14 + r3); // lwz @ 0x8060F184
    r0 = r0 | 2; // 0x8060F188
    *(0x14 + r3) = r0; // stw @ 0x8060F18C
    r0 = *(0x14 + r1); // lwz @ 0x8060F190
    r31 = *(0xc + r1); // lwz @ 0x8060F194
    r30 = *(8 + r1); // lwz @ 0x8060F198
    return;
}