/* Function at 0x80706294, size=44 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80706294(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* li r4, 0 */ // 0x8070629C
    *(0x44 + r1) = r0; // stw @ 0x807062A0
    /* stmw r25, 0x24(r1) */ // 0x807062A4
    r29 = r3;
    r30 = r5;
    r31 = r6;
    /* li r5, 0x14 */ // 0x807062B8
    FUN_805E3430(r3, r5); // bl 0x805E3430
}