/* Function at 0x80762474, size=180 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 4 function(s) */

int FUN_80762474(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x80762480
    /* lis r28, 0 */ // 0x80762484
    r31 = r3;
    r25 = r4;
    r5 = r28 + 0; // 0x80762490
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80762498
    /* li r0, 0 */ // 0x8076249C
    r3 = r3 + 0; // 0x807624A0
    *(0 + r31) = r3; // stw @ 0x807624A4
    r3 = *(0 + r25); // lwz @ 0x807624A8
    r3 = *(0x2a + r3); // lha @ 0x807624AC
    /* mulli r3, r3, 0x3c */ // 0x807624B0
    *(0xbc + r31) = r3; // stw @ 0x807624B4
    r3 = *(0 + r25); // lwz @ 0x807624B8
    r3 = *(0x2c + r3); // lha @ 0x807624BC
    *(0xc0 + r31) = r3; // stb @ 0x807624C0
    /* clrlwi r3, r3, 0x18 */ // 0x807624C4
    *(0xb4 + r31) = r0; // stw @ 0x807624CC
    *(0xb0 + r31) = r0; // stw @ 0x807624D0
    if (==) goto 0x0x807624f4;
    if (==) goto 0x0x8076251c;
    if (==) goto 0x0x80762544;
    if (==) goto 0x0x8076256c;
    /* b 0x80762590 */ // 0x807624F0
    /* li r3, 0x7c */ // 0x807624F4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80762514;
    r4 = r28 + 0; // 0x80762504
    /* li r5, 0 */ // 0x80762508
    r4 = r4 + 9; // 0x8076250C
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    *(0xb4 + r31) = r3; // stw @ 0x80762514
    /* b 0x80762590 */ // 0x80762518
    /* li r3, 0x7c */ // 0x8076251C
    FUN_805E3430(r4, r3); // bl 0x805E3430
}