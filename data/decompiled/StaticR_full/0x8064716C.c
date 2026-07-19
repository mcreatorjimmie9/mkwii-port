/* Function at 0x8064716C, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_8064716C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x80647178
    /* stmw r27, 0xc(r1) */ // 0x8064717C
    r27 = r3;
    r28 = r4;
    if (==) goto 0x0x8064726c;
    r0 = *(0x3c + r3); // lwz @ 0x8064718C
    /* lis r4, 0 */ // 0x80647190
    r4 = r4 + 0; // 0x80647194
    *(0x10 + r3) = r4; // stw @ 0x80647198
    if (==) goto 0x0x806471c0;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x806471A8
    r12 = *(0x1c + r12); // lwz @ 0x806471AC
    /* mtctr r12 */ // 0x806471B0
    /* bctrl  */ // 0x806471B4
    /* li r0, 0 */ // 0x806471B8
    *(0x3c + r27) = r0; // stw @ 0x806471BC
    /* li r29, 0 */ // 0x806471C0
    /* li r30, 0 */ // 0x806471C4
    /* li r31, 0 */ // 0x806471C8
    /* b 0x80647200 */ // 0x806471CC
    r3 = r27 + r30; // 0x806471D0
    r3 = *(0x2c + r3); // lwz @ 0x806471D4
    if (==) goto 0x0x806471f8;
    r12 = *(0 + r3); // lwz @ 0x806471E0
    r12 = *(0x1c + r12); // lwz @ 0x806471E4
    /* mtctr r12 */ // 0x806471E8
    /* bctrl  */ // 0x806471EC
    r3 = r27 + r30; // 0x806471F0
    *(0x2c + r3) = r31; // stw @ 0x806471F4
    r30 = r30 + 4; // 0x806471F8
    r29 = r29 + 1; // 0x806471FC
    r0 = *(0x21 + r27); // lbz @ 0x80647200
    if (<) goto 0x0x806471d0;
    if (==) goto 0x0x8064725c;
    /* lis r3, 0 */ // 0x80647214
    /* lis r4, 0 */ // 0x80647218
    r3 = r3 + 0; // 0x8064721C
    *(0 + r27) = r3; // stw @ 0x80647220
    r3 = *(0 + r4); // lwz @ 0x80647224
    if (==) goto 0x0x80647250;
    /* li r0, 0 */ // 0x80647230
    *(0 + r4) = r0; // stw @ 0x80647234
    if (==) goto 0x0x80647250;
    r12 = *(0x10 + r3); // lwz @ 0x8064723C
    /* li r4, 1 */ // 0x80647240
    r12 = *(8 + r12); // lwz @ 0x80647244
    /* mtctr r12 */ // 0x80647248
    /* bctrl  */ // 0x8064724C
    r3 = r27;
    /* li r4, 0 */ // 0x80647254
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8064726c;
    r3 = r27;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x80647274
    return;
}