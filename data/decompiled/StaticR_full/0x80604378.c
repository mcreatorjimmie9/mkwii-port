/* Function at 0x80604378, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80604378(int r3, int r4, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r9, 0 */ // 0x80604380
    /* li r8, -1 */ // 0x80604384
    *(0x24 + r1) = r0; // stw @ 0x80604388
    /* clrlwi r0, r6, 0x18 */ // 0x8060438C
    /* mulli r0, r0, 0xf0 */ // 0x80604390
    /* lis r7, 0 */ // 0x80604394
    *(0x1c + r1) = r31; // stw @ 0x80604398
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806043A0
    /* li r30, 0 */ // 0x806043A4
    *(0x14 + r1) = r29; // stw @ 0x806043A8
    r29 = r6;
    *(0 + r3) = r9; // stw @ 0x806043B0
    *(4 + r3) = r9; // stw @ 0x806043B4
    *(8 + r3) = r8; // stw @ 0x806043B8
    *(0xc + r3) = r4; // stw @ 0x806043BC
    *(0x10 + r3) = r5; // stb @ 0x806043C0
    *(0x11 + r3) = r9; // stb @ 0x806043C4
    *(0x12 + r3) = r9; // stb @ 0x806043C8
    *(0x13 + r3) = r6; // stb @ 0x806043CC
    r4 = *(0 + r7); // lwz @ 0x806043D0
    r4 = r4 + r0; // 0x806043D4
    r0 = *(0x38 + r4); // lwz @ 0x806043D8
    /* cntlzw r0, r0 */ // 0x806043DC
    /* srwi r0, r0, 5 */ // 0x806043E0
    *(0x14 + r3) = r0; // stb @ 0x806043E4
    r3 = *(0 + r7); // lwz @ 0x806043E8
    r0 = *(0x27 + r3); // lbz @ 0x806043EC
    if (!=) goto 0x0x80604408;
    r0 = *(0x26 + r3); // lbz @ 0x806043F8
    if (!=) goto 0x0x80604408;
    /* li r30, 1 */ // 0x80604404
    if (==) goto 0x0x80604430;
    r4 = r29;
    FUN_805C1470(r4); // bl 0x805C1470
    /* extsb r0, r3 */ // 0x80604418
    if (!=) goto 0x0x80604430;
    /* li r0, 1 */ // 0x80604424
    *(0x11 + r31) = r0; // stb @ 0x80604428
    /* b 0x80604470 */ // 0x8060442C
    /* lis r3, 0 */ // 0x80604430
    r3 = *(0 + r3); // lwz @ 0x80604434
    r0 = *(0x27 + r3); // lbz @ 0x80604438
    if (<) goto 0x0x80604470;
    r4 = r29;
    FUN_805C1470(r4); // bl 0x805C1470
    /* extsb. r0, r3 */ // 0x8060444C
    if (<) goto 0x0x80604468;
    if (!=) goto 0x0x80604470;
    /* li r0, 1 */ // 0x8060445C
    *(0x12 + r31) = r0; // stb @ 0x80604460
    /* b 0x80604470 */ // 0x80604464
    /* li r0, 1 */ // 0x80604468
    *(0x11 + r31) = r0; // stb @ 0x8060446C
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x80604474
    r30 = *(0x18 + r1); // lwz @ 0x80604478
    r29 = *(0x14 + r1); // lwz @ 0x8060447C
    r0 = *(0x24 + r1); // lwz @ 0x80604480
    return;
}