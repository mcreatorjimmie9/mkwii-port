/* Function at 0x805D0200, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_805D0200(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805D020C
    /* slwi r31, r4, 2 */ // 0x805D0210
    r27 = r3;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r8 = *(4 + r3); // lwz @ 0x805D0224
    /* lwzx r3, r8, r31 */ // 0x805D0228
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805d0240;
    /* li r3, 0 */ // 0x805D0238
    /* b 0x805d0288 */ // 0x805D023C
    r3 = *(4 + r27); // lwz @ 0x805D0240
    /* lwzx r4, r3, r31 */ // 0x805D0244
    r0 = *(8 + r4); // lhz @ 0x805D0248
    if (>=) goto 0x0x805d0284;
    r3 = r29;
    if (>=) goto 0x0x805d0270;
    /* mulli r0, r28, 0x24 */ // 0x805D025C
    r4 = *(4 + r4); // lwz @ 0x805D0260
    r4 = r4 + r0; // 0x805D0264
    r4 = *(8 + r4); // lwz @ 0x805D0268
    /* b 0x805d0274 */ // 0x805D026C
    /* li r4, 0 */ // 0x805D0270
    r5 = r30;
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* li r3, 1 */ // 0x805D027C
    /* b 0x805d0288 */ // 0x805D0280
    /* li r3, 0 */ // 0x805D0284
    r0 = *(0x24 + r1); // lwz @ 0x805D028C
}