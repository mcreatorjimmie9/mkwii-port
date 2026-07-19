/* Function at 0x8063C404, size=60 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_8063C404(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r9, 0 */ // 0x8063C40C
    *(0x34 + r1) = r0; // stw @ 0x8063C410
    /* stmw r25, 0x14(r1) */ // 0x8063C414
    r30 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    r4 = r9 + 0; // 0x8063C430
    /* li r3, 0x20 */ // 0x8063C434
    /* li r5, 2 */ // 0x8063C438
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}