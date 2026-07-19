/* Function at 0x805D09A8, size=452 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_805D09A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    /* saved r26 */
    /* stmw r26, 0x88(r1) */ // 0x805D09B4
    /* clrlwi r28, r3, 0x18 */ // 0x805D09B8
    /* lis r3, 0 */ // 0x805D09BC
    /* mulli r26, r28, 0x1c */ // 0x805D09C0
    r27 = *(0 + r3); // lwz @ 0x805D09C4
    r3 = r27 + r26; // 0x805D09C8
    r3 = r3 + 8; // 0x805D09CC
    FUN_805BA42C(r3, r3); // bl 0x805BA42C
    if (==) goto 0x0x805d09e8;
    r3 = r27 + r26; // 0x805D09DC
    r3 = r3 + 8; // 0x805D09E0
    FUN_805BA6B4(r3); // bl 0x805BA6B4
    /* mulli r28, r28, 0x18 */ // 0x805D09E8
    /* li r0, 2 */ // 0x805D09EC
    /* li r4, 0 */ // 0x805D09F0
    r31 = r27 + r28; // 0x805D09F4
    *(0x5b8 + r31) = r0; // stw @ 0x805D09F8
    r3 = *(0x5b0 + r31); // lwz @ 0x805D09FC
    if (==) goto 0x0x805d0a38;
    r6 = *(0x5b8 + r31); // lwz @ 0x805D0A08
    /* li r5, 0 */ // 0x805D0A0C
    if (>) goto 0x0x805d0a2c;
    /* li r0, 1 */ // 0x805D0A18
    r0 = r0 << r6; // slw
    /* andi. r0, r0, 0x15 */ // 0x805D0A20
    if (==) goto 0x0x805d0a2c;
    /* li r5, 1 */ // 0x805D0A28
    if (==) goto 0x0x805d0a38;
    /* li r4, 1 */ // 0x805D0A34
    if (==) goto 0x0x805d0a50;
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r27 + r28; // 0x805D0A44
    r3 = *(0x5b4 + r3); // lwz @ 0x805D0A48
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 3 */ // 0x805D0A50
    *(0x5b8 + r31) = r0; // stw @ 0x805D0A54
    r4 = r27 + r28; // 0x805D0A58
    r3 = r27 + r26; // 0x805D0A5C
    r30 = r3 + 8; // 0x805D0A60
    r29 = *(0x5b4 + r4); // lwz @ 0x805D0A64
    r28 = *(0x5b0 + r31); // lwz @ 0x805D0A68
    r3 = r30;
    r27 = *(0x5c0 + r4); // lwz @ 0x805D0A70
    r26 = *(0x5bc + r4); // lwz @ 0x805D0A74
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (!=) goto 0x0x805d0b20;
    if (!=) goto 0x0x805d0acc;
    /* lis r4, 0 */ // 0x805D0A8C
    r4 = r4 + 0; // 0x805D0A94
    r5 = r4 + 0x13c; // 0x805D0A9C
    /* li r4, 0x80 */ // 0x805D0AA0
    if (<) goto 0x0x805d0ab0;
    /* li r6, 0 */ // 0x805D0AA8
    /* b 0x805d0ac0 */ // 0x805D0AAC
    /* lis r6, 0 */ // 0x805D0AB0
    /* slwi r0, r26, 2 */ // 0x805D0AB4
    r6 = r6 + 0; // 0x805D0AB8
    /* lwzx r6, r6, r0 */ // 0x805D0ABC
    /* crclr cr1eq */ // 0x805D0AC0
    FUN_805E3430(r6, r6); // bl 0x805E3430
    /* b 0x805d0b08 */ // 0x805D0AC8
    /* lis r4, 0 */ // 0x805D0ACC
    r4 = r4 + 0; // 0x805D0AD4
    r5 = r4 + 0x158; // 0x805D0ADC
    /* li r4, 0x80 */ // 0x805D0AE0
    if (<) goto 0x0x805d0af0;
    /* li r6, 0 */ // 0x805D0AE8
    /* b 0x805d0b00 */ // 0x805D0AEC
    /* lis r6, 0 */ // 0x805D0AF0
    /* slwi r0, r26, 2 */ // 0x805D0AF4
    r6 = r6 + 0; // 0x805D0AF8
    /* lwzx r6, r6, r0 */ // 0x805D0AFC
    /* crclr cr1eq */ // 0x805D0B00
    FUN_805E3430(r6, r6); // bl 0x805E3430
    r3 = r30;
    r5 = r28;
    r6 = r29;
    /* li r7, 0 */ // 0x805D0B18
    FUN_805BA580(r3, r5, r6, r4, r7); // bl 0x805BA580
    r3 = r30;
    FUN_805BA42C(r6, r4, r7, r3); // bl 0x805BA42C
    if (!=) goto 0x0x805d0b5c;
    /* lis r4, -0x8000 */ // 0x805D0B30
    /* lis r3, 0x1062 */ // 0x805D0B34
    r0 = *(0xf8 + r4); // lwz @ 0x805D0B38
    r4 = r3 + 0x4dd3; // 0x805D0B3C
    /* li r3, 0 */ // 0x805D0B40
    /* srwi r0, r0, 2 */ // 0x805D0B44
    r4 = r4 * r0; // 0x805D0B48
    /* srwi r0, r4, 6 */ // 0x805D0B4C
    r4 = r4 rlwinm 0x1e; // rlwinm
    r3 = r0 rlwimi 4; // rlwimi
    FUN_805E3430(); // bl 0x805E3430
    r3 = r30;
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (==) goto 0x0x805d0b78;
}