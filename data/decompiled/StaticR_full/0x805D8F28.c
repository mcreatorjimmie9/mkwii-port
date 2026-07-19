/* Function at 0x805D8F28, size=512 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 4 function(s) */

int FUN_805D8F28(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* addis r8, r3, 2 */ // 0x805D8F30
    *(0x34 + r1) = r0; // stw @ 0x805D8F34
    /* stmw r24, 0x10(r1) */ // 0x805D8F38
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r24 = r7;
    r0 = *(0x5002 + r8); // lbz @ 0x805D8F50
    if (!=) goto 0x0x805d8f6c;
    /* li r0, 0 */ // 0x805D8F5C
    *(0x5000 + r8) = r0; // stb @ 0x805D8F60
    *(0x5004 + r8) = r0; // stw @ 0x805D8F64
    /* b 0x805d9118 */ // 0x805D8F68
    /* li r31, 0 */ // 0x805D8F70
    if (!=) goto 0x0x805d9008;
    /* li r26, 0 */ // 0x805D8F78
    /* li r25, 0 */ // 0x805D8F7C
    /* clrlwi r3, r25, 0x18 */ // 0x805D8F80
    FUN_805E0FBC(); // bl 0x805E0FBC
    if (!=) goto 0x0x805d8f9c;
    r30 = r25;
    /* li r26, 1 */ // 0x805D8F94
    /* b 0x805d8fa8 */ // 0x805D8F98
    r25 = r25 + 1; // 0x805D8F9C
    if (<) goto 0x0x805d8f80;
    if (!=) goto 0x0x805d8fc8;
    /* addis r3, r27, 2 */ // 0x805D8FB0
    /* li r0, 0 */ // 0x805D8FB4
    *(0x5000 + r3) = r0; // stb @ 0x805D8FB8
    /* li r0, 0xa */ // 0x805D8FBC
    *(0x5004 + r3) = r0; // stw @ 0x805D8FC0
    /* b 0x805d9118 */ // 0x805D8FC4
    /* lis r3, 1 */ // 0x805D8FC8
    /* clrlwi r0, r30, 0x18 */ // 0x805D8FCC
    r4 = r3 + -0x6c10; // 0x805D8FD0
    r4 = r28 * r4; // 0x805D8FD4
    /* li r3, 1 */ // 0x805D8FD8
    r5 = r3 << r0; // slw
    r3 = r27 + r4; // 0x805D8FE0
    r3 = r3 + 0x38; // 0x805D8FE4
    /* addis r4, r3, 1 */ // 0x805D8FE8
    r3 = *(-0x6da0 + r4); // lwz @ 0x805D8FEC
    /* and. r0, r3, r5 */ // 0x805D8FF0
    if (==) goto 0x0x805d905c;
    /* andc r0, r3, r5 */ // 0x805D8FF8
    *(-0x6da0 + r4) = r0; // stw @ 0x805D8FFC
    /* li r31, 1 */ // 0x805D9000
    /* b 0x805d905c */ // 0x805D9004
    if (!=) goto 0x0x805d904c;
    /* lis r5, 1 */ // 0x805D9010
    /* li r0, 1 */ // 0x805D9014
    r5 = r5 + -0x6c10; // 0x805D9018
    r4 = r4 * r5; // 0x805D901C
    r5 = r0 << r6; // slw
    r3 = r3 + r4; // 0x805D9024
    r3 = r3 + 0x38; // 0x805D9028
    /* addis r4, r3, 1 */ // 0x805D902C
    r3 = *(-0x6d9c + r4); // lwz @ 0x805D9030
    /* and. r0, r3, r5 */ // 0x805D9034
    if (==) goto 0x0x805d905c;
    /* andc r0, r3, r5 */ // 0x805D903C
    *(-0x6d9c + r4) = r0; // stw @ 0x805D9040
    /* li r31, 1 */ // 0x805D9044
    /* b 0x805d905c */ // 0x805D9048
    r0 = r5 + -4; // 0x805D904C
    if (>) goto 0x0x805d905c;
    /* li r31, 1 */ // 0x805D9058
    if (==) goto 0x0x805d9108;
    /* lis r3, 1 */ // 0x805D9064
    /* li r26, 0 */ // 0x805D9068
    r31 = r3 + -0x6c10; // 0x805D906C
    /* clrlwi r4, r26, 0x18 */ // 0x805D9070
    r3 = r27;
    r0 = r4 * r31; // 0x805D9078
    r5 = r27 + r0; // 0x805D907C
    r5 = r5 + 0x38; // 0x805D9080
    FUN_805D5334(r3, r5); // bl 0x805D5334
    r26 = r26 + 1; // 0x805D9088
    if (<) goto 0x0x805d9070;
    r3 = *(0x18 + r27); // lwz @ 0x805D9094
    FUN_805ABCB4(); // bl 0x805ABCB4
    r0 = r29 + -2; // 0x805D909C
    if (>) goto 0x0x805d90b0;
    /* li r3, 0 */ // 0x805D90A8
    /* b 0x805d90dc */ // 0x805D90AC
    /* lis r3, 0 */ // 0x805D90B0
    /* slwi r0, r29, 2 */ // 0x805D90B4
    r3 = r3 + 0; // 0x805D90B8
    /* clrlwi r4, r30, 0x18 */ // 0x805D90BC
    /* lwzx r0, r3, r0 */ // 0x805D90C0
    /* mulli r3, r28, 0x42 */ // 0x805D90C4
    r0 = r4 + r0; // 0x805D90C8
    r0 = r3 + r0; // 0x805D90CC
    /* mulli r3, r0, 0x2800 */ // 0x805D90D0
    /* addis r3, r3, 3 */ // 0x805D90D4
    r3 = r3 + -0x8000; // 0x805D90D8
    /* addis r5, r27, 2 */ // 0x805D90DC
    /* li r0, 1 */ // 0x805D90E0
    /* lis r4, 0 */ // 0x805D90E4
    *(0x20 + r27) = r3; // stw @ 0x805D90E8
    r3 = *(0x1c + r27); // lwz @ 0x805D90EC
    r4 = r4 + 0; // 0x805D90F0
    *(0x5000 + r5) = r0; // stb @ 0x805D90F4
    /* li r5, 0 */ // 0x805D90F8
    /* li r6, 0 */ // 0x805D90FC
    FUN_805E3430(r4, r5, r6); // bl 0x805E3430
    /* b 0x805d9118 */ // 0x805D9104
    /* addis r3, r27, 2 */ // 0x805D9108
    /* li r0, 0 */ // 0x805D910C
    *(0x5000 + r3) = r0; // stb @ 0x805D9110
    *(0x5004 + r3) = r0; // stw @ 0x805D9114
    r0 = *(0x34 + r1); // lwz @ 0x805D911C
}