/* Function at 0x805D0B94, size=440 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_805D0B94(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    /* saved r26 */
    /* mulli r0, r4, 0x1c */ // 0x805D0BA0
    /* stmw r26, 0x88(r1) */ // 0x805D0BA4
    r27 = r3;
    r3 = r3 + r0; // 0x805D0BAC
    r26 = r4;
    r30 = r3 + 8; // 0x805D0BB4
    r3 = r30;
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (==) goto 0x0x805d0bd0;
    r3 = r30;
    FUN_805BA6B4(r3, r3); // bl 0x805BA6B4
    /* mulli r26, r26, 0x18 */ // 0x805D0BD0
    /* li r0, 2 */ // 0x805D0BD4
    /* li r4, 0 */ // 0x805D0BD8
    r31 = r27 + r26; // 0x805D0BDC
    *(0x5b8 + r31) = r0; // stw @ 0x805D0BE0
    r3 = *(0x5b0 + r31); // lwz @ 0x805D0BE4
    if (==) goto 0x0x805d0c20;
    r6 = *(0x5b8 + r31); // lwz @ 0x805D0BF0
    /* li r5, 0 */ // 0x805D0BF4
    if (>) goto 0x0x805d0c14;
    /* li r0, 1 */ // 0x805D0C00
    r0 = r0 << r6; // slw
    /* andi. r0, r0, 0x15 */ // 0x805D0C08
    if (==) goto 0x0x805d0c14;
    /* li r5, 1 */ // 0x805D0C10
    if (==) goto 0x0x805d0c20;
    /* li r4, 1 */ // 0x805D0C1C
    if (==) goto 0x0x805d0c38;
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r27 + r26; // 0x805D0C2C
    r3 = *(0x5b4 + r3); // lwz @ 0x805D0C30
    FUN_805E3430(); // bl 0x805E3430
    /* li r0, 3 */ // 0x805D0C38
    *(0x5b8 + r31) = r0; // stw @ 0x805D0C3C
    r4 = r27 + r26; // 0x805D0C40
    r3 = r30;
    r26 = *(0x5b4 + r4); // lwz @ 0x805D0C48
    r27 = *(0x5b0 + r31); // lwz @ 0x805D0C4C
    r28 = *(0x5c0 + r4); // lwz @ 0x805D0C50
    r29 = *(0x5bc + r4); // lwz @ 0x805D0C54
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (!=) goto 0x0x805d0d00;
    if (!=) goto 0x0x805d0cac;
    /* lis r4, 0 */ // 0x805D0C6C
    r4 = r4 + 0; // 0x805D0C74
    r5 = r4 + 0x177; // 0x805D0C7C
    /* li r4, 0x80 */ // 0x805D0C80
    if (<) goto 0x0x805d0c90;
    /* li r6, 0 */ // 0x805D0C88
    /* b 0x805d0ca0 */ // 0x805D0C8C
    /* lis r6, 0 */ // 0x805D0C90
    /* slwi r0, r29, 2 */ // 0x805D0C94
    r6 = r6 + 0; // 0x805D0C98
    /* lwzx r6, r6, r0 */ // 0x805D0C9C
    /* crclr cr1eq */ // 0x805D0CA0
    FUN_805E3430(r6, r6); // bl 0x805E3430
    /* b 0x805d0ce8 */ // 0x805D0CA8
    /* lis r4, 0 */ // 0x805D0CAC
    r4 = r4 + 0; // 0x805D0CB4
    r5 = r4 + 0x193; // 0x805D0CBC
    /* li r4, 0x80 */ // 0x805D0CC0
    if (<) goto 0x0x805d0cd0;
    /* li r6, 0 */ // 0x805D0CC8
    /* b 0x805d0ce0 */ // 0x805D0CCC
    /* lis r6, 0 */ // 0x805D0CD0
    /* slwi r0, r29, 2 */ // 0x805D0CD4
    r6 = r6 + 0; // 0x805D0CD8
    /* lwzx r6, r6, r0 */ // 0x805D0CDC
    /* crclr cr1eq */ // 0x805D0CE0
    FUN_805E3430(r6, r6); // bl 0x805E3430
    r3 = r30;
    r5 = r27;
    r6 = r26;
    /* li r7, 0 */ // 0x805D0CF8
    FUN_805BA580(r3, r5, r6, r4, r7); // bl 0x805BA580
    r3 = r30;
    FUN_805BA42C(r6, r4, r7, r3); // bl 0x805BA42C
    if (!=) goto 0x0x805d0d3c;
    /* lis r4, -0x8000 */ // 0x805D0D10
    /* lis r3, 0x1062 */ // 0x805D0D14
    r0 = *(0xf8 + r4); // lwz @ 0x805D0D18
    r4 = r3 + 0x4dd3; // 0x805D0D1C
    /* li r3, 0 */ // 0x805D0D20
    /* srwi r0, r0, 2 */ // 0x805D0D24
    r4 = r4 * r0; // 0x805D0D28
    /* srwi r0, r4, 6 */ // 0x805D0D2C
    r4 = r4 rlwinm 0x1e; // rlwinm
    r3 = r0 rlwimi 4; // rlwimi
    FUN_805E3430(); // bl 0x805E3430
    r3 = r30;
    FUN_805BA42C(r3); // bl 0x805BA42C
    if (==) goto 0x0x805d0d58;
}