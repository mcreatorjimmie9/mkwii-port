/* Function at 0x805EF228, size=88 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_805EF228(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r25 */
    /* stmw r25, 0x54(r1) */ // 0x805EF234
    r25 = r3;
    r26 = r4;
    r27 = r5;
    /* li r28, 0 */ // 0x805EF244
    r29 = r25;
    r3 = *(0x14 + r29); // lwz @ 0x805EF24C
    r0 = *(4 + r3); // lwz @ 0x805EF250
    if (!=) goto 0x0x805ef264;
    r31 = *(0 + r3); // lwz @ 0x805EF25C
    /* b 0x805ef268 */ // 0x805EF260
    /* li r31, 0 */ // 0x805EF264
    /* li r30, 0 */ // 0x805EF268
    /* b 0x805ef2c8 */ // 0x805EF26C
    r4 = r31;
    r5 = r30;
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}