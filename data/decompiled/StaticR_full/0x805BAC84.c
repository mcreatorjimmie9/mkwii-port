/* Function at 0x805BAC84, size=60 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_805BAC84(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r4, 0x1062 */ // 0x805BAC8C
    *(0x34 + r1) = r0; // stw @ 0x805BAC90
    /* stmw r24, 0x10(r1) */ // 0x805BAC94
    /* li r25, 0 */ // 0x805BAC98
    /* li r30, 0x64 */ // 0x805BAC9C
    r24 = r3;
    r31 = r25 * r30; // 0x805BACA4
    r28 = r4 + 0x4dd3; // 0x805BACA8
    /* li r27, 1 */ // 0x805BACAC
    /* li r26, 8 */ // 0x805BACB0
    /* lis r29, -0x8000 */ // 0x805BACB4
    r3 = r24;
    FUN_805E3430(r3); // bl 0x805E3430
}