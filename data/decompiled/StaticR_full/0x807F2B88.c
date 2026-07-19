/* Function at 0x807F2B88, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807F2B88(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x807F2B94
    *(0xc + r1) = r31; // stw @ 0x807F2B98
    /* lis r31, 0 */ // 0x807F2B9C
    r31 = r31 + 0; // 0x807F2BA0
    *(8 + r1) = r30; // stw @ 0x807F2BA4
    r30 = r3;
    *(0xb4 + r3) = r0; // stw @ 0x807F2BAC
    r3 = *(0x20 + r3); // lwz @ 0x807F2BB0
    /* lfs f1, 0(r31) */ // 0x807F2BB4
    r12 = *(0 + r3); // lwz @ 0x807F2BB8
    r12 = *(0x18 + r12); // lwz @ 0x807F2BBC
    /* mtctr r12 */ // 0x807F2BC0
    /* bctrl  */ // 0x807F2BC4
    /* lfs f0, 0x10(r31) */ // 0x807F2BC8
    /* lis r3, 0 */ // 0x807F2BCC
    /* stfs f0, 0xd8(r30) */ // 0x807F2BD0
    /* lfs f0, 4(r31) */ // 0x807F2BD4
    /* stfs f0, 0xcc(r30) */ // 0x807F2BD8
    r3 = *(0 + r3); // lwz @ 0x807F2BDC
    r0 = *(0x55 + r3); // lbz @ 0x807F2BE0
    if (==) goto 0x0x807f2bf8;
    r0 = *(0x24 + r31); // lwz @ 0x807F2BEC
    *(0xe0 + r30) = r0; // stw @ 0x807F2BF0
    /* b 0x807f2c00 */ // 0x807F2BF4
    r0 = *(0x20 + r31); // lwz @ 0x807F2BF8
    *(0xe0 + r30) = r0; // stw @ 0x807F2BFC
    r12 = *(0 + r30); // lwz @ 0x807F2C00
    r3 = r30;
    /* li r4, 1 */ // 0x807F2C08
    r12 = *(0x68 + r12); // lwz @ 0x807F2C0C
    /* mtctr r12 */ // 0x807F2C10
    /* bctrl  */ // 0x807F2C14
    r3 = *(0xb0 + r30); // lwz @ 0x807F2C18
    /* li r4, 1 */ // 0x807F2C1C
    r12 = *(0 + r3); // lwz @ 0x807F2C20
    r12 = *(0xc + r12); // lwz @ 0x807F2C24
    /* mtctr r12 */ // 0x807F2C28
    /* bctrl  */ // 0x807F2C2C
    /* li r3, 1 */ // 0x807F2C30
    /* li r0, 0 */ // 0x807F2C34
    *(0x124 + r30) = r3; // stb @ 0x807F2C38
    *(0xd4 + r30) = r0; // stb @ 0x807F2C3C
    r31 = *(0xc + r1); // lwz @ 0x807F2C40
    r30 = *(8 + r1); // lwz @ 0x807F2C44
    r0 = *(0x14 + r1); // lwz @ 0x807F2C48
    return;
}