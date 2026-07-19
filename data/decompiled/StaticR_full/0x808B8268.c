/* Function at 0x808B8268, size=500 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r22 */
/* Calls: 11 function(s) */

int FUN_808B8268(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -144(r1) */
    /* saved r22 */
    /* stmw r22, 0x68(r1) */ // 0x808B8274
    FUN_808CFA50(); // bl 0x808CFA50
    r24 = r3;
    FUN_808CF954(); // bl 0x808CF954
    /* li r0, 0 */ // 0x808B8284
    /* clrlwi r4, r3, 0x18 */ // 0x808B8288
    /* clrlwi r3, r24, 0x18 */ // 0x808B828C
    *(8 + r1) = r0; // stw @ 0x808B8290
    /* subf r27, r3, r4 */ // 0x808B8294
    *(0xc + r1) = r0; // stw @ 0x808B8298
    *(0x10 + r1) = r0; // stw @ 0x808B82A0
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* clrlwi r26, r24, 0x18 */ // 0x808B82B0
    /* li r28, 0 */ // 0x808B82B4
    /* lis r23, 0 */ // 0x808B82B8
    /* b 0x808b82f4 */ // 0x808B82BC
    /* clrlwi r0, r28, 0x18 */ // 0x808B82C0
    r3 = *(0 + r23); // lwz @ 0x808B82C4
    /* mulli r0, r0, 0xf0 */ // 0x808B82C8
    r3 = r3 + r0; // 0x808B82CC
    r3 = *(0xc24 + r3); // lwz @ 0x808B82D0
    *(0 + r25) = r3; // stw @ 0x808B82D4
    FUN_8089E030(); // bl 0x8089E030
    /* slwi r4, r3, 2 */ // 0x808B82DC
    r25 = r25 + 4; // 0x808B82E0
    /* lwzx r3, r22, r4 */ // 0x808B82E4
    r28 = r28 + 1; // 0x808B82E8
    r0 = r3 + 1; // 0x808B82EC
    /* stwx r0, r22, r4 */ // 0x808B82F0
    if (<) goto 0x0x808b82c0;
    /* lis r3, 0x5555 */ // 0x808B82FC
    r4 = r27 + r26; // 0x808B8300
    r0 = r24 rlwinm 2; // rlwinm
    r28 = r28 + r0; // 0x808B830C
    r30 = r3 + 0x5556; // 0x808B8318
    /* clrlwi r24, r4, 0x18 */ // 0x808B831C
    /* lis r23, 0 */ // 0x808B8320
    /* b 0x808b8434 */ // 0x808B8324
    /* li r4, 0x18 */ // 0x808B832C
    FUN_805E364C(r3, r4); // bl 0x805E364C
    *(0 + r28) = r3; // stw @ 0x808B8334
    r3 = *(0 + r28); // lwz @ 0x808B8338
    FUN_8089E030(r3, r4); // bl 0x8089E030
    r22 = r3;
    r3 = *(0 + r28); // lwz @ 0x808B8344
    /* li r25, 1 */ // 0x808B8348
    FUN_8089E314(); // bl 0x8089E314
    if (!=) goto 0x0x808b835c;
    /* li r25, 0 */ // 0x808B8358
    /* slwi r29, r22, 2 */ // 0x808B835C
    FUN_808CF954(); // bl 0x808CF954
    /* clrlwi r4, r3, 0x18 */ // 0x808B8364
    /* mulhw r3, r30, r4 */ // 0x808B8368
    /* srwi r0, r3, 0x1f */ // 0x808B836C
    r0 = r3 + r0; // 0x808B8370
    /* mulli r0, r0, 3 */ // 0x808B8374
    /* subf r22, r0, r4 */ // 0x808B8378
    FUN_808CF954(); // bl 0x808CF954
    /* clrlwi r3, r3, 0x18 */ // 0x808B8380
    /* lwzx r0, r27, r29 */ // 0x808B8384
    r3 = r3 + r22; // 0x808B8388
    /* mulhw r4, r30, r3 */ // 0x808B838C
    /* srwi r3, r4, 0x1f */ // 0x808B8390
    r3 = r4 + r3; // 0x808B8394
    if (<) goto 0x0x808b83a4;
    /* li r25, 0 */ // 0x808B83A0
    /* cntlzw r0, r25 */ // 0x808B83A4
    r3 = *(0 + r28); // lwz @ 0x808B83A8
    /* srwi r4, r0, 5 */ // 0x808B83AC
    /* li r5, 0 */ // 0x808B83B0
    /* b 0x808b83d4 */ // 0x808B83B4
    r0 = r5 rlwinm 2; // rlwinm
    /* lwzx r0, r31, r0 */ // 0x808B83BC
    if (!=) goto 0x0x808b83d0;
    /* li r25, 0 */ // 0x808B83C8
    /* b 0x808b83e8 */ // 0x808B83CC
    r5 = r5 + 1; // 0x808B83D0
    if (!=) goto 0x0x808b83e8;
    /* clrlwi r0, r5, 0x18 */ // 0x808B83DC
    if (<) goto 0x0x808b83b8;
    if (==) goto 0x0x808b8418;
    /* clrlwi r0, r26, 0x18 */ // 0x808B83F0
    /* lwzx r3, r27, r29 */ // 0x808B83F4
    /* mulli r4, r0, 0xf0 */ // 0x808B83F8
    r5 = *(0 + r23); // lwz @ 0x808B83FC
    r0 = r3 + 1; // 0x808B8400
    r6 = *(0 + r28); // lwz @ 0x808B8404
    /* stwx r0, r27, r29 */ // 0x808B8408
    r3 = r5 + r4; // 0x808B840C
    *(0xc24 + r3) = r6; // stw @ 0x808B8410
    /* b 0x808b842c */ // 0x808B8414
    /* li r4, 0x18 */ // 0x808B841C
    FUN_805E364C(r3, r4); // bl 0x805E364C
    *(0 + r28) = r3; // stw @ 0x808B8424
    /* b 0x808b8338 */ // 0x808B8428
    r28 = r28 + 4; // 0x808B842C
    r26 = r26 + 1; // 0x808B8430
    if (<) goto 0x0x808b8328;
    /* li r4, -1 */ // 0x808B8440
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x94 + r1); // lwz @ 0x808B844C
    return;
}