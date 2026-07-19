/* Function at 0x805D03DC, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 5 function(s) */

int FUN_805D03DC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x805D03E8
    /* stmw r26, 8(r1) */ // 0x805D03EC
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    if (!=) goto 0x0x805d0408;
    FUN_805ABAFC(); // bl 0x805ABAFC
    /* li r31, 0 */ // 0x805D0408
    /* b 0x805d04b4 */ // 0x805D040C
    r0 = *(8 + r30); // lhz @ 0x805D0410
    /* clrlwi r3, r31, 0x10 */ // 0x805D0414
    if (>=) goto 0x0x805d0430;
    /* mulli r0, r3, 0xa4 */ // 0x805D0420
    r3 = *(4 + r30); // lwz @ 0x805D0424
    r26 = r3 + r0; // 0x805D0428
    /* b 0x805d0434 */ // 0x805D042C
    /* li r26, 0 */ // 0x805D0430
    r3 = *(4 + r27); // lwz @ 0x805D0434
    r3 = *(8 + r3); // lwz @ 0x805D0438
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805d0450;
    /* li r0, 0 */ // 0x805D0448
    /* b 0x805d049c */ // 0x805D044C
    r3 = *(4 + r27); // lwz @ 0x805D0450
    /* clrlwi r0, r31, 0x10 */ // 0x805D0454
    r4 = *(8 + r3); // lwz @ 0x805D0458
    r3 = *(8 + r4); // lhz @ 0x805D045C
    if (>=) goto 0x0x805d0498;
    r3 = r26;
    if (>=) goto 0x0x805d0484;
    /* mulli r0, r0, 0x24 */ // 0x805D0470
    r4 = *(4 + r4); // lwz @ 0x805D0474
    r4 = r4 + r0; // 0x805D0478
    r4 = *(8 + r4); // lwz @ 0x805D047C
    /* b 0x805d0488 */ // 0x805D0480
    /* li r4, 0 */ // 0x805D0484
    r5 = r29;
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* li r0, 1 */ // 0x805D0490
    /* b 0x805d049c */ // 0x805D0494
    /* li r0, 0 */ // 0x805D0498
    if (==) goto 0x0x805d04b0;
    r3 = r28;
    r4 = r26;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x805D04B0
    r3 = *(4 + r27); // lwz @ 0x805D04B4
    r3 = *(8 + r3); // lwz @ 0x805D04B8
    FUN_805BA42C(r4); // bl 0x805BA42C
    if (==) goto 0x0x805d04d8;
    r3 = *(4 + r27); // lwz @ 0x805D04C8
    r3 = *(8 + r3); // lwz @ 0x805D04CC
    r3 = *(8 + r3); // lhz @ 0x805D04D0
    /* b 0x805d04dc */ // 0x805D04D4
    /* li r3, 0 */ // 0x805D04D8
    /* clrlwi r0, r31, 0x10 */ // 0x805D04DC
    if (<) goto 0x0x805d0410;
    r0 = *(0x24 + r1); // lwz @ 0x805D04EC
}