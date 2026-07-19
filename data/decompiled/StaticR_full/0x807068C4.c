/* Function at 0x807068C4, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_807068C4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r7, 0 */ // 0x807068CC
    *(0x34 + r1) = r0; // stw @ 0x807068D0
    /* stmw r25, 0x14(r1) */ // 0x807068D4
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r31 = r8;
    r30 = r9;
    r0 = *(0 + r7); // lwz @ 0x807068F0
    if (!=) goto 0x0x80706938;
    /* lis r3, 0 */ // 0x807068FC
    r0 = *(0 + r3); // lbz @ 0x80706900
    /* extsb. r0, r0 */ // 0x80706904
    if (!=) goto 0x0x80706930;
    /* lis r4, 0 */ // 0x8070690C
    /* lis r6, 0 */ // 0x80706910
    r4 = r4 + 0; // 0x80706914
    r3 = r3 + 0; // 0x80706918
    r5 = r4 + 0x4cb; // 0x8070691C
    r6 = r6 + 0; // 0x80706920
    /* li r4, 0x80 */ // 0x80706924
    /* crclr cr1eq */ // 0x80706928
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
    /* li r0, 1 */ // 0x80706930
    /* b 0x8070693c */ // 0x80706934
    /* li r0, 0 */ // 0x80706938
    if (!=) goto 0x0x8070694c;
    /* li r3, 0x6a */ // 0x80706944
    /* b 0x80706a94 */ // 0x80706948
    /* li r3, 8 */ // 0x8070694C
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r29 = r3;
    if (!=) goto 0x0x80706968;
    /* li r3, 0x68 */ // 0x80706960
    /* b 0x80706a94 */ // 0x80706964
}