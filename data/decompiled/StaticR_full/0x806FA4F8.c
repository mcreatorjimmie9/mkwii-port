/* Function at 0x806FA4F8, size=52 bytes */
/* Stack frame: 512 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_806FA4F8(int r3, int r4, int r5)
{
    /* Stack frame: -512(r1) */
    /* saved r22 */
    /* lis r3, 0 */ // 0x806FA500
    *(0x204 + r1) = r0; // stw @ 0x806FA504
    r3 = r3 + 0; // 0x806FA508
    /* stmw r22, 0x1d8(r1) */ // 0x806FA50C
    r23 = r4;
    r22 = r5;
    /* li r4, 0 */ // 0x806FA518
    /* li r5, 0x1c0 */ // 0x806FA51C
    *(8 + r1) = r3; // stw @ 0x806FA520
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}