/* Function at 0x806E6B58, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_806E6B58(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x806E6B64
    r28 = r3;
    /* li r25, 0 */ // 0x806E6B6C
    /* li r31, 0 */ // 0x806E6B70
    r27 = r28;
    /* li r24, 0 */ // 0x806E6B78
    r26 = *(0xf0 + r27); // lwz @ 0x806E6B7C
    /* li r30, 0 */ // 0x806E6B80
    r29 = *(0 + r26); // lwz @ 0x806E6B84
    /* li r4, 0 */ // 0x806E6B88
    r3 = *(0 + r29); // lwz @ 0x806E6B8C
    r5 = *(4 + r29); // lwz @ 0x806E6B90
    FUN_805E3430(r4); // bl 0x805E3430
}