/* Function at 0x8072BC58, size=380 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8072BC58(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8072BC6C
    *(0x14 + r1) = r29; // stw @ 0x8072BC70
    r0 = *(0x3b + r3); // lbz @ 0x8072BC74
    if (!=) goto 0x0x8072bcd8;
    r29 = r3 + 0x30; // 0x8072BC80
    /* li r30, 0xc */ // 0x8072BC84
    /* slwi r0, r30, 0x1e */ // 0x8072BC88
    /* srwi r3, r30, 0x1f */ // 0x8072BC8C
    /* subf r0, r3, r0 */ // 0x8072BC90
    /* rotlwi r0, r0, 2 */ // 0x8072BC94
    r0 = r0 + r3; // 0x8072BC98
    r3 = r31 + r0; // 0x8072BC9C
    r0 = *(0x848 + r3); // lbz @ 0x8072BCA0
    if (==) goto 0x0x8072bcc0;
    r3 = *(0x2d8 + r29); // lwz @ 0x8072BCAC
    r12 = *(0 + r3); // lwz @ 0x8072BCB0
    r12 = *(0x14 + r12); // lwz @ 0x8072BCB4
    /* mtctr r12 */ // 0x8072BCB8
    /* bctrl  */ // 0x8072BCBC
    r30 = r30 + 1; // 0x8072BCC0
    r29 = r29 + 4; // 0x8072BCC4
    if (<) goto 0x0x8072bc88;
    /* li r0, 0x3e8 */ // 0x8072BCD0
    *(0x1c + r31) = r0; // stw @ 0x8072BCD4
    r30 = r31;
    /* li r29, 0 */ // 0x8072BCDC
    r3 = *(0x2d8 + r30); // lwz @ 0x8072BCE0
    if (==) goto 0x0x8072bd18;
    r4 = r31 + r29; // 0x8072BCEC
    r0 = *(0x848 + r4); // lbz @ 0x8072BCF0
    if (==) goto 0x0x8072bd18;
    r0 = *(0x96d + r4); // lbz @ 0x8072BCFC
    if (==) goto 0x0x8072bd18;
    r12 = *(0 + r3); // lwz @ 0x8072BD08
    r12 = *(0x10 + r12); // lwz @ 0x8072BD0C
    /* mtctr r12 */ // 0x8072BD10
    /* bctrl  */ // 0x8072BD14
    r29 = r29 + 1; // 0x8072BD18
    r30 = r30 + 4; // 0x8072BD1C
    if (<) goto 0x0x8072bce0;
    r30 = r31 + 0x10; // 0x8072BD28
    /* li r29, 4 */ // 0x8072BD2C
    r3 = *(0x2d8 + r30); // lwz @ 0x8072BD30
    if (==) goto 0x0x8072bd68;
    r4 = r31 + r29; // 0x8072BD3C
    r0 = *(0x848 + r4); // lbz @ 0x8072BD40
    if (==) goto 0x0x8072bd68;
    r0 = *(0x96d + r4); // lbz @ 0x8072BD4C
    if (==) goto 0x0x8072bd68;
    r12 = *(0 + r3); // lwz @ 0x8072BD58
    r12 = *(0x10 + r12); // lwz @ 0x8072BD5C
    /* mtctr r12 */ // 0x8072BD60
    /* bctrl  */ // 0x8072BD64
    r29 = r29 + 1; // 0x8072BD68
    r30 = r30 + 4; // 0x8072BD6C
    if (<) goto 0x0x8072bd30;
    r30 = r31;
    /* li r29, 0 */ // 0x8072BD7C
    r3 = *(0x2d8 + r30); // lwz @ 0x8072BD80
    if (==) goto 0x0x8072bda8;
    r0 = *(0x3a + r31); // lbz @ 0x8072BD8C
    if (==) goto 0x0x8072bda8;
    r12 = *(0 + r3); // lwz @ 0x8072BD98
    r12 = *(0x18 + r12); // lwz @ 0x8072BD9C
    /* mtctr r12 */ // 0x8072BDA0
    /* bctrl  */ // 0x8072BDA4
    r29 = r29 + 1; // 0x8072BDA8
    r30 = r30 + 4; // 0x8072BDAC
    if (<) goto 0x0x8072bd80;
    r0 = *(0x24 + r1); // lwz @ 0x8072BDB8
    r31 = *(0x1c + r1); // lwz @ 0x8072BDBC
    r30 = *(0x18 + r1); // lwz @ 0x8072BDC0
    r29 = *(0x14 + r1); // lwz @ 0x8072BDC4
    return;
}