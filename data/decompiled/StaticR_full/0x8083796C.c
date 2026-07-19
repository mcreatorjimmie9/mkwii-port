/* Function at 0x8083796C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8083796C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80837974
    *(0x14 + r1) = r0; // stw @ 0x80837978
    *(0xc + r1) = r31; // stw @ 0x8083797C
    r31 = r3;
    r3 = *(0x330 + r3); // lwz @ 0x80837984
    r12 = *(0 + r3); // lwz @ 0x80837988
    r12 = *(0xc + r12); // lwz @ 0x8083798C
    /* mtctr r12 */ // 0x80837990
    /* bctrl  */ // 0x80837994
    /* lis r3, 0 */ // 0x80837998
    r4 = *(0xa + r31); // lha @ 0x8083799C
    r3 = *(0 + r3); // lwz @ 0x808379A0
    r3 = *(0x74 + r3); // lwz @ 0x808379A4
    FUN_8071D060(r3); // bl 0x8071D060
    r3 = r31;
    FUN_80828E04(r3); // bl 0x80828E04
    r0 = *(0x14 + r1); // lwz @ 0x808379B4
    r31 = *(0xc + r1); // lwz @ 0x808379B8
    return;
}