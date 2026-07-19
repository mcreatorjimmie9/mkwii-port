/* Function at 0x80636A5C, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80636A5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80636A6C
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80636A74
    r12 = *(0x14 + r12); // lwz @ 0x80636A78
    /* mtctr r12 */ // 0x80636A7C
    /* bctrl  */ // 0x80636A80
    if (==) goto 0x0x80636b48;
    r0 = *(0xc8 + r30); // lbz @ 0x80636A8C
    if (!=) goto 0x0x80636b48;
    r12 = *(0 + r30); // lwz @ 0x80636A98
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x80636AA0
    /* mtctr r12 */ // 0x80636AA4
    /* bctrl  */ // 0x80636AA8
    r4 = *(0 + r3); // lwz @ 0x80636AAC
    r31 = r3;
    r0 = *(0 + r4); // lbz @ 0x80636AB4
    if (==) goto 0x0x80636acc;
    if (==) goto 0x0x80636adc;
    /* b 0x80636ae8 */ // 0x80636AC8
    r3 = *(0x28 + r30); // lwz @ 0x80636ACC
    r4 = r30 + 0x70; // 0x80636AD0
    FUN_807CF1B4(r4); // bl 0x807CF1B4
    /* b 0x80636ae8 */ // 0x80636AD8
    r3 = *(0x28 + r30); // lwz @ 0x80636ADC
    r4 = r30 + 0x9c; // 0x80636AE0
    FUN_807CF1B4(r4, r4); // bl 0x807CF1B4
    r12 = *(0 + r30); // lwz @ 0x80636AE8
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x80636AF0
    /* mtctr r12 */ // 0x80636AF4
    /* bctrl  */ // 0x80636AF8
    if (==) goto 0x0x80636b10;
    r3 = *(0 + r3); // lwz @ 0x80636B04
    /* lfs f0, 0x24(r3) */ // 0x80636B08
    /* stfs f0, 0x34(r30) */ // 0x80636B0C
    /* lis r3, 0 */ // 0x80636B10
    /* li r0, 1 */ // 0x80636B14
    /* lfs f0, 0(r3) */ // 0x80636B18
    /* lis r3, 0 */ // 0x80636B1C
    /* stfs f0, 0x14(r30) */ // 0x80636B20
    *(0x51 + r30) = r0; // stb @ 0x80636B24
    r3 = *(0 + r3); // lwz @ 0x80636B28
    FUN_8079D8F8(r3); // bl 0x8079D8F8
    r3 = r30;
    /* li r4, 0 */ // 0x80636B34
    FUN_80632FC4(r3, r4); // bl 0x80632FC4
    r3 = *(0 + r31); // lwz @ 0x80636B3C
    r0 = *(0 + r3); // lbz @ 0x80636B40
    *(0x24 + r30) = r0; // stw @ 0x80636B44
    r0 = *(0x14 + r1); // lwz @ 0x80636B48
    r31 = *(0xc + r1); // lwz @ 0x80636B4C
    r30 = *(8 + r1); // lwz @ 0x80636B50
    return;
}