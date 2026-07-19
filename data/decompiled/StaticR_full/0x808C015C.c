/* Function at 0x808C015C, size=672 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 10 function(s) */

int FUN_808C015C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x808C0168
    /* lis r23, 0 */ // 0x808C016C
    /* lis r26, 0 */ // 0x808C0170
    /* lis r24, 0 */ // 0x808C0174
    r29 = r3;
    r30 = r4;
    r26 = r26 + 0; // 0x808C0180
    r23 = r23 + 0; // 0x808C0184
    r24 = r24 + 0; // 0x808C0188
    /* li r31, 0 */ // 0x808C018C
    /* li r27, 0 */ // 0x808C0190
    /* lis r25, 0 */ // 0x808C0194
    /* li r28, 1 */ // 0x808C0198
    r3 = r29 + 0x24; // 0x808C019C
    /* clrlwi r4, r31, 0x18 */ // 0x808C01A0
    FUN_8064E1CC(r3); // bl 0x8064E1CC
    r22 = r3;
    if (!=) goto 0x0x808c01bc;
    /* li r22, 0 */ // 0x808C01B4
    /* b 0x808c0204 */ // 0x808C01B8
    if (==) goto 0x0x808c0200;
    r12 = *(0 + r3); // lwz @ 0x808C01C0
    r12 = *(0x28 + r12); // lwz @ 0x808C01C4
    /* mtctr r12 */ // 0x808C01C8
    /* bctrl  */ // 0x808C01CC
    /* b 0x808c01e8 */ // 0x808C01D0
    if (!=) goto 0x0x808c01e4;
    /* li r0, 1 */ // 0x808C01DC
    /* b 0x808c01f4 */ // 0x808C01E0
    r3 = *(0 + r3); // lwz @ 0x808C01E4
    if (!=) goto 0x0x808c01d4;
    /* li r0, 0 */ // 0x808C01F0
    if (==) goto 0x0x808c0200;
    /* b 0x808c0204 */ // 0x808C01FC
    /* li r22, 0 */ // 0x808C0200
    r5 = *(0xd9c + r29); // lwz @ 0x808C0204
    if (==) goto 0x0x808c0224;
    if (==) goto 0x0x808c0230;
    if (==) goto 0x0x808c0238;
    /* b 0x808c0244 */ // 0x808C0220
    r3 = *(0 + r25); // lwz @ 0x808C0224
    r0 = *(0x2d4 + r3); // lbz @ 0x808C0228
    /* b 0x808c0248 */ // 0x808C022C
    /* li r0, 6 */ // 0x808C0230
    /* b 0x808c0248 */ // 0x808C0234
    r3 = *(0 + r25); // lwz @ 0x808C0238
    r0 = *(0x2e8 + r3); // lbz @ 0x808C023C
    /* b 0x808c0248 */ // 0x808C0240
    /* li r0, 0 */ // 0x808C0244
    /* clrlwi r4, r31, 0x18 */ // 0x808C0248
    r6 = r30 + r4; // 0x808C024C
    if (>=) goto 0x0x808c0370;
    if (==) goto 0x0x808c026c;
    if (==) goto 0x0x808c027c;
    /* b 0x808c0288 */ // 0x808C0268
    r3 = *(0x44 + r29); // lwz @ 0x808C026C
    /* clrlwi r5, r6, 0x18 */ // 0x808C0270
    FUN_8066DE34(); // bl 0x8066DE34
    /* b 0x808c0288 */ // 0x808C0278
    r3 = *(0x44 + r29); // lwz @ 0x808C027C
    /* clrlwi r5, r6, 0x18 */ // 0x808C0280
    FUN_8066DF04(); // bl 0x8066DF04
    r5 = *(0x44 + r29); // lwz @ 0x808C0288
    r3 = r22;
    r4 = r26 + 0x14f; // 0x808C0290
    /* clrlwi r6, r31, 0x18 */ // 0x808C0294
    /* li r7, 0 */ // 0x808C0298
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x44 + r29); // lwz @ 0x808C02A0
    r3 = r22;
    r4 = r26 + 0x155; // 0x808C02A8
    /* clrlwi r6, r31, 0x18 */ // 0x808C02AC
    /* li r7, 0 */ // 0x808C02B0
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x44 + r29); // lwz @ 0x808C02B8
    r3 = r22;
    r4 = r26 + 0x162; // 0x808C02C0
    /* clrlwi r6, r31, 0x18 */ // 0x808C02C4
    /* li r7, 0 */ // 0x808C02C8
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x44 + r29); // lwz @ 0x808C02D0
    r3 = r22;
    r4 = r26 + 0x16f; // 0x808C02D8
    /* clrlwi r6, r31, 0x18 */ // 0x808C02DC
    /* li r7, 0 */ // 0x808C02E0
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x44 + r29); // lwz @ 0x808C02E8
    r3 = r22;
    r4 = r26 + 0x17e; // 0x808C02F0
    /* clrlwi r6, r31, 0x18 */ // 0x808C02F4
    /* li r7, 0 */ // 0x808C02F8
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    *(0x80 + r22) = r27; // stb @ 0x808C0304
    if (!=) goto 0x0x808c0314;
    /* li r22, 0 */ // 0x808C030C
    /* b 0x808c0360 */ // 0x808C0310
    if (==) goto 0x0x808c035c;
    r12 = *(0 + r22); // lwz @ 0x808C0318
    r3 = r22;
    r12 = *(0x28 + r12); // lwz @ 0x808C0320
    /* mtctr r12 */ // 0x808C0324
    /* bctrl  */ // 0x808C0328
    /* b 0x808c0344 */ // 0x808C032C
    if (!=) goto 0x0x808c0340;
    /* li r0, 1 */ // 0x808C0338
    /* b 0x808c0350 */ // 0x808C033C
    r3 = *(0 + r3); // lwz @ 0x808C0340
    if (!=) goto 0x0x808c0330;
    /* li r0, 0 */ // 0x808C034C
    if (==) goto 0x0x808c035c;
    /* b 0x808c0360 */ // 0x808C0358
    /* li r22, 0 */ // 0x808C035C
    r4 = *(0x6bc + r29); // lwz @ 0x808C0360
    r3 = r22;
    FUN_80649FD0(r3); // bl 0x80649FD0
    /* b 0x808c03dc */ // 0x808C036C
    *(0x80 + r22) = r28; // stb @ 0x808C0374
    if (!=) goto 0x0x808c0384;
    /* li r22, 0 */ // 0x808C037C
    /* b 0x808c03d0 */ // 0x808C0380
    if (==) goto 0x0x808c03cc;
    r12 = *(0 + r22); // lwz @ 0x808C0388
    r3 = r22;
    r12 = *(0x28 + r12); // lwz @ 0x808C0390
    /* mtctr r12 */ // 0x808C0394
    /* bctrl  */ // 0x808C0398
    /* b 0x808c03b4 */ // 0x808C039C
    if (!=) goto 0x0x808c03b0;
    /* li r0, 1 */ // 0x808C03A8
    /* b 0x808c03c0 */ // 0x808C03AC
    r3 = *(0 + r3); // lwz @ 0x808C03B0
    if (!=) goto 0x0x808c03a0;
    /* li r0, 0 */ // 0x808C03BC
    if (==) goto 0x0x808c03cc;
    /* b 0x808c03d0 */ // 0x808C03C8
    /* li r22, 0 */ // 0x808C03CC
    r3 = r22;
    /* li r4, 0 */ // 0x808C03D4
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r31 = r31 + 1; // 0x808C03DC
    if (<) goto 0x0x808c019c;
    r0 = *(0x34 + r1); // lwz @ 0x808C03EC
    return;
}