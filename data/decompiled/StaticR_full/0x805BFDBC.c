/* Function at 0x805BFDBC, size=1704 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 130 function(s) */

int FUN_805BFDBC(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805BFDC8
    r31 = r3;
    FUN_805BF81C(); // bl 0x805BF81C
    r3 = r31 + 0x1800; // 0x805BFDD4
    r4 = r31 + 0x20; // 0x805BFDD8
    FUN_805BFB04(r3, r4); // bl 0x805BFB04
    /* li r30, 0 */ // 0x805BFDE0
    r3 = r31 + 0xc10; // 0x805BFDE4
    /* clrlwi r4, r30, 0x18 */ // 0x805BFDE8
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    /* li r4, 5 */ // 0x805BFDF0
    FUN_805BD9A4(r3, r4); // bl 0x805BD9A4
    /* clrlwi r4, r30, 0x18 */ // 0x805BFDF8
    r3 = r31 + 0xc10; // 0x805BFDFC
    r29 = r4 + 1; // 0x805BFE00
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    /* clrlwi r4, r29, 0x18 */ // 0x805BFE08
    FUN_805BDBB0(r3); // bl 0x805BDBB0
    r3 = r31 + 0xc10; // 0x805BFE10
    /* clrlwi r4, r30, 0x18 */ // 0x805BFE14
    FUN_805BD98C(r3); // bl 0x805BD98C
    /* clrlwi r4, r29, 0x18 */ // 0x805BFE1C
    FUN_805BDBB8(r3); // bl 0x805BDBB8
    r30 = r30 + 1; // 0x805BFE24
    if (<) goto 0x0x805bfde4;
    r3 = r31 + 0xc10; // 0x805BFE30
    FUN_805BE270(r3); // bl 0x805BE270
    r0 = r3 + -7; // 0x805BFE38
    r3 = r31 + 0xc10; // 0x805BFE3C
    /* cntlzw r0, r0 */ // 0x805BFE40
    /* srwi r29, r0, 5 */ // 0x805BFE44
    FUN_805BE270(r3); // bl 0x805BE270
    r0 = r3 + -0xc; // 0x805BFE4C
    r3 = r31 + 0xc10; // 0x805BFE50
    /* cntlzw r0, r0 */ // 0x805BFE54
    /* srwi r30, r0, 5 */ // 0x805BFE58
    FUN_805C0464(r3); // bl 0x805C0464
    if (==) goto 0x0x805bff84;
    /* li r30, 1 */ // 0x805BFE68
    /* clrlwi r29, r30, 0x18 */ // 0x805BFE6C
    /* li r28, 0 */ // 0x805BFE70
    r3 = r31 + 0x20; // 0x805BFE74
    /* clrlwi r4, r28, 0x18 */ // 0x805BFE78
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C0470(r3); // bl 0x805C0470
    /* clrlwi r0, r3, 0x18 */ // 0x805BFE84
    if (!=) goto 0x0x805bff68;
    r3 = r31 + 0x20; // 0x805BFE90
    /* clrlwi r4, r28, 0x18 */ // 0x805BFE94
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805BE278(r3); // bl 0x805BE278
    if (==) goto 0x0x805bff68;
    r0 = r30 + -1; // 0x805BFEA8
    r3 = r31 + 0x20; // 0x805BFEAC
    /* clrlwi r27, r0, 0x18 */ // 0x805BFEB0
    /* clrlwi r4, r28, 0x18 */ // 0x805BFEB4
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C0478(r3); // bl 0x805C0478
    r29 = r3;
    r4 = r27;
    r3 = r31 + 0xc10; // 0x805BFEC8
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    r4 = r29;
    FUN_805BD984(r4, r3, r4); // bl 0x805BD984
    r3 = r31 + 0x20; // 0x805BFED8
    /* clrlwi r4, r28, 0x18 */ // 0x805BFEDC
    FUN_805BD278(r4, r3); // bl 0x805BD278
    FUN_805C0480(r4, r3); // bl 0x805C0480
    r29 = r3;
    r4 = r27;
    r3 = r31 + 0xc10; // 0x805BFEF0
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    r4 = r29;
    FUN_805BD99C(r4, r3, r4); // bl 0x805BD99C
    r4 = r27;
    r3 = r31 + 0xc10; // 0x805BFF04
    FUN_805BD98C(r4, r4, r3); // bl 0x805BD98C
    /* li r4, 1 */ // 0x805BFF0C
    FUN_805BD9A4(r4, r3, r4); // bl 0x805BD9A4
    r4 = r27;
    r3 = r31 + 0xc10; // 0x805BFF18
    FUN_805BD98C(r4, r4, r3); // bl 0x805BD98C
    /* clrlwi r4, r30, 0x18 */ // 0x805BFF20
    FUN_805BDBB0(r4, r3); // bl 0x805BDBB0
    r4 = r27;
    r3 = r31 + 0xc10; // 0x805BFF2C
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    /* clrlwi r4, r30, 0x18 */ // 0x805BFF34
    FUN_805BDBB8(r4, r3); // bl 0x805BDBB8
    r3 = r31 + 0x20; // 0x805BFF3C
    /* clrlwi r4, r28, 0x18 */ // 0x805BFF40
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C05C0(r3); // bl 0x805C05C0
    r29 = r3;
    r4 = r27;
    r3 = r31 + 0xc10; // 0x805BFF54
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    r4 = r29;
    FUN_805C0488(r4, r3, r4); // bl 0x805C0488
    /* b 0x805bff74 */ // 0x805BFF64
    r28 = r28 + 1; // 0x805BFF68
    if (<) goto 0x0x805bfe74;
    r30 = r30 + 1; // 0x805BFF74
    if (<=) goto 0x0x805bfe6c;
    /* b 0x805c0448 */ // 0x805BFF80
    if (==) goto 0x0x805c0270;
    r3 = r31 + 0x20; // 0x805BFF8C
    FUN_805BD200(r3); // bl 0x805BD200
    /* cntlzw r0, r3 */ // 0x805BFF94
    r27 = r3;
    /* srwi r28, r0, 5 */ // 0x805BFF9C
    /* li r29, 0 */ // 0x805BFFA0
    /* b 0x805bffe4 */ // 0x805BFFA4
    r3 = r31 + 0x20; // 0x805BFFA8
    /* clrlwi r4, r29, 0x18 */ // 0x805BFFAC
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805BE278(r3); // bl 0x805BE278
    if (!=) goto 0x0x805bffe0;
    r3 = r31 + 0x20; // 0x805BFFC0
    /* clrlwi r4, r29, 0x18 */ // 0x805BFFC4
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805BD270(r3); // bl 0x805BD270
    if (!=) goto 0x0x805bffe0;
    r28 = r27;
    /* b 0x805bfff8 */ // 0x805BFFDC
    r29 = r29 + 1; // 0x805BFFE0
    FUN_805BD288(); // bl 0x805BD288
    /* clrlwi r3, r3, 0x18 */ // 0x805BFFE8
    /* clrlwi r0, r29, 0x18 */ // 0x805BFFEC
    if (<) goto 0x0x805bffa8;
    /* li r27, 0 */ // 0x805BFFF8
    /* li r26, 1 */ // 0x805BFFFC
    /* clrlwi r30, r26, 0x18 */ // 0x805C0000
    /* li r25, 0 */ // 0x805C0004
    r3 = r31 + 0x20; // 0x805C0008
    /* clrlwi r4, r25, 0x18 */ // 0x805C000C
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C0470(r3); // bl 0x805C0470
    /* clrlwi r0, r3, 0x18 */ // 0x805C0018
    if (!=) goto 0x0x805c0110;
    r3 = r31 + 0x20; // 0x805C0024
    /* clrlwi r4, r25, 0x18 */ // 0x805C0028
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805BE278(r3); // bl 0x805BE278
    if (!=) goto 0x0x805c0110;
    r3 = r31 + 0x20; // 0x805C003C
    /* clrlwi r4, r25, 0x18 */ // 0x805C0040
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805BD270(r3); // bl 0x805BD270
    if (!=) goto 0x0x805c0110;
    r3 = r31 + 0x20; // 0x805C0054
    /* clrlwi r4, r25, 0x18 */ // 0x805C0058
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C0478(r3); // bl 0x805C0478
    r29 = r3;
    r3 = r31 + 0xc10; // 0x805C0068
    /* clrlwi r4, r27, 0x18 */ // 0x805C006C
    FUN_805BD98C(r3); // bl 0x805BD98C
    r4 = r29;
    FUN_805BD984(r3, r4); // bl 0x805BD984
    r3 = r31 + 0x20; // 0x805C007C
    /* clrlwi r4, r25, 0x18 */ // 0x805C0080
    FUN_805BD278(r4, r3); // bl 0x805BD278
    FUN_805C0480(r4, r3); // bl 0x805C0480
    r29 = r3;
    r3 = r31 + 0xc10; // 0x805C0090
    /* clrlwi r4, r27, 0x18 */ // 0x805C0094
    FUN_805BD98C(r3); // bl 0x805BD98C
    r4 = r29;
    FUN_805BD99C(r3, r4); // bl 0x805BD99C
    r3 = r31 + 0xc10; // 0x805C00A4
    /* clrlwi r4, r27, 0x18 */ // 0x805C00A8
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    /* li r4, 1 */ // 0x805C00B0
    FUN_805BD9A4(r3, r4); // bl 0x805BD9A4
    /* clrlwi r4, r27, 0x18 */ // 0x805C00B8
    r3 = r31 + 0xc10; // 0x805C00BC
    r29 = r4 + 1; // 0x805C00C0
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    /* clrlwi r4, r29, 0x18 */ // 0x805C00C8
    FUN_805BDBB0(r3); // bl 0x805BDBB0
    r3 = r31 + 0xc10; // 0x805C00D0
    /* clrlwi r4, r27, 0x18 */ // 0x805C00D4
    FUN_805BD98C(r3); // bl 0x805BD98C
    /* clrlwi r4, r29, 0x18 */ // 0x805C00DC
    FUN_805BDBB8(r3); // bl 0x805BDBB8
    r3 = r31 + 0x20; // 0x805C00E4
    /* clrlwi r4, r25, 0x18 */ // 0x805C00E8
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C05C0(r3); // bl 0x805C05C0
    r29 = r3;
    r3 = r31 + 0xc10; // 0x805C00F8
    /* clrlwi r4, r27, 0x18 */ // 0x805C00FC
    FUN_805BD98C(r3); // bl 0x805BD98C
    r4 = r29;
    FUN_805C0488(r3, r4); // bl 0x805C0488
    r27 = r27 + 1; // 0x805C010C
    r25 = r25 + 1; // 0x805C0110
    if (<) goto 0x0x805c0008;
    r26 = r26 + 1; // 0x805C011C
    if (<=) goto 0x0x805c0000;
    /* li r25, 1 */ // 0x805C0128
    /* clrlwi r30, r25, 0x18 */ // 0x805C012C
    /* li r26, 0 */ // 0x805C0130
    r3 = r31 + 0x20; // 0x805C0134
    /* clrlwi r4, r26, 0x18 */ // 0x805C0138
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C0470(r3); // bl 0x805C0470
    /* clrlwi r0, r3, 0x18 */ // 0x805C0144
    if (!=) goto 0x0x805c0254;
    r3 = r31 + 0x20; // 0x805C0150
    /* clrlwi r4, r26, 0x18 */ // 0x805C0154
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805BE278(r3); // bl 0x805BE278
    if (==) goto 0x0x805c0254;
    r3 = r31 + 0x20; // 0x805C0168
    /* clrlwi r4, r26, 0x18 */ // 0x805C016C
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805BE278(r3); // bl 0x805BE278
    if (==) goto 0x0x805c0254;
    r3 = r31 + 0x20; // 0x805C0180
    /* clrlwi r4, r26, 0x18 */ // 0x805C0184
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805BD270(r3); // bl 0x805BD270
    if (!=) goto 0x0x805c0254;
    r3 = r31 + 0x20; // 0x805C0198
    /* clrlwi r4, r26, 0x18 */ // 0x805C019C
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C0478(r3); // bl 0x805C0478
    r29 = r3;
    r3 = r31 + 0xc10; // 0x805C01AC
    /* clrlwi r4, r27, 0x18 */ // 0x805C01B0
    FUN_805BD98C(r3); // bl 0x805BD98C
    r4 = r29;
    FUN_805BD984(r3, r4); // bl 0x805BD984
    r3 = r31 + 0x20; // 0x805C01C0
    /* clrlwi r4, r26, 0x18 */ // 0x805C01C4
    FUN_805BD278(r4, r3); // bl 0x805BD278
    FUN_805C0480(r4, r3); // bl 0x805C0480
    r29 = r3;
    r3 = r31 + 0xc10; // 0x805C01D4
    /* clrlwi r4, r27, 0x18 */ // 0x805C01D8
    FUN_805BD98C(r3); // bl 0x805BD98C
    r4 = r29;
    FUN_805BD99C(r3, r4); // bl 0x805BD99C
    r3 = r31 + 0xc10; // 0x805C01E8
    /* clrlwi r4, r27, 0x18 */ // 0x805C01EC
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    /* li r4, 1 */ // 0x805C01F4
    FUN_805BD9A4(r3, r4); // bl 0x805BD9A4
    /* clrlwi r4, r27, 0x18 */ // 0x805C01FC
    r3 = r31 + 0xc10; // 0x805C0200
    r29 = r4 + 1; // 0x805C0204
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    /* clrlwi r4, r29, 0x18 */ // 0x805C020C
    FUN_805BDBB0(r3); // bl 0x805BDBB0
    r3 = r31 + 0xc10; // 0x805C0214
    /* clrlwi r4, r27, 0x18 */ // 0x805C0218
    FUN_805BD98C(r3); // bl 0x805BD98C
    /* clrlwi r4, r29, 0x18 */ // 0x805C0220
    FUN_805BDBB8(r3); // bl 0x805BDBB8
    r3 = r31 + 0x20; // 0x805C0228
    /* clrlwi r4, r26, 0x18 */ // 0x805C022C
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C05C0(r3); // bl 0x805C05C0
    r29 = r3;
    r3 = r31 + 0xc10; // 0x805C023C
    /* clrlwi r4, r27, 0x18 */ // 0x805C0240
    FUN_805BD98C(r3); // bl 0x805BD98C
    r4 = r29;
    FUN_805C0488(r3, r4); // bl 0x805C0488
    r27 = r27 + 1; // 0x805C0250
    r26 = r26 + 1; // 0x805C0254
    if (<) goto 0x0x805c0134;
    r25 = r25 + 1; // 0x805C0260
    if (<=) goto 0x0x805c012c;
    /* b 0x805c0448 */ // 0x805C026C
    if (==) goto 0x0x805c0394;
    /* li r25, 0 */ // 0x805C0278
    /* li r26, 1 */ // 0x805C027C
    /* clrlwi r29, r26, 0x18 */ // 0x805C0280
    /* li r27, 0 */ // 0x805C0284
    r3 = r31 + 0x20; // 0x805C0288
    /* clrlwi r4, r27, 0x18 */ // 0x805C028C
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C0470(r3); // bl 0x805C0470
    /* clrlwi r0, r3, 0x18 */ // 0x805C0298
    if (!=) goto 0x0x805c0378;
    r3 = r31 + 0x20; // 0x805C02A4
    /* clrlwi r4, r27, 0x18 */ // 0x805C02A8
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805BE278(r3); // bl 0x805BE278
    if (!=) goto 0x0x805c0378;
    r3 = r31 + 0x20; // 0x805C02BC
    /* clrlwi r4, r27, 0x18 */ // 0x805C02C0
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C0478(r3); // bl 0x805C0478
    r30 = r3;
    r3 = r31 + 0xc10; // 0x805C02D0
    /* clrlwi r4, r25, 0x18 */ // 0x805C02D4
    FUN_805BD98C(r3); // bl 0x805BD98C
    r4 = r30;
    FUN_805BD984(r3, r4); // bl 0x805BD984
    r3 = r31 + 0x20; // 0x805C02E4
    /* clrlwi r4, r27, 0x18 */ // 0x805C02E8
    FUN_805BD278(r4, r3); // bl 0x805BD278
    FUN_805C0480(r4, r3); // bl 0x805C0480
    r30 = r3;
    r3 = r31 + 0xc10; // 0x805C02F8
    /* clrlwi r4, r25, 0x18 */ // 0x805C02FC
    FUN_805BD98C(r3); // bl 0x805BD98C
    r4 = r30;
    FUN_805BD99C(r3, r4); // bl 0x805BD99C
    r3 = r31 + 0xc10; // 0x805C030C
    /* clrlwi r4, r25, 0x18 */ // 0x805C0310
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    /* li r4, 1 */ // 0x805C0318
    FUN_805BD9A4(r3, r4); // bl 0x805BD9A4
    /* clrlwi r4, r25, 0x18 */ // 0x805C0320
    r3 = r31 + 0xc10; // 0x805C0324
    r30 = r4 + 1; // 0x805C0328
    FUN_805BD98C(r4, r3); // bl 0x805BD98C
    /* clrlwi r4, r30, 0x18 */ // 0x805C0330
    FUN_805BDBB0(r3); // bl 0x805BDBB0
    r3 = r31 + 0xc10; // 0x805C0338
    /* clrlwi r4, r25, 0x18 */ // 0x805C033C
    FUN_805BD98C(r3); // bl 0x805BD98C
    /* clrlwi r4, r30, 0x18 */ // 0x805C0344
    FUN_805BDBB8(r3); // bl 0x805BDBB8
    r3 = r31 + 0x20; // 0x805C034C
    /* clrlwi r4, r27, 0x18 */ // 0x805C0350
    FUN_805BD278(r3); // bl 0x805BD278
    FUN_805C05C0(r3); // bl 0x805C05C0
    r30 = r3;
    r3 = r31 + 0xc10; // 0x805C0360
    /* clrlwi r4, r25, 0x18 */ // 0x805C0364
    FUN_805BD98C(r3); // bl 0x805BD98C
    r4 = r30;
    FUN_805C0488(r3, r4); // bl 0x805C0488
    r25 = r25 + 1; // 0x805C0374
    r27 = r27 + 1; // 0x805C0378
    if (<) goto 0x0x805c0288;
    r26 = r26 + 1; // 0x805C0384
    if (<=) goto 0x0x805c0280;
    /* b 0x805c0448 */ // 0x805C0390
    r3 = r31 + 0x20; // 0x805C0394
    /* li r4, 0 */ // 0x805C0398
    FUN_805BD278(r3, r4); // bl 0x805BD278
    FUN_805C0478(r3, r4); // bl 0x805C0478
    r30 = r3;
    r3 = r31 + 0xc10; // 0x805C03A8
    /* li r4, 0 */ // 0x805C03AC
    FUN_805BD98C(r3, r4); // bl 0x805BD98C
    r4 = r30;
    FUN_805BD984(r3, r4, r4); // bl 0x805BD984
    r3 = r31 + 0x20; // 0x805C03BC
    /* li r4, 0 */ // 0x805C03C0
    FUN_805BD278(r4, r3, r4); // bl 0x805BD278
    FUN_805C0480(r4, r3, r4); // bl 0x805C0480
    r30 = r3;
    r3 = r31 + 0xc10; // 0x805C03D0
    /* li r4, 0 */ // 0x805C03D4
    FUN_805BD98C(r3, r4); // bl 0x805BD98C
    r4 = r30;
    FUN_805BD99C(r3, r4, r4); // bl 0x805BD99C
    r3 = r31 + 0xc10; // 0x805C03E4
    /* li r4, 0 */ // 0x805C03E8
    FUN_805BD98C(r4, r3, r4); // bl 0x805BD98C
    /* li r4, 1 */ // 0x805C03F0
    FUN_805BD9A4(r3, r4, r4); // bl 0x805BD9A4
    r3 = r31 + 0xc10; // 0x805C03F8
    /* li r4, 0 */ // 0x805C03FC
    FUN_805BD98C(r4, r3, r4); // bl 0x805BD98C
    /* li r4, 1 */ // 0x805C0404
    FUN_805BDBB0(r3, r4, r4); // bl 0x805BDBB0
    r3 = r31 + 0xc10; // 0x805C040C
    /* li r4, 0 */ // 0x805C0410
    FUN_805BD98C(r4, r3, r4); // bl 0x805BD98C
    /* li r4, 1 */ // 0x805C0418
    FUN_805BDBB8(r3, r4, r4); // bl 0x805BDBB8
    r3 = r31 + 0x20; // 0x805C0420
    /* li r4, 0 */ // 0x805C0424
    FUN_805BD278(r4, r3, r4); // bl 0x805BD278
    FUN_805C05C0(r4, r3, r4); // bl 0x805C05C0
    r30 = r3;
    r3 = r31 + 0xc10; // 0x805C0434
    /* li r4, 0 */ // 0x805C0438
    FUN_805BD98C(r3, r4); // bl 0x805BD98C
    r4 = r30;
    FUN_805C0488(r3, r4, r4); // bl 0x805C0488
    r3 = r31;
    FUN_805BF81C(r4, r4, r3); // bl 0x805BF81C
    r0 = *(0x34 + r1); // lwz @ 0x805C0454
    return;
}