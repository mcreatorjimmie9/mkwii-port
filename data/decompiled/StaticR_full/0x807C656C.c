/* Function at 0x807C656C, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 3 function(s) */

int FUN_807C656C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* srwi r0, r4, 0x1f */ // 0x807C6578
    /* stmw r22, 8(r1) */ // 0x807C657C
    r29 = r3;
    r30 = r4;
    /* li r31, 0 */ // 0x807C6588
    r23 = r29;
    /* xori r25, r0, 1 */ // 0x807C6590
    /* li r24, 0 */ // 0x807C6594
    /* li r26, 0 */ // 0x807C6598
    /* lis r28, 0 */ // 0x807C659C
    /* b 0x807c65ec */ // 0x807C65A0
    r27 = *(0xe8 + r23); // lwz @ 0x807C65A8
    if (==) goto 0x0x807c65d4;
    r3 = r27;
    FUN_807C36A8(r3); // bl 0x807C36A8
    /* clrlwi r0, r3, 0x18 */ // 0x807C65B8
    r3 = *(0 + r28); // lwz @ 0x807C65BC
    /* mulli r0, r0, 0xf0 */ // 0x807C65C0
    r3 = r3 + r0; // 0x807C65C4
    r0 = *(0xf4 + r3); // lwz @ 0x807C65C8
    if (!=) goto 0x0x807c65e4;
    r0 = *(8 + r27); // lwz @ 0x807C65D4
    if (!=) goto 0x0x807c65e4;
    r24 = r24 + 1; // 0x807C65E0
    r23 = r23 + 8; // 0x807C65E4
    r26 = r26 + 1; // 0x807C65E8
    r0 = *(0x178 + r29); // lwz @ 0x807C65EC
    if (<) goto 0x0x807c65a4;
    if (!=) goto 0x0x807c6608;
    /* li r3, 0 */ // 0x807C6600
    /* b 0x807c66a0 */ // 0x807C6604
    /* lis r3, 0 */ // 0x807C6608
    /* srwi r0, r30, 0x1f */ // 0x807C660C
    r3 = *(0 + r3); // lwz @ 0x807C6610
    r4 = r24;
    /* xori r23, r0, 1 */ // 0x807C6618
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    r24 = r3;
    r25 = r29;
    /* li r26, 0 */ // 0x807C6628
    /* li r27, 0 */ // 0x807C662C
    /* lis r28, 0 */ // 0x807C6630
    /* b 0x807c6690 */ // 0x807C6634
    r22 = *(0xe8 + r25); // lwz @ 0x807C663C
    if (==) goto 0x0x807c6668;
    r3 = r22;
    FUN_807C36A8(r3); // bl 0x807C36A8
    /* clrlwi r0, r3, 0x18 */ // 0x807C664C
    r3 = *(0 + r28); // lwz @ 0x807C6650
    /* mulli r0, r0, 0xf0 */ // 0x807C6654
    r3 = r3 + r0; // 0x807C6658
    r0 = *(0xf4 + r3); // lwz @ 0x807C665C
    if (!=) goto 0x0x807c6688;
    r0 = *(8 + r22); // lwz @ 0x807C6668
    if (!=) goto 0x0x807c6688;
    if (!=) goto 0x0x807c6684;
    r31 = r22;
    /* b 0x807c669c */ // 0x807C6680
    r26 = r26 + 1; // 0x807C6684
    r25 = r25 + 8; // 0x807C6688
    r27 = r27 + 1; // 0x807C668C
    r0 = *(0x178 + r29); // lwz @ 0x807C6690
    if (<) goto 0x0x807c6638;
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x807C66A4
    return;
}