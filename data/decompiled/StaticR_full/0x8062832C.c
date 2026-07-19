/* Function at 0x8062832C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8062832C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x80628340
    r30 = r3;
    r12 = *(0xc + r3); // lwz @ 0x80628348
    r12 = *(0x44 + r12); // lwz @ 0x8062834C
    /* mtctr r12 */ // 0x80628350
    /* bctrl  */ // 0x80628354
    r3 = *(0x98 + r30); // lwz @ 0x80628358
    FUN_80626CEC(); // bl 0x80626CEC
    r12 = *(0xc + r30); // lwz @ 0x80628360
    r3 = r30;
    r4 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x8062836C
    /* mtctr r12 */ // 0x80628370
    /* bctrl  */ // 0x80628374
    r0 = *(0x14 + r1); // lwz @ 0x80628378
    r31 = *(0xc + r1); // lwz @ 0x8062837C
    r30 = *(8 + r1); // lwz @ 0x80628380
    return;
}