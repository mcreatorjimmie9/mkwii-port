/* Function at 0x8090F074, size=500 bytes */
/* Stack frame: 0 bytes */

int FUN_8090F074(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    r8 = *(0x1cc + r3); // lwz @ 0x8090F074
    r0 = r8 + 1; // 0x8090F078
    /* clrlwi r8, r0, 0x1c */ // 0x8090F07C
    *(0x1cc + r3) = r8; // stw @ 0x8090F080
    r0 = r0 rlwinm 2; // rlwinm
    /* subf r0, r8, r0 */ // 0x8090F088
    r8 = r3 + r0; // 0x8090F08C
    *(0x19c + r8) = r5; // stb @ 0x8090F090
    r8 = *(0x1cc + r3); // lwz @ 0x8090F094
    /* slwi r0, r8, 2 */ // 0x8090F098
    /* subf r0, r8, r0 */ // 0x8090F09C
    r8 = r3 + r0; // 0x8090F0A0
    *(0x19d + r8) = r6; // stb @ 0x8090F0A4
    r8 = *(0x1cc + r3); // lwz @ 0x8090F0A8
    /* slwi r0, r8, 2 */ // 0x8090F0AC
    /* subf r0, r8, r0 */ // 0x8090F0B0
    r8 = r3 + r0; // 0x8090F0B4
    *(0x19e + r8) = r7; // stb @ 0x8090F0B8
    r7 = *(0x180 + r3); // lwz @ 0x8090F0BC
    r0 = *(0x174 + r3); // lwz @ 0x8090F0C0
    r9 = *(0x1cc + r3); // lwz @ 0x8090F0C8
    /* subfc r7, r0, r10 */ // 0x8090F0CC
    r0 = *(0x17c + r3); // lwz @ 0x8090F0D0
    /* subfe r7, r7, r7 */ // 0x8090F0D4
    /* slwi r8, r9, 2 */ // 0x8090F0D8
    r10 = r10 & r7; // 0x8090F0DC
    /* subf r7, r9, r8 */ // 0x8090F0E0
    r7 = r3 + r7; // 0x8090F0E4
    r9 = r7 + 0x19c; // 0x8090F0EC
    if (==) goto 0x0x8090f180;
    *(0x180 + r3) = r10; // stw @ 0x8090F0F4
    /* slwi r0, r10, 4 */ // 0x8090F0F8
    r7 = *(0x178 + r3); // lwz @ 0x8090F0FC
    /* li r8, 1 */ // 0x8090F100
    /* stwx r8, r7, r0 */ // 0x8090F104
    r0 = *(0x180 + r3); // lwz @ 0x8090F108
    r7 = *(0x178 + r3); // lwz @ 0x8090F10C
    /* slwi r0, r0, 4 */ // 0x8090F110
    r7 = r7 + r0; // 0x8090F114
    *(4 + r7) = r9; // stw @ 0x8090F118
    r0 = *(0x180 + r3); // lwz @ 0x8090F11C
    r7 = *(0x178 + r3); // lwz @ 0x8090F120
    /* slwi r0, r0, 4 */ // 0x8090F124
    r7 = r7 + r0; // 0x8090F128
    *(8 + r7) = r4; // stw @ 0x8090F12C
    r0 = *(0x180 + r3); // lwz @ 0x8090F130
    r4 = *(0x178 + r3); // lwz @ 0x8090F134
    /* slwi r0, r0, 4 */ // 0x8090F138
    r7 = *(0x174 + r3); // lwz @ 0x8090F13C
    r4 = r4 + r0; // 0x8090F140
    *(0xc + r4) = r7; // stw @ 0x8090F144
    r4 = *(0x17c + r3); // lwz @ 0x8090F148
    /* b 0x8090f174 */ // 0x8090F14C
    r7 = *(0x178 + r3); // lwz @ 0x8090F150
    /* slwi r0, r4, 4 */ // 0x8090F154
    r4 = r4 + 1; // 0x8090F158
    r7 = r7 + r0; // 0x8090F15C
    *(0xc + r7) = r8; // stw @ 0x8090F160
    r0 = *(0x174 + r3); // lwz @ 0x8090F164
    /* subfc r0, r0, r4 */ // 0x8090F168
    /* subfe r0, r0, r0 */ // 0x8090F16C
    r4 = r4 & r0; // 0x8090F170
    r8 = *(0x180 + r3); // lwz @ 0x8090F174
    if (!=) goto 0x0x8090f150;
    r4 = *(0x1cc + r3); // lwz @ 0x8090F180
    r0 = r4 + 1; // 0x8090F184
    /* clrlwi r4, r0, 0x1c */ // 0x8090F188
    *(0x1cc + r3) = r4; // stw @ 0x8090F18C
    r0 = r0 rlwinm 2; // rlwinm
    /* subf r0, r4, r0 */ // 0x8090F194
    r4 = r3 + r0; // 0x8090F198
    *(0x19c + r4) = r5; // stb @ 0x8090F19C
    r4 = *(0x1cc + r3); // lwz @ 0x8090F1A0
    /* slwi r0, r4, 2 */ // 0x8090F1A4
    /* subf r0, r4, r0 */ // 0x8090F1A8
    r4 = r3 + r0; // 0x8090F1AC
    *(0x19d + r4) = r6; // stb @ 0x8090F1B0
    r9 = *(0x180 + r3); // lwz @ 0x8090F1B4
    r0 = *(0x174 + r3); // lwz @ 0x8090F1B8
    r7 = r9 + 1; // 0x8090F1BC
    r6 = *(0x1cc + r3); // lwz @ 0x8090F1C0
    /* subfc r4, r0, r7 */ // 0x8090F1C4
    r0 = *(0x17c + r3); // lwz @ 0x8090F1C8
    /* subfe r4, r4, r4 */ // 0x8090F1CC
    /* slwi r5, r6, 2 */ // 0x8090F1D0
    r8 = r7 & r4; // 0x8090F1D4
    /* subf r4, r6, r5 */ // 0x8090F1D8
    r4 = r3 + r4; // 0x8090F1DC
    r7 = r4 + 0x19c; // 0x8090F1E4
    /* beqlr  */ // 0x8090F1E8
    r6 = *(0x178 + r3); // lwz @ 0x8090F1EC
    /* slwi r0, r9, 4 */ // 0x8090F1F0
    r4 = *(0x188 + r3); // lwz @ 0x8090F1F4
    /* lwzx r0, r6, r0 */ // 0x8090F1F8
    /* slwi r0, r0, 2 */ // 0x8090F1FC
    /* lwzx r4, r4, r0 */ // 0x8090F200
    r0 = *(2 + r4); // lbz @ 0x8090F204
    /* beqlr  */ // 0x8090F20C
    *(0x180 + r3) = r8; // stw @ 0x8090F210
    /* slwi r0, r8, 4 */ // 0x8090F214
    /* li r4, 2 */ // 0x8090F218
    /* li r5, -1 */ // 0x8090F21C
    /* stwx r4, r6, r0 */ // 0x8090F220
    r0 = *(0x180 + r3); // lwz @ 0x8090F224
    r4 = *(0x178 + r3); // lwz @ 0x8090F228
    /* slwi r0, r0, 4 */ // 0x8090F22C
    r4 = r4 + r0; // 0x8090F230
    *(4 + r4) = r7; // stw @ 0x8090F234
    r0 = *(0x180 + r3); // lwz @ 0x8090F238
    r4 = *(0x178 + r3); // lwz @ 0x8090F23C
    /* slwi r0, r0, 4 */ // 0x8090F240
    r4 = r4 + r0; // 0x8090F244
    *(8 + r4) = r5; // stw @ 0x8090F248
    r0 = *(0x180 + r3); // lwz @ 0x8090F24C
    r4 = *(0x178 + r3); // lwz @ 0x8090F250
    /* slwi r0, r0, 4 */ // 0x8090F254
    r5 = *(0x174 + r3); // lwz @ 0x8090F258
    r3 = r4 + r0; // 0x8090F25C
    *(0xc + r3) = r5; // stw @ 0x8090F260
    return;
}