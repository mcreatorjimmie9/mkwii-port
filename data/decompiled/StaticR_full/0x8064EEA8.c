/* Function at 0x8064EEA8, size=140 bytes */
/* Stack frame: 160 bytes */
/* Calls: 3 function(s) */

int FUN_8064EEA8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x8064EEB0
    *(0x174 + r3) = r4; // stw @ 0x8064EEB4
    r4 = r3;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r3, 0 */ // 0x8064EEC4
    /* li r0, 0xc */ // 0x8064EEC8
    r3 = r3 + 0; // 0x8064EECC
    r4 = r3 + -4; // 0x8064EED4
    /* mtctr r0 */ // 0x8064EED8
    r3 = *(4 + r4); // lwz @ 0x8064EEDC
    r0 = *(8 + r4); // lwzu @ 0x8064EEE0
    *(4 + r5) = r3; // stw @ 0x8064EEE4
    *(8 + r5) = r0; // stwu @ 0x8064EEE8
    if (counter-- != 0) goto 0x0x8064eedc;
    r0 = *(4 + r4); // lwz @ 0x8064EEF0
    /* lis r6, 0 */ // 0x8064EEF4
    r6 = r6 + 0; // 0x8064EEF8
    *(4 + r5) = r0; // stw @ 0x8064EEFC
    r4 = r6 + 0x16; // 0x8064EF08
    r5 = r6 + 0x1e; // 0x8064EF0C
    r6 = r6 + 0x2d; // 0x8064EF10
    FUN_8064E36C(r3, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8064EF1C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0xa4 + r1); // lwz @ 0x8064EF24
    return;
}