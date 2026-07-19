/* Function at 0x807CF10C, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807CF10C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807CF118
    r31 = r3;
    r0 = *(4 + r3); // lwz @ 0x807CF120
    if (==) goto 0x0x807cf160;
    r3 = *(0 + r3); // lwz @ 0x807CF12C
    r12 = *(0 + r3); // lwz @ 0x807CF130
    r12 = *(0x14 + r12); // lwz @ 0x807CF134
    /* mtctr r12 */ // 0x807CF138
    /* bctrl  */ // 0x807CF13C
    r3 = *(4 + r31); // lwz @ 0x807CF140
    /* li r0, 0 */ // 0x807CF144
    *(0 + r31) = r3; // stw @ 0x807CF148
    *(4 + r31) = r0; // stw @ 0x807CF14C
    r12 = *(0 + r3); // lwz @ 0x807CF150
    r12 = *(0xc + r12); // lwz @ 0x807CF154
    /* mtctr r12 */ // 0x807CF158
    /* bctrl  */ // 0x807CF15C
    r3 = *(0 + r31); // lwz @ 0x807CF160
    r12 = *(0 + r3); // lwz @ 0x807CF164
    r12 = *(0x10 + r12); // lwz @ 0x807CF168
    /* mtctr r12 */ // 0x807CF16C
    /* bctrl  */ // 0x807CF170
    r0 = *(0x14 + r1); // lwz @ 0x807CF174
    r31 = *(0xc + r1); // lwz @ 0x807CF178
    return;
}