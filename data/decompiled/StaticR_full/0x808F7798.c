/* Function at 0x808F7798, size=228 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 3 function(s) */

int FUN_808F7798(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x808F77A4
    /* lis r29, 0 */ // 0x808F77A8
    r31 = r3;
    r28 = r3 + 0x30; // 0x808F77B0
    r26 = r3 + 0x2448; // 0x808F77B4
    r29 = r29 + 0; // 0x808F77B8
    /* li r23, 0 */ // 0x808F77BC
    /* li r27, 0 */ // 0x808F77C0
    /* lis r30, 0 */ // 0x808F77C4
    r25 = r28;
    r24 = r30 + 0; // 0x808F77CC
    /* li r22, 0 */ // 0x808F77D0
    r0 = *(0 + r24); // lwz @ 0x808F77D4
    r3 = r25;
    /* li r6, 0x64 */ // 0x808F77DC
    /* li r7, 0 */ // 0x808F77E0
    r5 = r0 + r27; // 0x808F77E4
    /* lhzx r4, r27, r0 */ // 0x808F77E8
    r5 = *(2 + r5); // lhz @ 0x808F77EC
    FUN_808F6DA4(r6, r7); // bl 0x808F6DA4
    r22 = r22 + 1; // 0x808F77F4
    r25 = r25 + 0x30; // 0x808F77F8
    r24 = r24 + 4; // 0x808F7800
    if (<) goto 0x0x808f77d4;
    r24 = r26;
    /* li r22, 0 */ // 0x808F780C
    /* li r25, 0 */ // 0x808F7810
    r0 = *(0 + r29); // lwz @ 0x808F7814
    /* lhzx r4, r25, r0 */ // 0x808F7818
    r3 = r0 + r25; // 0x808F781C
    if (==) goto 0x0x808f7844;
    r5 = *(2 + r3); // lhz @ 0x808F7828
    if (==) goto 0x0x808f7844;
    r3 = r24;
    /* li r6, 0x64 */ // 0x808F7838
    /* li r7, 0 */ // 0x808F783C
    FUN_808F6DA4(r3, r6, r7); // bl 0x808F6DA4
    r22 = r22 + 1; // 0x808F7844
    r24 = r24 + 0x30; // 0x808F7848
    r25 = r25 + 4; // 0x808F7850
    if (<) goto 0x0x808f7814;
    r23 = r23 + 1; // 0x808F7858
    r28 = r28 + 0xc0; // 0x808F785C
    r29 = r29 + 4; // 0x808F7864
    r26 = r26 + 0x90; // 0x808F7868
    r27 = r27 + 4; // 0x808F786C
    if (<) goto 0x0x808f77c8;
    /* li r3, 0x28 */ // 0x808F7874
    FUN_805E3430(r3); // bl 0x805E3430
}