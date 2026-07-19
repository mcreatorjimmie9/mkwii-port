/* Function at 0x805D87B4, size=296 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r25 */
/* Calls: 6 function(s) */

int FUN_805D87B4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -112(r1) */
    /* saved r25 */
    /* stmw r25, 0x54(r1) */ // 0x805D87C0
    r29 = r3;
    /* li r31, 1 */ // 0x805D87C8
    /* li r26, 8 */ // 0x805D87CC
    /* li r30, 0 */ // 0x805D87D0
    /* lis r27, 0 */ // 0x805D87D4
    /* lis r28, 0 */ // 0x805D87D8
    /* b 0x805d88c4 */ // 0x805D87DC
    /* clrlwi r4, r30, 0x10 */ // 0x805D87E0
    r5 = *(0x20 + r29); // lwz @ 0x805D87E4
    /* mulli r0, r4, 0x2800 */ // 0x805D87E8
    r25 = r5 + r0; // 0x805D87EC
    FUN_805ACC90(); // bl 0x805ACC90
    r4 = *(0x28 + r29); // lwz @ 0x805D87F4
    /* clrlwi r8, r30, 0x10 */ // 0x805D87F8
    r3 = *(0x10 + r4); // lwz @ 0x805D87FC
    /* lbzx r0, r3, r8 */ // 0x805D8800
    if (==) goto 0x0x805d88c0;
    r4 = *(8 + r4); // lwz @ 0x805D880C
    r0 = r4 + -2; // 0x805D8810
    if (>) goto 0x0x805d8884;
    r3 = r4 + -2; // 0x805D881C
    /* subfic r0, r4, 2 */ // 0x805D8820
    r0 = r3 ~| r0; // 0x805D8824
    r5 = r27 + 0; // 0x805D8828
    r4 = r0 >> 0x1f; // srawi
    r0 = r4 + 0x32; // 0x805D8834
    /* li r26, 0 */ // 0x805D8838
    /* extsb r6, r0 */ // 0x805D883C
    /* li r4, 0x40 */ // 0x805D8840
    r7 = r6;
    /* crclr cr1eq */ // 0x805D8848
    FUN_805E3430(r4, r7); // bl 0x805E3430
    r4 = *(0x18 + r29); // lwz @ 0x805D8850
    FUN_805E3430(r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805d887c;
    r3 = *(0x28 + r29); // lwz @ 0x805D8868
    /* clrlwi r4, r30, 0x10 */ // 0x805D886C
    r5 = *(0x18 + r29); // lwz @ 0x805D8870
    FUN_805ACCE8(); // bl 0x805ACCE8
    /* b 0x805d88c0 */ // 0x805D8878
    /* li r31, 0 */ // 0x805D887C
    /* b 0x805d88d8 */ // 0x805D8880
    r3 = *(0 + r28); // lwz @ 0x805D8884
    r6 = r25;
    r4 = *(0x18 + r29); // lwz @ 0x805D888C
    /* li r5, 0x2800 */ // 0x805D8890
    /* li r7, 1 */ // 0x805D8894
    FUN_805BBCDC(r6, r5, r7); // bl 0x805BBCDC
    r26 = r3;
    if (==) goto 0x0x805d88b0;
    /* li r31, 0 */ // 0x805D88A8
    /* b 0x805d88d8 */ // 0x805D88AC
    r3 = *(0x28 + r29); // lwz @ 0x805D88B0
    /* clrlwi r4, r30, 0x10 */ // 0x805D88B4
    r5 = *(0x18 + r29); // lwz @ 0x805D88B8
    FUN_805ACCE8(); // bl 0x805ACCE8
    r30 = r30 + 1; // 0x805D88C0
    r3 = *(0x28 + r29); // lwz @ 0x805D88C4
    /* clrlwi r4, r30, 0x10 */ // 0x805D88C8
    r0 = *(4 + r3); // lhz @ 0x805D88CC
    if (<) goto 0x0x805d87e0;
}