/* Function at 0x8061AEC0, size=356 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_8061AEC0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8061AECC
    r30 = r3;
    /* li r27, 0 */ // 0x8061AED4
    /* li r28, 1 */ // 0x8061AED8
    r3 = *(0x10 + r30); // lwz @ 0x8061AEDC
    r4 = r28 << r27; // slw
    r0 = *(0x14 + r30); // lwz @ 0x8061AEE4
    r5 = r3 & r4; // 0x8061AEE8
    r3 = r0 & r4; // 0x8061AEEC
    /* neg r4, r5 */ // 0x8061AEF0
    /* neg r0, r3 */ // 0x8061AEF4
    r0 = r0 | r3; // 0x8061AEF8
    r4 = r4 | r5; // 0x8061AEFC
    /* srwi r3, r4, 0x1f */ // 0x8061AF00
    /* srwi r0, r0, 0x1f */ // 0x8061AF04
    if (==) goto 0x0x8061af38;
    r3 = r30;
    FUN_8061DFE0(r3); // bl 0x8061DFE0
    r3 = *(0x14 + r3); // lwz @ 0x8061AF18
    r4 = r27;
    /* li r5, 0 */ // 0x8061AF20
    /* li r6, 0 */ // 0x8061AF24
    /* li r7, 0 */ // 0x8061AF28
    /* li r8, 0xc */ // 0x8061AF2C
    /* li r9, 0 */ // 0x8061AF30
    FUN_805F72FC(r5, r6, r7, r8, r9); // bl 0x805F72FC
    r27 = r27 + 1; // 0x8061AF38
    if (<) goto 0x0x8061aedc;
    /* lis r29, 0 */ // 0x8061AF44
    /* li r31, 0x13 */ // 0x8061AF48
    r29 = r29 + 0; // 0x8061AF4C
    /* li r28, 1 */ // 0x8061AF50
    r3 = *(0x10 + r30); // lwz @ 0x8061AF54
    r6 = r28 << r31; // slw
    r0 = *(0x14 + r30); // lwz @ 0x8061AF5C
    r4 = r31 + -0x13; // 0x8061AF60
    r5 = r3 & r6; // 0x8061AF64
    r3 = r0 & r6; // 0x8061AF68
    /* extsb r6, r4 */ // 0x8061AF6C
    /* neg r4, r5 */ // 0x8061AF70
    /* neg r0, r3 */ // 0x8061AF74
    r0 = r0 | r3; // 0x8061AF78
    r4 = r4 | r5; // 0x8061AF7C
    /* srwi r3, r4, 0x1f */ // 0x8061AF80
    /* srwi r0, r0, 0x1f */ // 0x8061AF84
    if (==) goto 0x0x8061afb8;
    /* mulli r0, r6, 0xc */ // 0x8061AF90
    r27 = r29 + r0; // 0x8061AF94
    r3 = r27;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8061afb8;
    r3 = r30;
    r12 = r27;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r31 + 1; // 0x8061AFB8
    if (<) goto 0x0x8061af54;
    /* lis r31, 0 */ // 0x8061AFC4
    /* li r28, 0 */ // 0x8061AFC8
    r31 = r31 + 0; // 0x8061AFCC
    /* li r29, 1 */ // 0x8061AFD0
    r3 = *(0x18 + r30); // lwz @ 0x8061AFD4
    r4 = r29 << r28; // slw
    r0 = *(0x1c + r30); // lwz @ 0x8061AFDC
    /* extsb r6, r28 */ // 0x8061AFE0
    r5 = r3 & r4; // 0x8061AFE4
    r3 = r0 & r4; // 0x8061AFE8
    /* neg r4, r5 */ // 0x8061AFEC
    /* neg r0, r3 */ // 0x8061AFF0
    r0 = r0 | r3; // 0x8061AFF4
    r4 = r4 | r5; // 0x8061AFF8
    /* srwi r3, r4, 0x1f */ // 0x8061AFFC
    /* srwi r0, r0, 0x1f */ // 0x8061B000
    if (==) goto 0x0x8061b034;
    /* mulli r0, r6, 0xc */ // 0x8061B00C
    r27 = r31 + r0; // 0x8061B010
    r3 = r27;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x8061b034;
}