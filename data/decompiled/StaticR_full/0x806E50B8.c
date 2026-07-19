/* Function at 0x806E50B8, size=684 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r20 */
/* Calls: 1 function(s) */

int FUN_806E50B8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r20 */
    /* stmw r20, 0x10(r1) */ // 0x806E50C4
    r21 = r3;
    /* li r23, 0 */ // 0x806E50CC
    /* lis r29, 0 */ // 0x806E50D0
    r27 = r21;
    /* li r31, 1 */ // 0x806E50D8
    /* lis r30, 0 */ // 0x806E50DC
    /* lis r28, 0 */ // 0x806E50E0
    /* li r20, 2 */ // 0x806E50E4
    r4 = *(0 + r30); // lwz @ 0x806E50E8
    /* clrlwi r0, r23, 0x18 */ // 0x806E50EC
    r24 = r31 << r0; // slw
    r0 = *(0x291c + r4); // lwz @ 0x806E50F4
    /* mulli r0, r0, 0x58 */ // 0x806E50F8
    r3 = r4 + r0; // 0x806E50FC
    r0 = *(0x48 + r3); // lwz @ 0x806E5100
    /* and. r0, r24, r0 */ // 0x806E5104
    if (==) goto 0x0x806e5340;
    r0 = *(0x59 + r3); // lbz @ 0x806E510C
    if (==) goto 0x0x806e5340;
    r26 = r23 rlwinm 5; // rlwinm
    r25 = r23 rlwinm 2; // rlwinm
    r3 = r4 + r26; // 0x806E5120
    r0 = *(0x27a0 + r3); // lwz @ 0x806E5124
    /* mulli r0, r0, 0x30 */ // 0x806E5128
    r0 = r4 + r0; // 0x806E512C
    r3 = r0 + r25; // 0x806E5130
    r3 = *(0x150 + r3); // lwz @ 0x806E5134
    r3 = *(4 + r3); // lwz @ 0x806E5138
    r0 = *(8 + r3); // lwz @ 0x806E513C
    if (==) goto 0x0x806e5308;
    r22 = *(0 + r3); // lwz @ 0x806E5148
    r0 = *(4 + r22); // lwz @ 0x806E514C
    if (==) goto 0x0x806e5164;
    r0 = *(4 + r21); // lwz @ 0x806E5158
    r0 = r0 | r24; // 0x806E515C
    *(4 + r21) = r0; // stw @ 0x806E5160
    r8 = *(0 + r28); // lwz @ 0x806E5164
    r0 = *(0xb74 + r8); // lwz @ 0x806E5168
    if (!=) goto 0x0x806e5180;
    r0 = *(0 + r22); // lwz @ 0x806E5174
    *(0x198 + r27) = r0; // stw @ 0x806E5178
    /* b 0x806e5308 */ // 0x806E517C
    r3 = *(0x198 + r27); // lwz @ 0x806E5180
    r0 = *(0 + r22); // lwz @ 0x806E5184
    /* subf r0, r3, r0 */ // 0x806E5188
    if (>=) goto 0x0x806e51b4;
    r3 = *(0 + r29); // lwz @ 0x806E5194
    /* li r4, 2 */ // 0x806E5198
    FUN_805C5788(r4); // bl 0x805C5788
    if (==) goto 0x0x806e5308;
    r0 = *(0 + r22); // lwz @ 0x806E51A8
    *(0x198 + r27) = r0; // stw @ 0x806E51AC
    /* b 0x806e5308 */ // 0x806E51B0
    /* clrlwi r5, r23, 0x18 */ // 0x806E51B4
    r3 = *(0 + r30); // lwz @ 0x806E51B8
    /* li r7, -1 */ // 0x806E51BC
    /* li r6, 0 */ // 0x806E51C0
    /* mtctr r20 */ // 0x806E51C4
    r4 = r3 + r6; // 0x806E51C8
    r0 = *(0x2920 + r4); // lbz @ 0x806E51CC
    if (!=) goto 0x0x806e51e4;
    /* addic. r7, r7, 1 */ // 0x806E51D8
    if (!=) goto 0x0x806e51e4;
    /* b 0x806e5290 */ // 0x806E51E0
    r6 = r6 + 1; // 0x806E51E4
    r4 = r3 + r6; // 0x806E51E8
    r0 = *(0x2920 + r4); // lbz @ 0x806E51EC
    if (!=) goto 0x0x806e5204;
    /* addic. r7, r7, 1 */ // 0x806E51F8
    if (!=) goto 0x0x806e5204;
    /* b 0x806e5290 */ // 0x806E5200
    r6 = r6 + 1; // 0x806E5204
    r4 = r3 + r6; // 0x806E5208
    r0 = *(0x2920 + r4); // lbz @ 0x806E520C
    if (!=) goto 0x0x806e5224;
    /* addic. r7, r7, 1 */ // 0x806E5218
    if (!=) goto 0x0x806e5224;
    /* b 0x806e5290 */ // 0x806E5220
    r6 = r6 + 1; // 0x806E5224
    r4 = r3 + r6; // 0x806E5228
    r0 = *(0x2920 + r4); // lbz @ 0x806E522C
    if (!=) goto 0x0x806e5244;
    /* addic. r7, r7, 1 */ // 0x806E5238
    if (!=) goto 0x0x806e5244;
    /* b 0x806e5290 */ // 0x806E5240
    r6 = r6 + 1; // 0x806E5244
    r4 = r3 + r6; // 0x806E5248
    r0 = *(0x2920 + r4); // lbz @ 0x806E524C
    if (!=) goto 0x0x806e5264;
    /* addic. r7, r7, 1 */ // 0x806E5258
    if (!=) goto 0x0x806e5264;
    /* b 0x806e5290 */ // 0x806E5260
    r6 = r6 + 1; // 0x806E5264
    r4 = r3 + r6; // 0x806E5268
    r0 = *(0x2920 + r4); // lbz @ 0x806E526C
    if (!=) goto 0x0x806e5284;
    /* addic. r7, r7, 1 */ // 0x806E5278
    if (!=) goto 0x0x806e5284;
    /* b 0x806e5290 */ // 0x806E5280
    r6 = r6 + 1; // 0x806E5284
    if (counter-- != 0) goto 0x0x806e51c8;
    /* li r6, -1 */ // 0x806E528C
    r0 = *(0x24 + r8); // lbz @ 0x806E5290
    if (>=) goto 0x0x806e52f8;
    if (<) goto 0x0x806e52b8;
    if (>=) goto 0x0x806e52b8;
    r4 = r3 + r6; // 0x806E52AC
    r0 = *(0x2920 + r4); // lbz @ 0x806E52B0
    /* b 0x806e52bc */ // 0x806E52B4
    /* li r0, 0xff */ // 0x806E52B8
    r4 = *(0 + r30); // lwz @ 0x806E52BC
    r5 = r31 << r0; // slw
    /* li r7, 0 */ // 0x806E52C4
    r0 = *(0x291c + r4); // lwz @ 0x806E52C8
    /* mulli r0, r0, 0x58 */ // 0x806E52CC
    r4 = r4 + r0; // 0x806E52D0
    r0 = *(0x48 + r4); // lwz @ 0x806E52D4
    /* and. r0, r5, r0 */ // 0x806E52D8
    if (==) goto 0x0x806e52fc;
    r0 = *(0x2930 + r3); // lwz @ 0x806E52E0
    r3 = r31 << r6; // slw
    /* and. r0, r3, r0 */ // 0x806E52E8
    if (!=) goto 0x0x806e52fc;
    /* li r7, 1 */ // 0x806E52F0
    /* b 0x806e52fc */ // 0x806E52F4
    /* li r7, 0 */ // 0x806E52F8
    if (==) goto 0x0x806e5308;
    *(1 + r21) = r31; // stb @ 0x806E5304
    r0 = *(0 + r30); // lwz @ 0x806E5308
    r3 = r0 + r26; // 0x806E530C
    r0 = r25 + r0; // 0x806E5310
    r3 = *(0x27a8 + r3); // lwz @ 0x806E5314
    /* mulli r3, r3, 0x30 */ // 0x806E5318
    r3 = r3 + r0; // 0x806E531C
    r3 = *(0x150 + r3); // lwz @ 0x806E5320
    r3 = *(0xc + r3); // lwz @ 0x806E5324
    r0 = *(8 + r3); // lwz @ 0x806E5328
    if (==) goto 0x0x806e5340;
    r0 = *(8 + r21); // lwz @ 0x806E5334
    r0 = r0 | r24; // 0x806E5338
    *(8 + r21) = r0; // stw @ 0x806E533C
    r23 = r23 + 1; // 0x806E5340
    r27 = r27 + 4; // 0x806E5344
    if (<) goto 0x0x806e50e8;
    r0 = *(0x44 + r1); // lwz @ 0x806E5354
    return;
}