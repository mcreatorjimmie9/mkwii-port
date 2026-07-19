/* Function at 0x80818560, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80818560(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80818564
    r8 = *(0 + r4); // lwz @ 0x8081856C
    r0 = *(0x170 + r8); // lwz @ 0x80818570
    if (!=) goto 0x0x80818640;
    /* lis r5, 0 */ // 0x8081857C
    /* lis r4, 0 */ // 0x80818580
    r5 = *(0 + r5); // lwz @ 0x80818584
    /* li r9, 0 */ // 0x80818588
    r6 = *(0 + r4); // lwz @ 0x8081858C
    /* li r10, 0 */ // 0x80818590
    r0 = *(0x24 + r5); // lbz @ 0x80818594
    r7 = r5 + 0x28; // 0x80818598
    /* li r11, 0 */ // 0x8081859C
    /* li r12, 0 */ // 0x808185A0
    /* li r31, 0 */ // 0x808185A4
    /* mtctr r0 */ // 0x808185A8
    if (<=) goto 0x0x8081860c;
    /* clrlwi r0, r31, 0x18 */ // 0x808185B4
    r5 = *(0xc + r6); // lwz @ 0x808185B8
    /* mulli r0, r0, 0xf0 */ // 0x808185BC
    r4 = r31 rlwinm 2; // rlwinm
    /* lwzx r4, r5, r4 */ // 0x808185C4
    r5 = r7 + r0; // 0x808185C8
    r4 = *(0x22 + r4); // lhz @ 0x808185CC
    r0 = *(0xcc + r5); // lwz @ 0x808185D0
    if (!=) goto 0x0x808185ec;
    r9 = r9 + r4; // 0x808185E0
    if (<=) goto 0x0x808185ec;
    r11 = r4;
    if (!=) goto 0x0x80818604;
    r10 = r10 + r4; // 0x808185F8
    if (<=) goto 0x0x80818604;
    r12 = r4;
    r31 = r31 + 1; // 0x80818604
    if (counter-- != 0) goto 0x0x808185b4;
    if (<=) goto 0x0x80818624;
    /* li r0, 0 */ // 0x80818614
    *(0x170 + r8) = r0; // stw @ 0x80818618
    *(0x174 + r8) = r11; // sth @ 0x8081861C
    /* b 0x80818640 */ // 0x80818620
    if (>=) goto 0x0x80818638;
    /* li r0, 1 */ // 0x80818628
    *(0x170 + r8) = r0; // stw @ 0x8081862C
    *(0x174 + r8) = r12; // sth @ 0x80818630
    /* b 0x80818640 */ // 0x80818634
    /* li r0, 2 */ // 0x80818638
    *(0x170 + r8) = r0; // stw @ 0x8081863C
    r5 = *(0x170 + r8); // lwz @ 0x80818640
    if (!=) goto 0x0x80818654;
    /* li r3, 3 */ // 0x8081864C
    /* b 0x8081869c */ // 0x80818650
    /* lis r4, 0 */ // 0x80818654
    /* mulli r0, r3, 0xf0 */ // 0x80818658
    r4 = *(0 + r4); // lwz @ 0x8081865C
    r4 = r4 + r0; // 0x80818660
    r0 = *(0xf4 + r4); // lwz @ 0x80818664
    if (!=) goto 0x0x80818698;
    /* lis r4, 0 */ // 0x80818670
    r3 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x80818678
    r0 = *(0x174 + r8); // lhz @ 0x8081867C
    r4 = *(0xc + r4); // lwz @ 0x80818680
    /* lwzx r3, r4, r3 */ // 0x80818684
    r3 = *(0x22 + r3); // lhz @ 0x80818688
    /* subf r0, r0, r3 */ // 0x8081868C
    /* srwi r3, r0, 0x1f */ // 0x80818690
    /* b 0x8081869c */ // 0x80818694
    /* li r3, 2 */ // 0x80818698
    r31 = *(0xc + r1); // lwz @ 0x8081869C
    return;
}