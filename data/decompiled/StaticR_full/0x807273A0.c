/* Function at 0x807273A0, size=116 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_807273A0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* slwi r0, r5, 2 */ // 0x807273AC
    /* stmw r23, 0xc(r1) */ // 0x807273B0
    r25 = r3;
    r30 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r29 = r9;
    r31 = r4 + r0; // 0x807273CC
    /* li r23, 1 */ // 0x807273D0
    /* lis r24, 5 */ // 0x807273D4
    /* b 0x80727578 */ // 0x807273D8
    r3 = *(0 + r31); // lwz @ 0x807273DC
    if (==) goto 0x0x80727570;
    r3 = r3 + 0x74; // 0x807273E8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80727400;
    /* li r3, 0 */ // 0x807273F8
    /* b 0x80727404 */ // 0x807273FC
    r3 = *(0xc + r3); // lwz @ 0x80727400
    /* li r0, 0 */ // 0x80727408
    if (==) goto 0x0x80727418;
}