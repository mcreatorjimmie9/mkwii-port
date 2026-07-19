/* Function at 0x805BAE54, size=80 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_805BAE54(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* lis r7, 0x1062 */ // 0x805BAE5C
    *(0x44 + r1) = r0; // stw @ 0x805BAE60
    /* stmw r21, 0x14(r1) */ // 0x805BAE64
    /* li r29, 0 */ // 0x805BAE68
    /* li r24, 0x64 */ // 0x805BAE6C
    r25 = r3;
    r23 = r29 * r24; // 0x805BAE74
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r21 = r7 + 0x4dd3; // 0x805BAE84
    /* li r31, 1 */ // 0x805BAE88
    /* li r30, 8 */ // 0x805BAE8C
    /* lis r22, -0x8000 */ // 0x805BAE90
    r3 = r25;
    r4 = r28;
    /* li r5, 0 */ // 0x805BAE9C
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}