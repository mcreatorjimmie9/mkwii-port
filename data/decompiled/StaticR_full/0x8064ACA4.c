/* Function at 0x8064ACA4, size=920 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 12 function(s) */

int FUN_8064ACA4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 4 */ // 0x8064ACAC
    *(0x14 + r1) = r0; // stw @ 0x8064ACB0
    *(0xc + r1) = r31; // stw @ 0x8064ACB4
    r31 = r3;
    r3 = r3 + 0x98; // 0x8064ACBC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8064ACC4
    if (==) goto 0x0x8064acec;
    if (==) goto 0x0x8064aea0;
    if (==) goto 0x0x8064b01c;
    if (==) goto 0x0x8064b01c;
    /* b 0x8064b028 */ // 0x8064ACE8
    r3 = *(0x264 + r31); // lwz @ 0x8064ACEC
    /* addic. r0, r3, -1 */ // 0x8064ACF0
    *(0x264 + r31) = r0; // stw @ 0x8064ACF4
    if (>=) goto 0x0x8064ae90;
    r3 = r31;
    FUN_8064A340(r3); // bl 0x8064A340
    if (!=) goto 0x0x8064ae90;
    r6 = *(0x260 + r31); // lwz @ 0x8064AD0C
    /* lis r3, 0x2e8c */ // 0x8064AD10
    /* li r0, 2 */ // 0x8064AD14
    /* li r8, 1 */ // 0x8064AD18
    r7 = r6;
    r4 = r3 + -0x5d17; // 0x8064AD20
    /* mtctr r0 */ // 0x8064AD24
    r5 = r8 + r6; // 0x8064AD28
    /* mulhw r0, r4, r5 */ // 0x8064AD2C
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064AD34
    r0 = r0 + r3; // 0x8064AD38
    /* mulli r0, r0, 0xb */ // 0x8064AD3C
    /* subf r5, r0, r5 */ // 0x8064AD40
    r3 = r31 + r5; // 0x8064AD44
    r0 = *(0x254 + r3); // lbz @ 0x8064AD48
    if (==) goto 0x0x8064ad5c;
    r7 = r5;
    /* b 0x8064ae44 */ // 0x8064AD58
    r8 = r8 + 1; // 0x8064AD5C
    r5 = r8 + r6; // 0x8064AD60
    /* mulhw r0, r4, r5 */ // 0x8064AD64
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064AD6C
    r0 = r0 + r3; // 0x8064AD70
    /* mulli r0, r0, 0xb */ // 0x8064AD74
    /* subf r5, r0, r5 */ // 0x8064AD78
    r3 = r31 + r5; // 0x8064AD7C
    r0 = *(0x254 + r3); // lbz @ 0x8064AD80
    if (==) goto 0x0x8064ad94;
    r7 = r5;
    /* b 0x8064ae44 */ // 0x8064AD90
    r8 = r8 + 1; // 0x8064AD94
    r5 = r8 + r6; // 0x8064AD98
    /* mulhw r0, r4, r5 */ // 0x8064AD9C
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064ADA4
    r0 = r0 + r3; // 0x8064ADA8
    /* mulli r0, r0, 0xb */ // 0x8064ADAC
    /* subf r5, r0, r5 */ // 0x8064ADB0
    r3 = r31 + r5; // 0x8064ADB4
    r0 = *(0x254 + r3); // lbz @ 0x8064ADB8
    if (==) goto 0x0x8064adcc;
    r7 = r5;
    /* b 0x8064ae44 */ // 0x8064ADC8
    r8 = r8 + 1; // 0x8064ADCC
    r5 = r8 + r6; // 0x8064ADD0
    /* mulhw r0, r4, r5 */ // 0x8064ADD4
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064ADDC
    r0 = r0 + r3; // 0x8064ADE0
    /* mulli r0, r0, 0xb */ // 0x8064ADE4
    /* subf r5, r0, r5 */ // 0x8064ADE8
    r3 = r31 + r5; // 0x8064ADEC
    r0 = *(0x254 + r3); // lbz @ 0x8064ADF0
    if (==) goto 0x0x8064ae04;
    r7 = r5;
    /* b 0x8064ae44 */ // 0x8064AE00
    r8 = r8 + 1; // 0x8064AE04
    r5 = r8 + r6; // 0x8064AE08
    /* mulhw r0, r4, r5 */ // 0x8064AE0C
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064AE14
    r0 = r0 + r3; // 0x8064AE18
    /* mulli r0, r0, 0xb */ // 0x8064AE1C
    /* subf r5, r0, r5 */ // 0x8064AE20
    r3 = r31 + r5; // 0x8064AE24
    r0 = *(0x254 + r3); // lbz @ 0x8064AE28
    if (==) goto 0x0x8064ae3c;
    r7 = r5;
    /* b 0x8064ae44 */ // 0x8064AE38
    r8 = r8 + 1; // 0x8064AE3C
    if (counter-- != 0) goto 0x0x8064ad28;
    if (==) goto 0x0x8064ae78;
    r3 = r31 + 0x98; // 0x8064AE4C
    /* li r4, 4 */ // 0x8064AE50
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064AE58
    /* li r4, 3 */ // 0x8064AE5C
    /* lfs f1, 0(r5) */ // 0x8064AE60
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r31;
    /* li r4, 0 */ // 0x8064AE6C
    FUN_80649FD0(r4, r3, r4); // bl 0x80649FD0
    /* b 0x8064b028 */ // 0x8064AE74
    /* li r0, 0xb4 */ // 0x8064AE78
    *(0x264 + r31) = r0; // stw @ 0x8064AE7C
    r3 = r31;
    /* li r4, 1 */ // 0x8064AE84
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x8064b028 */ // 0x8064AE8C
    r3 = r31;
    /* li r4, 1 */ // 0x8064AE94
    FUN_80649FD0(r4, r3, r4); // bl 0x80649FD0
    /* b 0x8064b028 */ // 0x8064AE9C
    r6 = *(0x260 + r31); // lwz @ 0x8064AEA0
    if (<) goto 0x0x8064b028;
    /* lis r3, 0x2e8c */ // 0x8064AEAC
    /* li r0, 2 */ // 0x8064AEB0
    /* li r7, 1 */ // 0x8064AEB4
    r4 = r3 + -0x5d17; // 0x8064AEB8
    /* mtctr r0 */ // 0x8064AEBC
    r5 = r7 + r6; // 0x8064AEC0
    /* mulhw r0, r4, r5 */ // 0x8064AEC4
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064AECC
    r0 = r0 + r3; // 0x8064AED0
    /* mulli r0, r0, 0xb */ // 0x8064AED4
    /* subf r5, r0, r5 */ // 0x8064AED8
    r3 = r31 + r5; // 0x8064AEDC
    r0 = *(0x254 + r3); // lbz @ 0x8064AEE0
    if (==) goto 0x0x8064aef4;
    r6 = r5;
    /* b 0x8064afdc */ // 0x8064AEF0
    r7 = r7 + 1; // 0x8064AEF4
    r5 = r7 + r6; // 0x8064AEF8
    /* mulhw r0, r4, r5 */ // 0x8064AEFC
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064AF04
    r0 = r0 + r3; // 0x8064AF08
    /* mulli r0, r0, 0xb */ // 0x8064AF0C
    /* subf r5, r0, r5 */ // 0x8064AF10
    r3 = r31 + r5; // 0x8064AF14
    r0 = *(0x254 + r3); // lbz @ 0x8064AF18
    if (==) goto 0x0x8064af2c;
    r6 = r5;
    /* b 0x8064afdc */ // 0x8064AF28
    r7 = r7 + 1; // 0x8064AF2C
    r5 = r7 + r6; // 0x8064AF30
    /* mulhw r0, r4, r5 */ // 0x8064AF34
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064AF3C
    r0 = r0 + r3; // 0x8064AF40
    /* mulli r0, r0, 0xb */ // 0x8064AF44
    /* subf r5, r0, r5 */ // 0x8064AF48
    r3 = r31 + r5; // 0x8064AF4C
    r0 = *(0x254 + r3); // lbz @ 0x8064AF50
    if (==) goto 0x0x8064af64;
    r6 = r5;
    /* b 0x8064afdc */ // 0x8064AF60
    r7 = r7 + 1; // 0x8064AF64
    r5 = r7 + r6; // 0x8064AF68
    /* mulhw r0, r4, r5 */ // 0x8064AF6C
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064AF74
    r0 = r0 + r3; // 0x8064AF78
    /* mulli r0, r0, 0xb */ // 0x8064AF7C
    /* subf r5, r0, r5 */ // 0x8064AF80
    r3 = r31 + r5; // 0x8064AF84
    r0 = *(0x254 + r3); // lbz @ 0x8064AF88
    if (==) goto 0x0x8064af9c;
    r6 = r5;
    /* b 0x8064afdc */ // 0x8064AF98
    r7 = r7 + 1; // 0x8064AF9C
    r5 = r7 + r6; // 0x8064AFA0
    /* mulhw r0, r4, r5 */ // 0x8064AFA4
    r0 = r0 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x8064AFAC
    r0 = r0 + r3; // 0x8064AFB0
    /* mulli r0, r0, 0xb */ // 0x8064AFB4
    /* subf r5, r0, r5 */ // 0x8064AFB8
    r3 = r31 + r5; // 0x8064AFBC
    r0 = *(0x254 + r3); // lbz @ 0x8064AFC0
    if (==) goto 0x0x8064afd4;
    r6 = r5;
    /* b 0x8064afdc */ // 0x8064AFD0
    r7 = r7 + 1; // 0x8064AFD4
    if (counter-- != 0) goto 0x0x8064aec0;
    *(0x260 + r31) = r6; // stw @ 0x8064AFDC
    r3 = r31;
    FUN_8064B4CC(r7, r3); // bl 0x8064B4CC
    r3 = r31 + 0x98; // 0x8064AFE8
    /* li r4, 4 */ // 0x8064AFEC
    FUN_8069F4A0(r3, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8064AFF4
    /* li r4, 1 */ // 0x8064AFF8
    /* lfs f1, 0(r5) */ // 0x8064AFFC
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* li r0, 0xb4 */ // 0x8064B004
    *(0x264 + r31) = r0; // stw @ 0x8064B008
    r3 = r31;
    /* li r4, 0 */ // 0x8064B010
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x8064b028 */ // 0x8064B018
    r3 = r31;
    /* li r4, 0 */ // 0x8064B020
    FUN_80649FD0(r4, r3, r4); // bl 0x80649FD0
    r0 = *(0x14 + r1); // lwz @ 0x8064B028
    r31 = *(0xc + r1); // lwz @ 0x8064B02C
    return;
}