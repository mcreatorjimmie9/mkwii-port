/* Function at 0x8091BB24, size=1304 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r14 */
/* Calls: 2 function(s) */

int FUN_8091BB24(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -112(r1) */
    /* saved r14 */
    /* lis r7, 0 */ // 0x8091BB2C
    /* lis r8, 0 */ // 0x8091BB30
    *(0x74 + r1) = r0; // stw @ 0x8091BB34
    r7 = r7 + 0; // 0x8091BB38
    r8 = r8 + 0; // 0x8091BB3C
    /* stmw r14, 0x28(r1) */ // 0x8091BB40
    r15 = r3;
    /* li r17, 0 */ // 0x8091BB48
    /* li r21, 8 */ // 0x8091BB4C
    r0 = *(3 + r7); // lbz @ 0x8091BB50
    r14 = r8;
    r6 = *(0 + r7); // lbz @ 0x8091BB58
    /* li r9, 0 */ // 0x8091BB5C
    r16 = r0 rlwinm 7; // rlwinm
    r5 = *(1 + r7); // lbz @ 0x8091BB64
    r4 = *(2 + r7); // lbz @ 0x8091BB68
    /* li r10, 0 */ // 0x8091BB6C
    /* li r11, 0 */ // 0x8091BB70
    /* li r12, 0 */ // 0x8091BB74
    /* mtctr r21 */ // 0x8091BB78
    /* srwi r18, r9, 3 */ // 0x8091BB80
    /* srwi r19, r10, 3 */ // 0x8091BB84
    /* srwi r20, r11, 3 */ // 0x8091BB88
    /* srwi r24, r12, 3 */ // 0x8091BB8C
    if (<) goto 0x0x8091bbac;
    r25 = r20 rlwinm 0x1d; // rlwinm
    r26 = r19 rlwinm 2; // rlwinm
    r26 = r18 rlwimi 7; // rlwimi
    r25 = r25 | 0x8000; // 0x8091BBA0
    r25 = r26 | r25; // 0x8091BBA4
    /* b 0x8091bbc0 */ // 0x8091BBA8
    r26 = r20 rlwinm 0x1c; // rlwinm
    r25 = r19 rlwinm 0; // rlwinm
    r26 = r16 | r26; // 0x8091BBB4
    r25 = r18 rlwimi 4; // rlwimi
    r25 = r26 | r25; // 0x8091BBBC
    *(0 + r14) = r25; // sth @ 0x8091BBC4
    if (<) goto 0x0x8091bbfc;
    r25 = r24 + r4; // 0x8091BBCC
    r26 = r24 + r6; // 0x8091BBD0
    r24 = r24 + r5; // 0x8091BBD4
    /* subf r20, r20, r25 */ // 0x8091BBD8
    /* subf r25, r18, r26 */ // 0x8091BBDC
    /* subf r19, r19, r24 */ // 0x8091BBE0
    r18 = r20 rlwinm 0x1d; // rlwinm
    r19 = r19 rlwinm 2; // rlwinm
    r19 = r25 rlwimi 7; // rlwimi
    r18 = r18 | 0x8000; // 0x8091BBF0
    r18 = r19 | r18; // 0x8091BBF4
    /* b 0x8091bc28 */ // 0x8091BBF8
    r26 = r24 + r4; // 0x8091BBFC
    r25 = r24 + r6; // 0x8091BC00
    /* subf r26, r20, r26 */ // 0x8091BC04
    r20 = r24 + r5; // 0x8091BC08
    /* subf r24, r18, r25 */ // 0x8091BC0C
    /* subf r18, r19, r20 */ // 0x8091BC10
    r26 = r26 rlwinm 0x1c; // rlwinm
    r18 = r18 rlwinm 0; // rlwinm
    r19 = r16 | r26; // 0x8091BC1C
    r18 = r24 rlwimi 4; // rlwimi
    r18 = r19 | r18; // 0x8091BC24
    *(0x10 + r14) = r18; // sth @ 0x8091BC28
    r9 = r9 + r6; // 0x8091BC2C
    r10 = r10 + r5; // 0x8091BC30
    r11 = r11 + r4; // 0x8091BC34
    if (counter-- != 0) goto 0x0x8091bb7c;
    r8 = r8 + 0x20; // 0x8091BC48
    r7 = r7 + 4; // 0x8091BC50
    if (<) goto 0x0x8091bb50;
    /* li r0, 0 */ // 0x8091BC58
    *(0x404 + r3) = r0; // stw @ 0x8091BC5C
    /* lis r4, 0 */ // 0x8091BC60
    /* li r5, 0 */ // 0x8091BC64
    *(0 + r3) = r0; // stw @ 0x8091BC68
    r6 = *(0 + r4); // lwz @ 0x8091BC6C
    r4 = *(0xb70 + r6); // lwz @ 0x8091BC70
    r3 = r4 + -3; // 0x8091BC74
    if (>) goto 0x0x8091bc94;
    /* li r0, 1 */ // 0x8091BC80
    r0 = r0 << r3; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8091BC88
    if (==) goto 0x0x8091bc94;
    /* li r5, 1 */ // 0x8091BC90
    if (!=) goto 0x0x8091bcb0;
    if (==) goto 0x0x8091bcb0;
    r0 = *(0xb90 + r6); // lwz @ 0x8091BCA4
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8091BCA8
    if (==) goto 0x0x8091bf28;
    r0 = *(0xb90 + r6); // lwz @ 0x8091BCB0
    /* li r18, 0 */ // 0x8091BCB4
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8091BCB8
    if (==) goto 0x0x8091bd00;
    /* lis r3, 0 */ // 0x8091BCC0
    /* li r0, 0 */ // 0x8091BCC4
    *(8 + r1) = r0; // stb @ 0x8091BCC8
    r3 = *(0 + r3); // lwz @ 0x8091BCD0
    *(0xc + r1) = r0; // stw @ 0x8091BCD4
    FUN_806F9214(r4); // bl 0x806F9214
    r3 = *(0xc + r1); // lwz @ 0x8091BCDC
    /* li r22, 1 */ // 0x8091BCE0
    /* li r21, 3 */ // 0x8091BCE4
    r23 = *(0x1e + r3); // lhz @ 0x8091BCE8
    if (<) goto 0x0x8091bd00;
    if (>) goto 0x0x8091bd00;
    /* li r18, 1 */ // 0x8091BCFC
    /* lis r25, 0 */ // 0x8091BD00
    /* lis r26, 0 */ // 0x8091BD04
    r4 = *(0 + r25); // lwz @ 0x8091BD08
    /* lis r29, 0 */ // 0x8091BD0C
    r3 = *(0 + r26); // lwz @ 0x8091BD10
    /* clrlwi r28, r23, 0x10 */ // 0x8091BD14
    r24 = *(0x18 + r4); // lhz @ 0x8091BD18
    r30 = r29 + 0; // 0x8091BD1C
    r0 = *(4 + r3); // lhz @ 0x8091BD20
    /* li r17, 0 */ // 0x8091BD24
    /* li r20, 0 */ // 0x8091BD28
    /* li r31, 0 */ // 0x8091BD2C
    r19 = r24 + r0; // 0x8091BD30
    /* lis r27, 0 */ // 0x8091BD34
    /* li r14, 0xf */ // 0x8091BD38
    /* b 0x8091bf20 */ // 0x8091BD3C
    if (>=) goto 0x0x8091bd58;
    r3 = *(0 + r25); // lwz @ 0x8091BD48
    r3 = *(0x1c + r3); // lwz @ 0x8091BD4C
    /* lwzx r16, r3, r20 */ // 0x8091BD50
    /* b 0x8091bd6c */ // 0x8091BD54
    r3 = *(0 + r26); // lwz @ 0x8091BD58
    /* subf r0, r24, r17 */ // 0x8091BD5C
    /* slwi r0, r0, 2 */ // 0x8091BD60
    r3 = *(8 + r3); // lwz @ 0x8091BD64
    /* lwzx r16, r3, r0 */ // 0x8091BD68
    r12 = *(0 + r16); // lwz @ 0x8091BD6C
    r3 = r16;
    r12 = *(0x24 + r12); // lwz @ 0x8091BD74
    /* mtctr r12 */ // 0x8091BD78
    /* bctrl  */ // 0x8091BD7C
    r7 = r29 + 0; // 0x8091BD80
    /* clrlwi r5, r3, 0x10 */ // 0x8091BD84
    r6 = *(0 + r27); // lwz @ 0x8091BD88
    /* li r9, 0 */ // 0x8091BD8C
    /* li r4, 0 */ // 0x8091BD90
    /* mtctr r14 */ // 0x8091BD94
    r8 = *(2 + r7); // lhz @ 0x8091BD98
    if (!=) goto 0x0x8091be80;
    r0 = *(0 + r7); // lbz @ 0x8091BDA4
    if (!=) goto 0x0x8091bdb8;
    if (!=) goto 0x0x8091be80;
    r8 = *(0x10 + r7); // lwz @ 0x8091BDB8
    if (==) goto 0x0x8091bdd0;
    r0 = *(0xb68 + r6); // lwz @ 0x8091BDC4
    if (!=) goto 0x0x8091be80;
    /* mulli r0, r4, 0x14 */ // 0x8091BDD0
    r4 = r30 + r0; // 0x8091BDD4
    r0 = *(4 + r4); // lbz @ 0x8091BDD8
    if (==) goto 0x0x8091be04;
    r0 = *(0 + r15); // lwz @ 0x8091BDE4
    /* slwi r0, r0, 2 */ // 0x8091BDE8
    r4 = r15 + r0; // 0x8091BDEC
    *(4 + r4) = r16; // stw @ 0x8091BDF0
    r4 = *(0 + r15); // lwz @ 0x8091BDF4
    r0 = r4 + 1; // 0x8091BDF8
    *(0 + r15) = r0; // stw @ 0x8091BDFC
    /* b 0x8091be78 */ // 0x8091BE00
    r0 = *(0x404 + r15); // lwz @ 0x8091BE04
    r6 = *(8 + r4); // lwz @ 0x8091BE08
    /* slwi r0, r0, 2 */ // 0x8091BE0C
    r5 = *(0xc + r4); // lwz @ 0x8091BE10
    r4 = r15 + r0; // 0x8091BE14
    *(0x408 + r4) = r16; // stw @ 0x8091BE18
    r0 = *(0x404 + r15); // lwz @ 0x8091BE1C
    /* mulli r0, r0, 0x14 */ // 0x8091BE20
    r4 = r15 + r0; // 0x8091BE24
    *(0x81c + r4) = r6; // stw @ 0x8091BE28
    r0 = *(0x404 + r15); // lwz @ 0x8091BE2C
    /* mulli r0, r0, 0x14 */ // 0x8091BE30
    r4 = r15 + r0; // 0x8091BE34
    *(0x820 + r4) = r5; // stw @ 0x8091BE38
    r0 = *(0x404 + r15); // lwz @ 0x8091BE3C
    /* mulli r0, r0, 0x14 */ // 0x8091BE40
    r4 = r15 + r0; // 0x8091BE44
    *(0x824 + r4) = r31; // stb @ 0x8091BE48
    r0 = *(0x404 + r15); // lwz @ 0x8091BE4C
    /* mulli r0, r0, 0x14 */ // 0x8091BE50
    r4 = r15 + r0; // 0x8091BE54
    *(0x828 + r4) = r31; // stw @ 0x8091BE58
    r0 = *(0x404 + r15); // lwz @ 0x8091BE5C
    /* mulli r0, r0, 0x14 */ // 0x8091BE60
    r4 = r15 + r0; // 0x8091BE64
    *(0x82c + r4) = r31; // stw @ 0x8091BE68
    r4 = *(0x404 + r15); // lwz @ 0x8091BE6C
    r0 = r4 + 1; // 0x8091BE70
    *(0x404 + r15) = r0; // stw @ 0x8091BE74
    /* li r9, 1 */ // 0x8091BE78
    /* b 0x8091be8c */ // 0x8091BE7C
    r7 = r7 + 0x14; // 0x8091BE80
    r4 = r4 + 1; // 0x8091BE84
    if (counter-- != 0) goto 0x0x8091bd98;
    if (!=) goto 0x0x8091bf18;
    if (==) goto 0x0x8091bf18;
    /* clrlwi r3, r3, 0x10 */ // 0x8091BE9C
    /* clrlwi r0, r23, 0x10 */ // 0x8091BEA0
    if (!=) goto 0x0x8091bf18;
    r0 = *(0x404 + r15); // lwz @ 0x8091BEAC
    /* slwi r0, r0, 2 */ // 0x8091BEB0
    r3 = r15 + r0; // 0x8091BEB4
    *(0x408 + r3) = r16; // stw @ 0x8091BEB8
    r0 = *(0x404 + r15); // lwz @ 0x8091BEBC
    /* mulli r0, r0, 0x14 */ // 0x8091BEC0
    r3 = r15 + r0; // 0x8091BEC4
    *(0x81c + r3) = r22; // stw @ 0x8091BEC8
    r0 = *(0x404 + r15); // lwz @ 0x8091BECC
    /* mulli r0, r0, 0x14 */ // 0x8091BED0
    r3 = r15 + r0; // 0x8091BED4
    *(0x820 + r3) = r21; // stw @ 0x8091BED8
    r0 = *(0x404 + r15); // lwz @ 0x8091BEDC
    /* mulli r0, r0, 0x14 */ // 0x8091BEE0
    r3 = r15 + r0; // 0x8091BEE4
    *(0x824 + r3) = r31; // stb @ 0x8091BEE8
    r0 = *(0x404 + r15); // lwz @ 0x8091BEEC
    /* mulli r0, r0, 0x14 */ // 0x8091BEF0
    r3 = r15 + r0; // 0x8091BEF4
    *(0x828 + r3) = r31; // stw @ 0x8091BEF8
    r0 = *(0x404 + r15); // lwz @ 0x8091BEFC
    /* mulli r0, r0, 0x14 */ // 0x8091BF00
    r3 = r15 + r0; // 0x8091BF04
    *(0x82c + r3) = r31; // stw @ 0x8091BF08
    r3 = *(0x404 + r15); // lwz @ 0x8091BF0C
    r0 = r3 + 1; // 0x8091BF10
    *(0x404 + r15) = r0; // stw @ 0x8091BF14
    r20 = r20 + 4; // 0x8091BF18
    if (<) goto 0x0x8091bd40;
    r16 = r15;
    /* li r18, 0 */ // 0x8091BF2C
    /* b 0x8091bf9c */ // 0x8091BF30
    r17 = r15;
    /* li r19, 0 */ // 0x8091BF38
    /* b 0x8091bf88 */ // 0x8091BF3C
    r3 = *(0x408 + r17); // lwz @ 0x8091BF40
    r12 = *(0 + r3); // lwz @ 0x8091BF44
    r12 = *(0x24 + r12); // lwz @ 0x8091BF48
    /* mtctr r12 */ // 0x8091BF4C
    /* bctrl  */ // 0x8091BF50
    /* clrlwi r14, r3, 0x10 */ // 0x8091BF54
    r3 = *(0x408 + r16); // lwz @ 0x8091BF58
    r12 = *(0 + r3); // lwz @ 0x8091BF5C
    r12 = *(0x24 + r12); // lwz @ 0x8091BF60
    /* mtctr r12 */ // 0x8091BF64
    /* bctrl  */ // 0x8091BF68
    /* clrlwi r0, r3, 0x10 */ // 0x8091BF6C
    if (!=) goto 0x0x8091bf80;
    if (<) goto 0x0x8091bf94;
    r0 = *(0x404 + r15); // lwz @ 0x8091BF88
    if (<) goto 0x0x8091bf40;
    r0 = *(0x404 + r15); // lwz @ 0x8091BF9C
    if (<) goto 0x0x8091bf34;
    r16 = r15;
    /* li r18, 0 */ // 0x8091BFAC
    /* b 0x8091c01c */ // 0x8091BFB0
    r17 = r15;
    /* li r19, 0 */ // 0x8091BFB8
    /* b 0x8091c008 */ // 0x8091BFBC
    r3 = *(4 + r17); // lwz @ 0x8091BFC0
    r12 = *(0 + r3); // lwz @ 0x8091BFC4
    r12 = *(0x24 + r12); // lwz @ 0x8091BFC8
    /* mtctr r12 */ // 0x8091BFCC
    /* bctrl  */ // 0x8091BFD0
    /* clrlwi r14, r3, 0x10 */ // 0x8091BFD4
    r3 = *(4 + r16); // lwz @ 0x8091BFD8
    r12 = *(0 + r3); // lwz @ 0x8091BFDC
    r12 = *(0x24 + r12); // lwz @ 0x8091BFE0
    /* mtctr r12 */ // 0x8091BFE4
    /* bctrl  */ // 0x8091BFE8
    /* clrlwi r0, r3, 0x10 */ // 0x8091BFEC
    if (!=) goto 0x0x8091c000;
    if (<) goto 0x0x8091c014;
    r0 = *(0 + r15); // lwz @ 0x8091C008
    if (<) goto 0x0x8091bfc0;
    r0 = *(0 + r15); // lwz @ 0x8091C01C
    if (<) goto 0x0x8091bfb4;
    /* lis r3, 0 */ // 0x8091C028
    r3 = *(0 + r3); // lwz @ 0x8091C02C
    r3 = r14;
    FUN_805E3430(r3, r3); // bl 0x805E3430
}