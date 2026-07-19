/* Function at 0x806CAEB4, size=772 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_806CAEB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x806CAEBC
    /* li r0, 1 */ // 0x806CAEC4
    *(0x38 + r1) = r30; // stw @ 0x806CAECC
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x806CAED4
    *(0x30 + r1) = r28; // stw @ 0x806CAED8
    *(0x80 + r3) = r0; // stb @ 0x806CAEDC
    r3 = *(0 + r4); // lwz @ 0x806CAEE0
    r3 = *(0 + r3); // lwz @ 0x806CAEE4
    r31 = *(0x204 + r3); // lwz @ 0x806CAEE8
    if (!=) goto 0x0x806caefc;
    /* li r31, 0 */ // 0x806CAEF4
    /* b 0x806caf50 */ // 0x806CAEF8
    /* lis r29, 0 */ // 0x806CAEFC
    r29 = r29 + 0; // 0x806CAF00
    if (==) goto 0x0x806caf4c;
    r12 = *(0 + r31); // lwz @ 0x806CAF08
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806CAF10
    /* mtctr r12 */ // 0x806CAF14
    /* bctrl  */ // 0x806CAF18
    /* b 0x806caf34 */ // 0x806CAF1C
    if (!=) goto 0x0x806caf30;
    /* li r0, 1 */ // 0x806CAF28
    /* b 0x806caf40 */ // 0x806CAF2C
    r3 = *(0 + r3); // lwz @ 0x806CAF30
    if (!=) goto 0x0x806caf20;
    /* li r0, 0 */ // 0x806CAF3C
    if (==) goto 0x0x806caf4c;
    /* b 0x806caf50 */ // 0x806CAF48
    /* li r31, 0 */ // 0x806CAF4C
    if (==) goto 0x0x806cb240;
    r4 = *(0x174 + r30); // lbz @ 0x806CAF58
    r3 = r31;
    /* li r5, 0 */ // 0x806CAF60
    /* li r6, 0 */ // 0x806CAF64
    FUN_806CCB68(r3, r5, r6); // bl 0x806CCB68
    r4 = *(0x174 + r30); // lbz @ 0x806CAF6C
    /* mulli r0, r4, 0xc */ // 0x806CAF70
    r3 = r31 + r0; // 0x806CAF74
    r0 = *(0x5c + r3); // lbz @ 0x806CAF78
    if (==) goto 0x0x806cb0fc;
    /* lis r3, 0 */ // 0x806CAF84
    r3 = *(0 + r3); // lwz @ 0x806CAF88
    r3 = *(0 + r3); // lwz @ 0x806CAF8C
    r0 = *(0 + r3); // lwz @ 0x806CAF90
    if (<) goto 0x0x806cafa4;
    if (<=) goto 0x0x806cafb8;
    if (==) goto 0x0x806cafb8;
    if (==) goto 0x0x806cafc4;
    /* b 0x806cafe0 */ // 0x806CAFB4
    /* li r0, 1 */ // 0x806CAFB8
    *(0x80 + r30) = r0; // stb @ 0x806CAFBC
    /* b 0x806caff8 */ // 0x806CAFC0
    r3 = r31;
    /* li r5, 0 */ // 0x806CAFC8
    /* li r6, 1 */ // 0x806CAFCC
    FUN_806CCB68(r3, r5, r6); // bl 0x806CCB68
    /* li r0, 0 */ // 0x806CAFD4
    *(0x80 + r30) = r0; // stb @ 0x806CAFD8
    /* b 0x806caff8 */ // 0x806CAFDC
    r3 = r31;
    /* li r5, 1 */ // 0x806CAFE4
    /* li r6, 1 */ // 0x806CAFE8
    FUN_806CCB68(r3, r5, r6); // bl 0x806CCB68
    /* li r0, 0 */ // 0x806CAFF0
    *(0x80 + r30) = r0; // stb @ 0x806CAFF4
    /* lis r3, 0 */ // 0x806CAFF8
    r3 = *(0 + r3); // lwz @ 0x806CAFFC
    r3 = *(0 + r3); // lwz @ 0x806CB000
    r28 = *(0x204 + r3); // lwz @ 0x806CB004
    if (!=) goto 0x0x806cb018;
    /* li r28, 0 */ // 0x806CB010
    /* b 0x806cb06c */ // 0x806CB014
    /* lis r29, 0 */ // 0x806CB018
    r29 = r29 + 0; // 0x806CB01C
    if (==) goto 0x0x806cb068;
    r12 = *(0 + r28); // lwz @ 0x806CB024
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x806CB02C
    /* mtctr r12 */ // 0x806CB030
    /* bctrl  */ // 0x806CB034
    /* b 0x806cb050 */ // 0x806CB038
    if (!=) goto 0x0x806cb04c;
    /* li r0, 1 */ // 0x806CB044
    /* b 0x806cb05c */ // 0x806CB048
    r3 = *(0 + r3); // lwz @ 0x806CB04C
    if (!=) goto 0x0x806cb03c;
    /* li r0, 0 */ // 0x806CB058
    if (==) goto 0x0x806cb068;
    /* b 0x806cb06c */ // 0x806CB064
    /* li r28, 0 */ // 0x806CB068
    r4 = *(0x174 + r30); // lbz @ 0x806CB06C
    r3 = r28;
    /* mulli r0, r4, 0xc */ // 0x806CB074
    r5 = r28 + r0; // 0x806CB078
    r28 = *(0x58 + r5); // lwz @ 0x806CB07C
    r5 = r28;
    FUN_806CCB14(r3, r5); // bl 0x806CCB14
    /* lis r3, 0 */ // 0x806CB088
    r3 = *(0 + r3); // lwz @ 0x806CB08C
    if (==) goto 0x0x806cb0fc;
    r5 = *(0x14 + r3); // lwz @ 0x806CB098
    if (==) goto 0x0x806cb0fc;
    r4 = *(0x174 + r30); // lbz @ 0x806CB0A4
    /* mulli r0, r4, 0xc */ // 0x806CB0A8
    r3 = r5 + r0; // 0x806CB0AC
    r3 = *(0x18 + r3); // lwz @ 0x806CB0B0
    if (==) goto 0x0x806cb0c4;
    r0 = *(8 + r3); // lwz @ 0x806CB0BC
    /* b 0x806cb0c8 */ // 0x806CB0C0
    /* li r0, 0 */ // 0x806CB0C4
    if (==) goto 0x0x806cb0fc;
    /* mulli r0, r4, 0xc */ // 0x806CB0D0
    r3 = r5 + r0; // 0x806CB0D4
    r5 = *(0x18 + r3); // lwz @ 0x806CB0D8
    if (==) goto 0x0x806cb0fc;
    if (==) goto 0x0x806cb0f0;
    *(0x14 + r5) = r28; // stw @ 0x806CB0EC
    r3 = *(0x18 + r3); // lwz @ 0x806CB0F0
    /* li r5, 2 */ // 0x806CB0F4
    FUN_808E08F0(r5); // bl 0x808E08F0
    r4 = *(0x174 + r30); // lbz @ 0x806CB0FC
    r3 = r31;
    FUN_806CCC08(r5, r3); // bl 0x806CCC08
    r28 = r3;
    if (==) goto 0x0x806cb240;
    /* lis r4, 0 */ // 0x806CB114
    r3 = r30 + 0xa8; // 0x806CB118
    r4 = r4 + 0; // 0x806CB11C
    r4 = r4 + 0x93; // 0x806CB120
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    r30 = r3;
    if (!=) goto 0x0x806cb13c;
    /* li r30, 0 */ // 0x806CB134
    /* b 0x806cb18c */ // 0x806CB138
    /* lis r29, 0 */ // 0x806CB13C
    r29 = r29 + 0; // 0x806CB140
    if (==) goto 0x0x806cb188;
    r12 = *(0 + r3); // lwz @ 0x806CB148
    r12 = *(0xc + r12); // lwz @ 0x806CB14C
    /* mtctr r12 */ // 0x806CB150
    /* bctrl  */ // 0x806CB154
    /* b 0x806cb170 */ // 0x806CB158
    if (!=) goto 0x0x806cb16c;
    /* li r0, 1 */ // 0x806CB164
    /* b 0x806cb17c */ // 0x806CB168
    r3 = *(0 + r3); // lwz @ 0x806CB16C
    if (!=) goto 0x0x806cb15c;
    /* li r0, 0 */ // 0x806CB178
    if (==) goto 0x0x806cb188;
    /* b 0x806cb18c */ // 0x806CB184
    /* li r30, 0 */ // 0x806CB188
    r4 = r28;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r0 = *(0x20 + r1); // lwz @ 0x806CB198
    /* li r4, 0 */ // 0x806CB19C
    *(0xc + r1) = r4; // stw @ 0x806CB1A0
    r3 = r30;
    r0 = r0 rlwinm 0; // rlwinm
    *(0x20 + r1) = r0; // stw @ 0x806CB1AC
    *(0x1e + r1) = r4; // sth @ 0x806CB1B0
    r12 = *(0 + r30); // lwz @ 0x806CB1B4
}