/* Function at 0x8069A1CC, size=420 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8069A1CC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8069A1E8
    r28 = r3;
    r5 = *(0x64 + r3); // lwz @ 0x8069A1F0
    r3 = *(0xc + r5); // lwz @ 0x8069A1F4
    r30 = *(0x38 + r3); // lwz @ 0x8069A1F8
    if (!=) goto 0x0x8069a20c;
    /* li r30, 0 */ // 0x8069A204
    /* b 0x8069a260 */ // 0x8069A208
    /* lis r31, 0 */ // 0x8069A20C
    r31 = r31 + 0; // 0x8069A210
    if (==) goto 0x0x8069a25c;
    r12 = *(0 + r30); // lwz @ 0x8069A218
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x8069A220
    /* mtctr r12 */ // 0x8069A224
    /* bctrl  */ // 0x8069A228
    /* b 0x8069a244 */ // 0x8069A22C
    if (!=) goto 0x0x8069a240;
    /* li r0, 1 */ // 0x8069A238
    /* b 0x8069a250 */ // 0x8069A23C
    r3 = *(0 + r3); // lwz @ 0x8069A240
    if (!=) goto 0x0x8069a230;
    /* li r0, 0 */ // 0x8069A24C
    if (==) goto 0x0x8069a25c;
    /* b 0x8069a260 */ // 0x8069A258
    /* li r30, 0 */ // 0x8069A25C
    /* li r4, 0 */ // 0x8069A260
    r0 = r28 + 0x174; // 0x8069A264
    if (==) goto 0x0x8069a284;
    r3 = *(0x54 + r30); // lwz @ 0x8069A270
    if (!=) goto 0x0x8069a284;
    /* li r4, 1 */ // 0x8069A27C
    /* b 0x8069a300 */ // 0x8069A280
    /* li r3, 1 */ // 0x8069A284
    if (==) goto 0x0x8069a2a4;
    r3 = *(0xb0 + r30); // lwz @ 0x8069A290
    if (!=) goto 0x0x8069a2a4;
    /* li r4, 1 */ // 0x8069A29C
    /* b 0x8069a300 */ // 0x8069A2A0
    /* li r3, 2 */ // 0x8069A2A4
    if (==) goto 0x0x8069a2c4;
    r3 = *(0x10c + r30); // lwz @ 0x8069A2B0
    if (!=) goto 0x0x8069a2c4;
    /* li r4, 1 */ // 0x8069A2BC
    /* b 0x8069a300 */ // 0x8069A2C0
    /* li r3, 3 */ // 0x8069A2C4
    if (==) goto 0x0x8069a2e4;
    r3 = *(0x168 + r30); // lwz @ 0x8069A2D0
    if (!=) goto 0x0x8069a2e4;
    /* li r4, 1 */ // 0x8069A2DC
    /* b 0x8069a300 */ // 0x8069A2E0
    /* li r3, 4 */ // 0x8069A2E4
    if (==) goto 0x0x8069a300;
    r3 = *(0x1c4 + r30); // lwz @ 0x8069A2F0
    if (!=) goto 0x0x8069a300;
    /* li r4, 1 */ // 0x8069A2FC
    if (!=) goto 0x0x8069a394;
    r3 = r28 + 0x98; // 0x8069A308
    /* li r4, 1 */ // 0x8069A30C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069A314
    r30 = r3;
    if (==) goto 0x0x8069a330;
    if (==) goto 0x0x8069a384;
    /* b 0x8069a394 */ // 0x8069A32C
    r3 = *(0 + r3); // lwz @ 0x8069A330
    /* slwi r0, r0, 4 */ // 0x8069A334
    /* lwzx r3, r3, r0 */ // 0x8069A338
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069A340
    /* lis r0, 0x4330 */ // 0x8069A344
    *(0xc + r1) = r4; // stw @ 0x8069A348
    /* lis r3, 0 */ // 0x8069A34C
    /* lfd f3, 0(r3) */ // 0x8069A350
    /* lis r5, 0 */ // 0x8069A354
    *(8 + r1) = r0; // stw @ 0x8069A358
    r3 = r30;
    /* lfs f1, 0x3c(r30) */ // 0x8069A360
    /* li r4, 3 */ // 0x8069A364
    /* lfd f2, 8(r1) */ // 0x8069A368
    /* lfs f0, 0(r5) */ // 0x8069A36C
}