/* Function at 0x806520F8, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806520F8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80652100
    *(0x14 + r1) = r0; // stw @ 0x80652104
    *(0xc + r1) = r31; // stw @ 0x80652108
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x80652110
    r3 = *(0 + r3); // lwz @ 0x80652114
    r0 = *(0 + r3); // lwz @ 0x80652118
    if (==) goto 0x0x80652130;
    if (==) goto 0x0x80652158;
    /* b 0x8065217c */ // 0x8065212C
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x80652138
    r3 = r31;
    /* li r4, 0x7c */ // 0x80652140
    /* li r5, 1 */ // 0x80652144
    r12 = *(0x1c + r12); // lwz @ 0x80652148
    /* mtctr r12 */ // 0x8065214C
    /* bctrl  */ // 0x80652150
    /* b 0x8065217c */ // 0x80652154
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x80652160
    r3 = r31;
    /* li r4, 0xa0 */ // 0x80652168
    /* li r5, 1 */ // 0x8065216C
    r12 = *(0x1c + r12); // lwz @ 0x80652170
    /* mtctr r12 */ // 0x80652174
    /* bctrl  */ // 0x80652178
    r0 = *(0x14 + r1); // lwz @ 0x8065217C
    r31 = *(0xc + r1); // lwz @ 0x80652180
    return;
}