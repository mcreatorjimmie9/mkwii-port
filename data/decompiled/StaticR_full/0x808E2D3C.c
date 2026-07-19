/* Function at 0x808E2D3C, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_808E2D3C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r24 */
    /* stmw r24, 0x20(r1) */ // 0x808E2D48
    r29 = r7;
    r27 = r4;
    r26 = r3;
    r28 = r6;
    r30 = r8;
    r31 = r9;
    r4 = r29;
    *(0xc + r3) = r5; // stw @ 0x808E2D68
    /* li r5, 4 */ // 0x808E2D6C
    *(8 + r3) = r6; // stw @ 0x808E2D70
    /* li r3, 0x4c */ // 0x808E2D74
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}