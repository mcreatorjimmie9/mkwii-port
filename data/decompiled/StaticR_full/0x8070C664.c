/* Function at 0x8070C664, size=316 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_8070C664(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    /* li r30, 0 */ // 0x8070C67C
    *(0x14 + r1) = r29; // stw @ 0x8070C680
    /* li r29, 0 */ // 0x8070C684
    *(0x10 + r1) = r28; // stw @ 0x8070C688
    /* b 0x8070c6a4 */ // 0x8070C68C
    r3 = *(0x68 + r31); // lwz @ 0x8070C690
    /* lwzx r3, r3, r29 */ // 0x8070C694
    FUN_8071E5C0(); // bl 0x8071E5C0
    r29 = r29 + 4; // 0x8070C69C
    r30 = r30 + 1; // 0x8070C6A0
    r0 = *(0 + r31); // lwz @ 0x8070C6A4
    if (<) goto 0x0x8070c690;
    r3 = *(0x74 + r31); // lwz @ 0x8070C6B0
    FUN_8071CE8C(); // bl 0x8071CE8C
    /* li r28, 0 */ // 0x8070C6B8
    /* li r29, 0 */ // 0x8070C6BC
    /* lis r30, 0 */ // 0x8070C6C0
    /* b 0x8070c6f8 */ // 0x8070C6C4
    r3 = *(0 + r30); // lwz @ 0x8070C6C8
    /* clrlwi r4, r28, 0x18 */ // 0x8070C6CC
    FUN_805C1470(); // bl 0x805C1470
    /* extsb r0, r3 */ // 0x8070C6D4
    if (!=) goto 0x0x8070c6f0;
    r3 = *(0x68 + r31); // lwz @ 0x8070C6E0
    /* li r4, 1 */ // 0x8070C6E4
    /* lwzx r3, r3, r29 */ // 0x8070C6E8
    FUN_80723970(r4); // bl 0x80723970
    r29 = r29 + 4; // 0x8070C6F0
    r28 = r28 + 1; // 0x8070C6F4
    r0 = *(0 + r31); // lwz @ 0x8070C6F8
    if (<) goto 0x0x8070c6c8;
    r5 = r31;
    /* li r6, 0 */ // 0x8070C708
    /* li r4, 1 */ // 0x8070C70C
    /* b 0x8070c73c */ // 0x8070C710
    /* li r7, 0 */ // 0x8070C714
    /* b 0x8070c728 */ // 0x8070C718
    r3 = r5 + r7; // 0x8070C71C
    r7 = r7 + 1; // 0x8070C720
    *(0x6b8 + r3) = r4; // stb @ 0x8070C724
    r0 = *(8 + r31); // lhz @ 0x8070C728
    if (<) goto 0x0x8070c71c;
    r5 = r5 + 0xc8; // 0x8070C734
    r6 = r6 + 1; // 0x8070C738
    r0 = *(4 + r31); // lwz @ 0x8070C73C
    if (<) goto 0x0x8070c714;
    r30 = r31;
    /* li r28, 0 */ // 0x8070C74C
    /* b 0x8070c774 */ // 0x8070C750
    r3 = *(0x398 + r30); // lwz @ 0x8070C754
    /* li r4, 1 */ // 0x8070C758
    r12 = *(0 + r3); // lwz @ 0x8070C75C
    r12 = *(0x20 + r12); // lwz @ 0x8070C760
    /* mtctr r12 */ // 0x8070C764
    /* bctrl  */ // 0x8070C768
    r30 = r30 + 4; // 0x8070C76C
    r28 = r28 + 1; // 0x8070C770
    r0 = *(8 + r31); // lhz @ 0x8070C774
    if (<) goto 0x0x8070c754;
    r0 = *(0x24 + r1); // lwz @ 0x8070C780
    r31 = *(0x1c + r1); // lwz @ 0x8070C784
    r30 = *(0x18 + r1); // lwz @ 0x8070C788
    r29 = *(0x14 + r1); // lwz @ 0x8070C78C
    r28 = *(0x10 + r1); // lwz @ 0x8070C790
    return;
}