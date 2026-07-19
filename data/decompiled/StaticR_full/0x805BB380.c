/* Function at 0x805BB380, size=72 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_805BB380(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r5, 0x1062 */ // 0x805BB388
    *(0x34 + r1) = r0; // stw @ 0x805BB38C
    /* stmw r23, 0xc(r1) */ // 0x805BB390
    /* li r25, 0 */ // 0x805BB394
    /* li r30, 0x64 */ // 0x805BB398
    r23 = r3;
    r31 = r25 * r30; // 0x805BB3A0
    r24 = r4;
    r28 = r5 + 0x4dd3; // 0x805BB3A8
    /* li r27, 1 */ // 0x805BB3AC
    /* li r26, 8 */ // 0x805BB3B0
    /* lis r29, -0x8000 */ // 0x805BB3B4
    r3 = r23;
    r4 = r24;
    /* li r5, 0 */ // 0x805BB3C0
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}