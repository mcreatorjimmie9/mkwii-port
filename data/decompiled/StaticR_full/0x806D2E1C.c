/* Function at 0x806D2E1C, size=956 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 25 function(s) */

int FUN_806D2E1C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806D2E28
    r28 = r3;
    r29 = r4;
    /* li r31, 0xc3 */ // 0x806D2E34
    r0 = *(0x68 + r3); // lwz @ 0x806D2E38
    if (!=) goto 0x0x806d2e48;
    /* li r31, 0xc4 */ // 0x806D2E44
    /* lis r3, 0 */ // 0x806D2E48
    /* slwi r0, r31, 2 */ // 0x806D2E4C
    r3 = *(0 + r3); // lwz @ 0x806D2E50
    r3 = *(0 + r3); // lwz @ 0x806D2E54
    r3 = r3 + r0; // 0x806D2E58
    r30 = *(8 + r3); // lwz @ 0x806D2E5C
    if (!=) goto 0x0x806d2e70;
    /* li r30, 0 */ // 0x806D2E68
    /* b 0x806d2ec4 */ // 0x806D2E6C
    /* lis r27, 0 */ // 0x806D2E70
    r27 = r27 + 0; // 0x806D2E74
    if (==) goto 0x0x806d2ec0;
    r12 = *(0 + r30); // lwz @ 0x806D2E7C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D2E84
    /* mtctr r12 */ // 0x806D2E88
    /* bctrl  */ // 0x806D2E8C
    /* b 0x806d2ea8 */ // 0x806D2E90
    if (!=) goto 0x0x806d2ea4;
    /* li r0, 1 */ // 0x806D2E9C
    /* b 0x806d2eb4 */ // 0x806D2EA0
    r3 = *(0 + r3); // lwz @ 0x806D2EA4
    if (!=) goto 0x0x806d2e94;
    /* li r0, 0 */ // 0x806D2EB0
    if (==) goto 0x0x806d2ec0;
    /* b 0x806d2ec4 */ // 0x806D2EBC
    /* li r30, 0 */ // 0x806D2EC0
    r0 = *(0x68 + r28); // lwz @ 0x806D2EC4
    if (==) goto 0x0x806d2efc;
    if (==) goto 0x0x806d2f70;
    if (==) goto 0x0x806d2fe4;
    if (==) goto 0x0x806d3040;
    if (==) goto 0x0x806d30b4;
    if (==) goto 0x0x806d312c;
    /* b 0x806d31a0 */ // 0x806D2EF8
    r3 = r30 + 0x290; // 0x806D2EFC
    /* li r4, 0x1bbc */ // 0x806D2F00
    /* li r5, 0 */ // 0x806D2F04
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D2F0C
    /* li r4, 0x1bbd */ // 0x806D2F10
    /* li r5, 0 */ // 0x806D2F14
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x578; // 0x806D2F1C
    /* li r4, 0x1bbe */ // 0x806D2F20
    /* li r5, 0 */ // 0x806D2F24
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* li r27, 0 */ // 0x806D2F2C
    *(0xed8 + r30) = r27; // stw @ 0x806D2F30
    r3 = r30 + 0x7cc; // 0x806D2F34
    /* li r4, 0x1bbf */ // 0x806D2F38
    /* li r5, 0 */ // 0x806D2F3C
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    *(0xedc + r30) = r27; // stw @ 0x806D2F44
    /* lis r3, 0 */ // 0x806D2F48
    r3 = *(0 + r3); // lwz @ 0x806D2F4C
    /* addis r3, r3, 2 */ // 0x806D2F50
    r3 = *(0x4ffc + r3); // lwz @ 0x806D2F54
    /* addis r3, r3, 2 */ // 0x806D2F58
    r0 = *(0x330c + r3); // lwz @ 0x806D2F5C
    /* clrlwi r0, r0, 0x1f */ // 0x806D2F60
    /* xori r0, r0, 1 */ // 0x806D2F64
    *(0xeec + r30) = r0; // stb @ 0x806D2F68
    /* b 0x806d31a0 */ // 0x806D2F6C
    r3 = r30 + 0x290; // 0x806D2F70
    /* li r4, 0x1c52 */ // 0x806D2F74
    /* li r5, 0 */ // 0x806D2F78
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D2F80
    /* li r4, 0x1c54 */ // 0x806D2F84
    /* li r5, 0 */ // 0x806D2F88
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x578; // 0x806D2F90
    /* li r4, 0x1c55 */ // 0x806D2F94
    /* li r5, 0 */ // 0x806D2F98
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* li r27, 0 */ // 0x806D2FA0
    *(0xed8 + r30) = r27; // stw @ 0x806D2FA4
    r3 = r30 + 0x7cc; // 0x806D2FA8
    /* li r4, 0x1c56 */ // 0x806D2FAC
    /* li r5, 0 */ // 0x806D2FB0
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    *(0xedc + r30) = r27; // stw @ 0x806D2FB8
    /* lis r3, 0 */ // 0x806D2FBC
    r3 = *(0 + r3); // lwz @ 0x806D2FC0
    /* addis r3, r3, 2 */ // 0x806D2FC4
    r3 = *(0x4ffc + r3); // lwz @ 0x806D2FC8
    /* addis r3, r3, 2 */ // 0x806D2FCC
    r0 = *(0x330c + r3); // lwz @ 0x806D2FD0
    r0 = r0 rlwinm 0x1f; // rlwinm
    /* xori r0, r0, 1 */ // 0x806D2FD8
    *(0xeec + r30) = r0; // stb @ 0x806D2FDC
    /* b 0x806d31a0 */ // 0x806D2FE0
    r3 = r30 + 0x290; // 0x806D2FE4
    /* li r4, 0x1c84 */ // 0x806D2FE8
    /* li r5, 0 */ // 0x806D2FEC
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D2FF4
    /* li r4, 0x1c86 */ // 0x806D2FF8
    /* li r5, 0 */ // 0x806D2FFC
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x578; // 0x806D3004
    /* li r4, 0x1c87 */ // 0x806D3008
    /* li r5, 0 */ // 0x806D300C
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* li r0, 0 */ // 0x806D3014
    *(0xed8 + r30) = r0; // stw @ 0x806D3018
    r3 = r30 + 0x7cc; // 0x806D301C
    /* li r4, 0x1c88 */ // 0x806D3020
    /* li r5, 0 */ // 0x806D3024
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* li r0, 0x1c8a */ // 0x806D302C
    *(0xedc + r30) = r0; // stw @ 0x806D3030
    /* li r0, 1 */ // 0x806D3034
    *(0xeec + r30) = r0; // stb @ 0x806D3038
    /* b 0x806d31a0 */ // 0x806D303C
    r3 = r30 + 0x290; // 0x806D3040
    /* li r4, 0x1c84 */ // 0x806D3044
    /* li r5, 0 */ // 0x806D3048
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D3050
    /* li r4, 0x1cb7 */ // 0x806D3054
    /* li r5, 0 */ // 0x806D3058
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x578; // 0x806D3060
    /* li r4, 0x1cb8 */ // 0x806D3064
    /* li r5, 0 */ // 0x806D3068
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* li r0, 0x1cbb */ // 0x806D3070
    *(0xed8 + r30) = r0; // stw @ 0x806D3074
    r3 = r30 + 0x7cc; // 0x806D3078
    /* li r4, 0x1cb9 */ // 0x806D307C
    /* li r5, 0 */ // 0x806D3080
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* li r0, 0x1cbc */ // 0x806D3088
    *(0xedc + r30) = r0; // stw @ 0x806D308C
    r3 = r30 + 0xa20; // 0x806D3090
    /* li r4, 0x1cba */ // 0x806D3094
    /* li r5, 0 */ // 0x806D3098
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* li r0, 0 */ // 0x806D30A0
    *(0xee0 + r30) = r0; // stw @ 0x806D30A4
    /* li r0, 2 */ // 0x806D30A8
    *(0xeec + r30) = r0; // stb @ 0x806D30AC
    /* b 0x806d31a0 */ // 0x806D30B0
    r3 = r30 + 0x290; // 0x806D30B4
    /* li r4, 0x1ce8 */ // 0x806D30B8
    /* li r5, 0 */ // 0x806D30BC
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D30C4
    /* li r4, 0x1cea */ // 0x806D30C8
    /* li r5, 0 */ // 0x806D30CC
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x578; // 0x806D30D4
    /* li r4, 0x1ceb */ // 0x806D30D8
    /* li r5, 0 */ // 0x806D30DC
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* li r0, 0 */ // 0x806D30E4
    *(0xed8 + r30) = r0; // stw @ 0x806D30E8
    r3 = r30 + 0x7cc; // 0x806D30EC
    /* li r4, 0x1cec */ // 0x806D30F0
    /* li r5, 0 */ // 0x806D30F4
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* li r0, 0x1cee */ // 0x806D30FC
    *(0xedc + r30) = r0; // stw @ 0x806D3100
    /* lis r3, 0 */ // 0x806D3104
    r3 = *(0 + r3); // lwz @ 0x806D3108
    /* addis r3, r3, 2 */ // 0x806D310C
    r3 = *(0x4ffc + r3); // lwz @ 0x806D3110
    /* addis r3, r3, 2 */ // 0x806D3114
    r0 = *(0x330c + r3); // lwz @ 0x806D3118
    r0 = r0 rlwinm 0x1c; // rlwinm
    /* xori r0, r0, 1 */ // 0x806D3120
    *(0xeec + r30) = r0; // stb @ 0x806D3124
    /* b 0x806d31a0 */ // 0x806D3128
    r3 = r30 + 0x290; // 0x806D312C
    /* li r4, 0x1d4c */ // 0x806D3130
    /* li r5, 0 */ // 0x806D3134
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r30 + 0x404; // 0x806D313C
    /* li r4, 0x1d4e */ // 0x806D3140
    /* li r5, 0 */ // 0x806D3144
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x578; // 0x806D314C
    /* li r4, 0x1d4f */ // 0x806D3150
    /* li r5, 0 */ // 0x806D3154
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* li r0, 0 */ // 0x806D315C
    *(0xed8 + r30) = r0; // stw @ 0x806D3160
    r3 = r30 + 0x7cc; // 0x806D3164
    /* li r4, 0x1d50 */ // 0x806D3168
    /* li r5, 0 */ // 0x806D316C
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    /* li r0, 0x1d53 */ // 0x806D3174
    *(0xedc + r30) = r0; // stw @ 0x806D3178
    /* lis r3, 0 */ // 0x806D317C
    r3 = *(0 + r3); // lwz @ 0x806D3180
    /* addis r3, r3, 2 */ // 0x806D3184
    r3 = *(0x4ffc + r3); // lwz @ 0x806D3188
    /* addis r3, r3, 2 */ // 0x806D318C
    r0 = *(0x330c + r3); // lwz @ 0x806D3190
    r0 = r0 rlwinm 0x1b; // rlwinm
    /* xori r0, r0, 1 */ // 0x806D3198
    *(0xeec + r30) = r0; // stb @ 0x806D319C
    r12 = *(0 + r28); // lwz @ 0x806D31A0
    r3 = r28;
    r4 = r31;
    r5 = r29;
    r12 = *(0x24 + r12); // lwz @ 0x806D31B0
    /* mtctr r12 */ // 0x806D31B4
    /* bctrl  */ // 0x806D31B8
    /* li r0, 2 */ // 0x806D31BC
    *(0x6c + r28) = r0; // stw @ 0x806D31C0
    r0 = *(0x24 + r1); // lwz @ 0x806D31C8
    return;
}