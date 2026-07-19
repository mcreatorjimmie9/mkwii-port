/* Function at 0x808C4D58, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808C4D58(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808C4D60
    /* slwi r0, r3, 2 */ // 0x808C4D68
    *(0xc + r1) = r31; // stw @ 0x808C4D6C
    *(8 + r1) = r30; // stw @ 0x808C4D70
    r3 = *(0 + r4); // lwz @ 0x808C4D74
    r3 = *(0 + r3); // lwz @ 0x808C4D78
    r3 = r3 + r0; // 0x808C4D7C
    r30 = *(8 + r3); // lwz @ 0x808C4D80
    if (!=) goto 0x0x808c4d94;
    /* li r30, 0 */ // 0x808C4D8C
    /* b 0x808c4de8 */ // 0x808C4D90
    /* lis r31, 0 */ // 0x808C4D94
    r31 = r31 + 0; // 0x808C4D98
    if (==) goto 0x0x808c4de4;
    r12 = *(0 + r30); // lwz @ 0x808C4DA0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C4DA8
    /* mtctr r12 */ // 0x808C4DAC
    /* bctrl  */ // 0x808C4DB0
    /* b 0x808c4dcc */ // 0x808C4DB4
    if (!=) goto 0x0x808c4dc8;
    /* li r0, 1 */ // 0x808C4DC0
    /* b 0x808c4dd8 */ // 0x808C4DC4
    r3 = *(0 + r3); // lwz @ 0x808C4DC8
    if (!=) goto 0x0x808c4db8;
    /* li r0, 0 */ // 0x808C4DD4
    if (==) goto 0x0x808c4de4;
    /* b 0x808c4de8 */ // 0x808C4DE0
    /* li r30, 0 */ // 0x808C4DE4
    if (!=) goto 0x0x808c4df8;
    /* li r30, 0 */ // 0x808C4DF0
    /* b 0x808c4e4c */ // 0x808C4DF4
    /* lis r31, 0 */ // 0x808C4DF8
    r31 = r31 + 0; // 0x808C4DFC
    if (==) goto 0x0x808c4e48;
    r12 = *(0 + r30); // lwz @ 0x808C4E04
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C4E0C
    /* mtctr r12 */ // 0x808C4E10
    /* bctrl  */ // 0x808C4E14
    /* b 0x808c4e30 */ // 0x808C4E18
    if (!=) goto 0x0x808c4e2c;
    /* li r0, 1 */ // 0x808C4E24
    /* b 0x808c4e3c */ // 0x808C4E28
    r3 = *(0 + r3); // lwz @ 0x808C4E2C
    if (!=) goto 0x0x808c4e1c;
    /* li r0, 0 */ // 0x808C4E38
    if (==) goto 0x0x808c4e48;
    /* b 0x808c4e4c */ // 0x808C4E44
    /* li r30, 0 */ // 0x808C4E48
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C4E50
    r30 = *(8 + r1); // lwz @ 0x808C4E54
    r0 = *(0x14 + r1); // lwz @ 0x808C4E58
    return;
}