/* Function at 0x80811D90, size=356 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80811D90(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80811DA4
    r0 = *(0xb0 + r3); // lwz @ 0x80811DA8
    if (==) goto 0x0x80811dc0;
    if (==) goto 0x0x80811e00;
    /* b 0x80811edc */ // 0x80811DBC
    r3 = *(0xbc + r3); // lwz @ 0x80811DC0
    r12 = *(0 + r3); // lwz @ 0x80811DC4
    r12 = *(0x10 + r12); // lwz @ 0x80811DC8
    /* mtctr r12 */ // 0x80811DCC
    /* bctrl  */ // 0x80811DD0
    r3 = *(0xb4 + r31); // lwz @ 0x80811DD4
    /* addic. r0, r3, -1 */ // 0x80811DD8
    *(0xb4 + r31) = r0; // stw @ 0x80811DDC
    if (>=) goto 0x0x80811edc;
    /* li r0, 1 */ // 0x80811DE4
    *(0xb0 + r31) = r0; // stw @ 0x80811DE8
    r3 = *(0xa0 + r31); // lwz @ 0x80811DEC
    r3 = *(0 + r3); // lwz @ 0x80811DF0
    r0 = *(0x30 + r3); // lha @ 0x80811DF4
    *(0xb8 + r31) = r0; // stw @ 0x80811DF8
    /* b 0x80811edc */ // 0x80811DFC
    r12 = *(0 + r3); // lwz @ 0x80811E00
    /* li r30, 0 */ // 0x80811E04
    r12 = *(0x30 + r12); // lwz @ 0x80811E08
    /* mtctr r12 */ // 0x80811E0C
    /* bctrl  */ // 0x80811E10
    /* lis r4, 0x101 */ // 0x80811E14
    r0 = *(0x20 + r3); // lwz @ 0x80811E18
    r3 = r4 + 0x101; // 0x80811E1C
    /* andc. r0, r3, r0 */ // 0x80811E20
    if (!=) goto 0x0x80811e40;
    /* lis r3, 0 */ // 0x80811E28
    r3 = *(0 + r3); // lwz @ 0x80811E2C
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80811e40;
    /* li r30, 1 */ // 0x80811E3C
    if (!=) goto 0x0x80811e90;
    r3 = *(0xbc + r31); // lwz @ 0x80811E48
    r12 = *(0 + r3); // lwz @ 0x80811E4C
    r12 = *(0xc + r12); // lwz @ 0x80811E50
    /* mtctr r12 */ // 0x80811E54
    /* bctrl  */ // 0x80811E58
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xbc + r31); // lwz @ 0x80811E64
    r4 = r31 + 0x58; // 0x80811E68
    r12 = *(0 + r3); // lwz @ 0x80811E6C
    r12 = *(0x78 + r12); // lwz @ 0x80811E70
    /* mtctr r12 */ // 0x80811E74
    /* bctrl  */ // 0x80811E78
    r3 = *(0xbc + r31); // lwz @ 0x80811E7C
    r12 = *(0 + r3); // lwz @ 0x80811E80
    r12 = *(0x80 + r12); // lwz @ 0x80811E84
    /* mtctr r12 */ // 0x80811E88
    /* bctrl  */ // 0x80811E8C
    r4 = *(0xa0 + r31); // lwz @ 0x80811E90
    r3 = *(0 + r4); // lwz @ 0x80811E94
    r0 = *(0x2e + r3); // lha @ 0x80811E98
    if (==) goto 0x0x80811edc;
    r3 = *(0xb8 + r31); // lwz @ 0x80811EA4
    /* addic. r0, r3, -1 */ // 0x80811EA8
    *(0xb8 + r31) = r0; // stw @ 0x80811EAC
    if (>=) goto 0x0x80811ec8;
    /* li r0, 0 */ // 0x80811EB4
    *(0xb0 + r31) = r0; // stw @ 0x80811EB8
    r3 = *(0 + r4); // lwz @ 0x80811EBC
    r0 = *(0x2e + r3); // lha @ 0x80811EC0
    *(0xb4 + r31) = r0; // stw @ 0x80811EC4
    /* lis r4, 0 */ // 0x80811EC8
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80811ED0
    /* li r4, 0x2a5 */ // 0x80811ED4
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x14 + r1); // lwz @ 0x80811EDC
    r31 = *(0xc + r1); // lwz @ 0x80811EE0
    r30 = *(8 + r1); // lwz @ 0x80811EE4
    return;
}