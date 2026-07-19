/* Function at 0x805E6C30, size=88 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_805E6C30(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r24 */
    *(0x54 + r1) = r0; // stw @ 0x805E6C3C
    /* stmw r24, 0x30(r1) */ // 0x805E6C40
    r25 = r4;
    r31 = *(0x58 + r1); // lwz @ 0x805E6C48
    r24 = r3;
    r29 = *(0x5c + r1); // lwz @ 0x805E6C50
    r26 = r5;
    r27 = r6;
    r30 = r7;
    r28 = r10;
    /* li r4, 0 */ // 0x805E6C64
    if (!=) goto 0x0x805e6de8;
    r3 = r8;
    r4 = r9;
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r8 = *(0 + r30); // lwz @ 0x805E6C78
    /* li r0, 0 */ // 0x805E6C7C
    *(0xc + r1) = r3; // stw @ 0x805E6C80
    r3 = r27;
}