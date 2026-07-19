/* Function at 0x806A8D78, size=988 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_806A8D78(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806A8D8C
    *(0x14 + r1) = r29; // stw @ 0x806A8D90
    r4 = *(0x58 + r3); // lwz @ 0x806A8D94
    r0 = r4 + -1; // 0x806A8D98
    if (<=) goto 0x0x806a8dd0;
    if (==) goto 0x0x806a8de4;
    if (==) goto 0x0x806a8e98;
    if (==) goto 0x0x806a8f80;
    if (==) goto 0x0x806a90f4;
    if (==) goto 0x0x806a9118;
    /* b 0x806a9138 */ // 0x806A8DCC
    /* lis r5, 0 */ // 0x806A8DD0
    /* li r4, 0 */ // 0x806A8DD4
    /* lfs f1, 0(r5) */ // 0x806A8DD8
    FUN_80671C48(r5, r4); // bl 0x80671C48
    /* b 0x806a9138 */ // 0x806A8DE0
    /* lis r3, 0 */ // 0x806A8DE4
    r3 = *(0 + r3); // lwz @ 0x806A8DE8
    r3 = *(0 + r3); // lwz @ 0x806A8DEC
    r29 = *(0x21c + r3); // lwz @ 0x806A8DF0
    if (!=) goto 0x0x806a8e04;
    /* li r29, 0 */ // 0x806A8DFC
    /* b 0x806a8e58 */ // 0x806A8E00
    /* lis r30, 0 */ // 0x806A8E04
    r30 = r30 + 0; // 0x806A8E08
    if (==) goto 0x0x806a8e54;
    r12 = *(0 + r29); // lwz @ 0x806A8E10
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A8E18
    /* mtctr r12 */ // 0x806A8E1C
    /* bctrl  */ // 0x806A8E20
    /* b 0x806a8e3c */ // 0x806A8E24
    if (!=) goto 0x0x806a8e38;
    /* li r0, 1 */ // 0x806A8E30
    /* b 0x806a8e48 */ // 0x806A8E34
    r3 = *(0 + r3); // lwz @ 0x806A8E38
    if (!=) goto 0x0x806a8e28;
    /* li r0, 0 */ // 0x806A8E44
    if (==) goto 0x0x806a8e54;
    /* b 0x806a8e58 */ // 0x806A8E50
    /* li r29, 0 */ // 0x806A8E54
    /* li r0, 1 */ // 0x806A8E58
    *(0xa30 + r29) = r0; // stw @ 0x806A8E5C
    r3 = r29 + 0x404; // 0x806A8E60
    /* li r4, 0x1cf0 */ // 0x806A8E64
    /* li r5, 0 */ // 0x806A8E68
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r12 = *(0 + r31); // lwz @ 0x806A8E70
    r3 = r31;
    /* li r4, 0x85 */ // 0x806A8E78
    /* li r5, 0 */ // 0x806A8E7C
    r12 = *(0x24 + r12); // lwz @ 0x806A8E80
    /* mtctr r12 */ // 0x806A8E84
    /* bctrl  */ // 0x806A8E88
    /* li r0, 4 */ // 0x806A8E8C
    *(0x58 + r31) = r0; // stw @ 0x806A8E90
    /* b 0x806a9138 */ // 0x806A8E94
    /* lis r3, 0 */ // 0x806A8E98
    r3 = *(0 + r3); // lwz @ 0x806A8E9C
    r3 = *(0 + r3); // lwz @ 0x806A8EA0
    r29 = *(0x21c + r3); // lwz @ 0x806A8EA4
    if (!=) goto 0x0x806a8eb8;
    /* li r29, 0 */ // 0x806A8EB0
    /* b 0x806a8f0c */ // 0x806A8EB4
    /* lis r30, 0 */ // 0x806A8EB8
    r30 = r30 + 0; // 0x806A8EBC
    if (==) goto 0x0x806a8f08;
    r12 = *(0 + r29); // lwz @ 0x806A8EC4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A8ECC
    /* mtctr r12 */ // 0x806A8ED0
    /* bctrl  */ // 0x806A8ED4
    /* b 0x806a8ef0 */ // 0x806A8ED8
    if (!=) goto 0x0x806a8eec;
    /* li r0, 1 */ // 0x806A8EE4
    /* b 0x806a8efc */ // 0x806A8EE8
    r3 = *(0 + r3); // lwz @ 0x806A8EEC
    if (!=) goto 0x0x806a8edc;
    /* li r0, 0 */ // 0x806A8EF8
    if (==) goto 0x0x806a8f08;
    /* b 0x806a8f0c */ // 0x806A8F04
    /* li r29, 0 */ // 0x806A8F08
    r0 = *(0xa34 + r29); // lwz @ 0x806A8F0C
    if (!=) goto 0x0x806a8f40;
    r12 = *(0 + r31); // lwz @ 0x806A8F18
    r3 = r31;
    /* li r4, 0x86 */ // 0x806A8F20
    /* li r5, 0 */ // 0x806A8F24
    r12 = *(0x24 + r12); // lwz @ 0x806A8F28
    /* mtctr r12 */ // 0x806A8F2C
    /* bctrl  */ // 0x806A8F30
    /* li r0, 5 */ // 0x806A8F34
    *(0x58 + r31) = r0; // stw @ 0x806A8F38
    /* b 0x806a9138 */ // 0x806A8F3C
    /* li r0, 0 */ // 0x806A8F40
    *(0xa30 + r29) = r0; // stw @ 0x806A8F44
    r3 = r29 + 0x404; // 0x806A8F48
    /* li r4, 0x1ce9 */ // 0x806A8F4C
    /* li r5, 0 */ // 0x806A8F50
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r12 = *(0 + r31); // lwz @ 0x806A8F58
    r3 = r31;
    /* li r4, 0x85 */ // 0x806A8F60
    /* li r5, 1 */ // 0x806A8F64
    r12 = *(0x24 + r12); // lwz @ 0x806A8F68
    /* mtctr r12 */ // 0x806A8F6C
    /* bctrl  */ // 0x806A8F70
    /* li r0, 3 */ // 0x806A8F74
    *(0x58 + r31) = r0; // stw @ 0x806A8F78
    /* b 0x806a9138 */ // 0x806A8F7C
    /* lis r3, 0 */ // 0x806A8F80
    r3 = *(0 + r3); // lwz @ 0x806A8F84
    r3 = *(0 + r3); // lwz @ 0x806A8F88
    r29 = *(0x220 + r3); // lwz @ 0x806A8F8C
    if (!=) goto 0x0x806a8fa0;
    /* li r29, 0 */ // 0x806A8F98
    /* b 0x806a8ff4 */ // 0x806A8F9C
    /* lis r30, 0 */ // 0x806A8FA0
    r30 = r30 + 0; // 0x806A8FA4
    if (==) goto 0x0x806a8ff0;
    r12 = *(0 + r29); // lwz @ 0x806A8FAC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A8FB4
    /* mtctr r12 */ // 0x806A8FB8
    /* bctrl  */ // 0x806A8FBC
    /* b 0x806a8fd8 */ // 0x806A8FC0
    if (!=) goto 0x0x806a8fd4;
    /* li r0, 1 */ // 0x806A8FCC
    /* b 0x806a8fe4 */ // 0x806A8FD0
    r3 = *(0 + r3); // lwz @ 0x806A8FD4
    if (!=) goto 0x0x806a8fc4;
    /* li r0, 0 */ // 0x806A8FE0
    if (==) goto 0x0x806a8ff0;
    /* b 0x806a8ff4 */ // 0x806A8FEC
    /* li r29, 0 */ // 0x806A8FF0
    r0 = *(0xc98 + r29); // lwz @ 0x806A8FF4
    if (==) goto 0x0x806a9014;
    if (==) goto 0x0x806a9028;
    if (==) goto 0x0x806a9040;
    /* b 0x806a9138 */ // 0x806A9010
    /* li r0, 1 */ // 0x806A9014
    *(0x6d + r31) = r0; // stb @ 0x806A9018
    r3 = r31;
    FUN_806A926C(r3); // bl 0x806A926C
    /* b 0x806a9138 */ // 0x806A9024
    /* lis r4, 0 */ // 0x806A9028
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x806A9030
    /* li r4, 0 */ // 0x806A9034
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x806a9138 */ // 0x806A903C
    /* lis r3, 0 */ // 0x806A9040
    r3 = *(0 + r3); // lwz @ 0x806A9044
    r3 = *(0 + r3); // lwz @ 0x806A9048
    r29 = *(0x21c + r3); // lwz @ 0x806A904C
    if (!=) goto 0x0x806a9060;
    /* li r29, 0 */ // 0x806A9058
    /* b 0x806a90b4 */ // 0x806A905C
    /* lis r30, 0 */ // 0x806A9060
    r30 = r30 + 0; // 0x806A9064
    if (==) goto 0x0x806a90b0;
    r12 = *(0 + r29); // lwz @ 0x806A906C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A9074
    /* mtctr r12 */ // 0x806A9078
    /* bctrl  */ // 0x806A907C
    /* b 0x806a9098 */ // 0x806A9080
    if (!=) goto 0x0x806a9094;
    /* li r0, 1 */ // 0x806A908C
    /* b 0x806a90a4 */ // 0x806A9090
    r3 = *(0 + r3); // lwz @ 0x806A9094
    if (!=) goto 0x0x806a9084;
    /* li r0, 0 */ // 0x806A90A0
    if (==) goto 0x0x806a90b0;
    /* b 0x806a90b4 */ // 0x806A90AC
    /* li r29, 0 */ // 0x806A90B0
    /* li r0, 1 */ // 0x806A90B4
    *(0xa30 + r29) = r0; // stw @ 0x806A90B8
    r3 = r29 + 0x404; // 0x806A90BC
    /* li r4, 0x1cf0 */ // 0x806A90C0
    /* li r5, 0 */ // 0x806A90C4
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r12 = *(0 + r31); // lwz @ 0x806A90CC
    r3 = r31;
    /* li r4, 0x85 */ // 0x806A90D4
    /* li r5, 1 */ // 0x806A90D8
    r12 = *(0x24 + r12); // lwz @ 0x806A90DC
    /* mtctr r12 */ // 0x806A90E0
    /* bctrl  */ // 0x806A90E4
    /* li r0, 4 */ // 0x806A90E8
    *(0x58 + r31) = r0; // stw @ 0x806A90EC
    /* b 0x806a9138 */ // 0x806A90F0
    /* li r0, 0xe */ // 0x806A90F4
    *(0x58 + r3) = r0; // stw @ 0x806A90F8
    /* li r4, 0x89 */ // 0x806A90FC
    /* li r5, 0 */ // 0x806A9100
    r12 = *(0 + r3); // lwz @ 0x806A9104
    r12 = *(0x24 + r12); // lwz @ 0x806A9108
    /* mtctr r12 */ // 0x806A910C
    /* bctrl  */ // 0x806A9110
    /* b 0x806a9138 */ // 0x806A9114
    /* lis r5, 0 */ // 0x806A9118
    /* li r4, 0 */ // 0x806A911C
    /* lfs f1, 0(r5) */ // 0x806A9120
    FUN_80671C48(r5, r4); // bl 0x80671C48
    r3 = r31;
    /* li r4, 0x51 */ // 0x806A912C
    /* li r5, -1 */ // 0x806A9130
    FUN_806724B8(r3, r4, r5); // bl 0x806724B8
    r0 = *(0x24 + r1); // lwz @ 0x806A9138
    r31 = *(0x1c + r1); // lwz @ 0x806A913C
    r30 = *(0x18 + r1); // lwz @ 0x806A9140
    r29 = *(0x14 + r1); // lwz @ 0x806A9144
    return;
}