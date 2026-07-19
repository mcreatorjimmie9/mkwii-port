/* Function at 0x806472D8, size=348 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 9 function(s) */

int FUN_806472D8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r6, 0 */ // 0x806472E0
    *(0x24 + r1) = r0; // stw @ 0x806472E4
    /* stmw r26, 8(r1) */ // 0x806472E8
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = *(0 + r6); // lwz @ 0x806472F8
    r3 = *(0 + r3); // lwz @ 0x806472FC
    r3 = *(0 + r3); // lwz @ 0x80647300
    FUN_80694C44(); // bl 0x80694C44
    if (==) goto 0x0x80647360;
    /* li r3, 0x10 */ // 0x80647310
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80647324;
    FUN_808E0180(r3); // bl 0x808E0180
    *(0x1c + r29) = r3; // stw @ 0x80647324
    /* li r3, 0x28 */ // 0x80647328
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8064735c;
    /* lis r4, 0 */ // 0x80647338
    /* li r6, 5 */ // 0x8064733C
    r4 = *(0 + r4); // lwz @ 0x80647340
    /* li r7, 0 */ // 0x80647344
    r4 = *(0x44 + r4); // lwz @ 0x80647348
    r5 = *(0 + r4); // lwz @ 0x8064734C
    r4 = *(4 + r5); // lhz @ 0x80647350
    r5 = *(6 + r5); // lhz @ 0x80647354
    FUN_805F3A04(r7); // bl 0x805F3A04
    *(0x28 + r29) = r3; // stw @ 0x8064735C
    *(0x21 + r29) = r30; // stb @ 0x80647360
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x80647368
    if (!=) goto 0x0x80647390;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r4 = r3;
    /* lis r3, 4 */ // 0x8064737C
    r4 = *(0xc94 + r4); // lwz @ 0x80647380
    /* li r5, 0 */ // 0x80647384
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    *(0x3c + r29) = r3; // stw @ 0x8064738C
    /* lis r3, 0 */ // 0x80647390
    r3 = *(0 + r3); // lwz @ 0x80647394
    r3 = *(0 + r3); // lwz @ 0x80647398
    r0 = *(0 + r3); // lwz @ 0x8064739C
    if (==) goto 0x0x80647430;
    if (>=) goto 0x0x806473d8;
    if (>=) goto 0x0x806473c8;
    if (>=) goto 0x0x80647430;
    if (>=) goto 0x0x80647404;
    /* b 0x80647430 */ // 0x806473C4
    if (==) goto 0x0x80647430;
    if (>=) goto 0x0x80647404;
    /* b 0x8064740c */ // 0x806473D4
    if (==) goto 0x0x80647404;
    if (>=) goto 0x0x806473f0;
    if (>=) goto 0x0x80647430;
    /* b 0x80647404 */ // 0x806473EC
    if (>=) goto 0x0x80647430;
    if (>=) goto 0x0x80647404;
    /* b 0x80647430 */ // 0x80647400
    /* li r0, 1 */ // 0x80647404
    /* b 0x80647434 */ // 0x80647408
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r4, r3, 0x18 */ // 0x80647410
    /* li r3, 2 */ // 0x80647414
    r0 = r4 + -2; // 0x80647418
    /* orc r3, r4, r3 */ // 0x8064741C
    /* srwi r0, r0, 1 */ // 0x80647420
    /* subf r0, r0, r3 */ // 0x80647424
    /* srwi r0, r0, 0x1f */ // 0x80647428
    /* b 0x80647434 */ // 0x8064742C
    /* li r0, 0 */ // 0x80647430
}