/* Function at 0x808B6614, size=224 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

void FUN_808B6614(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -112(r1) */
    /* saved r23 */
    /* stmw r23, 0x4c(r1) */ // 0x808B6620
    /* lis r24, 0 */ // 0x808B6624
    r25 = *(0 + r24); // lwzu @ 0x808B6628
    r23 = *(0x20c + r4); // lwz @ 0x808B662C
    r26 = *(4 + r24); // lwz @ 0x808B6630
    r27 = *(8 + r24); // lwz @ 0x808B6634
    r28 = *(0xc + r24); // lwz @ 0x808B663C
    r29 = *(0x10 + r24); // lwz @ 0x808B6640
    r30 = *(0x14 + r24); // lwz @ 0x808B6644
    r31 = *(0x18 + r24); // lwz @ 0x808B6648
    r12 = *(0x1c + r24); // lwz @ 0x808B664C
    r11 = *(0x20 + r24); // lwz @ 0x808B6650
    r10 = *(0x24 + r24); // lwz @ 0x808B6654
    r9 = *(0x28 + r24); // lwz @ 0x808B6658
    r8 = *(0x2c + r24); // lwz @ 0x808B665C
    r7 = *(0x30 + r24); // lwz @ 0x808B6660
    r5 = *(0x34 + r24); // lwz @ 0x808B6664
    r4 = *(0x38 + r24); // lwz @ 0x808B6668
    r0 = *(0x3c + r24); // lwz @ 0x808B666C
    *(8 + r1) = r25; // stw @ 0x808B6670
    *(0xc + r1) = r26; // stw @ 0x808B6674
    *(0x10 + r1) = r27; // stw @ 0x808B6678
    *(0x14 + r1) = r28; // stw @ 0x808B667C
    *(0x18 + r1) = r29; // stw @ 0x808B6680
    *(0x1c + r1) = r30; // stw @ 0x808B6684
    *(0x20 + r1) = r31; // stw @ 0x808B6688
    *(0x24 + r1) = r12; // stw @ 0x808B668C
    *(0x28 + r1) = r11; // stw @ 0x808B6690
    *(0x2c + r1) = r10; // stw @ 0x808B6694
    *(0x30 + r1) = r9; // stw @ 0x808B6698
    *(0x34 + r1) = r8; // stw @ 0x808B669C
    *(0x38 + r1) = r7; // stw @ 0x808B66A0
    *(0x3c + r1) = r5; // stw @ 0x808B66A4
    *(0x40 + r1) = r4; // stw @ 0x808B66A8
    *(0x44 + r1) = r0; // stw @ 0x808B66AC
    if (<) goto 0x0x808b66e0;
    if (>=) goto 0x0x808b66c0;
    /* b 0x808b66e0 */ // 0x808B66BC
    /* slwi r5, r23, 4 */ // 0x808B66C0
    r0 = r0 + r5; // 0x808B66C8
    /* slwi r4, r6, 2 */ // 0x808B66CC
    r3 = *(0x2bc + r3); // lwz @ 0x808B66D0
    /* li r5, 0 */ // 0x808B66D4
    /* lwzx r4, r4, r0 */ // 0x808B66D8
    FUN_808D5A00(r5); // bl 0x808D5A00
    r0 = *(0x74 + r1); // lwz @ 0x808B66E4
    return;
}