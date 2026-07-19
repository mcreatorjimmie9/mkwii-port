/* Function at 0x8076545C, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_8076545C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r5, 0 */ // 0x80765464
    *(0x34 + r1) = r0; // stw @ 0x80765468
    r5 = r5 + 0; // 0x8076546C
    r5 = r5 + 0x16; // 0x80765470
    /* stmw r25, 0x14(r1) */ // 0x80765474
    r30 = r3;
    r31 = r4;
    FUN_8089F578(r5, r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80765484
    r3 = r3 + 0; // 0x80765488
    *(0 + r30) = r3; // stw @ 0x8076548C
    r3 = *(0 + r31); // lwz @ 0x80765490
    r0 = *(0x2c + r3); // lha @ 0x80765494
    *(0xb4 + r30) = r0; // stw @ 0x80765498
    r3 = *(0 + r31); // lwz @ 0x8076549C
    r0 = *(0x2e + r3); // lha @ 0x807654A0
    *(0xb8 + r30) = r0; // stw @ 0x807654A4
    r3 = *(0 + r31); // lwz @ 0x807654A8
    r3 = *(0x30 + r3); // lha @ 0x807654AC
    /* neg r0, r3 */ // 0x807654B0
    r0 = r0 | r3; // 0x807654B4
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x807654B8
    *(0xbc + r30) = r0; // stb @ 0x807654BC
    if (==) goto 0x0x807654d0;
    /* li r0, 3 */ // 0x807654C4
    *(0xc0 + r30) = r0; // stw @ 0x807654C8
    /* b 0x807654d8 */ // 0x807654CC
    /* li r0, 0xc */ // 0x807654D0
    *(0xc0 + r30) = r0; // stw @ 0x807654D4
    r0 = *(0xc0 + r30); // lwz @ 0x807654D8
    /* slwi r3, r0, 2 */ // 0x807654DC
    FUN_805E3430(); // bl 0x805E3430
}