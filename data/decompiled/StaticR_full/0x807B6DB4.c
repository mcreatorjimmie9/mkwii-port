/* Function at 0x807B6DB4, size=400 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B6DB4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807B6DC4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B6DCC
    r30 = r3;
    if (==) goto 0x0x807b6f28;
    r0 = *(0x3c + r3); // lwz @ 0x807B6DD8
    /* lis r4, 0 */ // 0x807B6DDC
    r4 = r4 + 0; // 0x807B6DE0
    *(0x34 + r3) = r4; // stw @ 0x807B6DE4
    if (==) goto 0x0x807b6e08;
    r3 = r0;
    /* li r4, 1 */ // 0x807B6DF4
    r12 = *(0 + r3); // lwz @ 0x807B6DF8
    r12 = *(8 + r12); // lwz @ 0x807B6DFC
    /* mtctr r12 */ // 0x807B6E00
    /* bctrl  */ // 0x807B6E04
    r3 = *(0x40 + r30); // lwz @ 0x807B6E08
    /* li r0, 0 */ // 0x807B6E0C
    *(0x3c + r30) = r0; // stw @ 0x807B6E10
    if (==) goto 0x0x807b6e30;
    r12 = *(0x34 + r3); // lwz @ 0x807B6E1C
    /* li r4, 1 */ // 0x807B6E20
    r12 = *(8 + r12); // lwz @ 0x807B6E24
    /* mtctr r12 */ // 0x807B6E28
    /* bctrl  */ // 0x807B6E2C
    r3 = *(0x48 + r30); // lwz @ 0x807B6E30
    /* li r0, 0 */ // 0x807B6E34
    *(0x40 + r30) = r0; // stw @ 0x807B6E38
    if (==) goto 0x0x807b6e58;
    r12 = *(0x34 + r3); // lwz @ 0x807B6E44
    /* li r4, 1 */ // 0x807B6E48
    r12 = *(8 + r12); // lwz @ 0x807B6E4C
    /* mtctr r12 */ // 0x807B6E50
    /* bctrl  */ // 0x807B6E54
    r3 = *(0x4c + r30); // lwz @ 0x807B6E58
    /* li r0, 0 */ // 0x807B6E5C
    *(0x48 + r30) = r0; // stw @ 0x807B6E60
    if (==) goto 0x0x807b6e80;
    r12 = *(0 + r3); // lwz @ 0x807B6E6C
    /* li r4, 1 */ // 0x807B6E70
    r12 = *(8 + r12); // lwz @ 0x807B6E74
    /* mtctr r12 */ // 0x807B6E78
    /* bctrl  */ // 0x807B6E7C
    r3 = *(0x50 + r30); // lwz @ 0x807B6E80
    /* li r0, 0 */ // 0x807B6E84
    *(0x4c + r30) = r0; // stw @ 0x807B6E88
    if (==) goto 0x0x807b6e98;
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x54 + r30); // lwz @ 0x807B6E98
    /* li r0, 0 */ // 0x807B6E9C
    *(0x50 + r30) = r0; // stw @ 0x807B6EA0
    if (==) goto 0x0x807b6ec0;
    r12 = *(0 + r3); // lwz @ 0x807B6EAC
    /* li r4, 1 */ // 0x807B6EB0
    r12 = *(8 + r12); // lwz @ 0x807B6EB4
    /* mtctr r12 */ // 0x807B6EB8
    /* bctrl  */ // 0x807B6EBC
    r3 = *(0x44 + r30); // lwz @ 0x807B6EC0
    /* li r0, 0 */ // 0x807B6EC4
    *(0x54 + r30) = r0; // stw @ 0x807B6EC8
    if (==) goto 0x0x807b6ee8;
    r12 = *(0 + r3); // lwz @ 0x807B6ED4
    /* li r4, 1 */ // 0x807B6ED8
    r12 = *(8 + r12); // lwz @ 0x807B6EDC
    /* mtctr r12 */ // 0x807B6EE0
    /* bctrl  */ // 0x807B6EE4
    r3 = *(0x58 + r30); // lwz @ 0x807B6EE8
    /* li r0, 0 */ // 0x807B6EEC
    *(0x44 + r30) = r0; // stw @ 0x807B6EF0
    if (==) goto 0x0x807b6f10;
    r12 = *(0 + r3); // lwz @ 0x807B6EFC
    /* li r4, 1 */ // 0x807B6F00
    r12 = *(8 + r12); // lwz @ 0x807B6F04
    /* mtctr r12 */ // 0x807B6F08
    /* bctrl  */ // 0x807B6F0C
    /* li r0, 0 */ // 0x807B6F14
    *(0x58 + r30) = r0; // stw @ 0x807B6F18
    if (<=) goto 0x0x807b6f28;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807B6F2C
    r30 = *(8 + r1); // lwz @ 0x807B6F30
    r0 = *(0x14 + r1); // lwz @ 0x807B6F34
    return;
}