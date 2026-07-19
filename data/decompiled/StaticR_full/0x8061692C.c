/* Function at 0x8061692C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8061692C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80616938
    r31 = r3;
    r12 = *(0xc + r3); // lwz @ 0x80616940
    r12 = *(0xc + r12); // lwz @ 0x80616944
    /* mtctr r12 */ // 0x80616948
    /* bctrl  */ // 0x8061694C
    /* li r0, 0 */ // 0x80616950
    *(0x10 + r31) = r0; // stw @ 0x80616954
    r3 = r31;
    r12 = *(0xc + r31); // lwz @ 0x8061695C
    r12 = *(0x18 + r12); // lwz @ 0x80616960
    /* mtctr r12 */ // 0x80616964
    /* bctrl  */ // 0x80616968
    r12 = *(0xc + r31); // lwz @ 0x8061696C
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x80616974
    /* mtctr r12 */ // 0x80616978
    /* bctrl  */ // 0x8061697C
    r0 = *(0x14 + r1); // lwz @ 0x80616980
    r31 = *(0xc + r1); // lwz @ 0x80616984
    return;
}