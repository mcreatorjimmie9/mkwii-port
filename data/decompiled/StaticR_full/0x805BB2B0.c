/* Function at 0x805BB2B0, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_805BB2B0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* lis r6, 0x1062 */ // 0x805BB2B8
    *(0x34 + r1) = r0; // stw @ 0x805BB2BC
    /* stmw r22, 8(r1) */ // 0x805BB2C0
    /* li r25, 0 */ // 0x805BB2C4
    /* li r30, 0x64 */ // 0x805BB2C8
    r22 = r3;
    r31 = r25 * r30; // 0x805BB2D0
    r23 = r4;
    r24 = r5;
    r28 = r6 + 0x4dd3; // 0x805BB2DC
    /* li r27, 1 */ // 0x805BB2E0
    /* li r26, 8 */ // 0x805BB2E4
    /* lis r29, -0x8000 */ // 0x805BB2E8
    r3 = r22;
    r4 = r23;
    r5 = r24;
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}