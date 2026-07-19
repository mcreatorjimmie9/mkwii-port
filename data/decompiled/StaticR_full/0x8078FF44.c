/* Function at 0x8078FF44, size=48 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_8078FF44(int r3, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r25 */
    /* lis r3, 0 */ // 0x8078FF4C
    *(0x54 + r1) = r0; // stw @ 0x8078FF50
    /* stmw r25, 0x34(r1) */ // 0x8078FF54
    r25 = r5;
    r26 = r6;
    r3 = *(0 + r3); // lwz @ 0x8078FF64
    r31 = *(0x100 + r3); // lwz @ 0x8078FF68
    r3 = r31;
    FUN_805E3430(r5, r3); // bl 0x805E3430
}