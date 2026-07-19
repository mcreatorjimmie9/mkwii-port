/* Function at 0x8081C04C, size=692 bytes */
/* Stack frame: 80 bytes */

int FUN_8081C04C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -80(r1) */
    /* lis r6, 0 */ // 0x8081C050
    r6 = r6 + 0; // 0x8081C054
    /* li r4, 1 */ // 0x8081C058
    r3 = *(4 + r6); // lwz @ 0x8081C05C
    /* lis r5, 0 */ // 0x8081C060
    /* li r0, 0x13 */ // 0x8081C064
    *(8 + r1) = r4; // stw @ 0x8081C068
    r3 = r3 + -1; // 0x8081C06C
    r5 = r5 + 0; // 0x8081C070
    *(0x10 + r6) = r3; // stw @ 0x8081C074
    r3 = *(0x78 + r6); // lwz @ 0x8081C07C
    *(0xc + r1) = r4; // stw @ 0x8081C080
    r3 = r3 + -1; // 0x8081C084
    *(0x84 + r6) = r3; // stw @ 0x8081C088
    r3 = *(0xec + r6); // lwz @ 0x8081C08C
    *(0x10 + r1) = r4; // stw @ 0x8081C090
    r3 = r3 + -1; // 0x8081C094
    *(0xf8 + r6) = r3; // stw @ 0x8081C098
    r3 = *(0x160 + r6); // lwz @ 0x8081C09C
    *(0x14 + r1) = r4; // stw @ 0x8081C0A0
    r3 = r3 + -1; // 0x8081C0A4
    *(0x16c + r6) = r3; // stw @ 0x8081C0A8
    r3 = *(0x1d4 + r6); // lwz @ 0x8081C0AC
    *(0x18 + r1) = r4; // stw @ 0x8081C0B0
    r3 = r3 + -1; // 0x8081C0B4
    *(0x1e0 + r6) = r3; // stw @ 0x8081C0B8
    r3 = *(0x248 + r6); // lwz @ 0x8081C0BC
    *(0x1c + r1) = r4; // stw @ 0x8081C0C0
    r3 = r3 + -1; // 0x8081C0C4
    *(0x254 + r6) = r3; // stw @ 0x8081C0C8
    r3 = *(0x2bc + r6); // lwz @ 0x8081C0CC
    *(0x20 + r1) = r4; // stw @ 0x8081C0D0
    r3 = r3 + -1; // 0x8081C0D4
    *(0x2c8 + r6) = r3; // stw @ 0x8081C0D8
    r3 = *(0x330 + r6); // lwz @ 0x8081C0DC
    *(0x24 + r1) = r4; // stw @ 0x8081C0E0
    r3 = r3 + -1; // 0x8081C0E4
    *(0x33c + r6) = r3; // stw @ 0x8081C0E8
    r3 = *(0x3a4 + r6); // lwz @ 0x8081C0EC
    *(0x28 + r1) = r4; // stw @ 0x8081C0F0
    r3 = r3 + -1; // 0x8081C0F4
    *(0x3b0 + r6) = r3; // stw @ 0x8081C0F8
    r3 = *(0x418 + r6); // lwz @ 0x8081C0FC
    *(0x2c + r1) = r4; // stw @ 0x8081C100
    r3 = r3 + -1; // 0x8081C104
    *(0x424 + r6) = r3; // stw @ 0x8081C108
    r3 = *(0x48c + r6); // lwz @ 0x8081C10C
    *(0x30 + r1) = r4; // stw @ 0x8081C110
    r3 = r3 + -1; // 0x8081C114
    *(0x498 + r6) = r3; // stw @ 0x8081C118
    r3 = *(0x500 + r6); // lwz @ 0x8081C11C
    *(0x34 + r1) = r4; // stw @ 0x8081C120
    r3 = r3 + -1; // 0x8081C124
    *(0x50c + r6) = r3; // stw @ 0x8081C128
    r3 = *(0x574 + r6); // lwz @ 0x8081C12C
    *(0x38 + r1) = r4; // stw @ 0x8081C130
    r3 = r3 + -1; // 0x8081C134
    *(0x580 + r6) = r3; // stw @ 0x8081C138
    r3 = *(0x5e8 + r6); // lwz @ 0x8081C13C
    *(0x3c + r1) = r4; // stw @ 0x8081C140
    r3 = r3 + -1; // 0x8081C144
    *(0x5f4 + r6) = r3; // stw @ 0x8081C148
    r3 = *(0x65c + r6); // lwz @ 0x8081C14C
    *(0x40 + r1) = r4; // stw @ 0x8081C150
    r3 = r3 + -1; // 0x8081C154
    *(0x668 + r6) = r3; // stw @ 0x8081C158
    /* mtctr r0 */ // 0x8081C15C
    r0 = *(0 + r5); // lbz @ 0x8081C160
    if (==) goto 0x0x8081c188;
    r0 = *(4 + r5); // lwz @ 0x8081C16C
    r4 = *(8 + r5); // lwz @ 0x8081C170
    /* slwi r3, r0, 2 */ // 0x8081C174
    /* lwzx r0, r7, r3 */ // 0x8081C178
    if (>=) goto 0x0x8081c188;
    /* stwx r4, r7, r3 */ // 0x8081C184
    r5 = r5 + 0x1c; // 0x8081C188
    if (counter-- != 0) goto 0x0x8081c160;
    /* lis r8, 0 */ // 0x8081C190
    /* li r0, 3 */ // 0x8081C194
    r8 = r8 + 0; // 0x8081C19C
    /* mtctr r0 */ // 0x8081C1A0
    r3 = *(0x10 + r8); // lwz @ 0x8081C1A4
    r0 = *(0 + r7); // lwz @ 0x8081C1A8
    r5 = *(4 + r7); // lwz @ 0x8081C1AC
    r0 = r3 + r0; // 0x8081C1B0
    *(0x10 + r8) = r0; // stw @ 0x8081C1B4
    r4 = *(8 + r7); // lwz @ 0x8081C1B8
    *(0xc + r8) = r0; // stw @ 0x8081C1BC
    r3 = *(0xc + r7); // lwz @ 0x8081C1C0
    r6 = *(0x84 + r8); // lwz @ 0x8081C1C4
    r0 = *(0x10 + r7); // lwz @ 0x8081C1C8
    r7 = r7 + 0x14; // 0x8081C1CC
    r5 = r6 + r5; // 0x8081C1D0
    *(0x84 + r8) = r5; // stw @ 0x8081C1D4
    *(0x80 + r8) = r5; // stw @ 0x8081C1D8
    r5 = *(0xf8 + r8); // lwz @ 0x8081C1DC
    r4 = r5 + r4; // 0x8081C1E0
    *(0xf8 + r8) = r4; // stw @ 0x8081C1E4
    *(0xf4 + r8) = r4; // stw @ 0x8081C1E8
    r4 = *(0x16c + r8); // lwz @ 0x8081C1EC
    r3 = r4 + r3; // 0x8081C1F0
    *(0x16c + r8) = r3; // stw @ 0x8081C1F4
    *(0x168 + r8) = r3; // stw @ 0x8081C1F8
    r3 = *(0x1e0 + r8); // lwz @ 0x8081C1FC
    r0 = r3 + r0; // 0x8081C200
    *(0x1e0 + r8) = r0; // stw @ 0x8081C204
    *(0x1dc + r8) = r0; // stw @ 0x8081C208
    r8 = r8 + 0x244; // 0x8081C20C
    if (counter-- != 0) goto 0x0x8081c1a4;
    /* lis r3, 0 */ // 0x8081C214
    r0 = *(0 + r3); // lbz @ 0x8081C218
    if (==) goto 0x0x8081c2f8;
    /* lis r5, 0 */ // 0x8081C224
    /* li r0, 3 */ // 0x8081C228
    r5 = r5 + 0; // 0x8081C22C
    /* li r6, 0 */ // 0x8081C230
    /* mtctr r0 */ // 0x8081C234
    r4 = *(0xc + r5); // lwz @ 0x8081C238
    if (!=) goto 0x0x8081c25c;
    r0 = r6 + -9; // 0x8081C244
    /* cntlzw r0, r0 */ // 0x8081C248
    /* srwi r3, r0, 5 */ // 0x8081C24C
    r0 = r3 + 1; // 0x8081C250
    r0 = r4 + r0; // 0x8081C254
    *(0xc + r5) = r0; // stw @ 0x8081C258
    r4 = *(0x80 + r5); // lwz @ 0x8081C25C
    if (!=) goto 0x0x8081c280;
    r0 = r6 + -8; // 0x8081C268
    /* cntlzw r0, r0 */ // 0x8081C26C
    /* srwi r3, r0, 5 */ // 0x8081C270
    r0 = r3 + 1; // 0x8081C274
    r0 = r4 + r0; // 0x8081C278
    *(0x80 + r5) = r0; // stw @ 0x8081C27C
    r4 = *(0xf4 + r5); // lwz @ 0x8081C280
    if (!=) goto 0x0x8081c2a4;
    r0 = r6 + -7; // 0x8081C28C
    /* cntlzw r0, r0 */ // 0x8081C290
    /* srwi r3, r0, 5 */ // 0x8081C294
    r0 = r3 + 1; // 0x8081C298
    r0 = r4 + r0; // 0x8081C29C
    *(0xf4 + r5) = r0; // stw @ 0x8081C2A0
    r4 = *(0x168 + r5); // lwz @ 0x8081C2A4
    if (!=) goto 0x0x8081c2c8;
    r0 = r6 + -6; // 0x8081C2B0
    /* cntlzw r0, r0 */ // 0x8081C2B4
    /* srwi r3, r0, 5 */ // 0x8081C2B8
    r0 = r3 + 1; // 0x8081C2BC
    r0 = r4 + r0; // 0x8081C2C0
    *(0x168 + r5) = r0; // stw @ 0x8081C2C4
    r4 = *(0x1dc + r5); // lwz @ 0x8081C2C8
    if (!=) goto 0x0x8081c2ec;
    r0 = r6 + -5; // 0x8081C2D4
    /* cntlzw r0, r0 */ // 0x8081C2D8
    /* srwi r3, r0, 5 */ // 0x8081C2DC
    r0 = r3 + 1; // 0x8081C2E0
    r0 = r4 + r0; // 0x8081C2E4
    *(0x1dc + r5) = r0; // stw @ 0x8081C2E8
    r5 = r5 + 0x244; // 0x8081C2EC
    r6 = r6 + 5; // 0x8081C2F0
    if (counter-- != 0) goto 0x0x8081c238;
    return;
}