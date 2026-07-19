/* Function at 0x805A05AC, size=244 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_805A05AC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* lis r7, 0 */ // 0x805A05B4
    *(0x34 + r1) = r0; // stw @ 0x805A05BC
    /* slwi r0, r4, 1 */ // 0x805A05C0
    r7 = r7 + 0; // 0x805A05C4
    /* stmw r26, 0x18(r1) */ // 0x805A05C8
    r29 = r4;
    /* lhzx r0, r7, r0 */ // 0x805A05D0
    r31 = r5;
    r28 = r3;
    r30 = r6;
    r31 = r0 rlwimi 0x10; // rlwimi
    /* li r4, 0 */ // 0x805A05E4
    if (==) goto 0x0x805a05f8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r4 = r3;
    if (<) goto 0x0x805a0604;
    /* li r30, 0 */ // 0x805A0600
    /* li r26, 0 */ // 0x805A0608
    if (==) goto 0x0x805a0638;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r6, 0 */ // 0x805A0618
    r26 = r3;
    r6 = r6 + 0; // 0x805A0620
    r4 = r30;
    r5 = r26;
    r3 = r6 + 0x90; // 0x805A062C
    /* crclr cr1eq */ // 0x805A0630
    FUN_805E3430(r6, r4, r5, r3); // bl 0x805E3430
    /* li r27, 0 */ // 0x805A0638
    *(8 + r1) = r27; // stw @ 0x805A063C
    /* srwi r11, r26, 0x1c */ // 0x805A0640
    /* clrlwi r4, r26, 0x1c */ // 0x805A0644
    /* lis r3, 0 */ // 0x805A0648
    *(0xc + r1) = r27; // stw @ 0x805A064C
    r0 = r4 + 1; // 0x805A0650
    r10 = r26 rlwinm 8; // rlwinm
    r3 = r3 + 0; // 0x805A065C
    r9 = r26 rlwinm 0xc; // rlwinm
    r8 = r26 rlwinm 0x10; // rlwinm
    r9 = r8 + 1; // 0x805A0670
    r7 = r26 rlwinm 0x14; // rlwinm
    r8 = r7 + 1; // 0x805A0678
    r6 = r26 rlwinm 0x18; // rlwinm
    r7 = r6 + 1; // 0x805A0680
    r5 = r26 rlwinm 0x1c; // rlwinm
    r6 = r5 + 1; // 0x805A0688
    *(8 + r1) = r12; // stb @ 0x805A068C
    r4 = r29;
    r5 = r31;
    *(9 + r1) = r11; // stb @ 0x805A0698
    r3 = r3 + 0xb0; // 0x805A069C
}