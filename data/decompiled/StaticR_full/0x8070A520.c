/* Function at 0x8070A520, size=72 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_8070A520(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -128(r1) */
    /* saved r25 */
    /* li r4, 0 */ // 0x8070A520
    /* li r5, 0 */ // 0x8070A524
    /* li r6, 0 */ // 0x8070A528
    /* li r7, 1 */ // 0x8070A52C
    /* b 0x8070a534 */ // 0x8070A530
    *(0x84 + r1) = r0; // stw @ 0x8070A53C
    /* stmw r25, 0x64(r1) */ // 0x8070A540
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    /* li r30, 0 */ // 0x8070A55C
    /* li r4, 0x40 */ // 0x8070A560
    FUN_805E3430(r3, r4); // bl 0x805E3430
}