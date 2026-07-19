/* Function at 0x805EB7C0, size=464 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r17 */
/* Calls: 5 function(s) */

int FUN_805EB7C0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -96(r1) */
    /* saved r17 */
    /* stmw r17, 0x24(r1) */ // 0x805EB7CC
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    r30 = r9;
    r0 = *(0x3c + r3); // lwz @ 0x805EB7EC
    /* cmpwi cr1, r0, 1 */
    if (==) goto 0x0x805eb904;
    /* li r4, 0 */ // 0x805EB7FC
    if (==) goto 0x0x805eb80c;
    if (==) goto 0x0x805eb818;
    /* b 0x805eb824 */ // 0x805EB808
    /* lis r4, 0 */ // 0x805EB80C
    r4 = *(0 + r4); // lwz @ 0x805EB810
    /* b 0x805eb824 */ // 0x805EB814
    /* lis r4, 0 */ // 0x805EB818
    r4 = r4 + 0; // 0x805EB81C
    r4 = *(4 + r4); // lwz @ 0x805EB820
    r4 = *(0x30 + r4); // lwz @ 0x805EB824
    r4 = *(0xc4 + r4); // lwz @ 0x805EB828
    r0 = *(4 + r4); // lwz @ 0x805EB82C
    if (==) goto 0x0x805eb904;
    r0 = *(0xc + r3); // lwz @ 0x805EB838
    if (==) goto 0x0x805eb904;
    /* li r31, 0 */ // 0x805EB844
    /* lis r18, 0 */ // 0x805EB848
    /* lis r19, 0 */ // 0x805EB84C
    /* lis r20, 0 */ // 0x805EB850
    /* lis r21, 0 */ // 0x805EB854
    /* lis r22, 0 */ // 0x805EB858
    /* lis r23, 0 */ // 0x805EB85C
    /* b 0x805eb8ec */ // 0x805EB860
    r0 = *(0xc + r24); // lwz @ 0x805EB864
    r4 = r31;
    *(0xc + r1) = r0; // stw @ 0x805EB86C
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r17 = r3;
    if (!=) goto 0x0x805eb8a0;
    r6 = r20 + 0; // 0x805EB88C
    r7 = r21 + 0; // 0x805EB890
    /* li r4, 0x26d */ // 0x805EB894
    /* crclr cr1eq */ // 0x805EB898
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r0 = *(0x3c + r17); // lwz @ 0x805EB8A0
    if (==) goto 0x0x805eb8b4;
    r17 = r17 + r0; // 0x805EB8AC
    /* b 0x805eb8b8 */ // 0x805EB8B0
    /* li r17, 0 */ // 0x805EB8B4
    /* clrlwi. r0, r17, 0x1b */ // 0x805EB8B8
    if (==) goto 0x0x805eb8d4;
    r3 = r22 + 0; // 0x805EB8C0
    r5 = r23 + 0; // 0x805EB8C4
    /* li r4, 0x154 */ // 0x805EB8C8
    /* crclr cr1eq */ // 0x805EB8CC
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    *(8 + r1) = r17; // stw @ 0x805EB8D4
    /* li r4, 1 */ // 0x805EB8DC
    /* li r5, 0 */ // 0x805EB8E0
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r31 = r31 + 1; // 0x805EB8E8
    r0 = *(0xc + r24); // lwz @ 0x805EB8EC
    *(0x10 + r1) = r0; // stw @ 0x805EB8F4
    FUN_805E3430(r3); // bl 0x805E3430
    if (<) goto 0x0x805eb864;
    if (==) goto 0x0x805eb924;
    if (!=) goto 0x0x805eb924;
    r0 = *(4 + r24); // lwz @ 0x805EB914
    r26 = r26 | 0x20; // 0x805EB918
    r0 = r0 | 0x10; // 0x805EB91C
    *(4 + r24) = r0; // stw @ 0x805EB920
    /* andi. r0, r26, 0x938 */ // 0x805EB924
    if (==) goto 0x0x805eb938;
    r0 = *(4 + r24); // lwz @ 0x805EB92C
    r0 = r0 | 0x10; // 0x805EB930
    *(4 + r24) = r0; // stw @ 0x805EB934
    r0 = *(0x3c + r24); // lwz @ 0x805EB938
    /* cmpwi cr1, r0, 0 */
    if (==) goto 0x0x805eb950;
    if (==) goto 0x0x805eb9a0;
    /* b 0x805eb9e8 */ // 0x805EB94C
    /* li r7, 0 */ // 0x805EB950
    if (==) goto 0x0x805eb964;
    if (==) goto 0x0x805eb970;
    /* b 0x805eb97c */ // 0x805EB960
    /* lis r3, 0 */ // 0x805EB964
    r7 = *(0 + r3); // lwz @ 0x805EB968
    /* b 0x805eb97c */ // 0x805EB96C
    /* lis r3, 0 */ // 0x805EB970
    r3 = r3 + 0; // 0x805EB974
    r7 = *(4 + r3); // lwz @ 0x805EB978
    r8 = *(0x24 + r24); // lwz @ 0x805EB97C
    r3 = r24;
    r4 = r25;
    r5 = r26;
    r6 = r28;
}