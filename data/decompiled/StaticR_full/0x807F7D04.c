/* Function at 0x807F7D04, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807F7D04(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x807F7D14
    *(8 + r1) = r30; // stw @ 0x807F7D18
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x807F7D20
    r12 = *(0x30 + r12); // lwz @ 0x807F7D24
    /* mtctr r12 */ // 0x807F7D28
    /* bctrl  */ // 0x807F7D2C
    /* lis r4, 0x101 */ // 0x807F7D30
    r0 = *(0x20 + r3); // lwz @ 0x807F7D34
    r3 = r4 + 0x101; // 0x807F7D38
    /* andc. r0, r3, r0 */ // 0x807F7D3C
    if (!=) goto 0x0x807f7d5c;
    /* lis r3, 0 */ // 0x807F7D44
    r3 = *(0 + r3); // lwz @ 0x807F7D48
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f7d5c;
    /* li r31, 1 */ // 0x807F7D58
    if (!=) goto 0x0x807f7dbc;
    r3 = *(0xdc + r30); // lwz @ 0x807F7D64
    r12 = *(0 + r3); // lwz @ 0x807F7D68
    r12 = *(0xc + r12); // lwz @ 0x807F7D6C
    /* mtctr r12 */ // 0x807F7D70
    /* bctrl  */ // 0x807F7D74
    r3 = *(0xdc + r30); // lwz @ 0x807F7D78
    r4 = r30 + 0x30; // 0x807F7D7C
    r12 = *(0 + r3); // lwz @ 0x807F7D80
    r12 = *(0x74 + r12); // lwz @ 0x807F7D84
    /* mtctr r12 */ // 0x807F7D88
    /* bctrl  */ // 0x807F7D8C
    r3 = *(0xdc + r30); // lwz @ 0x807F7D90
    r4 = r30 + 0x3c; // 0x807F7D94
    r12 = *(0 + r3); // lwz @ 0x807F7D98
    r12 = *(0x70 + r12); // lwz @ 0x807F7D9C
    /* mtctr r12 */ // 0x807F7DA0
    /* bctrl  */ // 0x807F7DA4
    r3 = *(0xdc + r30); // lwz @ 0x807F7DA8
    r12 = *(0 + r3); // lwz @ 0x807F7DAC
    r12 = *(0x80 + r12); // lwz @ 0x807F7DB0
    /* mtctr r12 */ // 0x807F7DB4
    /* bctrl  */ // 0x807F7DB8
    r0 = *(0x14 + r1); // lwz @ 0x807F7DBC
    r31 = *(0xc + r1); // lwz @ 0x807F7DC0
    r30 = *(8 + r1); // lwz @ 0x807F7DC4
    return;
}