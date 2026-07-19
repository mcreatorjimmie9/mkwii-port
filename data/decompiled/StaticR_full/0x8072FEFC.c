/* Function at 0x8072FEFC, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8072FEFC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8072FF08
    r31 = r3;
    r3 = *(0x2ac + r3); // lwz @ 0x8072FF10
    r12 = *(0 + r3); // lwz @ 0x8072FF14
    r12 = *(0x18 + r12); // lwz @ 0x8072FF18
    /* mtctr r12 */ // 0x8072FF1C
    /* bctrl  */ // 0x8072FF20
    r3 = *(0x2b4 + r31); // lwz @ 0x8072FF24
    r12 = *(0 + r3); // lwz @ 0x8072FF28
    r12 = *(0x18 + r12); // lwz @ 0x8072FF2C
    /* mtctr r12 */ // 0x8072FF30
    /* bctrl  */ // 0x8072FF34
    r3 = *(0x2b0 + r31); // lwz @ 0x8072FF38
    r12 = *(0 + r3); // lwz @ 0x8072FF3C
    r12 = *(0x18 + r12); // lwz @ 0x8072FF40
    /* mtctr r12 */ // 0x8072FF44
    /* bctrl  */ // 0x8072FF48
    r3 = *(0x2b8 + r31); // lwz @ 0x8072FF4C
    r12 = *(0 + r3); // lwz @ 0x8072FF50
    r12 = *(0x18 + r12); // lwz @ 0x8072FF54
    /* mtctr r12 */ // 0x8072FF58
    /* bctrl  */ // 0x8072FF5C
    r3 = *(0x2bc + r31); // lwz @ 0x8072FF60
    r12 = *(0 + r3); // lwz @ 0x8072FF64
    r12 = *(0x18 + r12); // lwz @ 0x8072FF68
    /* mtctr r12 */ // 0x8072FF6C
    /* bctrl  */ // 0x8072FF70
    r0 = *(0x14 + r1); // lwz @ 0x8072FF74
    r31 = *(0xc + r1); // lwz @ 0x8072FF78
    return;
}