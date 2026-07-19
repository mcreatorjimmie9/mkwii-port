/* Function at 0x806EE198, size=424 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_806EE198(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 6 */ // 0x806EE19C
    /* li r4, 0 */ // 0x806EE1A0
    /* li r12, 0 */ // 0x806EE1A4
    *(0xc + r1) = r31; // stw @ 0x806EE1A8
    /* lis r7, 0 */ // 0x806EE1AC
    /* li r9, 1 */ // 0x806EE1B0
    /* mtctr r0 */ // 0x806EE1B4
    r5 = *(0 + r7); // lwz @ 0x806EE1B8
    /* clrlwi r8, r12, 0x18 */ // 0x806EE1BC
    r6 = r9 << r8; // slw
    r0 = *(0x291c + r5); // lwz @ 0x806EE1C4
    /* mulli r0, r0, 0x58 */ // 0x806EE1C8
    r5 = r5 + r0; // 0x806EE1CC
    r0 = *(0x48 + r5); // lwz @ 0x806EE1D0
    /* and. r0, r6, r0 */ // 0x806EE1D4
    if (==) goto 0x0x806ee230;
    r10 = r12 rlwinm 2; // rlwinm
    /* li r31, 0 */ // 0x806EE1E0
    /* b 0x806ee1f8 */ // 0x806EE1E4
    r5 = r3 + r4; // 0x806EE1E8
    r4 = r4 + 1; // 0x806EE1EC
    *(0x30 + r5) = r12; // stb @ 0x806EE1F0
    r31 = r31 + 1; // 0x806EE1F4
    r11 = *(0 + r7); // lwz @ 0x806EE1F8
    r0 = *(0x291c + r11); // lwz @ 0x806EE1FC
    /* mulli r6, r0, 0x58 */ // 0x806EE200
    r5 = r11 + r6; // 0x806EE204
    r0 = *(0x59 + r5); // lbz @ 0x806EE208
    if (==) goto 0x0x806ee224;
    r0 = r10 + r11; // 0x806EE214
    r5 = r6 + r0; // 0x806EE218
    r0 = *(0x5b + r5); // lbz @ 0x806EE21C
    /* b 0x806ee228 */ // 0x806EE220
    r0 = *(0x58 + r5); // lbz @ 0x806EE224
    if (<) goto 0x0x806ee1e8;
    r5 = *(0 + r7); // lwz @ 0x806EE230
    /* clrlwi r8, r12, 0x18 */ // 0x806EE238
    r0 = *(0x291c + r5); // lwz @ 0x806EE23C
    r6 = r9 << r8; // slw
    /* mulli r0, r0, 0x58 */ // 0x806EE244
    r5 = r5 + r0; // 0x806EE248
    r0 = *(0x48 + r5); // lwz @ 0x806EE24C
    /* and. r0, r6, r0 */ // 0x806EE250
    if (==) goto 0x0x806ee2ac;
    r10 = r12 rlwinm 2; // rlwinm
    /* li r31, 0 */ // 0x806EE25C
    /* b 0x806ee274 */ // 0x806EE260
    r5 = r3 + r4; // 0x806EE264
    r4 = r4 + 1; // 0x806EE268
    *(0x30 + r5) = r12; // stb @ 0x806EE26C
    r31 = r31 + 1; // 0x806EE270
    r11 = *(0 + r7); // lwz @ 0x806EE274
    r0 = *(0x291c + r11); // lwz @ 0x806EE278
    /* mulli r6, r0, 0x58 */ // 0x806EE27C
    r5 = r11 + r6; // 0x806EE280
    r0 = *(0x59 + r5); // lbz @ 0x806EE284
    if (==) goto 0x0x806ee2a0;
    r0 = r10 + r11; // 0x806EE290
    r5 = r6 + r0; // 0x806EE294
    r0 = *(0x5b + r5); // lbz @ 0x806EE298
    /* b 0x806ee2a4 */ // 0x806EE29C
    r0 = *(0x58 + r5); // lbz @ 0x806EE2A0
    if (<) goto 0x0x806ee264;
    if (counter-- != 0) goto 0x0x806ee1b8;
    /* cmplwi cr1, r4, 0xc */
    if (>=) goto 0x0x806ee334;
    /* subfic r0, r4, 0xc */ // 0x806EE2BC
    if (<=) goto 0x0x806ee310;
    if (>) goto 0x0x806ee310;
    /* subfic r0, r4, 0xb */ // 0x806EE2CC
    /* li r5, 0xff */ // 0x806EE2D0
    /* srwi r0, r0, 3 */ // 0x806EE2D4
    /* mtctr r0 */ // 0x806EE2D8
    if (>=) goto 0x0x806ee310;
    r6 = r3 + r4; // 0x806EE2E4
    r4 = r4 + 8; // 0x806EE2E8
    *(0x30 + r6) = r5; // stb @ 0x806EE2EC
    *(0x31 + r6) = r5; // stb @ 0x806EE2F0
    *(0x32 + r6) = r5; // stb @ 0x806EE2F4
    *(0x33 + r6) = r5; // stb @ 0x806EE2F8
    *(0x34 + r6) = r5; // stb @ 0x806EE2FC
    *(0x35 + r6) = r5; // stb @ 0x806EE300
    *(0x36 + r6) = r5; // stb @ 0x806EE304
    *(0x37 + r6) = r5; // stb @ 0x806EE308
    if (counter-- != 0) goto 0x0x806ee2e4;
    /* subfic r0, r4, 0xc */ // 0x806EE310
    /* li r6, 0xff */ // 0x806EE314
    /* mtctr r0 */ // 0x806EE318
    if (>=) goto 0x0x806ee334;
    r5 = r3 + r4; // 0x806EE324
    r4 = r4 + 1; // 0x806EE328
    *(0x30 + r5) = r6; // stb @ 0x806EE32C
    if (counter-- != 0) goto 0x0x806ee324;
    r31 = *(0xc + r1); // lwz @ 0x806EE334
    return;
}