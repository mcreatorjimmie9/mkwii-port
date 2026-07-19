/* Function at 0x805B81C4, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_805B81C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stmw r23, 0x1c(r1) */ // 0x805B81D0
    r28 = r5;
    r29 = r4;
    r23 = r6;
    r27 = r28;
    /* li r25, 0 */ // 0x805B81E8
    /* li r24, 0 */ // 0x805B81EC
    /* li r30, 0 */ // 0x805B81F0
    /* li r31, 0 */ // 0x805B81F4
    r3 = r27 + r31; // 0x805B81F8
    r3 = *(0x38 + r3); // lbz @ 0x805B81FC
    FUN_805E3430(); // bl 0x805E3430
}