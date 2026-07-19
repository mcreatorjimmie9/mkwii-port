/* Function at 0x808CEDE0, size=848 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_808CEDE0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808CEDF8
    r28 = r3;
    FUN_808CEBD8(); // bl 0x808CEBD8
    r31 = r3;
    if (<=) goto 0x0x808cee54;
    /* lis r6, 0 */ // 0x808CEE10
    /* li r29, 0 */ // 0x808CEE14
    r3 = *(0 + r6); // lwz @ 0x808CEE18
    /* li r4, 0x4be */ // 0x808CEE1C
    /* li r5, 0 */ // 0x808CEE20
    r3 = *(0x98 + r3); // lwz @ 0x808CEE24
    *(0x70 + r3) = r29; // stw @ 0x808CEE28
    r3 = *(0 + r6); // lwz @ 0x808CEE2C
    r6 = *(0x98 + r3); // lwz @ 0x808CEE30
    r3 = *(0x68 + r6); // lwz @ 0x808CEE34
    r0 = r3 + 1; // 0x808CEE38
    *(0x68 + r6) = r0; // stw @ 0x808CEE3C
    r3 = *(0x18c0 + r28); // lwz @ 0x808CEE40
    FUN_806A0A34(); // bl 0x806A0A34
    r3 = *(0x18c0 + r28); // lwz @ 0x808CEE48
    *(0x80 + r3) = r29; // stb @ 0x808CEE4C
    /* b 0x808ceed0 */ // 0x808CEE50
    if (>=) goto 0x0x808ceea0;
    /* lis r6, 0 */ // 0x808CEE58
    /* li r0, 1 */ // 0x808CEE5C
    r3 = *(0 + r6); // lwz @ 0x808CEE60
    /* li r4, 0x4bf */ // 0x808CEE64
    /* li r5, 0 */ // 0x808CEE68
    r3 = *(0x98 + r3); // lwz @ 0x808CEE6C
    *(0x70 + r3) = r0; // stw @ 0x808CEE70
    r3 = *(0 + r6); // lwz @ 0x808CEE74
    r6 = *(0x98 + r3); // lwz @ 0x808CEE78
    r3 = *(0x6c + r6); // lwz @ 0x808CEE7C
    r0 = r3 + 1; // 0x808CEE80
    *(0x6c + r6) = r0; // stw @ 0x808CEE84
    r3 = *(0x18c0 + r28); // lwz @ 0x808CEE88
    FUN_806A0A34(); // bl 0x806A0A34
    r3 = *(0x18c0 + r28); // lwz @ 0x808CEE90
    /* li r0, 0 */ // 0x808CEE94
    *(0x80 + r3) = r0; // stb @ 0x808CEE98
    /* b 0x808ceed0 */ // 0x808CEE9C
    /* lis r3, 0 */ // 0x808CEEA0
    /* li r0, 2 */ // 0x808CEEA4
    r3 = *(0 + r3); // lwz @ 0x808CEEA8
    /* li r4, 0x4c2 */ // 0x808CEEAC
    /* li r5, 0 */ // 0x808CEEB0
    r3 = *(0x98 + r3); // lwz @ 0x808CEEB4
    *(0x70 + r3) = r0; // stw @ 0x808CEEB8
    r3 = *(0x18c0 + r28); // lwz @ 0x808CEEBC
    FUN_806A0A34(r4, r5); // bl 0x806A0A34
    r3 = *(0x18c0 + r28); // lwz @ 0x808CEEC4
    /* li r0, 0 */ // 0x808CEEC8
    *(0x80 + r3) = r0; // stb @ 0x808CEECC
    /* lis r3, 0 */ // 0x808CEED0
    /* li r4, 0 */ // 0x808CEED4
    r3 = *(0 + r3); // lwz @ 0x808CEED8
    r0 = *(0xb70 + r3); // lwz @ 0x808CEEDC
    if (<) goto 0x0x808ceef4;
    if (>) goto 0x0x808ceef4;
    /* li r4, 1 */ // 0x808CEEF0
    if (==) goto 0x0x808cf110;
    /* lis r4, 0 */ // 0x808CEEFC
    r6 = *(0 + r4); // lwz @ 0x808CEF00
    r0 = *(0x36 + r6); // lha @ 0x808CEF04
    if (<) goto 0x0x808cef2c;
    /* lis r4, 1 */ // 0x808CEF10
    /* clrlwi r5, r0, 0x18 */ // 0x808CEF14
    r0 = r4 + -0x6c10; // 0x808CEF18
    r0 = r0 * r5; // 0x808CEF1C
    r4 = r6 + r0; // 0x808CEF20
    r30 = r4 + 0x38; // 0x808CEF24
    /* b 0x808cef30 */ // 0x808CEF28
    /* li r30, 0 */ // 0x808CEF2C
    /* li r29, 0 */ // 0x808CEF30
    /* li r28, 0 */ // 0x808CEF34
    /* li r4, 0 */ // 0x808CEF38
    FUN_805C14C8(r4); // bl 0x805C14C8
    /* lis r4, 0 */ // 0x808CEF40
    /* clrlwi r6, r3, 0x18 */ // 0x808CEF44
    r5 = *(0 + r4); // lwz @ 0x808CEF48
    /* li r7, 0 */ // 0x808CEF4C
    r0 = *(0x24 + r5); // lbz @ 0x808CEF50
    r4 = r5 + 0x28; // 0x808CEF54
    /* mtctr r0 */ // 0x808CEF58
    if (<=) goto 0x0x808cefd0;
    r0 = *(0xb70 + r5); // lwz @ 0x808CEF64
    /* li r3, 0 */ // 0x808CEF68
    if (<) goto 0x0x808cef80;
    if (>) goto 0x0x808cef80;
    /* li r3, 1 */ // 0x808CEF7C
    if (==) goto 0x0x808cefa0;
    /* clrlwi r0, r7, 0x18 */ // 0x808CEF88
    /* mulli r0, r0, 0xf0 */ // 0x808CEF8C
    r3 = r4 + r0; // 0x808CEF90
    r0 = *(0x10 + r3); // lwz @ 0x808CEF94
    if (==) goto 0x0x808cefc8;
    /* clrlwi r0, r7, 0x18 */ // 0x808CEFA0
    /* mulli r0, r0, 0xf0 */ // 0x808CEFA4
    r3 = r4 + r0; // 0x808CEFA8
    r0 = *(0xcc + r3); // lwz @ 0x808CEFAC
    if (!=) goto 0x0x808cefbc;
    r28 = r28 + 1; // 0x808CEFB8
    if (==) goto 0x0x808cefc8;
    r29 = r29 + 1; // 0x808CEFC4
    r7 = r7 + 1; // 0x808CEFC8
    if (counter-- != 0) goto 0x0x808cef64;
    /* li r0, 0 */ // 0x808CEFD4
    /* li r3, 0 */ // 0x808CEFD8
    if (<=) goto 0x0x808cf004;
    /* mulli r4, r6, 0xf0 */ // 0x808CEFE0
    r4 = r5 + r4; // 0x808CEFE4
    r4 = *(0xf4 + r4); // lwz @ 0x808CEFE8
    if (!=) goto 0x0x808ceffc;
    r0 = r28;
    /* b 0x808cf02c */ // 0x808CEFF8
    r3 = r29;
    /* b 0x808cf02c */ // 0x808CF000
    if (>=) goto 0x0x808cf02c;
    /* mulli r4, r6, 0xf0 */ // 0x808CF008
    r4 = r5 + r4; // 0x808CF00C
    r4 = *(0xf4 + r4); // lwz @ 0x808CF010
    if (!=) goto 0x0x808cf020;
    r0 = r29;
    if (==) goto 0x0x808cf02c;
    r3 = r28;
    /* addis r5, r30, 1 */ // 0x808CF02C
    /* lis r4, 2 */ // 0x808CF030
    r6 = *(-0x6d8c + r5); // lwz @ 0x808CF034
    /* clrlwi r5, r0, 0x10 */ // 0x808CF038
    r4 = r4 + -0x7961; // 0x808CF03C
    r5 = r6 + r5; // 0x808CF040
    if (<=) goto 0x0x808cf050;
    r5 = r4;
    /* addis r6, r30, 1 */ // 0x808CF050
    /* lis r4, 2 */ // 0x808CF054
    *(-0x6d8c + r6) = r5; // stw @ 0x808CF058
    /* clrlwi r5, r3, 0x10 */ // 0x808CF05C
    r4 = r4 + -0x7961; // 0x808CF060
    r6 = *(-0x6d88 + r6); // lwz @ 0x808CF064
    r6 = r6 + r5; // 0x808CF068
    if (<=) goto 0x0x808cf078;
    r6 = r4;
    /* addis r5, r30, 1 */ // 0x808CF078
    /* lis r4, 0 */ // 0x808CF07C
    *(-0x6d88 + r5) = r6; // stw @ 0x808CF080
    /* li r5, 0 */ // 0x808CF084
    r4 = *(0 + r4); // lwz @ 0x808CF088
    r4 = *(0xb70 + r4); // lwz @ 0x808CF08C
    if (<) goto 0x0x808cf0a4;
    if (>) goto 0x0x808cf0a4;
    /* li r5, 1 */ // 0x808CF0A0
    if (==) goto 0x0x808cf100;
    /* addis r5, r30, 1 */ // 0x808CF0AC
    /* lis r4, 2 */ // 0x808CF0B0
    r6 = *(-0x6d7c + r5); // lwz @ 0x808CF0B4
    /* clrlwi r5, r0, 0x10 */ // 0x808CF0B8
    r0 = r4 + -0x7961; // 0x808CF0BC
    r6 = r6 + r5; // 0x808CF0C0
    if (<=) goto 0x0x808cf0d0;
    r6 = r0;
    /* addis r5, r30, 1 */ // 0x808CF0D0
    /* lis r4, 2 */ // 0x808CF0D4
    *(-0x6d7c + r5) = r6; // stw @ 0x808CF0D8
    r0 = r4 + -0x7961; // 0x808CF0DC
    /* clrlwi r3, r3, 0x10 */ // 0x808CF0E0
    r4 = *(-0x6d78 + r5); // lwz @ 0x808CF0E4
    r4 = r4 + r3; // 0x808CF0E8
    if (<=) goto 0x0x808cf0f8;
    r4 = r0;
    /* addis r3, r30, 1 */ // 0x808CF0F8
    *(-0x6d78 + r3) = r4; // stw @ 0x808CF0FC
    /* lis r3, 0 */ // 0x808CF100
    r3 = *(0 + r3); // lwz @ 0x808CF104
    r3 = *(0x90 + r3); // lwz @ 0x808CF108
    FUN_806845FC(r3); // bl 0x806845FC
    r0 = *(0x24 + r1); // lwz @ 0x808CF110
    r31 = *(0x1c + r1); // lwz @ 0x808CF114
    r30 = *(0x18 + r1); // lwz @ 0x808CF118
    r29 = *(0x14 + r1); // lwz @ 0x808CF11C
    r28 = *(0x10 + r1); // lwz @ 0x808CF120
    return;
}