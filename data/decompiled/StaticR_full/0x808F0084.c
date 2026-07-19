/* Function at 0x808F0084, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808F0084(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808F008C
    /* slwi r0, r3, 2 */ // 0x808F0094
    *(0xc + r1) = r31; // stw @ 0x808F0098
    *(8 + r1) = r30; // stw @ 0x808F009C
    r3 = *(0 + r4); // lwz @ 0x808F00A0
    r3 = *(0 + r3); // lwz @ 0x808F00A4
    r3 = r3 + r0; // 0x808F00A8
    r30 = *(8 + r3); // lwz @ 0x808F00AC
    if (!=) goto 0x0x808f00c0;
    /* li r30, 0 */ // 0x808F00B8
    /* b 0x808f0114 */ // 0x808F00BC
    /* lis r31, 0 */ // 0x808F00C0
    r31 = r31 + 0; // 0x808F00C4
    if (==) goto 0x0x808f0110;
    r12 = *(0 + r30); // lwz @ 0x808F00CC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808F00D4
    /* mtctr r12 */ // 0x808F00D8
    /* bctrl  */ // 0x808F00DC
    /* b 0x808f00f8 */ // 0x808F00E0
    if (!=) goto 0x0x808f00f4;
    /* li r0, 1 */ // 0x808F00EC
    /* b 0x808f0104 */ // 0x808F00F0
    r3 = *(0 + r3); // lwz @ 0x808F00F4
    if (!=) goto 0x0x808f00e4;
    /* li r0, 0 */ // 0x808F0100
    if (==) goto 0x0x808f0110;
    /* b 0x808f0114 */ // 0x808F010C
    /* li r30, 0 */ // 0x808F0110
    if (!=) goto 0x0x808f0124;
    /* li r30, 0 */ // 0x808F011C
    /* b 0x808f0178 */ // 0x808F0120
    /* lis r31, 0 */ // 0x808F0124
    r31 = r31 + 0; // 0x808F0128
    if (==) goto 0x0x808f0174;
    r12 = *(0 + r30); // lwz @ 0x808F0130
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808F0138
    /* mtctr r12 */ // 0x808F013C
    /* bctrl  */ // 0x808F0140
    /* b 0x808f015c */ // 0x808F0144
    if (!=) goto 0x0x808f0158;
    /* li r0, 1 */ // 0x808F0150
    /* b 0x808f0168 */ // 0x808F0154
    r3 = *(0 + r3); // lwz @ 0x808F0158
    if (!=) goto 0x0x808f0148;
    /* li r0, 0 */ // 0x808F0164
    if (==) goto 0x0x808f0174;
    /* b 0x808f0178 */ // 0x808F0170
    /* li r30, 0 */ // 0x808F0174
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808F017C
    r30 = *(8 + r1); // lwz @ 0x808F0180
    r0 = *(0x14 + r1); // lwz @ 0x808F0184
    return;
}