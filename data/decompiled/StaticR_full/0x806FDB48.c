/* Function at 0x806FDB48, size=56 bytes */
/* Stack frame: 496 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_806FDB48(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -496(r1) */
    /* saved r25 */
    /* lis r3, 0 */ // 0x806FDB50
    *(0x1f4 + r1) = r0; // stw @ 0x806FDB54
    r3 = r3 + 0; // 0x806FDB58
    /* stmw r25, 0x1d4(r1) */ // 0x806FDB5C
    r26 = r4;
    r27 = r5;
    r28 = r6;
    /* li r4, 0 */ // 0x806FDB6C
    /* li r5, 0x1c0 */ // 0x806FDB70
    *(8 + r1) = r3; // stw @ 0x806FDB74
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}