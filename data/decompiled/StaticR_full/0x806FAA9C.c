/* Function at 0x806FAA9C, size=60 bytes */
/* Stack frame: 304 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_806FAA9C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -304(r1) */
    /* saved r24 */
    /* lis r4, 0 */ // 0x806FAAA4
    *(0x134 + r1) = r0; // stw @ 0x806FAAA8
    r4 = r4 + 0; // 0x806FAAAC
    /* stmw r24, 0x110(r1) */ // 0x806FAAB0
    r24 = r3;
    r26 = r5;
    r25 = r6;
    r27 = r7;
    r28 = r8;
    r30 = r4 + 0x43; // 0x806FAAC8
    r29 = r7 + 0x14; // 0x806FAACC
    /* li r3, 1 */ // 0x806FAAD0
    FUN_805E3430(r3); // bl 0x805E3430
}