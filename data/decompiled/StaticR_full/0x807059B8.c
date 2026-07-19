/* Function at 0x807059B8, size=44 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_807059B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* li r4, 0 */ // 0x807059C0
    *(0x44 + r1) = r0; // stw @ 0x807059C4
    /* stmw r25, 0x24(r1) */ // 0x807059C8
    r31 = r3;
    r25 = r5;
    r27 = r6;
    /* li r5, 0x14 */ // 0x807059DC
    FUN_805E3430(r3, r5); // bl 0x805E3430
}