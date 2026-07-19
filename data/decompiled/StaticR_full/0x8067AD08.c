/* Function at 0x8067AD08, size=940 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r26 */
/* Calls: 39 function(s) */

int FUN_8067AD08(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -112(r1) */
    /* saved r26 */
    /* stmw r26, 0x58(r1) */ // 0x8067AD14
    r31 = r3;
    r4 = r31;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x8067AD28
    r6 = r6 + 0; // 0x8067AD30
    /* li r7, 0 */ // 0x8067AD34
    r4 = r6 + 0x52; // 0x8067AD38
    r5 = r6 + 0x5a; // 0x8067AD3C
    r6 = r6 + 0x66; // 0x8067AD40
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8067AD4C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    /* li r0, -1 */ // 0x8067AD54
    /* li r3, 0 */ // 0x8067AD58
    *(0xc40 + r31) = r3; // stw @ 0x8067AD5C
    r3 = r31;
    *(0xc38 + r31) = r0; // stw @ 0x8067AD64
    *(0xc3c + r31) = r0; // stw @ 0x8067AD68
    r12 = *(0 + r31); // lwz @ 0x8067AD6C
    r12 = *(0x48 + r12); // lwz @ 0x8067AD70
    /* mtctr r12 */ // 0x8067AD74
    /* bctrl  */ // 0x8067AD78
    FUN_805ABAFC(); // bl 0x805ABAFC
    r4 = r3;
    r3 = r31 + 0x174; // 0x8067AD84
    r6 = *(0xc94 + r4); // lwz @ 0x8067AD88
    /* li r4, 0xed */ // 0x8067AD8C
    /* li r5, 0x40 */ // 0x8067AD90
    FUN_8066D808(r4, r3, r4, r5); // bl 0x8066D808
    r3 = r31;
    /* li r4, 0xfa */ // 0x8067AD9C
    FUN_8069FEE8(r4, r5, r3, r4); // bl 0x8069FEE8
    /* addis r3, r31, 1 */ // 0x8067ADA4
    /* li r29, 0 */ // 0x8067ADA8
    r30 = r3 + 0x52ec; // 0x8067ADAC
    /* li r28, 0 */ // 0x8067ADB0
    /* li r27, 0xc7 */ // 0x8067ADB4
    r30 = r30 + 0x6c00; // 0x8067ADB8
    r3 = r31;
    r4 = r29;
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    r5 = r27;
    r6 = r28;
    /* li r4, 8 */ // 0x8067ADD8
    FUN_806DD5CC(r3, r5, r6, r4); // bl 0x806DD5CC
    /* addic. r27, r27, -1 */ // 0x8067ADE0
    r28 = r28 + 1; // 0x8067ADE4
    r30 = r30 + -0x1b4; // 0x8067ADE8
    r29 = r29 + 1; // 0x8067ADEC
    if (>=) goto 0x0x8067adbc;
    r3 = r31;
    r4 = r29;
    r5 = r31 + 0x20c; // 0x8067ADFC
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r4 = r31 + 0x20c; // 0x8067AE08
    FUN_8064E324(r4, r5, r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x8067AE10
    r6 = r6 + 0; // 0x8067AE18
    /* li r7, 0 */ // 0x8067AE1C
    r4 = r6 + 0x72; // 0x8067AE20
    r5 = r6 + 0x7a; // 0x8067AE24
    r6 = r6 + 0x8a; // 0x8067AE28
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8067AE34
    r29 = r29 + 1; // 0x8067AE38
    FUN_8064E32C(r6, r3, r4); // bl 0x8064E32C
    r30 = r31 + 0x380; // 0x8067AE40
    /* li r27, 0 */ // 0x8067AE44
    r3 = r31;
    r4 = r29;
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    FUN_806DD790(r3, r4, r5, r3); // bl 0x806DD790
    r27 = r27 + 1; // 0x8067AE60
    r30 = r30 + 0x174; // 0x8067AE64
    r29 = r29 + 1; // 0x8067AE6C
    if (<) goto 0x0x8067ae48;
    r3 = r31;
    r4 = r29;
    r5 = r31 + 0x698c; // 0x8067AE7C
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r6 = r28;
    r3 = r31 + 0x698c; // 0x8067AE88
    /* li r4, 7 */ // 0x8067AE8C
    /* li r5, 0 */ // 0x8067AE90
    /* li r7, 1 */ // 0x8067AE94
    FUN_806DBB24(r6, r3, r4, r5, r7); // bl 0x806DBB24
    r3 = r31;
    r4 = r29 + 1; // 0x8067AEA0
    r5 = r31 + 0x6718; // 0x8067AEA4
    FUN_8069FEF8(r7, r3, r4, r5); // bl 0x8069FEF8
    r3 = r31 + 0x6718; // 0x8067AEAC
    /* li r4, 6 */ // 0x8067AEB0
    /* li r5, 0 */ // 0x8067AEB4
    /* li r6, -1 */ // 0x8067AEB8
    /* li r7, 1 */ // 0x8067AEBC
    FUN_806DBB24(r3, r4, r5, r6, r7); // bl 0x806DBB24
    r3 = r31;
    r4 = r29 + 2; // 0x8067AEC8
    r5 = r31 + 0x64a4; // 0x8067AECC
    FUN_8069FEF8(r7, r3, r4, r5); // bl 0x8069FEF8
    r3 = r31 + 0x64a4; // 0x8067AED4
    /* li r4, 5 */ // 0x8067AED8
    /* li r5, 0 */ // 0x8067AEDC
    /* li r6, -1 */ // 0x8067AEE0
    /* li r7, 1 */ // 0x8067AEE4
    FUN_806DBB24(r3, r4, r5, r6, r7); // bl 0x806DBB24
    r3 = r31;
    r4 = r29 + 3; // 0x8067AEF0
    r5 = r31 + 0x6230; // 0x8067AEF4
    FUN_8069FEF8(r7, r3, r4, r5); // bl 0x8069FEF8
    r3 = r31 + 0x6230; // 0x8067AEFC
    r6 = r28 + 1; // 0x8067AF00
    /* li r4, 4 */ // 0x8067AF04
    /* li r5, 0 */ // 0x8067AF08
    /* li r7, 1 */ // 0x8067AF0C
    FUN_806DBB24(r3, r6, r4, r5, r7); // bl 0x806DBB24
    r3 = r31;
    r4 = r29 + 4; // 0x8067AF18
    r5 = r31 + 0x5fbc; // 0x8067AF1C
    FUN_8069FEF8(r7, r3, r4, r5); // bl 0x8069FEF8
    r3 = r31 + 0x5fbc; // 0x8067AF24
    r6 = r28 + 2; // 0x8067AF28
    /* li r4, 3 */ // 0x8067AF2C
    /* li r5, 0 */ // 0x8067AF30
    /* li r7, 1 */ // 0x8067AF34
    FUN_806DBB24(r3, r6, r4, r5, r7); // bl 0x806DBB24
    r30 = r31 + 0x5d48; // 0x8067AF3C
    /* li r27, 0x1d */ // 0x8067AF40
    r29 = r29 + 5; // 0x8067AF44
    r28 = r28 + 3; // 0x8067AF48
    r3 = r31;
    r4 = r29;
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    r5 = r27;
    r6 = r28;
    /* li r4, 2 */ // 0x8067AF68
    /* li r7, 1 */ // 0x8067AF6C
    FUN_806DBB24(r3, r5, r6, r4, r7); // bl 0x806DBB24
    /* addic. r27, r27, -1 */ // 0x8067AF74
    r28 = r28 + 1; // 0x8067AF78
    r30 = r30 + -0x274; // 0x8067AF7C
    r29 = r29 + 1; // 0x8067AF80
    if (>=) goto 0x0x8067af4c;
    /* lis r3, 0 */ // 0x8067AF88
    r30 = r31 + 0x13b0; // 0x8067AF8C
    r3 = *(0 + r3); // lwz @ 0x8067AF90
    /* li r26, 3 */ // 0x8067AF94
    r27 = *(0x36 + r3); // lha @ 0x8067AF98
    if (==) goto 0x0x8067afd4;
    r3 = r31;
    r4 = r29;
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    r5 = r26;
    r6 = r28;
    /* li r4, 1 */ // 0x8067AFC0
    /* li r7, 1 */ // 0x8067AFC4
    FUN_806DBB24(r3, r5, r6, r4, r7); // bl 0x806DBB24
    r29 = r29 + 1; // 0x8067AFCC
    r28 = r28 + 1; // 0x8067AFD0
    /* addic. r26, r26, -1 */ // 0x8067AFD4
    r30 = r30 + -0x274; // 0x8067AFD8
    if (>=) goto 0x0x8067af9c;
    /* mulli r0, r27, 0x274 */ // 0x8067AFE0
    r3 = r31;
    r4 = r29;
    r5 = r31 + r0; // 0x8067AFEC
    r30 = r5 + 0xc54; // 0x8067AFF0
    r5 = r30;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r3 = r30;
    r6 = r28;
    /* li r4, 0 */ // 0x8067B004
    /* li r5, 0 */ // 0x8067B008
    /* li r7, 1 */ // 0x8067B00C
    FUN_806DBB24(r3, r6, r4, r5, r7); // bl 0x806DBB24
    /* addis r5, r31, 2 */ // 0x8067B014
    r3 = r31;
    r4 = r29 + 1; // 0x8067B01C
    r5 = r5 + -0x3f60; // 0x8067B020
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    /* addis r3, r31, 2 */ // 0x8067B028
    /* li r4, 0 */ // 0x8067B02C
    r3 = r3 + -0x3f60; // 0x8067B030
    FUN_806DDAB0(r5, r4, r3); // bl 0x806DDAB0
    /* addis r5, r31, 2 */ // 0x8067B038
    r3 = r31;
    r4 = r29 + 2; // 0x8067B040
    r5 = r5 + -0x3de8; // 0x8067B044
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    /* addis r3, r31, 2 */ // 0x8067B04C
    /* li r4, 2 */ // 0x8067B050
    r3 = r3 + -0x3de8; // 0x8067B054
    FUN_806DDAB0(r5, r4, r3); // bl 0x806DDAB0
    /* addis r5, r31, 2 */ // 0x8067B05C
    r3 = r31;
    r4 = r29 + 3; // 0x8067B064
    r5 = r5 + -0x3c70; // 0x8067B068
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    /* addis r3, r31, 2 */ // 0x8067B070
    /* li r4, 4 */ // 0x8067B074
    r3 = r3 + -0x3c70; // 0x8067B078
    FUN_806DDAB0(r5, r4, r3); // bl 0x806DDAB0
    /* addis r5, r31, 2 */ // 0x8067B080
    r3 = r31;
    r4 = r29 + 4; // 0x8067B088
    r5 = r5 + -0x3af8; // 0x8067B08C
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    /* addis r3, r31, 2 */ // 0x8067B094
    /* li r4, 5 */ // 0x8067B098
    r3 = r3 + -0x3af8; // 0x8067B09C
    FUN_806DDAB0(r5, r4, r3); // bl 0x806DDAB0
    /* li r0, 0xef */ // 0x8067B0A4
    *(0xc48 + r31) = r0; // stw @ 0x8067B0A8
    /* li r3, 0x3bc */ // 0x8067B0AC
    FUN_805E3430(r3, r3); // bl 0x805E3430
}