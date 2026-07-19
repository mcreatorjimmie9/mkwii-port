/* Function at 0x807E6B5C, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807E6B5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807E6B6C
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x807E6B74
    r12 = *(0x30 + r12); // lwz @ 0x807E6B78
    /* mtctr r12 */ // 0x807E6B7C
    /* bctrl  */ // 0x807E6B80
    if (!=) goto 0x0x807e6be8;
    r3 = *(0x104 + r30); // lwz @ 0x807E6B8C
    r12 = *(0 + r3); // lwz @ 0x807E6B90
    r12 = *(0xc + r12); // lwz @ 0x807E6B94
    /* mtctr r12 */ // 0x807E6B98
    /* bctrl  */ // 0x807E6B9C
    r3 = *(0x104 + r30); // lwz @ 0x807E6BA0
    r4 = r30 + 0x30; // 0x807E6BA4
    r12 = *(0 + r3); // lwz @ 0x807E6BA8
    r12 = *(0x74 + r12); // lwz @ 0x807E6BAC
    /* mtctr r12 */ // 0x807E6BB0
    /* bctrl  */ // 0x807E6BB4
    r3 = *(0x104 + r30); // lwz @ 0x807E6BB8
    r4 = r30 + 0x3c; // 0x807E6BBC
    r12 = *(0 + r3); // lwz @ 0x807E6BC0
    r12 = *(0x70 + r12); // lwz @ 0x807E6BC4
    /* mtctr r12 */ // 0x807E6BC8
    /* bctrl  */ // 0x807E6BCC
    r3 = *(0x104 + r30); // lwz @ 0x807E6BD0
    r12 = *(0 + r3); // lwz @ 0x807E6BD4
    r12 = *(0x80 + r12); // lwz @ 0x807E6BD8
    /* mtctr r12 */ // 0x807E6BDC
    /* bctrl  */ // 0x807E6BE0
    /* b 0x807e6c8c */ // 0x807E6BE4
    r12 = *(0 + r30); // lwz @ 0x807E6BE8
    r3 = r30;
    /* li r31, 0 */ // 0x807E6BF0
    r12 = *(0x30 + r12); // lwz @ 0x807E6BF4
    /* mtctr r12 */ // 0x807E6BF8
    /* bctrl  */ // 0x807E6BFC
    /* lis r4, 0x101 */ // 0x807E6C00
    r0 = *(0x20 + r3); // lwz @ 0x807E6C04
    r3 = r4 + 0x101; // 0x807E6C08
    /* andc. r0, r3, r0 */ // 0x807E6C0C
    if (!=) goto 0x0x807e6c2c;
    /* lis r3, 0 */ // 0x807E6C14
    r3 = *(0 + r3); // lwz @ 0x807E6C18
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807e6c2c;
    /* li r31, 1 */ // 0x807E6C28
    if (!=) goto 0x0x807e6c8c;
    r3 = *(0x104 + r30); // lwz @ 0x807E6C34
    r12 = *(0 + r3); // lwz @ 0x807E6C38
    r12 = *(0xc + r12); // lwz @ 0x807E6C3C
    /* mtctr r12 */ // 0x807E6C40
    /* bctrl  */ // 0x807E6C44
    r3 = *(0x104 + r30); // lwz @ 0x807E6C48
    r4 = r30 + 0x30; // 0x807E6C4C
    r12 = *(0 + r3); // lwz @ 0x807E6C50
    r12 = *(0x74 + r12); // lwz @ 0x807E6C54
    /* mtctr r12 */ // 0x807E6C58
    /* bctrl  */ // 0x807E6C5C
    r3 = *(0x104 + r30); // lwz @ 0x807E6C60
    r4 = r30 + 0x3c; // 0x807E6C64
    r12 = *(0 + r3); // lwz @ 0x807E6C68
    r12 = *(0x70 + r12); // lwz @ 0x807E6C6C
    /* mtctr r12 */ // 0x807E6C70
    /* bctrl  */ // 0x807E6C74
    r3 = *(0x104 + r30); // lwz @ 0x807E6C78
    r12 = *(0 + r3); // lwz @ 0x807E6C7C
    r12 = *(0x80 + r12); // lwz @ 0x807E6C80
    /* mtctr r12 */ // 0x807E6C84
    /* bctrl  */ // 0x807E6C88
    r0 = *(0x14 + r1); // lwz @ 0x807E6C8C
    r31 = *(0xc + r1); // lwz @ 0x807E6C90
    r30 = *(8 + r1); // lwz @ 0x807E6C94
    return;
}