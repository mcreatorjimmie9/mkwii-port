/* Function at 0x806E40C0, size=192 bytes */
/* Stack frame: 0 bytes */

int FUN_806E40C0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r5, 0 */ // 0x806E40C0
    r0 = *(0 + r5); // lwz @ 0x806E40C8
    if (<) goto 0x0x806e40e4;
    if (>=) goto 0x0x806e40e4;
    r4 = r0 + r4; // 0x806E40D8
    r6 = *(0x2920 + r4); // lbz @ 0x806E40DC
    /* b 0x806e40e8 */ // 0x806E40E0
    /* li r6, 0xff */ // 0x806E40E4
    /* lis r4, 0 */ // 0x806E40E8
    /* li r0, 1 */ // 0x806E40EC
    r8 = *(0 + r4); // lwz @ 0x806E40F0
    r5 = r0 << r6; // slw
    r0 = *(0x291c + r8); // lwz @ 0x806E40F8
    /* mulli r0, r0, 0x58 */ // 0x806E40FC
    r4 = r8 + r0; // 0x806E4100
    r0 = *(0x48 + r4); // lwz @ 0x806E4104
    /* and. r0, r5, r0 */ // 0x806E4108
    if (==) goto 0x0x806e4178;
    r0 = r6 rlwinm 5; // rlwinm
    r7 = r8 + 0x150; // 0x806E4114
    r4 = r8 + r0; // 0x806E4118
    r5 = r6 rlwinm 2; // rlwinm
    r0 = *(0x27a0 + r4); // lwz @ 0x806E4120
    /* mulli r0, r0, 0x30 */ // 0x806E4124
    r4 = r7 + r0; // 0x806E4128
    /* lwzx r4, r4, r5 */ // 0x806E412C
    r6 = *(4 + r4); // lwz @ 0x806E4130
    r0 = *(8 + r6); // lwz @ 0x806E4134
    if (==) goto 0x0x806e4178;
    /* lis r4, 0 */ // 0x806E4140
    r6 = *(0 + r6); // lwz @ 0x806E4144
    r4 = *(0 + r4); // lwz @ 0x806E4148
    r0 = *(0xb74 + r4); // lwz @ 0x806E414C
    if (==) goto 0x0x806e4170;
    r3 = r3 + r5; // 0x806E4158
    r0 = *(0 + r6); // lwz @ 0x806E415C
    r3 = *(0x198 + r3); // lwz @ 0x806E4160
    /* subf r0, r3, r0 */ // 0x806E4164
    /* bgelr  */ // 0x806E416C
    r3 = *(0 + r6); // lwz @ 0x806E4170
    return;
    /* li r3, 0 */ // 0x806E4178
    return;
}