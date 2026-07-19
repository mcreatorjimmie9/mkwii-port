/* Function at 0x80811EF4, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80811EF4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80811F00
    r31 = r3;
    r3 = *(0xbc + r3); // lwz @ 0x80811F08
    r12 = *(0 + r3); // lwz @ 0x80811F0C
    r12 = *(0x10 + r12); // lwz @ 0x80811F10
    /* mtctr r12 */ // 0x80811F14
    /* bctrl  */ // 0x80811F18
    r3 = *(0xb4 + r31); // lwz @ 0x80811F1C
    /* addic. r0, r3, -1 */ // 0x80811F20
    *(0xb4 + r31) = r0; // stw @ 0x80811F24
    if (>=) goto 0x0x80811f44;
    /* li r0, 1 */ // 0x80811F2C
    *(0xb0 + r31) = r0; // stw @ 0x80811F30
    r3 = *(0xa0 + r31); // lwz @ 0x80811F34
    r3 = *(0 + r3); // lwz @ 0x80811F38
    r0 = *(0x30 + r3); // lha @ 0x80811F3C
    *(0xb8 + r31) = r0; // stw @ 0x80811F40
    r0 = *(0x14 + r1); // lwz @ 0x80811F44
    r31 = *(0xc + r1); // lwz @ 0x80811F48
    return;
}