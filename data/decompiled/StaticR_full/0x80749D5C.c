/* Function at 0x80749D5C, size=564 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_80749D5C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80749D70
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80749D78
    r29 = r3;
    r3 = r30;
    *(0x10 + r1) = r28; // stw @ 0x80749D84
    r28 = r6;
    FUN_808ABA6C(r3); // bl 0x808ABA6C
    r0 = *(0xb4 + r29); // lhz @ 0x80749D90
    /* cntlzw r3, r3 */ // 0x80749D94
    /* srwi r3, r3, 5 */ // 0x80749D98
    if (!=) goto 0x0x80749db4;
    if (==) goto 0x0x80749db4;
    /* li r3, 0x12 */ // 0x80749DAC
    /* b 0x80749f70 */ // 0x80749DB0
    if (==) goto 0x0x80749dc8;
    if (==) goto 0x0x80749e9c;
    /* b 0x80749f6c */ // 0x80749DC4
    r0 = *(0x15c + r29); // lbz @ 0x80749DC8
    if (!=) goto 0x0x80749f6c;
    r3 = r30;
    FUN_8061DEF4(r3); // bl 0x8061DEF4
    if (!=) goto 0x0x80749f6c;
    r12 = *(0 + r29); // lwz @ 0x80749DE4
    r3 = r29;
    r12 = *(0x24 + r12); // lwz @ 0x80749DEC
    /* mtctr r12 */ // 0x80749DF0
    /* bctrl  */ // 0x80749DF4
    /* lis r4, 0 */ // 0x80749DF8
    /* lis r5, 0 */ // 0x80749DFC
    r6 = *(0 + r4); // lwz @ 0x80749E00
    /* clrlwi r4, r3, 0x10 */ // 0x80749E04
    r3 = *(0 + r5); // lwz @ 0x80749E08
    r0 = *(0xb70 + r6); // lwz @ 0x80749E0C
    if (!=) goto 0x0x80749e58;
    r0 = *(0xb9e + r6); // lhz @ 0x80749E18
    if (!=) goto 0x0x80749e58;
    r28 = *(0x10 + r3); // lwz @ 0x80749E28
    if (<) goto 0x0x80749e4c;
    r12 = *(0 + r28); // lwz @ 0x80749E30
    r3 = r28;
    r12 = *(0x38 + r12); // lwz @ 0x80749E38
    /* mtctr r12 */ // 0x80749E3C
    /* bctrl  */ // 0x80749E40
    if (==) goto 0x0x80749e58;
    r3 = *(8 + r28); // lwz @ 0x80749E4C
    r0 = r3 + 1; // 0x80749E50
    *(8 + r28) = r0; // stw @ 0x80749E54
    /* li r0, 1 */ // 0x80749E58
    *(0x15c + r29) = r0; // stb @ 0x80749E5C
    r3 = r30;
    /* li r4, 0 */ // 0x80749E64
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    r0 = *(0xb4 + r29); // lhz @ 0x80749E6C
    if (!=) goto 0x0x80749f6c;
    r4 = *(8 + r29); // lwz @ 0x80749E78
    /* lis r3, 0 */ // 0x80749E7C
    /* lis r5, 0 */ // 0x80749E80
    /* lfs f1, 0(r3) */ // 0x80749E84
    r3 = *(0x28 + r4); // lwz @ 0x80749E88
    /* li r4, 1 */ // 0x80749E8C
    /* lfs f2, 0(r5) */ // 0x80749E90
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* b 0x80749f6c */ // 0x80749E98
    r0 = *(0x15c + r29); // lbz @ 0x80749E9C
    if (!=) goto 0x0x80749f6c;
    r3 = r30;
    FUN_8061DEF4(r3); // bl 0x8061DEF4
    if (!=) goto 0x0x80749f6c;
    r12 = *(0 + r29); // lwz @ 0x80749EB8
    r3 = r29;
    r12 = *(0x24 + r12); // lwz @ 0x80749EC0
    /* mtctr r12 */ // 0x80749EC4
    /* bctrl  */ // 0x80749EC8
    /* lis r4, 0 */ // 0x80749ECC
    /* lis r5, 0 */ // 0x80749ED0
    r6 = *(0 + r4); // lwz @ 0x80749ED4
    /* clrlwi r4, r3, 0x10 */ // 0x80749ED8
    r3 = *(0 + r5); // lwz @ 0x80749EDC
    r0 = *(0xb70 + r6); // lwz @ 0x80749EE0
    if (!=) goto 0x0x80749f2c;
    r0 = *(0xb9e + r6); // lhz @ 0x80749EEC
    if (!=) goto 0x0x80749f2c;
    r28 = *(0x10 + r3); // lwz @ 0x80749EFC
    if (<) goto 0x0x80749f20;
    r12 = *(0 + r28); // lwz @ 0x80749F04
    r3 = r28;
    r12 = *(0x38 + r12); // lwz @ 0x80749F0C
    /* mtctr r12 */ // 0x80749F10
    /* bctrl  */ // 0x80749F14
    if (==) goto 0x0x80749f2c;
    r3 = *(8 + r28); // lwz @ 0x80749F20
    r0 = r3 + 1; // 0x80749F24
    *(8 + r28) = r0; // stw @ 0x80749F28
    /* li r0, 1 */ // 0x80749F2C
    *(0x15c + r29) = r0; // stb @ 0x80749F30
    r3 = r30;
    /* li r4, 0 */ // 0x80749F38
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    r0 = *(0xb4 + r29); // lhz @ 0x80749F40
    if (!=) goto 0x0x80749f6c;
    r4 = *(8 + r29); // lwz @ 0x80749F4C
    /* lis r3, 0 */ // 0x80749F50
    /* lis r5, 0 */ // 0x80749F54
    /* lfs f1, 0(r3) */ // 0x80749F58
    r3 = *(0x28 + r4); // lwz @ 0x80749F5C
    /* li r4, 1 */ // 0x80749F60
    /* lfs f2, 0(r5) */ // 0x80749F64
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80749F70
    r31 = *(0x1c + r1); // lwz @ 0x80749F74
    r30 = *(0x18 + r1); // lwz @ 0x80749F78
    r29 = *(0x14 + r1); // lwz @ 0x80749F7C
    r28 = *(0x10 + r1); // lwz @ 0x80749F80
    return;
}