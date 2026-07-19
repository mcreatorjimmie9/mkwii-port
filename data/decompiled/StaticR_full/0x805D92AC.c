/* Function at 0x805D92AC, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 4 function(s) */

int FUN_805D92AC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r4, 0x2c */ // 0x805D92B4
    /* li r5, 1 */ // 0x805D92B8
    *(0x24 + r1) = r0; // stw @ 0x805D92BC
    r4 = r4 + -0x4000; // 0x805D92C0
    /* stmw r26, 8(r1) */ // 0x805D92C4
    /* lis r27, 0 */ // 0x805D92C8
    r30 = r3;
    r3 = *(0 + r27); // lwz @ 0x805D92D0
    FUN_805BC410(r4); // bl 0x805BC410
    r31 = r3;
    if (!=) goto 0x0x805d9320;
    r28 = *(0x14 + r30); // lwz @ 0x805D92E4
    /* lis r3, 2 */ // 0x805D92E8
    r4 = r3 + 0x7ffc; // 0x805D92EC
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* addis r5, r28, 2 */ // 0x805D92F8
    /* lis r4, 3 */ // 0x805D92FC
    *(0x7ffc + r5) = r3; // stw @ 0x805D9300
    r5 = r4 + -0x8000; // 0x805D9304
    /* li r6, 0 */ // 0x805D9308
    /* li r7, 1 */ // 0x805D930C
    r3 = *(0 + r27); // lwz @ 0x805D9310
    r4 = *(0x14 + r30); // lwz @ 0x805D9314
    FUN_805BBEFC(r5, r6, r7); // bl 0x805BBEFC
    r31 = r3;
    if (!=) goto 0x0x805d933c;
    /* addis r3, r30, 2 */ // 0x805D9328
    /* li r0, 1 */ // 0x805D932C
    *(0x5002 + r3) = r0; // stb @ 0x805D9330
    *(0x5001 + r3) = r0; // stb @ 0x805D9334
    /* b 0x805d934c */ // 0x805D9338
    /* addis r3, r30, 2 */ // 0x805D933C
    /* li r0, 0 */ // 0x805D9340
    *(0x5002 + r3) = r0; // stb @ 0x805D9344
    *(0x5001 + r3) = r0; // stb @ 0x805D9348
    /* lis r3, 1 */ // 0x805D934C
    /* addis r27, r30, 2 */ // 0x805D9350
    /* li r26, 0 */ // 0x805D9354
    /* li r29, 0 */ // 0x805D9358
    r28 = r3 + -0x6c10; // 0x805D935C
    r0 = *(0x5001 + r27); // lbz @ 0x805D9360
    if (==) goto 0x0x805d9388;
    /* clrlwi r4, r26, 0x18 */ // 0x805D936C
    r3 = r30;
    r0 = r4 * r28; // 0x805D9374
    r5 = r30 + r0; // 0x805D9378
    r5 = r5 + 0x38; // 0x805D937C
    FUN_805D38A4(r3, r5); // bl 0x805D38A4
    /* b 0x805d939c */ // 0x805D9384
    /* clrlwi r0, r26, 0x18 */ // 0x805D9388
    r3 = r0 * r28; // 0x805D938C
    /* addis r3, r3, 1 */ // 0x805D9390
    r0 = r3 + -0x6bdb; // 0x805D9394
    /* stbx r29, r30, r0 */ // 0x805D9398
    r26 = r26 + 1; // 0x805D939C
}