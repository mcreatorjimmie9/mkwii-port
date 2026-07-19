/* Function at 0x807660E0, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807660E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807660EC
    r31 = r5;
    r0 = *(0xb4 + r3); // lhz @ 0x807660F4
    if (==) goto 0x0x8076610c;
    if (==) goto 0x0x80766134;
    /* b 0x80766158 */ // 0x80766108
    r3 = r4;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x80766114
    /* lis r4, 0 */ // 0x80766118
    /* lfs f1, 0(r4) */ // 0x8076611C
    /* li r4, 0x2d8 */ // 0x80766120
    r12 = *(0xe4 + r12); // lwz @ 0x80766124
    /* mtctr r12 */ // 0x80766128
    /* bctrl  */ // 0x8076612C
    /* b 0x80766158 */ // 0x80766130
    r3 = r4;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8076613C
    /* lis r4, 0 */ // 0x80766140
    /* lfs f1, 0(r4) */ // 0x80766144
    /* li r4, 0x2d9 */ // 0x80766148
    r12 = *(0xe4 + r12); // lwz @ 0x8076614C
    /* mtctr r12 */ // 0x80766150
    /* bctrl  */ // 0x80766154
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8076615C
    r0 = *(0x14 + r1); // lwz @ 0x80766160
    return;
}