/* Function at 0x805AD214, size=48 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805AD214(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    r3 = r4;
    *(0x34 + r1) = r0; // stw @ 0x805AD220
    /* stmw r27, 0x1c(r1) */ // 0x805AD224
    r27 = r5;
    r29 = r6;
    r28 = r7;
    r4 = r27;
    /* li r5, 0 */ // 0x805AD23C
    FUN_805E3430(r4, r6, r5); // bl 0x805E3430
}