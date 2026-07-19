/* Function at 0x808BF9B4, size=764 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 20 function(s) */

int FUN_808BF9B4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r0, -1 */ // 0x808BF9C0
    /* stmw r27, 0xc(r1) */ // 0x808BF9C4
    r29 = r4;
    r28 = r3;
    r30 = r5;
    *(0xd94 + r3) = r0; // stw @ 0x808BF9D4
    r4 = *(0x240 + r4); // lwz @ 0x808BF9D8
    if (==) goto 0x0x808bf9ec;
    if (!=) goto 0x0x808bfa7c;
    /* lis r3, 0 */ // 0x808BF9EC
    r3 = *(0 + r3); // lwz @ 0x808BF9F0
    r3 = *(0 + r3); // lwz @ 0x808BF9F4
    r0 = *(0 + r3); // lwz @ 0x808BF9F8
    if (<) goto 0x0x808bfa0c;
    if (<=) goto 0x0x808bfa28;
    if (==) goto 0x0x808bfa3c;
    if (==) goto 0x0x808bfa50;
    if (==) goto 0x0x808bfa64;
    /* b 0x808bfc9c */ // 0x808BFA24
    r3 = r28;
    r5 = r29;
    /* li r4, 0x42 */ // 0x808BFA30
    FUN_808B40C8(r3, r5, r4); // bl 0x808B40C8
    /* b 0x808bfc9c */ // 0x808BFA38
    r3 = r28;
    r5 = r29;
    /* li r4, 0x67 */ // 0x808BFA44
    FUN_808B3ADC(r3, r5, r4); // bl 0x808B3ADC
    /* b 0x808bfc9c */ // 0x808BFA4C
    r3 = r28;
    r5 = r29;
    /* li r4, 0x61 */ // 0x808BFA58
    FUN_808B3ADC(r3, r5, r4); // bl 0x808B3ADC
    /* b 0x808bfc9c */ // 0x808BFA60
    r3 = r29;
    FUN_8064A384(r5, r4, r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 1 */ // 0x808BFA70
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x808bfc9c */ // 0x808BFA78
    r3 = *(0x44 + r3); // lwz @ 0x808BFA7C
    FUN_8066E0EC(r3, r4); // bl 0x8066E0EC
    r6 = *(0x240 + r29); // lwz @ 0x808BFA84
    /* lis r4, 0 */ // 0x808BFA88
    *(0xd94 + r28) = r6; // stw @ 0x808BFA8C
    r31 = r3;
    r0 = *(0xda0 + r28); // lwz @ 0x808BFA94
    r3 = *(0 + r4); // lwz @ 0x808BFA98
    r5 = *(0xd98 + r28); // lwz @ 0x808BFA9C
    /* slwi r0, r0, 2 */ // 0x808BFAA0
    r3 = *(0x98 + r3); // lwz @ 0x808BFAA4
    r5 = r5 + r6; // 0x808BFAA8
    r3 = r3 + r0; // 0x808BFAAC
    *(0x154 + r3) = r5; // stw @ 0x808BFAB0
    r0 = *(0xd9c + r28); // lwz @ 0x808BFAB4
    if (!=) goto 0x0x808bfaec;
    r4 = *(0 + r4); // lwz @ 0x808BFAC0
    /* lis r3, 0 */ // 0x808BFAC4
    r0 = *(0xda0 + r28); // lwz @ 0x808BFAC8
    r4 = *(0x98 + r4); // lwz @ 0x808BFACC
    /* slwi r0, r0, 2 */ // 0x808BFAD0
    r3 = *(0 + r3); // lwz @ 0x808BFAD4
    r5 = r4 + r0; // 0x808BFAD8
    r4 = *(0x154 + r5); // lwz @ 0x808BFADC
    r0 = *(0x2d4 + r3); // lbz @ 0x808BFAE0
    r0 = r4 + r0; // 0x808BFAE4
    *(0x154 + r5) = r0; // stw @ 0x808BFAE8
    /* lis r3, 0 */ // 0x808BFAEC
    r3 = *(0 + r3); // lwz @ 0x808BFAF0
    r3 = *(0 + r3); // lwz @ 0x808BFAF4
    r0 = *(0 + r3); // lwz @ 0x808BFAF8
    if (<) goto 0x0x808bfb0c;
    if (<=) goto 0x0x808bfb20;
    if (==) goto 0x0x808bfbb0;
    if (==) goto 0x0x808bfc0c;
    /* b 0x808bfc9c */ // 0x808BFB1C
    r27 = *(0x1a0 + r3); // lwz @ 0x808BFB20
    if (!=) goto 0x0x808bfb34;
    /* li r27, 0 */ // 0x808BFB2C
    /* b 0x808bfb88 */ // 0x808BFB30
    /* lis r30, 0 */ // 0x808BFB34
    r30 = r30 + 0; // 0x808BFB38
    if (==) goto 0x0x808bfb84;
    r12 = *(0 + r27); // lwz @ 0x808BFB40
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x808BFB48
    /* mtctr r12 */ // 0x808BFB4C
    /* bctrl  */ // 0x808BFB50
    /* b 0x808bfb6c */ // 0x808BFB54
    if (!=) goto 0x0x808bfb68;
    /* li r0, 1 */ // 0x808BFB60
    /* b 0x808bfb78 */ // 0x808BFB64
    r3 = *(0 + r3); // lwz @ 0x808BFB68
    if (!=) goto 0x0x808bfb58;
    /* li r0, 0 */ // 0x808BFB74
    if (==) goto 0x0x808bfb84;
    /* b 0x808bfb88 */ // 0x808BFB80
    /* li r27, 0 */ // 0x808BFB84
    r3 = r27;
    r4 = r31 + 0x94; // 0x808BFB8C
    FUN_806C8140(r3, r4); // bl 0x806C8140
    r3 = r27;
    FUN_806C8150(r3, r4, r3); // bl 0x806C8150
    r3 = r28;
    r5 = r29;
    /* li r4, 0x52 */ // 0x808BFBA4
    FUN_808B38C8(r3, r3, r5, r4); // bl 0x808B38C8
    /* b 0x808bfc9c */ // 0x808BFBAC
    r3 = *(0x44 + r28); // lwz @ 0x808BFBB0
    /* li r5, 1 */ // 0x808BFBB4
    r4 = *(0x240 + r29); // lwz @ 0x808BFBB8
    FUN_8066E0FC(r5); // bl 0x8066E0FC
    /* lis r30, 0 */ // 0x808BFBC0
    r4 = *(0x44 + r28); // lwz @ 0x808BFBC4
    r3 = *(0 + r30); // lwz @ 0x808BFBC8
    /* li r6, 1 */ // 0x808BFBCC
    r5 = *(0x240 + r29); // lwz @ 0x808BFBD0
    r3 = *(0x98 + r3); // lwz @ 0x808BFBD4
    r3 = r3 + 0x238; // 0x808BFBD8
    FUN_8066E6F0(r6, r3); // bl 0x8066E6F0
    r3 = *(0 + r30); // lwz @ 0x808BFBE0
    /* li r4, 1 */ // 0x808BFBE4
    /* li r5, 1 */ // 0x808BFBE8
    r3 = *(0x98 + r3); // lwz @ 0x808BFBEC
    r3 = r3 + 0x238; // 0x808BFBF0
    FUN_8066E0FC(r4, r5, r3); // bl 0x8066E0FC
    r3 = r28;
    r5 = r29;
    /* li r4, 0x8a */ // 0x808BFC00
    FUN_808B38C8(r3, r3, r5, r4); // bl 0x808B38C8
    /* b 0x808bfc9c */ // 0x808BFC08
    r3 = *(0x44 + r28); // lwz @ 0x808BFC0C
    /* li r5, 1 */ // 0x808BFC10
    r4 = *(0xd94 + r28); // lwz @ 0x808BFC14
    FUN_8066E0FC(r5); // bl 0x8066E0FC
    /* lis r31, 0 */ // 0x808BFC1C
    r4 = *(0x44 + r28); // lwz @ 0x808BFC20
    r3 = *(0 + r31); // lwz @ 0x808BFC24
    r6 = r30;
    r5 = *(0xd94 + r28); // lwz @ 0x808BFC2C
    r3 = *(0x98 + r3); // lwz @ 0x808BFC30
    r3 = r3 + 0x188; // 0x808BFC34
    FUN_8066E6F0(r6, r3); // bl 0x8066E6F0
    r3 = *(0 + r31); // lwz @ 0x808BFC3C
    r4 = r30;
    /* li r5, 1 */ // 0x808BFC44
    r3 = *(0x98 + r3); // lwz @ 0x808BFC48
    r3 = r3 + 0x188; // 0x808BFC4C
    FUN_8066E0FC(r4, r5, r3); // bl 0x8066E0FC
    r3 = *(0 + r31); // lwz @ 0x808BFC54
    /* lis r4, 0 */ // 0x808BFC58
    r5 = *(0 + r4); // lwz @ 0x808BFC5C
    r4 = r30;
    r3 = *(0x98 + r3); // lwz @ 0x808BFC64
    r27 = *(0x14 + r5); // lwz @ 0x808BFC68
    r3 = r3 + 0x188; // 0x808BFC6C
    FUN_8066E0EC(r4, r3); // bl 0x8066E0EC
    r0 = *(0xda0 + r28); // lwz @ 0x808BFC74
    r5 = r3;
    r3 = r27;
    /* clrlwi r4, r0, 0x18 */ // 0x808BFC80
    FUN_808E22AC(r5, r3); // bl 0x808E22AC
    r3 = r29;
    FUN_8064A384(r5, r3, r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x808BFC94
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x808BFCA0
    return;
}