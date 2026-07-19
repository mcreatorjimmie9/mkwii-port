/* Function at 0x80737BB8, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80737BB8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80737BC8
    r30 = r3;
    r0 = *(7 + r3); // lbz @ 0x80737BD0
    if (!=) goto 0x0x80737c4c;
    /* lis r4, 0 */ // 0x80737BDC
    r4 = *(0 + r4); // lwz @ 0x80737BE0
    r0 = *(0x10 + r4); // lbz @ 0x80737BE4
    if (!=) goto 0x0x80737c4c;
    r0 = *(0x12b + r3); // lbz @ 0x80737BF0
    if (==) goto 0x0x80737c00;
    /* b 0x80737c4c */ // 0x80737BFC
    r31 = *(0x258 + r3); // lwz @ 0x80737C00
    if (==) goto 0x0x80737c44;
    r12 = *(0 + r31); // lwz @ 0x80737C0C
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80737C14
    /* mtctr r12 */ // 0x80737C18
    /* bctrl  */ // 0x80737C1C
    r0 = *(0xb0 + r30); // lbz @ 0x80737C20
    if (==) goto 0x0x80737c44;
    r12 = *(0 + r31); // lwz @ 0x80737C2C
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80737C34
    r12 = *(0x70 + r12); // lwz @ 0x80737C38
    /* mtctr r12 */ // 0x80737C3C
    /* bctrl  */ // 0x80737C40
    /* li r0, 1 */ // 0x80737C44
    *(0x2c + r30) = r0; // stb @ 0x80737C48
    r0 = *(0x14 + r1); // lwz @ 0x80737C4C
    r31 = *(0xc + r1); // lwz @ 0x80737C50
    r30 = *(8 + r1); // lwz @ 0x80737C54
    return;
}