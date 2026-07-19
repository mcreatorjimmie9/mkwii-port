/* Function at 0x80777BB8, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80777BB8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80777BC4
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80777BCC
    r12 = *(0x98 + r12); // lwz @ 0x80777BD0
    /* mtctr r12 */ // 0x80777BD4
    /* bctrl  */ // 0x80777BD8
    if (==) goto 0x0x80777bf8;
    r12 = *(0 + r31); // lwz @ 0x80777BE4
    r3 = r31;
    r12 = *(0x8c + r12); // lwz @ 0x80777BEC
    /* mtctr r12 */ // 0x80777BF0
    /* bctrl  */ // 0x80777BF4
    r12 = *(0 + r31); // lwz @ 0x80777BF8
    r3 = r31;
    /* li r4, 0 */ // 0x80777C00
    r12 = *(0x68 + r12); // lwz @ 0x80777C04
    /* mtctr r12 */ // 0x80777C08
    /* bctrl  */ // 0x80777C0C
    r3 = *(0xe0 + r31); // lwz @ 0x80777C10
    /* li r4, 0 */ // 0x80777C14
    r12 = *(0 + r3); // lwz @ 0x80777C18
    r12 = *(0x68 + r12); // lwz @ 0x80777C1C
    /* mtctr r12 */ // 0x80777C20
    /* bctrl  */ // 0x80777C24
    r0 = *(0x2c + r31); // lhz @ 0x80777C28
    /* lfs f2, 0xe8(r31) */ // 0x80777C2C
    /* lfs f1, 0xec(r31) */ // 0x80777C30
    r0 = r0 | 1; // 0x80777C34
    /* lfs f0, 0xf0(r31) */ // 0x80777C38
    /* stfs f2, 0x530(r31) */ // 0x80777C3C
    /* stfs f1, 0x534(r31) */ // 0x80777C40
    /* stfs f0, 0x538(r31) */ // 0x80777C44
    *(0x2c + r31) = r0; // sth @ 0x80777C48
    /* stfs f2, 0x30(r31) */ // 0x80777C4C
    /* stfs f1, 0x34(r31) */ // 0x80777C50
    /* stfs f0, 0x38(r31) */ // 0x80777C54
    r31 = *(0xc + r1); // lwz @ 0x80777C58
    r0 = *(0x14 + r1); // lwz @ 0x80777C5C
    return;
}