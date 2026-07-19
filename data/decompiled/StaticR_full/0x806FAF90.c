/* Function at 0x806FAF90, size=56 bytes */
/* Stack frame: 304 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_806FAF90(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -304(r1) */
    /* saved r25 */
    /* lis r8, 0 */ // 0x806FAF98
    *(0x134 + r1) = r0; // stw @ 0x806FAF9C
    r8 = r8 + 0; // 0x806FAFA0
    /* stmw r25, 0x114(r1) */ // 0x806FAFA4
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8 + 0x59; // 0x806FAFBC
    /* li r3, 1 */ // 0x806FAFC0
    FUN_805E3430(r3); // bl 0x805E3430
}