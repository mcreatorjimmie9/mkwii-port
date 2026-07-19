/* Function at 0x8079332C, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8079332C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r6, 0 */ // 0x80793338
    *(0x14 + r1) = r0; // stw @ 0x8079333C
    r7 = r3;
    *(0xc + r1) = r31; // stw @ 0x80793344
    r9 = *(0x84 + r3); // lwz @ 0x80793348
    /* mtctr r9 */ // 0x8079334C
    if (<=) goto 0x0x80793394;
    r8 = *(0x80 + r7); // lwz @ 0x80793358
    if (==) goto 0x0x8079336c;
    r0 = *(0x90 + r8); // lwz @ 0x80793364
    /* b 0x80793370 */ // 0x80793368
    /* li r0, -1 */ // 0x8079336C
    if (!=) goto 0x0x80793388;
    /* slwi r0, r6, 2 */ // 0x80793378
    r4 = r3 + r0; // 0x8079337C
    r31 = r4 + 0x80; // 0x80793380
    /* b 0x80793398 */ // 0x80793384
    r7 = r7 + 4; // 0x80793388
    r6 = r6 + 1; // 0x8079338C
    if (counter-- != 0) goto 0x0x80793358;
    /* li r31, 0 */ // 0x80793394
    if (!=) goto 0x0x807933e0;
    r6 = r3;
    /* li r4, 0 */ // 0x807933A4
    /* mtctr r9 */ // 0x807933A8
    if (<=) goto 0x0x807933dc;
    r0 = *(0x80 + r6); // lwz @ 0x807933B4
    if (!=) goto 0x0x807933d0;
    /* slwi r0, r4, 2 */ // 0x807933C0
    r4 = r3 + r0; // 0x807933C4
    r31 = r4 + 0x80; // 0x807933C8
    /* b 0x807933e0 */ // 0x807933CC
    r6 = r6 + 4; // 0x807933D0
    r4 = r4 + 1; // 0x807933D4
    if (counter-- != 0) goto 0x0x807933b4;
    /* li r31, 0 */ // 0x807933DC
    if (==) goto 0x0x807933fc;
    r4 = r31;
    /* li r6, 0 */ // 0x807933EC
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793400 */ // 0x807933F8
    /* li r3, 0 */ // 0x807933FC
    r0 = *(0x14 + r1); // lwz @ 0x80793400
    r31 = *(0xc + r1); // lwz @ 0x80793404
}