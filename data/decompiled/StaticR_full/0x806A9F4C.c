/* Function at 0x806A9F4C, size=504 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 21 function(s) */

int FUN_806A9F4C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806A9F54
    /* li r5, 0 */ // 0x806A9F58
    *(0x14 + r1) = r0; // stw @ 0x806A9F5C
    *(0xc + r1) = r31; // stw @ 0x806A9F60
    *(8 + r1) = r30; // stw @ 0x806A9F64
    r30 = r3;
    r12 = *(0x80 + r3); // lwz @ 0x806A9F6C
    r12 = *(0x10 + r12); // lwz @ 0x806A9F70
    /* mtctr r12 */ // 0x806A9F74
    r3 = r3 + 0x80; // 0x806A9F78
    /* bctrl  */ // 0x806A9F7C
    r3 = r30;
    r4 = r30 + 0x80; // 0x806A9F84
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x80; // 0x806A9F8C
    /* li r4, 1 */ // 0x806A9F90
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30 + 0x80; // 0x806A9F98
    r5 = r30 + 0x58; // 0x806A9F9C
    /* li r4, 1 */ // 0x806A9FA0
    /* li r6, 0 */ // 0x806A9FA4
    /* li r7, 0 */ // 0x806A9FA8
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30;
    /* li r4, 5 */ // 0x806A9FB4
    FUN_80671C1C(r6, r7, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x2a4; // 0x806A9FC0
    /* li r4, 0 */ // 0x806A9FC4
    /* li r6, 0 */ // 0x806A9FC8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x2a4; // 0x806A9FD0
    /* li r4, 0 */ // 0x806A9FD4
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30;
    r5 = r30 + 0x418; // 0x806A9FE0
    /* li r4, 1 */ // 0x806A9FE4
    /* li r6, 0 */ // 0x806A9FE8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806A9FF0
    r3 = r30 + 0x418; // 0x806A9FF4
    r31 = r31 + 0; // 0x806A9FF8
    r4 = r31 + 0x66; // 0x806A9FFC
    r5 = r31 + 0x75; // 0x806AA000
    r6 = r31 + 0x8d; // 0x806AA004
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30 + 0x418; // 0x806AA00C
    /* li r4, 0x1cea */ // 0x806AA010
    /* li r5, 0 */ // 0x806AA014
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x58c; // 0x806AA020
    /* li r4, 2 */ // 0x806AA024
    /* li r6, 0 */ // 0x806AA028
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x58c; // 0x806AA030
    r4 = r31 + 0x9f; // 0x806AA034
    r5 = r31 + 0xa6; // 0x806AA038
    r6 = r31 + 0xb9; // 0x806AA03C
    /* li r7, 1 */ // 0x806AA040
    /* li r8, 0 */ // 0x806AA044
    /* li r9, 0 */ // 0x806AA048
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x806AA050
    *(0x7cc + r30) = r0; // stw @ 0x806AA054
    r3 = r30 + 0x58c; // 0x806AA058
    r4 = r30 + 0x44; // 0x806AA05C
    /* li r5, 0 */ // 0x806AA060
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x58c; // 0x806AA068
    /* li r4, 0x1ceb */ // 0x806AA06C
    /* li r5, 0 */ // 0x806AA070
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x7e0; // 0x806AA07C
    /* li r4, 3 */ // 0x806AA080
    /* li r6, 0 */ // 0x806AA084
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x7e0; // 0x806AA08C
    r4 = r31 + 0xc9; // 0x806AA090
    r5 = r31 + 0xd0; // 0x806AA094
    r6 = r31 + 0xe3; // 0x806AA098
    /* li r7, 1 */ // 0x806AA09C
    /* li r8, 0 */ // 0x806AA0A0
    /* li r9, 0 */ // 0x806AA0A4
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x806AA0AC
    *(0xa20 + r30) = r0; // stw @ 0x806AA0B0
    r3 = r30 + 0x7e0; // 0x806AA0B4
    r4 = r30 + 0x44; // 0x806AA0B8
    /* li r5, 0 */ // 0x806AA0BC
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x7e0; // 0x806AA0C4
    /* li r4, 0x1cec */ // 0x806AA0C8
    /* li r5, 0 */ // 0x806AA0CC
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0xa34; // 0x806AA0D8
    /* li r4, 4 */ // 0x806AA0DC
    /* li r6, 0 */ // 0x806AA0E0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0xa34; // 0x806AA0E8
    r4 = r31 + 0xf3; // 0x806AA0EC
    r5 = r31 + 0xfa; // 0x806AA0F0
    r6 = r31 + 0xff; // 0x806AA0F4
    /* li r7, 1 */ // 0x806AA0F8
    /* li r8, 0 */ // 0x806AA0FC
    /* li r9, 1 */ // 0x806AA100
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 4 */ // 0x806AA108
    *(0xc74 + r30) = r0; // stw @ 0x806AA10C
    r3 = r30 + 0xa34; // 0x806AA110
    r4 = r30 + 0x44; // 0x806AA114
    /* li r5, 0 */ // 0x806AA118
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x7e0; // 0x806AA120
    /* li r4, 0 */ // 0x806AA124
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806AA12C
    r31 = *(0xc + r1); // lwz @ 0x806AA130
    r30 = *(8 + r1); // lwz @ 0x806AA134
    return;
}