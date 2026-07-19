/* Function at 0x808B4CD4, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808B4CD4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808B4CDC
    /* slwi r0, r3, 2 */ // 0x808B4CE4
    *(0xc + r1) = r31; // stw @ 0x808B4CE8
    *(8 + r1) = r30; // stw @ 0x808B4CEC
    r3 = *(0 + r4); // lwz @ 0x808B4CF0
    r3 = *(0 + r3); // lwz @ 0x808B4CF4
    r3 = r3 + r0; // 0x808B4CF8
    r30 = *(8 + r3); // lwz @ 0x808B4CFC
    if (!=) goto 0x0x808b4d10;
    /* li r30, 0 */ // 0x808B4D08
    /* b 0x808b4d64 */ // 0x808B4D0C
    /* lis r31, 0 */ // 0x808B4D10
    r31 = r31 + 0; // 0x808B4D14
    if (==) goto 0x0x808b4d60;
    r12 = *(0 + r30); // lwz @ 0x808B4D1C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B4D24
    /* mtctr r12 */ // 0x808B4D28
    /* bctrl  */ // 0x808B4D2C
    /* b 0x808b4d48 */ // 0x808B4D30
    if (!=) goto 0x0x808b4d44;
    /* li r0, 1 */ // 0x808B4D3C
    /* b 0x808b4d54 */ // 0x808B4D40
    r3 = *(0 + r3); // lwz @ 0x808B4D44
    if (!=) goto 0x0x808b4d34;
    /* li r0, 0 */ // 0x808B4D50
    if (==) goto 0x0x808b4d60;
    /* b 0x808b4d64 */ // 0x808B4D5C
    /* li r30, 0 */ // 0x808B4D60
    if (!=) goto 0x0x808b4d74;
    /* li r30, 0 */ // 0x808B4D6C
    /* b 0x808b4dc8 */ // 0x808B4D70
    /* lis r31, 0 */ // 0x808B4D74
    r31 = r31 + 0; // 0x808B4D78
    if (==) goto 0x0x808b4dc4;
    r12 = *(0 + r30); // lwz @ 0x808B4D80
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B4D88
    /* mtctr r12 */ // 0x808B4D8C
    /* bctrl  */ // 0x808B4D90
    /* b 0x808b4dac */ // 0x808B4D94
    if (!=) goto 0x0x808b4da8;
    /* li r0, 1 */ // 0x808B4DA0
    /* b 0x808b4db8 */ // 0x808B4DA4
    r3 = *(0 + r3); // lwz @ 0x808B4DA8
    if (!=) goto 0x0x808b4d98;
    /* li r0, 0 */ // 0x808B4DB4
    if (==) goto 0x0x808b4dc4;
    /* b 0x808b4dc8 */ // 0x808B4DC0
    /* li r30, 0 */ // 0x808B4DC4
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B4DCC
    r30 = *(8 + r1); // lwz @ 0x808B4DD0
    r0 = *(0x14 + r1); // lwz @ 0x808B4DD4
    return;
}