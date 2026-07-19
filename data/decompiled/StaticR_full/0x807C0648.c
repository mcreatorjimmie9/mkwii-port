/* Function at 0x807C0648, size=160 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_807C0648(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x807C0654
    r25 = r3;
    r26 = r4;
    /* li r29, 0 */ // 0x807C0660
    /* li r28, 0 */ // 0x807C0664
    /* lis r31, 0 */ // 0x807C0668
    r0 = *(0x14 + r3); // lwz @ 0x807C066C
    /* clrlwi r30, r0, 0x18 */ // 0x807C0670
    /* b 0x807c06c4 */ // 0x807C0674
    /* clrlwi r0, r28, 0x18 */ // 0x807C0678
    r3 = r28 rlwinm 2; // rlwinm
    /* mulli r0, r0, 0xf0 */ // 0x807C0680
    r4 = *(0 + r31); // lwz @ 0x807C0684
    r3 = r25 + r3; // 0x807C0688
    r3 = *(0x24 + r3); // lwz @ 0x807C0690
    r4 = r4 + r0; // 0x807C0694
    r27 = *(0x100 + r4); // lhz @ 0x807C0698
    if (==) goto 0x0x807c06a8;
    FUN_807B5EBC(); // bl 0x807B5EBC
    /* b 0x807c06ac */ // 0x807C06A4
    FUN_807B5F00(); // bl 0x807B5F00
    if (==) goto 0x0x807c06c0;
    if (<=) goto 0x0x807c06c0;
    r29 = r27;
    r28 = r28 + 1; // 0x807C06C0
    /* clrlwi r0, r28, 0x18 */ // 0x807C06C4
    if (<) goto 0x0x807c0678;
    r3 = r29;
    r0 = *(0x34 + r1); // lwz @ 0x807C06D8
    return;
}