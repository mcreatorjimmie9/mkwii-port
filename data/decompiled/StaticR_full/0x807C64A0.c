/* Function at 0x807C64A0, size=204 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 2 function(s) */

int FUN_807C64A0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* srwi r0, r4, 0x1f */ // 0x807C64AC
    /* stmw r23, 0xc(r1) */ // 0x807C64B0
    r24 = r3;
    r25 = r4;
    /* li r29, -1 */ // 0x807C64BC
    r31 = r24;
    /* xori r30, r0, 1 */ // 0x807C64C4
    /* li r28, 0 */ // 0x807C64C8
    /* li r27, 0 */ // 0x807C64CC
    /* lis r23, 0 */ // 0x807C64D0
    /* b 0x807c6548 */ // 0x807C64D4
    r26 = *(0xe8 + r31); // lwz @ 0x807C64DC
    if (==) goto 0x0x807c6508;
    r3 = r26;
    FUN_807C36A8(r3); // bl 0x807C36A8
    /* clrlwi r0, r3, 0x18 */ // 0x807C64EC
    r3 = *(0 + r23); // lwz @ 0x807C64F0
    /* mulli r0, r0, 0xf0 */ // 0x807C64F4
    r3 = r3 + r0; // 0x807C64F8
    r0 = *(0xf4 + r3); // lwz @ 0x807C64FC
    if (!=) goto 0x0x807c6540;
    r0 = *(8 + r26); // lwz @ 0x807C6508
    if (!=) goto 0x0x807c6540;
    r3 = r26;
    FUN_807C36A8(r3); // bl 0x807C36A8
    /* clrlwi r0, r3, 0x18 */ // 0x807C651C
    r3 = *(0 + r23); // lwz @ 0x807C6520
    /* mulli r0, r0, 0xf0 */ // 0x807C6524
    r3 = r3 + r0; // 0x807C6528
    r0 = *(0x100 + r3); // lhz @ 0x807C652C
    if (>=) goto 0x0x807c6540;
    r29 = r0;
    r28 = r26;
    r31 = r31 + 8; // 0x807C6540
    r27 = r27 + 1; // 0x807C6544
    r0 = *(0x178 + r24); // lwz @ 0x807C6548
    if (<) goto 0x0x807c64d8;
    r3 = r28;
    r0 = *(0x34 + r1); // lwz @ 0x807C655C
    return;
}