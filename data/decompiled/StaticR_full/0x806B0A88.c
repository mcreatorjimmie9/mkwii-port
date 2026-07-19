/* Function at 0x806B0A88, size=264 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 10 function(s) */

int FUN_806B0A88(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x806B0A90
    *(0x14 + r1) = r0; // stw @ 0x806B0A94
    *(0xc + r1) = r31; // stw @ 0x806B0A98
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x806B0AA0
    r4 = *(0x98 + r3); // lwz @ 0x806B0AA4
    r3 = *(0x2d0 + r4); // lwz @ 0x806B0AA8
    r0 = r3 + 1; // 0x806B0AAC
    *(0x2d0 + r4) = r0; // stw @ 0x806B0AB0
    r3 = *(0 + r5); // lwz @ 0x806B0AB4
    r3 = *(0 + r3); // lwz @ 0x806B0AB8
    r3 = *(0 + r3); // lwz @ 0x806B0ABC
    r0 = r3 + -0x58; // 0x806B0AC0
    if (>) goto 0x0x806b0b10;
    /* lis r3, 0 */ // 0x806B0ACC
    /* slwi r0, r0, 2 */ // 0x806B0AD0
    r3 = r3 + 0; // 0x806B0AD4
    /* lwzx r3, r3, r0 */ // 0x806B0AD8
    /* mtctr r3 */ // 0x806B0ADC
    /* bctr  */ // 0x806B0AE0
    /* li r3, 1 */ // 0x806B0AE4
    FUN_806EBFF0(r3, r3); // bl 0x806EBFF0
    /* b 0x806b0b10 */ // 0x806B0AEC
    /* li r3, 3 */ // 0x806B0AF0
    FUN_806EBFF0(r3, r3); // bl 0x806EBFF0
    /* b 0x806b0b10 */ // 0x806B0AF8
    /* li r3, 2 */ // 0x806B0AFC
    FUN_806EBFF0(r3, r3); // bl 0x806EBFF0
    /* b 0x806b0b10 */ // 0x806B0B04
    /* li r3, 4 */ // 0x806B0B08
    FUN_806EBFF0(r3, r3); // bl 0x806EBFF0
    /* lis r3, 0 */ // 0x806B0B10
    r3 = *(0 + r3); // lwz @ 0x806B0B14
    FUN_806EC108(r3, r3); // bl 0x806EC108
    /* lis r3, 0 */ // 0x806B0B1C
    r3 = *(0 + r3); // lwz @ 0x806B0B20
    r3 = *(0 + r3); // lwz @ 0x806B0B24
    FUN_80685EA4(r3); // bl 0x80685EA4
    r12 = *(0x58 + r31); // lwz @ 0x806B0B2C
    r3 = r31 + 0x58; // 0x806B0B30
    /* li r4, 0 */ // 0x806B0B34
    /* li r5, 0 */ // 0x806B0B38
    r12 = *(0x10 + r12); // lwz @ 0x806B0B3C
    /* mtctr r12 */ // 0x806B0B40
    /* bctrl  */ // 0x806B0B44
    r3 = r31;
    r4 = r31 + 0x58; // 0x806B0B4C
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x806B0B58
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x78; // 0x806B0B64
    /* li r4, 0 */ // 0x806B0B68
    /* li r6, 0 */ // 0x806B0B6C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x78; // 0x806B0B74
    r4 = r31 + 0x6c; // 0x806B0B78
    FUN_8064EEA8(r4, r6, r3, r4); // bl 0x8064EEA8
    r3 = r31 + 0x290; // 0x806B0B80
    /* li r4, 0xc */ // 0x806B0B84
    /* li r5, 4 */ // 0x806B0B88
    /* li r6, 0 */ // 0x806B0B8C
}