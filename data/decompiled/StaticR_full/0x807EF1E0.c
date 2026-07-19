/* Function at 0x807EF1E0, size=444 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807EF1E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x807EF1E8
    *(0xc + r1) = r31; // stw @ 0x807EF1F0
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807EF1F8
    r30 = *(0xd8 + r3); // lwz @ 0x807EF1FC
    if (<) goto 0x0x807ef218;
    r0 = *(0xc0 + r3); // lwz @ 0x807EF208
    if (>=) goto 0x0x807ef218;
    /* li r4, 1 */ // 0x807EF214
    if (!=) goto 0x0x807ef230;
    r12 = *(0xbc + r3); // lwzu @ 0x807EF220
    r12 = *(0x18 + r12); // lwz @ 0x807EF224
    /* mtctr r12 */ // 0x807EF228
    /* bctrl  */ // 0x807EF22C
    r5 = *(0xc4 + r31); // lwz @ 0x807EF230
    /* slwi r4, r30, 2 */ // 0x807EF234
    /* li r0, 1 */ // 0x807EF238
    /* lis r3, 0 */ // 0x807EF23C
    /* lwzx r30, r5, r4 */ // 0x807EF240
    *(0xb0 + r30) = r0; // stw @ 0x807EF244
    r3 = *(0 + r3); // lwz @ 0x807EF248
    r0 = *(0x55 + r3); // lbz @ 0x807EF24C
    if (!=) goto 0x0x807ef298;
    /* lis r3, 0 */ // 0x807EF258
    r3 = *(0 + r3); // lwz @ 0x807EF25C
    r0 = *(0xb80 + r3); // lwz @ 0x807EF260
    if (==) goto 0x0x807ef298;
    r12 = *(0 + r30); // lwz @ 0x807EF26C
    r3 = r30;
    /* li r4, 1 */ // 0x807EF274
    r12 = *(0x68 + r12); // lwz @ 0x807EF278
    /* mtctr r12 */ // 0x807EF27C
    /* bctrl  */ // 0x807EF280
    r12 = *(0 + r30); // lwz @ 0x807EF284
    r3 = r30;
    r12 = *(0x94 + r12); // lwz @ 0x807EF28C
    /* mtctr r12 */ // 0x807EF290
    /* bctrl  */ // 0x807EF294
    r3 = *(0x20 + r30); // lwz @ 0x807EF298
    /* lis r4, 0 */ // 0x807EF29C
    /* lfs f1, 0(r4) */ // 0x807EF2A0
    /* li r4, 0 */ // 0x807EF2A4
    r12 = *(0 + r3); // lwz @ 0x807EF2A8
    r12 = *(0x10 + r12); // lwz @ 0x807EF2AC
    /* mtctr r12 */ // 0x807EF2B0
    /* bctrl  */ // 0x807EF2B4
    r4 = *(0x20 + r30); // lwz @ 0x807EF2B8
    /* li r5, 1 */ // 0x807EF2BC
    /* li r3, 0 */ // 0x807EF2C0
    *(0x17 + r4) = r5; // stb @ 0x807EF2C4
    *(0xbc + r30) = r5; // stb @ 0x807EF2C8
    r30 = *(0xd4 + r31); // lwz @ 0x807EF2CC
    if (<) goto 0x0x807ef2e8;
    r0 = *(0xb4 + r31); // lwz @ 0x807EF2D8
    if (>=) goto 0x0x807ef2e8;
    r3 = r5;
    if (!=) goto 0x0x807ef304;
    r12 = *(0xb0 + r31); // lwz @ 0x807EF2F0
    r3 = r31 + 0xb0; // 0x807EF2F4
    r12 = *(0x18 + r12); // lwz @ 0x807EF2F8
    /* mtctr r12 */ // 0x807EF2FC
    /* bctrl  */ // 0x807EF300
    r5 = *(0xb8 + r31); // lwz @ 0x807EF304
    /* slwi r4, r30, 2 */ // 0x807EF308
    /* lis r3, 0 */ // 0x807EF30C
    /* li r0, 2 */ // 0x807EF310
    /* lwzx r30, r5, r4 */ // 0x807EF314
    /* li r4, 0 */ // 0x807EF318
    /* lfs f1, 0(r3) */ // 0x807EF31C
    *(0xc8 + r30) = r0; // stw @ 0x807EF320
    r3 = *(0x20 + r30); // lwz @ 0x807EF324
    r12 = *(0 + r3); // lwz @ 0x807EF328
    r12 = *(0x10 + r12); // lwz @ 0x807EF32C
    /* mtctr r12 */ // 0x807EF330
    /* bctrl  */ // 0x807EF334
    r3 = *(0x20 + r30); // lwz @ 0x807EF338
    /* li r0, 1 */ // 0x807EF33C
    *(0x17 + r3) = r0; // stb @ 0x807EF340
    r3 = *(0xd4 + r31); // lwz @ 0x807EF344
    r0 = *(0xcc + r31); // lwz @ 0x807EF348
    r3 = r3 + 1; // 0x807EF34C
    *(0xd4 + r31) = r3; // stw @ 0x807EF350
    if (!=) goto 0x0x807ef364;
    /* li r0, 0 */ // 0x807EF35C
    *(0xd4 + r31) = r0; // stw @ 0x807EF360
    r3 = *(0xd8 + r31); // lwz @ 0x807EF364
    r0 = *(0xcc + r31); // lwz @ 0x807EF368
    r3 = r3 + 1; // 0x807EF36C
    *(0xd8 + r31) = r3; // stw @ 0x807EF370
    if (!=) goto 0x0x807ef384;
    /* li r0, 0 */ // 0x807EF37C
    *(0xd8 + r31) = r0; // stw @ 0x807EF380
    r0 = *(0x14 + r1); // lwz @ 0x807EF384
    r31 = *(0xc + r1); // lwz @ 0x807EF388
    r30 = *(8 + r1); // lwz @ 0x807EF38C
    return;
}