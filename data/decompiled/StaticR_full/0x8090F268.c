/* Function at 0x8090F268, size=228 bytes */
/* Stack frame: 0 bytes */

int FUN_8090F268(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    r7 = *(0x1cc + r3); // lwz @ 0x8090F268
    r0 = r7 + 1; // 0x8090F26C
    /* clrlwi r7, r0, 0x1c */ // 0x8090F270
    *(0x1cc + r3) = r7; // stw @ 0x8090F274
    r0 = r0 rlwinm 2; // rlwinm
    /* subf r0, r7, r0 */ // 0x8090F27C
    r7 = r3 + r0; // 0x8090F280
    *(0x19c + r7) = r5; // stb @ 0x8090F284
    r5 = *(0x1cc + r3); // lwz @ 0x8090F288
    /* slwi r0, r5, 2 */ // 0x8090F28C
    /* subf r0, r5, r0 */ // 0x8090F290
    r5 = r3 + r0; // 0x8090F294
    *(0x19d + r5) = r6; // stb @ 0x8090F298
    r9 = *(0x180 + r3); // lwz @ 0x8090F29C
    r0 = *(0x174 + r3); // lwz @ 0x8090F2A0
    r8 = r9 + 1; // 0x8090F2A4
    r7 = *(0x1cc + r3); // lwz @ 0x8090F2A8
    /* subfc r5, r0, r8 */ // 0x8090F2AC
    r0 = *(0x17c + r3); // lwz @ 0x8090F2B0
    /* subfe r5, r5, r5 */ // 0x8090F2B4
    /* slwi r6, r7, 2 */ // 0x8090F2B8
    r8 = r8 & r5; // 0x8090F2BC
    /* subf r5, r7, r6 */ // 0x8090F2C0
    r5 = r3 + r5; // 0x8090F2C4
    r7 = r5 + 0x19c; // 0x8090F2CC
    /* beqlr  */ // 0x8090F2D0
    r6 = *(0x178 + r3); // lwz @ 0x8090F2D4
    /* slwi r0, r9, 4 */ // 0x8090F2D8
    r5 = *(0x188 + r3); // lwz @ 0x8090F2DC
    /* lwzx r0, r6, r0 */ // 0x8090F2E0
    /* slwi r0, r0, 2 */ // 0x8090F2E4
    /* lwzx r5, r5, r0 */ // 0x8090F2E8
    r0 = *(3 + r5); // lbz @ 0x8090F2EC
    /* beqlr  */ // 0x8090F2F4
    *(0x180 + r3) = r8; // stw @ 0x8090F2F8
    /* slwi r0, r8, 4 */ // 0x8090F2FC
    /* li r5, 3 */ // 0x8090F300
    /* stwx r5, r6, r0 */ // 0x8090F304
    r0 = *(0x180 + r3); // lwz @ 0x8090F308
    r5 = *(0x178 + r3); // lwz @ 0x8090F30C
    /* slwi r0, r0, 4 */ // 0x8090F310
    r5 = r5 + r0; // 0x8090F314
    *(4 + r5) = r7; // stw @ 0x8090F318
    r0 = *(0x180 + r3); // lwz @ 0x8090F31C
    r5 = *(0x178 + r3); // lwz @ 0x8090F320
    /* slwi r0, r0, 4 */ // 0x8090F324
    r5 = r5 + r0; // 0x8090F328
    *(8 + r5) = r4; // stw @ 0x8090F32C
    r0 = *(0x180 + r3); // lwz @ 0x8090F330
    r4 = *(0x178 + r3); // lwz @ 0x8090F334
    /* slwi r0, r0, 4 */ // 0x8090F338
    r5 = *(0x174 + r3); // lwz @ 0x8090F33C
    r3 = r4 + r0; // 0x8090F340
    *(0xc + r3) = r5; // stw @ 0x8090F344
    return;
}