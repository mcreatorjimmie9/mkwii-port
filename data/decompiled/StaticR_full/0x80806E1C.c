/* Function at 0x80806E1C, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80806E1C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80806E24
    *(0x14 + r1) = r0; // stw @ 0x80806E28
    /* li r0, 3 */ // 0x80806E2C
    *(0xc + r1) = r31; // stw @ 0x80806E30
    r31 = r3;
    *(0xe0 + r3) = r0; // stw @ 0x80806E38
    r12 = *(0 + r3); // lwz @ 0x80806E3C
    r12 = *(0x68 + r12); // lwz @ 0x80806E40
    /* mtctr r12 */ // 0x80806E44
    /* bctrl  */ // 0x80806E48
    r3 = *(0x10 + r31); // lwz @ 0x80806E4C
    /* li r4, 0 */ // 0x80806E50
    r12 = *(0 + r3); // lwz @ 0x80806E54
    r12 = *(0xc + r12); // lwz @ 0x80806E58
    /* mtctr r12 */ // 0x80806E5C
    /* bctrl  */ // 0x80806E60
    r12 = *(0 + r31); // lwz @ 0x80806E64
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x80806E6C
    /* mtctr r12 */ // 0x80806E70
    /* bctrl  */ // 0x80806E74
    r3 = *(0xb0 + r31); // lwz @ 0x80806E78
    /* li r0, 0x3c */ // 0x80806E7C
    /* li r4, 1 */ // 0x80806E80
    *(0x17c + r3) = r0; // stw @ 0x80806E84
    FUN_808A1D3C(r4); // bl 0x808A1D3C
    r0 = *(0x14 + r1); // lwz @ 0x80806E8C
    r31 = *(0xc + r1); // lwz @ 0x80806E90
    return;
}