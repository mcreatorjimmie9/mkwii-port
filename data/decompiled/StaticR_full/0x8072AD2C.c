/* Function at 0x8072AD2C, size=496 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8072AD2C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8072AD3C
    r30 = r3;
    r0 = *(0x124 + r3); // lwz @ 0x8072AD44
    if (!=) goto 0x0x8072ae90;
    r0 = *(0x90 + r3); // lbz @ 0x8072AD50
    if (==) goto 0x0x8072add8;
    r3 = *(0x52c + r3); // lwz @ 0x8072AD5C
    /* li r31, 2 */ // 0x8072AD60
    r30 = r3 + 8; // 0x8072AD64
    r3 = *(0 + r30); // lwz @ 0x8072AD68
    if (==) goto 0x0x8072adc4;
    r3 = r3 + 0x74; // 0x8072AD74
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072ad8c;
    /* li r3, 0 */ // 0x8072AD84
    /* b 0x8072ad90 */ // 0x8072AD88
    r3 = *(0xc + r3); // lwz @ 0x8072AD8C
    /* li r0, 0 */ // 0x8072AD94
    if (==) goto 0x0x8072ada4;
    if (!=) goto 0x0x8072ada8;
    /* li r0, 1 */ // 0x8072ADA4
    if (==) goto 0x0x8072adc4;
    r3 = *(0 + r30); // lwz @ 0x8072ADB0
    r12 = *(0 + r3); // lwz @ 0x8072ADB4
    r12 = *(0x18 + r12); // lwz @ 0x8072ADB8
    /* mtctr r12 */ // 0x8072ADBC
    /* bctrl  */ // 0x8072ADC0
    r31 = r31 + 1; // 0x8072ADC4
    r30 = r30 + 4; // 0x8072ADC8
    if (<) goto 0x0x8072ad68;
    /* b 0x8072af94 */ // 0x8072ADD4
    r0 = *(0x43 + r3); // lbz @ 0x8072ADD8
    if (==) goto 0x0x8072ae24;
    r4 = *(0x52c + r3); // lwz @ 0x8072ADE4
    r7 = r3 + 0x6f4; // 0x8072ADE8
    r8 = r3 + 0x7bc; // 0x8072ADEC
    /* li r5, 2 */ // 0x8072ADF0
    /* li r6, 5 */ // 0x8072ADF4
    /* li r9, 1 */ // 0x8072ADF8
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    r4 = *(0x52c + r30); // lwz @ 0x8072AE00
    r3 = r30;
    r7 = r30 + 0x6f4; // 0x8072AE08
    r8 = r30 + 0x7c8; // 0x8072AE0C
    /* li r5, 5 */ // 0x8072AE10
    /* li r6, 8 */ // 0x8072AE14
    /* li r9, 1 */ // 0x8072AE18
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x8072ae6c */ // 0x8072AE20
    r0 = *(0x44 + r3); // lbz @ 0x8072AE24
    if (!=) goto 0x0x8072ae6c;
    r4 = *(0x52c + r3); // lwz @ 0x8072AE30
    r7 = r3 + 0x6f4; // 0x8072AE34
    r8 = r3 + 0x7bc; // 0x8072AE38
    /* li r5, 2 */ // 0x8072AE3C
    /* li r6, 5 */ // 0x8072AE40
    /* li r9, 1 */ // 0x8072AE44
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r4 = *(0x52c + r30); // lwz @ 0x8072AE4C
    r3 = r30;
    r7 = r30 + 0x6f4; // 0x8072AE54
    r8 = r30 + 0x7c8; // 0x8072AE58
    /* li r5, 5 */ // 0x8072AE5C
    /* li r6, 8 */ // 0x8072AE60
    /* li r9, 1 */ // 0x8072AE64
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x44 + r30); // lbz @ 0x8072AE6C
    if (==) goto 0x0x8072ae84;
    r3 = r30;
    FUN_80737E80(r3); // bl 0x80737E80
    /* b 0x8072af94 */ // 0x8072AE80
    r3 = r30;
    FUN_80737F94(r3, r3); // bl 0x80737F94
    /* b 0x8072af94 */ // 0x8072AE8C
    if (!=) goto 0x0x8072af94;
    r0 = *(0x90 + r3); // lbz @ 0x8072AE98
    if (==) goto 0x0x8072af20;
    r3 = *(0x610 + r3); // lwz @ 0x8072AEA4
    /* li r31, 4 */ // 0x8072AEA8
    r30 = r3 + 0x10; // 0x8072AEAC
    r3 = *(0 + r30); // lwz @ 0x8072AEB0
    if (==) goto 0x0x8072af0c;
    r3 = r3 + 0x74; // 0x8072AEBC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072aed4;
    /* li r3, 0 */ // 0x8072AECC
    /* b 0x8072aed8 */ // 0x8072AED0
    r3 = *(0xc + r3); // lwz @ 0x8072AED4
    /* li r0, 0 */ // 0x8072AEDC
    if (==) goto 0x0x8072aeec;
    if (!=) goto 0x0x8072aef0;
    /* li r0, 1 */ // 0x8072AEEC
    if (==) goto 0x0x8072af0c;
    r3 = *(0 + r30); // lwz @ 0x8072AEF8
    r12 = *(0 + r3); // lwz @ 0x8072AEFC
    r12 = *(0x18 + r12); // lwz @ 0x8072AF00
    /* mtctr r12 */ // 0x8072AF04
    /* bctrl  */ // 0x8072AF08
    r31 = r31 + 1; // 0x8072AF0C
    r30 = r30 + 4; // 0x8072AF10
    if (<) goto 0x0x8072aeb0;
}