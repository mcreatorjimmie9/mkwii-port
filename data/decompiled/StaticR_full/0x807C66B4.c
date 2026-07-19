/* Function at 0x807C66B4, size=164 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_807C66B4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* srwi r0, r5, 0x1f */ // 0x807C66C0
    /* stmw r23, 0xc(r1) */ // 0x807C66C4
    r23 = r3;
    r24 = r4;
    r25 = r5;
    r30 = r23;
    /* xori r28, r0, 1 */ // 0x807C66D8
    /* li r29, 0 */ // 0x807C66DC
    /* li r27, 0 */ // 0x807C66E0
    /* lis r31, 0 */ // 0x807C66E4
    /* b 0x807c6734 */ // 0x807C66E8
    r26 = *(0xe8 + r30); // lwz @ 0x807C66F0
    if (==) goto 0x0x807c671c;
    r3 = r26;
    FUN_807C36A8(r3); // bl 0x807C36A8
    /* clrlwi r0, r3, 0x18 */ // 0x807C6700
    r3 = *(0 + r31); // lwz @ 0x807C6704
    /* mulli r0, r0, 0xf0 */ // 0x807C6708
    r3 = r3 + r0; // 0x807C670C
    r0 = *(0xf4 + r3); // lwz @ 0x807C6710
    if (!=) goto 0x0x807c672c;
    r0 = *(8 + r26); // lwz @ 0x807C671C
    if (!=) goto 0x0x807c672c;
    r29 = r29 + 1; // 0x807C6728
    r30 = r30 + 8; // 0x807C672C
    r27 = r27 + 1; // 0x807C6730
    r0 = *(0x178 + r23); // lwz @ 0x807C6734
    if (<) goto 0x0x807c66ec;
    r3 = r29;
    r0 = *(0x34 + r1); // lwz @ 0x807C6748
    return;
}