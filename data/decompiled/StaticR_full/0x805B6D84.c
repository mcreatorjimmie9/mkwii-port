/* Function at 0x805B6D84, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805B6D84(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805B6D94
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B6D9C
    r30 = r3;
    if (==) goto 0x0x805b6ea8;
    r0 = *(0x263 + r3); // lbz @ 0x805B6DA8
    /* lis r4, 0 */ // 0x805B6DAC
    r4 = r4 + 0; // 0x805B6DB0
    *(0x10 + r3) = r4; // stw @ 0x805B6DB4
    if (==) goto 0x0x805b6e24;
    r3 = *(0x26c + r3); // lwz @ 0x805B6DC0
    r4 = *(0x14 + r30); // lwz @ 0x805B6DC4
    r12 = *(0 + r3); // lwz @ 0x805B6DC8
    r12 = *(0x18 + r12); // lwz @ 0x805B6DCC
    /* mtctr r12 */ // 0x805B6DD0
    /* bctrl  */ // 0x805B6DD4
    r3 = *(0x26c + r30); // lwz @ 0x805B6DD8
    r4 = r30 + 0x20; // 0x805B6DDC
    r12 = *(0 + r3); // lwz @ 0x805B6DE0
    r12 = *(0x18 + r12); // lwz @ 0x805B6DE4
    /* mtctr r12 */ // 0x805B6DE8
    /* bctrl  */ // 0x805B6DEC
    /* addic. r4, r30, 0x28 */ // 0x805B6DF0
    if (==) goto 0x0x805b6e0c;
    r3 = *(0x26c + r30); // lwz @ 0x805B6DF8
    r12 = *(0 + r3); // lwz @ 0x805B6DFC
    r12 = *(0x18 + r12); // lwz @ 0x805B6E00
    /* mtctr r12 */ // 0x805B6E04
    /* bctrl  */ // 0x805B6E08
    r3 = *(0x26c + r30); // lwz @ 0x805B6E0C
    r4 = *(0x34 + r30); // lwz @ 0x805B6E10
    r12 = *(0 + r3); // lwz @ 0x805B6E14
    r12 = *(0x18 + r12); // lwz @ 0x805B6E18
    /* mtctr r12 */ // 0x805B6E1C
    /* bctrl  */ // 0x805B6E20
    r3 = r30 + 0x2f0; // 0x805B6E24
    /* li r4, -1 */ // 0x805B6E28
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    /* lis r4, 0 */ // 0x805B6E30
    r3 = r30 + 0x218; // 0x805B6E34
    r4 = r4 + 0; // 0x805B6E38
    /* li r5, 0x24 */ // 0x805B6E3C
    /* li r6, 2 */ // 0x805B6E40
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x805b6e98;
    /* lis r3, 0 */ // 0x805B6E50
    /* lis r4, 0 */ // 0x805B6E54
    r3 = r3 + 0; // 0x805B6E58
    *(0 + r30) = r3; // stw @ 0x805B6E5C
    r3 = *(0 + r4); // lwz @ 0x805B6E60
}