/* Function at 0x807F0268, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807F0268(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807F0278
    r30 = r3;
    FUN_807F7D04(); // bl 0x807F7D04
    r12 = *(0 + r30); // lwz @ 0x807F0284
    r3 = r30;
    /* li r31, 0 */ // 0x807F028C
    r12 = *(0x30 + r12); // lwz @ 0x807F0290
    /* mtctr r12 */ // 0x807F0294
    /* bctrl  */ // 0x807F0298
    /* lis r4, 0x101 */ // 0x807F029C
    r0 = *(0x20 + r3); // lwz @ 0x807F02A0
    r3 = r4 + 0x101; // 0x807F02A4
    /* andc. r0, r3, r0 */ // 0x807F02A8
    if (!=) goto 0x0x807f02c8;
    /* lis r3, 0 */ // 0x807F02B0
    r3 = *(0 + r3); // lwz @ 0x807F02B4
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f02c8;
    /* li r31, 1 */ // 0x807F02C4
    if (!=) goto 0x0x807f0348;
    r3 = *(0xf4 + r30); // lwz @ 0x807F02D0
    r0 = *(0xb5 + r3); // lbz @ 0x807F02D4
    if (!=) goto 0x0x807f0348;
    /* lis r3, 0 */ // 0x807F02E0
    r3 = *(0 + r3); // lwz @ 0x807F02E4
    r0 = *(0x55 + r3); // lbz @ 0x807F02E8
    if (!=) goto 0x0x807f0348;
    /* lis r3, 0 */ // 0x807F02F4
    r3 = *(0 + r3); // lwz @ 0x807F02F8
    r0 = *(0xb80 + r3); // lwz @ 0x807F02FC
    if (==) goto 0x0x807f0348;
    r3 = *(0xf8 + r30); // lwz @ 0x807F0308
    r12 = *(0 + r3); // lwz @ 0x807F030C
    r12 = *(0xc + r12); // lwz @ 0x807F0310
    /* mtctr r12 */ // 0x807F0314
    /* bctrl  */ // 0x807F0318
    r3 = *(0xf8 + r30); // lwz @ 0x807F031C
    r4 = r30 + 0x30; // 0x807F0320
    r12 = *(0 + r3); // lwz @ 0x807F0324
    r12 = *(0x74 + r12); // lwz @ 0x807F0328
    /* mtctr r12 */ // 0x807F032C
    /* bctrl  */ // 0x807F0330
    r3 = *(0xf8 + r30); // lwz @ 0x807F0334
    r12 = *(0 + r3); // lwz @ 0x807F0338
    r12 = *(0x80 + r12); // lwz @ 0x807F033C
    /* mtctr r12 */ // 0x807F0340
    /* bctrl  */ // 0x807F0344
    r0 = *(0x14 + r1); // lwz @ 0x807F0348
    r31 = *(0xc + r1); // lwz @ 0x807F034C
    r30 = *(8 + r1); // lwz @ 0x807F0350
    return;
}