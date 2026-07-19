/* Function at 0x8070792C, size=944 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8070792C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    /* li r3, 0x6b */ // 0x80707940
    *(0x38 + r1) = r30; // stw @ 0x80707944
    *(0x34 + r1) = r29; // stw @ 0x80707948
    FUN_808B6A8C(r3); // bl 0x808B6A8C
    /* li r30, 0 */ // 0x80707950
    *(0x90c + r3) = r30; // stw @ 0x80707954
    *(0x848 + r3) = r30; // stw @ 0x80707958
    /* li r3, 0x6c */ // 0x8070795C
    FUN_808BB994(r3); // bl 0x808BB994
    *(0x6f0 + r3) = r30; // stw @ 0x80707964
    /* lis r3, 0 */ // 0x80707968
    *(8 + r1) = r30; // stb @ 0x80707970
    r3 = *(0 + r3); // lwz @ 0x80707974
    *(0xc + r1) = r30; // stw @ 0x80707978
    FUN_806F9214(r3, r4); // bl 0x806F9214
    /* lis r30, 0 */ // 0x80707980
    r3 = *(0 + r30); // lwz @ 0x80707984
    FUN_805BD9AC(); // bl 0x805BD9AC
    r4 = *(0xc + r1); // lwz @ 0x8070798C
    r3 = *(0 + r30); // lwz @ 0x80707990
    r0 = *(0x17 + r4); // lbz @ 0x80707994
    *(0x175c + r3) = r0; // stw @ 0x80707998
    r3 = *(0 + r30); // lwz @ 0x8070799C
    r0 = *(0x1780 + r3); // lwz @ 0x807079A0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x807079A8
    r3 = *(0 + r30); // lwz @ 0x807079AC
    r0 = *(0x1780 + r3); // lwz @ 0x807079B0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x807079B8
    r3 = *(0xc + r1); // lwz @ 0x807079BC
    r0 = *(0x14 + r3); // lhz @ 0x807079C0
    if (==) goto 0x0x807079d8;
    if (==) goto 0x0x807079e8;
    /* b 0x807079f8 */ // 0x807079D4
    r3 = *(0 + r30); // lwz @ 0x807079D8
    /* li r0, 2 */ // 0x807079DC
    *(0x1760 + r3) = r0; // stw @ 0x807079E0
    /* b 0x80707a04 */ // 0x807079E4
    r3 = *(0 + r30); // lwz @ 0x807079E8
    /* li r0, 1 */ // 0x807079EC
    *(0x1760 + r3) = r0; // stw @ 0x807079F0
    /* b 0x80707a04 */ // 0x807079F4
    r3 = *(0 + r30); // lwz @ 0x807079F8
    /* li r0, 4 */ // 0x807079FC
    *(0x1760 + r3) = r0; // stw @ 0x80707A00
    /* lis r4, 0 */ // 0x80707A04
    r3 = *(0 + r4); // lwz @ 0x80707A08
    r0 = *(0x1780 + r3); // lwz @ 0x80707A0C
    r0 = r0 | 4; // 0x80707A10
    *(0x1780 + r3) = r0; // stw @ 0x80707A14
    r3 = *(0xc + r1); // lwz @ 0x80707A18
    r0 = *(0x44 + r3); // lbz @ 0x80707A1C
    if (!=) goto 0x0x80707a38;
    r3 = *(0 + r4); // lwz @ 0x80707A28
    /* li r0, 0 */ // 0x80707A2C
    *(0x1764 + r3) = r0; // stw @ 0x80707A30
    /* b 0x80707a44 */ // 0x80707A34
    r3 = *(0 + r4); // lwz @ 0x80707A38
    /* li r0, 5 */ // 0x80707A3C
    *(0x1764 + r3) = r0; // stw @ 0x80707A40
    r3 = *(0xc + r1); // lwz @ 0x80707A44
    /* li r5, 9 */ // 0x80707A48
    r0 = *(0x18 + r3); // lbz @ 0x80707A4C
    if (>=) goto 0x0x80707a5c;
    r5 = r0;
    /* lis r6, 0 */ // 0x80707A5C
    /* lis r4, 0 */ // 0x80707A60
    r3 = *(0 + r6); // lwz @ 0x80707A64
    /* li r0, 1 */ // 0x80707A68
    *(0x177d + r3) = r5; // stb @ 0x80707A6C
    r5 = *(0xc + r1); // lwz @ 0x80707A70
    r3 = *(0 + r6); // lwz @ 0x80707A74
    r5 = *(0x16 + r5); // lbz @ 0x80707A78
    *(0x1758 + r3) = r5; // stw @ 0x80707A7C
    r3 = *(0 + r4); // lwz @ 0x80707A80
    r3 = *(0x98 + r3); // lwz @ 0x80707A84
    *(0x124 + r3) = r0; // stw @ 0x80707A88
    r3 = *(0xc + r1); // lwz @ 0x80707A8C
    r3 = *(0x1a + r3); // lhz @ 0x80707A90
    if (==) goto 0x0x80707ab0;
    if (==) goto 0x0x80707ac4;
    if (==) goto 0x0x80707ad4;
    /* b 0x80707ae4 */ // 0x80707AAC
    r3 = *(0 + r4); // lwz @ 0x80707AB0
    /* li r0, 0 */ // 0x80707AB4
    r3 = *(0x98 + r3); // lwz @ 0x80707AB8
    *(0x74 + r3) = r0; // stw @ 0x80707ABC
    /* b 0x80707ae4 */ // 0x80707AC0
    r3 = *(0 + r4); // lwz @ 0x80707AC4
    r3 = *(0x98 + r3); // lwz @ 0x80707AC8
    *(0x74 + r3) = r0; // stw @ 0x80707ACC
    /* b 0x80707ae4 */ // 0x80707AD0
    r3 = *(0 + r4); // lwz @ 0x80707AD4
    /* li r0, 2 */ // 0x80707AD8
    r3 = *(0x98 + r3); // lwz @ 0x80707ADC
    *(0x74 + r3) = r0; // stw @ 0x80707AE0
    /* lis r6, 0 */ // 0x80707AE4
    /* li r0, 0xb */ // 0x80707AE8
    r3 = *(0 + r6); // lwz @ 0x80707AEC
    /* li r5, 0 */ // 0x80707AF0
    /* li r7, 0 */ // 0x80707AF4
    /* li r4, 5 */ // 0x80707AF8
    *(0xc28 + r3) = r5; // stw @ 0x80707AFC
    /* li r5, 1 */ // 0x80707B00
    /* mtctr r0 */ // 0x80707B04
    r3 = *(0xc + r1); // lwz @ 0x80707B08
    /* li r0, 0xb */ // 0x80707B0C
    r3 = *(0x26 + r3); // lhz @ 0x80707B10
    if (>=) goto 0x0x80707b20;
    r0 = r3;
    /* clrlwi r0, r0, 0x10 */ // 0x80707B20
    if (>=) goto 0x0x80707b48;
    r0 = r7 + 1; // 0x80707B2C
    r3 = *(0 + r6); // lwz @ 0x80707B30
    /* clrlwi r0, r0, 0x18 */ // 0x80707B34
    /* mulli r0, r0, 0xf0 */ // 0x80707B38
    r3 = r3 + r0; // 0x80707B3C
    *(0xc28 + r3) = r5; // stw @ 0x80707B40
    /* b 0x80707b60 */ // 0x80707B44
    r0 = r7 + 1; // 0x80707B48
    r3 = *(0 + r6); // lwz @ 0x80707B4C
    /* clrlwi r0, r0, 0x18 */ // 0x80707B50
    /* mulli r0, r0, 0xf0 */ // 0x80707B54
    r3 = r3 + r0; // 0x80707B58
    *(0xc28 + r3) = r4; // stw @ 0x80707B5C
    r7 = r7 + 1; // 0x80707B60
    if (counter-- != 0) goto 0x0x80707b08;
    /* lis r3, 0 */ // 0x80707B68
    r3 = *(0 + r3); // lwz @ 0x80707B6C
    r3 = *(0 + r3); // lwz @ 0x80707B70
    r29 = *(0x1bc + r3); // lwz @ 0x80707B74
    if (!=) goto 0x0x80707b88;
    /* li r29, 0 */ // 0x80707B80
    /* b 0x80707bdc */ // 0x80707B84
    /* lis r30, 0 */ // 0x80707B88
    r30 = r30 + 0; // 0x80707B8C
    if (==) goto 0x0x80707bd8;
    r12 = *(0 + r29); // lwz @ 0x80707B94
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x80707B9C
    /* mtctr r12 */ // 0x80707BA0
    /* bctrl  */ // 0x80707BA4
    /* b 0x80707bc0 */ // 0x80707BA8
    if (!=) goto 0x0x80707bbc;
    /* li r0, 1 */ // 0x80707BB4
    /* b 0x80707bcc */ // 0x80707BB8
    r3 = *(0 + r3); // lwz @ 0x80707BBC
    if (!=) goto 0x0x80707bac;
    /* li r0, 0 */ // 0x80707BC8
    if (==) goto 0x0x80707bd8;
    /* b 0x80707bdc */ // 0x80707BD4
    /* li r29, 0 */ // 0x80707BD8
    if (!=) goto 0x0x80707bec;
    /* li r29, 0 */ // 0x80707BE4
    /* b 0x80707c40 */ // 0x80707BE8
    /* lis r30, 0 */ // 0x80707BEC
    r30 = r30 + 0; // 0x80707BF0
    if (==) goto 0x0x80707c3c;
    r12 = *(0 + r29); // lwz @ 0x80707BF8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x80707C00
    /* mtctr r12 */ // 0x80707C04
    /* bctrl  */ // 0x80707C08
    /* b 0x80707c24 */ // 0x80707C0C
    if (!=) goto 0x0x80707c20;
    /* li r0, 1 */ // 0x80707C18
    /* b 0x80707c30 */ // 0x80707C1C
    r3 = *(0 + r3); // lwz @ 0x80707C20
    if (!=) goto 0x0x80707c10;
    /* li r0, 0 */ // 0x80707C2C
    if (==) goto 0x0x80707c3c;
    /* b 0x80707c40 */ // 0x80707C38
    /* li r29, 0 */ // 0x80707C3C
    r3 = *(0xc + r1); // lwz @ 0x80707C40
    r0 = *(0x3e + r3); // lbz @ 0x80707C44
    if (!=) goto 0x0x80707c74;
    r0 = *(0x44 + r3); // lbz @ 0x80707C50
    if (!=) goto 0x0x80707c68;
    /* li r0, 0x88 */ // 0x80707C5C
    *(0x6c8 + r29) = r0; // stw @ 0x80707C60
    /* b 0x80707c94 */ // 0x80707C64
    /* li r0, 0x89 */ // 0x80707C68
    *(0x6c8 + r29) = r0; // stw @ 0x80707C6C
    /* b 0x80707c94 */ // 0x80707C70
    r0 = *(0x44 + r3); // lbz @ 0x80707C74
    if (!=) goto 0x0x80707c8c;
    /* li r0, 0x2d */ // 0x80707C80
    *(0x6c8 + r29) = r0; // stw @ 0x80707C84
    /* b 0x80707c94 */ // 0x80707C88
    /* li r0, 0x1d */ // 0x80707C8C
    *(0x6c8 + r29) = r0; // stw @ 0x80707C90
    /* lis r3, 0 */ // 0x80707C94
    r3 = *(0 + r3); // lwz @ 0x80707C98
    r3 = *(0x98 + r3); // lwz @ 0x80707C9C
    FUN_80661C9C(r3); // bl 0x80661C9C
    r12 = *(0 + r31); // lwz @ 0x80707CA4
    r3 = r31;
    /* li r4, 0x6b */ // 0x80707CAC
    /* li r5, 0 */ // 0x80707CB0
    r12 = *(0x24 + r12); // lwz @ 0x80707CB4
    /* mtctr r12 */ // 0x80707CB8
    /* bctrl  */ // 0x80707CBC
    r0 = *(0x44 + r1); // lwz @ 0x80707CC0
    r31 = *(0x3c + r1); // lwz @ 0x80707CC4
    r30 = *(0x38 + r1); // lwz @ 0x80707CC8
    r29 = *(0x34 + r1); // lwz @ 0x80707CCC
    return;
}