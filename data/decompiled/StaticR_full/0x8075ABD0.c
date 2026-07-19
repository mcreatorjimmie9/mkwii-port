/* Function at 0x8075ABD0, size=452 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_8075ABD0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8075ABE8
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x8075ABF0
    if (!=) goto 0x0x8075ac00;
    /* li r3, 0 */ // 0x8075ABF8
    /* b 0x8075ad74 */ // 0x8075ABFC
    r6 = *(0x20 + r4); // lwz @ 0x8075AC00
    r4 = *(0x20 + r5); // lwz @ 0x8075AC04
    r5 = *(4 + r6); // lha @ 0x8075AC08
    r0 = *(4 + r4); // lha @ 0x8075AC0C
    if (!=) goto 0x0x8075ac20;
    /* li r3, 0 */ // 0x8075AC18
    /* b 0x8075ad74 */ // 0x8075AC1C
    if (!=) goto 0x0x8075ace8;
    r0 = *(0x46 + r6); // lha @ 0x8075AC28
    r4 = *(0x104 + r3); // lwz @ 0x8075AC2C
    /* slwi r3, r0, 1 */ // 0x8075AC30
    r0 = *(0x48 + r6); // lha @ 0x8075AC34
    /* lhzx r31, r4, r3 */ // 0x8075AC38
    /* slwi r3, r0, 1 */ // 0x8075AC3C
    r0 = r31 + -2; // 0x8075AC40
    /* lhzx r30, r4, r3 */ // 0x8075AC44
    /* clrlwi r31, r0, 0x10 */ // 0x8075AC48
    if (!=) goto 0x0x8075ac74;
    /* lis r3, 0 */ // 0x8075AC54
    /* li r4, 1 */ // 0x8075AC58
    r3 = *(0 + r3); // lwz @ 0x8075AC5C
    FUN_80770F48(r3, r4); // bl 0x80770F48
    r3 = *(8 + r3); // lhz @ 0x8075AC64
    r0 = r3 + -1; // 0x8075AC68
    /* clrlwi r31, r0, 0x10 */ // 0x8075AC6C
    /* b 0x8075ac98 */ // 0x8075AC70
    if (!=) goto 0x0x8075ac98;
    /* lis r3, 0 */ // 0x8075AC7C
    /* li r4, 1 */ // 0x8075AC80
    r3 = *(0 + r3); // lwz @ 0x8075AC84
    FUN_80770F48(r3, r4); // bl 0x80770F48
    r3 = *(8 + r3); // lhz @ 0x8075AC8C
    r0 = r3 + -2; // 0x8075AC90
    /* clrlwi r31, r0, 0x10 */ // 0x8075AC94
    /* lis r28, 0 */ // 0x8075AC98
    r0 = r30 + 2; // 0x8075AC9C
    r3 = *(0 + r28); // lwz @ 0x8075ACA0
    /* clrlwi r30, r0, 0x10 */ // 0x8075ACA4
    /* li r4, 1 */ // 0x8075ACA8
    FUN_80770F48(r4); // bl 0x80770F48
    r0 = *(8 + r3); // lhz @ 0x8075ACB0
    if (!=) goto 0x0x8075acc4;
    /* li r30, 0 */ // 0x8075ACBC
    /* b 0x8075ad58 */ // 0x8075ACC0
    r3 = *(0 + r28); // lwz @ 0x8075ACC4
    /* li r4, 1 */ // 0x8075ACC8
    FUN_80770F48(r4); // bl 0x80770F48
    r3 = *(8 + r3); // lhz @ 0x8075ACD0
    r0 = r3 + 1; // 0x8075ACD4
    if (!=) goto 0x0x8075ad58;
    /* li r30, 1 */ // 0x8075ACE0
    /* b 0x8075ad58 */ // 0x8075ACE4
    r0 = *(0x46 + r6); // lha @ 0x8075ACE8
    r4 = *(0x108 + r3); // lwz @ 0x8075ACEC
    /* slwi r3, r0, 1 */ // 0x8075ACF0
    r0 = *(0x48 + r6); // lha @ 0x8075ACF4
    /* lhzx r31, r4, r3 */ // 0x8075ACF8
    /* slwi r3, r0, 1 */ // 0x8075ACFC
    r0 = r31 + -2; // 0x8075AD00
    /* lhzx r30, r4, r3 */ // 0x8075AD04
    /* clrlwi r31, r0, 0x10 */ // 0x8075AD08
    if (>) goto 0x0x8075ad30;
    /* lis r3, 0 */ // 0x8075AD14
    /* li r4, 0 */ // 0x8075AD18
    r3 = *(0 + r3); // lwz @ 0x8075AD1C
    FUN_80770F48(r3, r4); // bl 0x80770F48
    r3 = *(8 + r3); // lhz @ 0x8075AD24
    r0 = r3 + -1; // 0x8075AD28
    /* clrlwi r31, r0, 0x10 */ // 0x8075AD2C
    /* lis r3, 0 */ // 0x8075AD30
    r0 = r30 + 2; // 0x8075AD34
    r3 = *(0 + r3); // lwz @ 0x8075AD38
    /* clrlwi r30, r0, 0x10 */ // 0x8075AD3C
    /* li r4, 0 */ // 0x8075AD40
    FUN_80770F48(r3, r4); // bl 0x80770F48
    r0 = *(8 + r3); // lhz @ 0x8075AD48
    if (<) goto 0x0x8075ad58;
    /* li r30, 0 */ // 0x8075AD54
    /* lis r4, 0 */ // 0x8075AD58
    r3 = *(0x20 + r29); // lwz @ 0x8075AD5C
    /* lfs f1, 0(r4) */ // 0x8075AD60
    r4 = r31;
    r5 = r30;
    /* fmr f2, f1 */ // 0x8075AD6C
    FUN_8076D26C(r4, r5); // bl 0x8076D26C
    r0 = *(0x24 + r1); // lwz @ 0x8075AD74
    r31 = *(0x1c + r1); // lwz @ 0x8075AD78
    r30 = *(0x18 + r1); // lwz @ 0x8075AD7C
    r29 = *(0x14 + r1); // lwz @ 0x8075AD80
    r28 = *(0x10 + r1); // lwz @ 0x8075AD84
    return;
}