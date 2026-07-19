/* Function at 0x806ECC58, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_806ECC58(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x806ECC64
    r24 = r4;
    r26 = r4 + 0x10; // 0x806ECC6C
    /* li r27, 0 */ // 0x806ECC70
    r25 = r24;
    /* li r28, 0x30 */ // 0x806ECC78
    /* li r29, 0x24 */ // 0x806ECC7C
    /* li r30, 0x43 */ // 0x806ECC80
    /* li r31, 0 */ // 0x806ECC84
    r3 = r26;
    /* li r4, 0 */ // 0x806ECC8C
    /* li r5, 4 */ // 0x806ECC90
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}