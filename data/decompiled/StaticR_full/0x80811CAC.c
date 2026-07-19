/* Function at 0x80811CAC, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80811CAC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80811CB8
    r31 = r3;
    r4 = *(0xa0 + r3); // lwz @ 0x80811CC0
    r4 = *(0 + r4); // lwz @ 0x80811CC4
    r0 = *(0x2c + r4); // lha @ 0x80811CC8
    if (!=) goto 0x0x80811ce0;
    r0 = *(0x2e + r4); // lha @ 0x80811CD4
    *(0xb4 + r3) = r0; // stw @ 0x80811CD8
    /* b 0x80811ce4 */ // 0x80811CDC
    *(0xb4 + r3) = r0; // stw @ 0x80811CE0
    /* li r0, 0 */ // 0x80811CE4
    *(0xb0 + r3) = r0; // stw @ 0x80811CE8
    r3 = *(0xbc + r3); // lwz @ 0x80811CEC
    r12 = *(0 + r3); // lwz @ 0x80811CF0
    r12 = *(0xc + r12); // lwz @ 0x80811CF4
    /* mtctr r12 */ // 0x80811CF8
    /* bctrl  */ // 0x80811CFC
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xbc + r31); // lwz @ 0x80811D08
    r4 = r31 + 0x58; // 0x80811D0C
    r12 = *(0 + r3); // lwz @ 0x80811D10
    r12 = *(0x78 + r12); // lwz @ 0x80811D14
    /* mtctr r12 */ // 0x80811D18
    /* bctrl  */ // 0x80811D1C
    r3 = *(0xbc + r31); // lwz @ 0x80811D20
    r12 = *(0 + r3); // lwz @ 0x80811D24
    r12 = *(0x80 + r12); // lwz @ 0x80811D28
    /* mtctr r12 */ // 0x80811D2C
    /* bctrl  */ // 0x80811D30
    r12 = *(0 + r31); // lwz @ 0x80811D34
    r3 = r31;
    r12 = *(0x54 + r12); // lwz @ 0x80811D3C
    /* mtctr r12 */ // 0x80811D40
    /* bctrl  */ // 0x80811D44
    r3 = r31;
    /* li r4, 0 */ // 0x80811D4C
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x80811D54
    r31 = *(0xc + r1); // lwz @ 0x80811D58
    return;
}