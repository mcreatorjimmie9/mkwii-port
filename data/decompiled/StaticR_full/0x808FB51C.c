/* Function at 0x808FB51C, size=188 bytes */
/* Stack frame: 0 bytes */

void FUN_808FB51C(int r3, int r4, int r5, int r6, int r7)
{
    r5 = *(0x168 + r3); // lwz @ 0x808FB51C
    r4 = *(0x15c + r3); // lwz @ 0x808FB520
    r5 = r5 + 1; // 0x808FB524
    r0 = *(0x164 + r3); // lwz @ 0x808FB528
    /* subfc r4, r4, r5 */ // 0x808FB52C
    /* subfe r4, r4, r4 */ // 0x808FB530
    r4 = r5 & r4; // 0x808FB534
    /* beqlr  */ // 0x808FB53C
    *(0x168 + r3) = r4; // stw @ 0x808FB540
    /* slwi r0, r4, 4 */ // 0x808FB544
    r4 = *(0x160 + r3); // lwz @ 0x808FB548
    /* li r7, 9 */ // 0x808FB54C
    /* li r6, 0 */ // 0x808FB550
    /* li r5, -1 */ // 0x808FB554
    /* stwx r7, r4, r0 */ // 0x808FB558
    r0 = *(0x168 + r3); // lwz @ 0x808FB55C
    r4 = *(0x160 + r3); // lwz @ 0x808FB560
    /* slwi r0, r0, 4 */ // 0x808FB564
    r4 = r4 + r0; // 0x808FB568
    *(4 + r4) = r6; // stw @ 0x808FB56C
    r0 = *(0x168 + r3); // lwz @ 0x808FB570
    r4 = *(0x160 + r3); // lwz @ 0x808FB574
    /* slwi r0, r0, 4 */ // 0x808FB578
    r4 = r4 + r0; // 0x808FB57C
    *(8 + r4) = r5; // stw @ 0x808FB580
    r0 = *(0x168 + r3); // lwz @ 0x808FB584
    r4 = *(0x160 + r3); // lwz @ 0x808FB588
    /* slwi r0, r0, 4 */ // 0x808FB58C
    r5 = *(0x15c + r3); // lwz @ 0x808FB590
    r4 = r4 + r0; // 0x808FB594
    *(0xc + r4) = r5; // stw @ 0x808FB598
    r4 = *(0x164 + r3); // lwz @ 0x808FB59C
    /* b 0x808fb5c8 */ // 0x808FB5A0
    r5 = *(0x160 + r3); // lwz @ 0x808FB5A4
    /* slwi r0, r4, 4 */ // 0x808FB5A8
    r4 = r4 + 1; // 0x808FB5AC
    r5 = r5 + r0; // 0x808FB5B0
    *(0xc + r5) = r6; // stw @ 0x808FB5B4
    r0 = *(0x15c + r3); // lwz @ 0x808FB5B8
    /* subfc r0, r0, r4 */ // 0x808FB5BC
    /* subfe r0, r0, r0 */ // 0x808FB5C0
    r4 = r4 & r0; // 0x808FB5C4
    r6 = *(0x168 + r3); // lwz @ 0x808FB5C8
    if (!=) goto 0x0x808fb5a4;
    return;
}