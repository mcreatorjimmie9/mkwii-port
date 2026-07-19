/* Function at 0x8070507C, size=72 bytes */
/* Stack frame: 544 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8070507C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -544(r1) */
    /* saved r26 */
    *(0x224 + r1) = r0; // stw @ 0x80705088
    /* stmw r26, 0x208(r1) */ // 0x8070508C
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    /* li r31, 0 */ // 0x807050A4
    if (==) goto 0x0x807050b8;
    /* li r0, 0 */ // 0x807050AC
    *(4 + r6) = r0; // stw @ 0x807050B0
    *(0 + r6) = r0; // stw @ 0x807050B4
    r4 = r28;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}