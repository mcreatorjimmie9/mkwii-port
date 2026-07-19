/* Function at 0x805BAA88, size=96 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r19 */
/* Calls: 1 function(s) */

int FUN_805BAA88(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r19 */
    /* lis r8, 0x1062 */ // 0x805BAA90
    *(0x44 + r1) = r0; // stw @ 0x805BAA94
    /* stmw r19, 0xc(r1) */ // 0x805BAA98
    /* li r28, 0 */ // 0x805BAA9C
    /* li r21, 0x64 */ // 0x805BAAA0
    r23 = r3;
    r22 = r28 * r21; // 0x805BAAA8
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    /* li r30, 1 */ // 0x805BAAC0
    /* li r29, 8 */ // 0x805BAAC4
    /* lis r31, 0 */ // 0x805BAAC8
    /* lis r20, -0x8000 */ // 0x805BAACC
    r3 = r23;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}