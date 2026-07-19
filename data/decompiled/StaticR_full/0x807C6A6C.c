/* Function at 0x807C6A6C, size=172 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_807C6A6C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x807C6A78
    r26 = r4;
    r25 = r3;
    r27 = r5;
    r3 = r26;
    r30 = *(4 + r4); // lwz @ 0x807C6A8C
    FUN_807C38E8(r3); // bl 0x807C38E8
    r3 = r27;
    FUN_807C38E8(r3, r3); // bl 0x807C38E8
    r31 = r25;
    /* li r29, 0 */ // 0x807C6AA0
    /* li r28, 0 */ // 0x807C6AA4
    /* b 0x807c6af8 */ // 0x807C6AA8
    r4 = *(0xec + r31); // lwz @ 0x807C6AAC
    r0 = *(8 + r4); // lwz @ 0x807C6AB0
    if (==) goto 0x0x807c6ac4;
    if (!=) goto 0x0x807c6af0;
    if (>=) goto 0x0x807c6ad4;
    r3 = r26;
    /* b 0x807c6ad8 */ // 0x807C6AD0
    r3 = r27;
    *(8 + r4) = r3; // stw @ 0x807C6AD8
    r12 = *(0 + r3); // lwz @ 0x807C6ADC
    r12 = *(0x18 + r12); // lwz @ 0x807C6AE0
    /* mtctr r12 */ // 0x807C6AE4
    /* bctrl  */ // 0x807C6AE8
    r29 = r29 + 1; // 0x807C6AEC
    r31 = r31 + 8; // 0x807C6AF0
    r28 = r28 + 1; // 0x807C6AF4
    r0 = *(0x178 + r25); // lwz @ 0x807C6AF8
    if (<) goto 0x0x807c6aac;
    r0 = *(0x34 + r1); // lwz @ 0x807C6B08
    return;
}