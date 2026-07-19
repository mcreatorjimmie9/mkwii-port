/* Function at 0x80732E84, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80732E84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80732E94
    *(8 + r1) = r30; // stw @ 0x80732E98
    if (!=) goto 0x0x80732ef8;
    r0 = *(0x7ba + r3); // lbz @ 0x80732EA0
    if (!=) goto 0x0x80732ebc;
    r4 = *(0x84 + r3); // lwz @ 0x80732EAC
    r0 = *(0xae0 + r3); // lbz @ 0x80732EB0
    if (>=) goto 0x0x80732fb4;
    r3 = *(0x614 + r3); // lwz @ 0x80732EBC
    /* li r31, 7 */ // 0x80732EC0
    r30 = r3 + 0x1c; // 0x80732EC4
    r3 = *(0 + r30); // lwz @ 0x80732EC8
    if (==) goto 0x0x80732ee4;
    r12 = *(0 + r3); // lwz @ 0x80732ED4
    r12 = *(0xc + r12); // lwz @ 0x80732ED8
    /* mtctr r12 */ // 0x80732EDC
    /* bctrl  */ // 0x80732EE0
    r31 = r31 + 1; // 0x80732EE4
    r30 = r30 + 4; // 0x80732EE8
    if (<) goto 0x0x80732ec8;
    /* b 0x80732fb4 */ // 0x80732EF4
    if (!=) goto 0x0x80732f58;
    r0 = *(0x7ba + r3); // lbz @ 0x80732F00
    if (!=) goto 0x0x80732f1c;
    r4 = *(0x84 + r3); // lwz @ 0x80732F0C
    r0 = *(0xae0 + r3); // lbz @ 0x80732F10
    if (>=) goto 0x0x80732fb4;
    r3 = *(0x614 + r3); // lwz @ 0x80732F1C
    /* li r31, 0xa */ // 0x80732F20
    r30 = r3 + 0x28; // 0x80732F24
    r3 = *(0 + r30); // lwz @ 0x80732F28
    if (==) goto 0x0x80732f44;
    r12 = *(0 + r3); // lwz @ 0x80732F34
    r12 = *(0xc + r12); // lwz @ 0x80732F38
    /* mtctr r12 */ // 0x80732F3C
    /* bctrl  */ // 0x80732F40
    r31 = r31 + 1; // 0x80732F44
    r30 = r30 + 4; // 0x80732F48
    if (<) goto 0x0x80732f28;
    /* b 0x80732fb4 */ // 0x80732F54
    if (!=) goto 0x0x80732fb4;
    r0 = *(0x7ba + r3); // lbz @ 0x80732F60
    if (!=) goto 0x0x80732f7c;
    r4 = *(0x84 + r3); // lwz @ 0x80732F6C
    r0 = *(0xae0 + r3); // lbz @ 0x80732F70
    if (>=) goto 0x0x80732fb4;
    r3 = *(0x614 + r3); // lwz @ 0x80732F7C
    /* li r31, 0xd */ // 0x80732F80
    r30 = r3 + 0x34; // 0x80732F84
    r3 = *(0 + r30); // lwz @ 0x80732F88
    if (==) goto 0x0x80732fa4;
    r12 = *(0 + r3); // lwz @ 0x80732F94
    r12 = *(0xc + r12); // lwz @ 0x80732F98
    /* mtctr r12 */ // 0x80732F9C
    /* bctrl  */ // 0x80732FA0
    r31 = r31 + 1; // 0x80732FA4
    r30 = r30 + 4; // 0x80732FA8
    if (<) goto 0x0x80732f88;
    r0 = *(0x14 + r1); // lwz @ 0x80732FB4
    r31 = *(0xc + r1); // lwz @ 0x80732FB8
    r30 = *(8 + r1); // lwz @ 0x80732FBC
    return;
}