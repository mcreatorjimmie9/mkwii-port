/* Function at 0x807EAF60, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807EAF60(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807EAF6C
    r31 = r3;
    r0 = *(0x124 + r3); // lwz @ 0x807EAF74
    if (==) goto 0x0x807eaf94;
    if (==) goto 0x0x807eafa8;
    if (==) goto 0x0x807eafbc;
    /* b 0x807eafcc */ // 0x807EAF90
    r12 = *(0 + r3); // lwz @ 0x807EAF94
    r12 = *(0x10c + r12); // lwz @ 0x807EAF98
    /* mtctr r12 */ // 0x807EAF9C
    /* bctrl  */ // 0x807EAFA0
    /* b 0x807eafcc */ // 0x807EAFA4
    r12 = *(0 + r3); // lwz @ 0x807EAFA8
    r12 = *(0x110 + r12); // lwz @ 0x807EAFAC
    /* mtctr r12 */ // 0x807EAFB0
    /* bctrl  */ // 0x807EAFB4
    /* b 0x807eafcc */ // 0x807EAFB8
    r12 = *(0 + r3); // lwz @ 0x807EAFBC
    r12 = *(0xf8 + r12); // lwz @ 0x807EAFC0
    /* mtctr r12 */ // 0x807EAFC4
    /* bctrl  */ // 0x807EAFC8
    r0 = *(0x100 + r31); // lbz @ 0x807EAFCC
    if (==) goto 0x0x807eafec;
    r12 = *(0 + r31); // lwz @ 0x807EAFD8
    r3 = r31;
    r12 = *(0xfc + r12); // lwz @ 0x807EAFE0
    /* mtctr r12 */ // 0x807EAFE4
    /* bctrl  */ // 0x807EAFE8
    r0 = *(0x14 + r1); // lwz @ 0x807EAFEC
    r31 = *(0xc + r1); // lwz @ 0x807EAFF0
    return;
}