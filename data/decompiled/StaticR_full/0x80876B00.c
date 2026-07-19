/* Function at 0x80876B00, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80876B00(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80876B0C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80876B14
    r12 = *(0x44 + r12); // lwz @ 0x80876B18
    /* mtctr r12 */ // 0x80876B1C
    /* bctrl  */ // 0x80876B20
    if (==) goto 0x0x80876b90;
    r12 = *(0 + r31); // lwz @ 0x80876B2C
    r3 = r31;
    r12 = *(0x48 + r12); // lwz @ 0x80876B34
    /* mtctr r12 */ // 0x80876B38
    /* bctrl  */ // 0x80876B3C
    if (==) goto 0x0x80876b60;
    r0 = *(0x174 + r31); // lwz @ 0x80876B48
    if (!=) goto 0x0x80876b90;
    /* li r0, 0 */ // 0x80876B54
    *(0x174 + r31) = r0; // stw @ 0x80876B58
    /* b 0x80876b90 */ // 0x80876B5C
    r12 = *(0 + r31); // lwz @ 0x80876B60
    r3 = r31;
    r12 = *(0x4c + r12); // lwz @ 0x80876B68
    /* mtctr r12 */ // 0x80876B6C
    /* bctrl  */ // 0x80876B70
    if (==) goto 0x0x80876b90;
    r0 = *(0x174 + r31); // lwz @ 0x80876B7C
    if (==) goto 0x0x80876b90;
    /* li r0, 2 */ // 0x80876B88
    *(0x174 + r31) = r0; // stw @ 0x80876B8C
    r0 = *(0x14 + r1); // lwz @ 0x80876B90
    r31 = *(0xc + r1); // lwz @ 0x80876B94
    return;
}