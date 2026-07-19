/* Function at 0x80656490, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 4 function(s) */

int FUN_80656490(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8065649C
    r31 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    /* li r30, -1 */ // 0x806564B4
    r0 = *(0 + r3); // lwz @ 0x806564B8
    if (==) goto 0x0x806564d0;
    r4 = r27;
    FUN_8066C444(r4); // bl 0x8066C444
    r30 = r3;
    if (>=) goto 0x0x806564f8;
    r0 = *(0 + r26); // lwz @ 0x806564D8
    r31 = r26;
    if (==) goto 0x0x806564f8;
    r3 = r26;
    r4 = r27;
    FUN_8066C444(r3, r4); // bl 0x8066C444
    r30 = r3;
    if (>=) goto 0x0x80656508;
    /* li r3, 0 */ // 0x80656500
    /* b 0x80656530 */ // 0x80656504
    r3 = r31;
    r4 = r30;
    FUN_8066C4AC(r3, r3, r4); // bl 0x8066C4AC
    *(0 + r28) = r3; // stw @ 0x80656514
    r3 = r31;
    r4 = r30;
    FUN_8066C4E8(r4, r3, r4); // bl 0x8066C4E8
    r0 = *(0 + r3); // lbz @ 0x80656524
    /* li r3, 1 */ // 0x80656528
    *(0 + r29) = r0; // stw @ 0x8065652C
    r0 = *(0x24 + r1); // lwz @ 0x80656534
    return;
}