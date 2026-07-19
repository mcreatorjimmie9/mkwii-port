/* Function at 0x808B916C, size=136 bytes */
/* Stack frame: 32 bytes */
/* Calls: 2 function(s) */

void FUN_808B916C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x808B9174
    r0 = *(0x240 + r4); // lwz @ 0x808B9178
    if (!=) goto 0x0x808b9198;
    r3 = *(0x2bc + r3); // lwz @ 0x808B9184
    /* li r4, 0 */ // 0x808B9188
    /* li r5, 0 */ // 0x808B918C
    FUN_808D5A00(r4, r5); // bl 0x808D5A00
    /* b 0x808b91e4 */ // 0x808B9194
    /* lis r6, 0 */ // 0x808B9198
    r11 = *(0 + r6); // lwzu @ 0x808B919C
    *(8 + r1) = r11; // stw @ 0x808B91A0
    /* slwi r0, r0, 2 */ // 0x808B91A4
    r10 = *(4 + r6); // lwz @ 0x808B91A8
    r9 = *(8 + r6); // lwz @ 0x808B91B0
    /* li r5, 0 */ // 0x808B91B4
    r8 = *(0xc + r6); // lwz @ 0x808B91B8
    r7 = *(0x10 + r6); // lwz @ 0x808B91BC
    r6 = *(0x14 + r6); // lwz @ 0x808B91C0
    *(0xc + r1) = r10; // stw @ 0x808B91C4
    r3 = *(0x2bc + r3); // lwz @ 0x808B91C8
    *(0x10 + r1) = r9; // stw @ 0x808B91CC
    *(0x14 + r1) = r8; // stw @ 0x808B91D0
    *(0x18 + r1) = r7; // stw @ 0x808B91D4
    *(0x1c + r1) = r6; // stw @ 0x808B91D8
    /* lwzx r4, r4, r0 */ // 0x808B91DC
    FUN_808D5A00(); // bl 0x808D5A00
    r0 = *(0x24 + r1); // lwz @ 0x808B91E4
    return;
}