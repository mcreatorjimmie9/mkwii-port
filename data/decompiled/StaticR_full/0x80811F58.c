/* Function at 0x80811F58, size=268 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80811F58(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x80811F68
    *(8 + r1) = r30; // stw @ 0x80811F6C
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80811F74
    r12 = *(0x30 + r12); // lwz @ 0x80811F78
    /* mtctr r12 */ // 0x80811F7C
    /* bctrl  */ // 0x80811F80
    /* lis r4, 0x101 */ // 0x80811F84
    r0 = *(0x20 + r3); // lwz @ 0x80811F88
    r3 = r4 + 0x101; // 0x80811F8C
    /* andc. r0, r3, r0 */ // 0x80811F90
    if (!=) goto 0x0x80811fb0;
    /* lis r3, 0 */ // 0x80811F98
    r3 = *(0 + r3); // lwz @ 0x80811F9C
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80811fb0;
    /* li r31, 1 */ // 0x80811FAC
    if (!=) goto 0x0x80812000;
    r3 = *(0xbc + r30); // lwz @ 0x80811FB8
    r12 = *(0 + r3); // lwz @ 0x80811FBC
    r12 = *(0xc + r12); // lwz @ 0x80811FC0
    /* mtctr r12 */ // 0x80811FC4
    /* bctrl  */ // 0x80811FC8
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xbc + r30); // lwz @ 0x80811FD4
    r4 = r30 + 0x58; // 0x80811FD8
    r12 = *(0 + r3); // lwz @ 0x80811FDC
    r12 = *(0x78 + r12); // lwz @ 0x80811FE0
    /* mtctr r12 */ // 0x80811FE4
    /* bctrl  */ // 0x80811FE8
    r3 = *(0xbc + r30); // lwz @ 0x80811FEC
    r12 = *(0 + r3); // lwz @ 0x80811FF0
    r12 = *(0x80 + r12); // lwz @ 0x80811FF4
    /* mtctr r12 */ // 0x80811FF8
    /* bctrl  */ // 0x80811FFC
    r4 = *(0xa0 + r30); // lwz @ 0x80812000
    r3 = *(0 + r4); // lwz @ 0x80812004
    r0 = *(0x2e + r3); // lha @ 0x80812008
    if (==) goto 0x0x8081204c;
    r3 = *(0xb8 + r30); // lwz @ 0x80812014
    /* addic. r0, r3, -1 */ // 0x80812018
    *(0xb8 + r30) = r0; // stw @ 0x8081201C
    if (>=) goto 0x0x80812038;
    /* li r0, 0 */ // 0x80812024
    *(0xb0 + r30) = r0; // stw @ 0x80812028
    r3 = *(0 + r4); // lwz @ 0x8081202C
    r0 = *(0x2e + r3); // lha @ 0x80812030
    *(0xb4 + r30) = r0; // stw @ 0x80812034
    /* lis r4, 0 */ // 0x80812038
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80812040
    /* li r4, 0x2a5 */ // 0x80812044
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x14 + r1); // lwz @ 0x8081204C
    r31 = *(0xc + r1); // lwz @ 0x80812050
    r30 = *(8 + r1); // lwz @ 0x80812054
    return;
}