/* Function at 0x807AA0B0, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807AA0B0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807AA0C0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807AA0C8
    r30 = r3;
    if (==) goto 0x0x807aa178;
    r0 = *(0x92 + r3); // lbz @ 0x807AA0D4
    /* lis r5, 0 */ // 0x807AA0D8
    r5 = r5 + 0; // 0x807AA0DC
    *(0 + r3) = r5; // stw @ 0x807AA0E0
    r4 = r5 + 0x1c; // 0x807AA0E8
    r0 = r5 + 0x7c; // 0x807AA0EC
    *(0x54 + r3) = r4; // stw @ 0x807AA0F0
    *(0x88 + r3) = r0; // stw @ 0x807AA0F4
    if (!=) goto 0x0x807aa10c;
    r12 = *(0 + r3); // lwz @ 0x807AA0FC
    r12 = *(0x124 + r12); // lwz @ 0x807AA100
    /* mtctr r12 */ // 0x807AA104
    /* bctrl  */ // 0x807AA108
    r12 = *(0 + r30); // lwz @ 0x807AA10C
    r3 = r30;
    /* li r4, 0 */ // 0x807AA114
    r12 = *(0xec + r12); // lwz @ 0x807AA118
    /* mtctr r12 */ // 0x807AA11C
    /* bctrl  */ // 0x807AA120
    if (==) goto 0x0x807aa168;
    if (==) goto 0x0x807aa168;
    r3 = r30 + 0x88; // 0x807AA130
    /* li r4, 0 */ // 0x807AA134
    FUN_8078FDC8(r3, r4); // bl 0x8078FDC8
    if (==) goto 0x0x807aa168;
    /* lis r4, 0 */ // 0x807AA144
    r3 = r30 + 0x80; // 0x807AA148
    r4 = r4 + 0; // 0x807AA14C
    /* li r5, 4 */ // 0x807AA150
    /* li r6, 1 */ // 0x807AA154
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x807AA160
    FUN_805E3430(r5, r6, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807aa178;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807AA17C
    r30 = *(8 + r1); // lwz @ 0x807AA180
    r0 = *(0x14 + r1); // lwz @ 0x807AA184
}