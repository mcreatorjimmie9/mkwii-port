/* Function at 0x808E604C, size=256 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808E604C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r3 = r3 + 0x24; // 0x808E6054
    *(0xc + r1) = r31; // stw @ 0x808E605C
    *(8 + r1) = r30; // stw @ 0x808E6060
    FUN_8064E1CC(r3); // bl 0x8064E1CC
    r30 = r3;
    if (!=) goto 0x0x808e607c;
    /* li r30, 0 */ // 0x808E6074
    /* b 0x808e60cc */ // 0x808E6078
    /* lis r31, 0 */ // 0x808E607C
    r31 = r31 + 0; // 0x808E6080
    if (==) goto 0x0x808e60c8;
    r12 = *(0 + r3); // lwz @ 0x808E6088
    r12 = *(0x28 + r12); // lwz @ 0x808E608C
    /* mtctr r12 */ // 0x808E6090
    /* bctrl  */ // 0x808E6094
    /* b 0x808e60b0 */ // 0x808E6098
    if (!=) goto 0x0x808e60ac;
    /* li r0, 1 */ // 0x808E60A4
    /* b 0x808e60bc */ // 0x808E60A8
    r3 = *(0 + r3); // lwz @ 0x808E60AC
    if (!=) goto 0x0x808e609c;
    /* li r0, 0 */ // 0x808E60B8
    if (==) goto 0x0x808e60c8;
    /* b 0x808e60cc */ // 0x808E60C4
    /* li r30, 0 */ // 0x808E60C8
    if (!=) goto 0x0x808e60dc;
    /* li r30, 0 */ // 0x808E60D4
    /* b 0x808e6130 */ // 0x808E60D8
    /* lis r31, 0 */ // 0x808E60DC
    r31 = r31 + 0; // 0x808E60E0
    if (==) goto 0x0x808e612c;
    r12 = *(0 + r30); // lwz @ 0x808E60E8
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x808E60F0
    /* mtctr r12 */ // 0x808E60F4
    /* bctrl  */ // 0x808E60F8
    /* b 0x808e6114 */ // 0x808E60FC
    if (!=) goto 0x0x808e6110;
    /* li r0, 1 */ // 0x808E6108
    /* b 0x808e6120 */ // 0x808E610C
    r3 = *(0 + r3); // lwz @ 0x808E6110
    if (!=) goto 0x0x808e6100;
    /* li r0, 0 */ // 0x808E611C
    if (==) goto 0x0x808e612c;
    /* b 0x808e6130 */ // 0x808E6128
    /* li r30, 0 */ // 0x808E612C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E6134
    r30 = *(8 + r1); // lwz @ 0x808E6138
    r0 = *(0x14 + r1); // lwz @ 0x808E613C
    return;
}