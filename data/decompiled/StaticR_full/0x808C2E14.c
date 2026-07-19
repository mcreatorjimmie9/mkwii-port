/* Function at 0x808C2E14, size=820 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 21 function(s) */

int FUN_808C2E14(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    /* lis r4, 0 */ // 0x808C2E28
    *(0x18 + r1) = r30; // stw @ 0x808C2E2C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808C2E34
    *(0x10 + r1) = r28; // stw @ 0x808C2E38
    r5 = *(0x240 + r31); // lwz @ 0x808C2E3C
    r3 = *(0 + r4); // lwz @ 0x808C2E40
    /* li r4, 0 */ // 0x808C2E44
    r0 = r5 + -1; // 0x808C2E48
    /* cntlzw r0, r0 */ // 0x808C2E4C
    r3 = r3 + 0x34; // 0x808C2E50
    /* srwi r5, r0, 5 */ // 0x808C2E54
    FUN_8067F484(r4, r3); // bl 0x8067F484
    r5 = *(0x240 + r31); // lwz @ 0x808C2E5C
    if (<=) goto 0x0x808c2eac;
    if (==) goto 0x0x808c2e7c;
    if (==) goto 0x0x808c2e8c;
    /* b 0x808c3128 */ // 0x808C2E78
    r3 = r30;
    r4 = r31;
    FUN_808B3CF4(r3, r4); // bl 0x808B3CF4
    /* b 0x808c3128 */ // 0x808C2E88
    r3 = r30;
    /* li r4, 0xced */ // 0x808C2E90
    /* li r5, 0 */ // 0x808C2E94
    FUN_808B4848(r3, r4, r5); // bl 0x808B4848
    r3 = r31;
    /* li r4, 0 */ // 0x808C2EA0
    FUN_8064A82C(r4, r5, r3, r4); // bl 0x8064A82C
    /* b 0x808c3128 */ // 0x808C2EA8
    /* lis r3, 0 */ // 0x808C2EAC
    r6 = *(0 + r3); // lwz @ 0x808C2EB0
    r0 = *(0x36 + r6); // lha @ 0x808C2EB4
    if (<) goto 0x0x808c2edc;
    /* lis r3, 1 */ // 0x808C2EC0
    /* clrlwi r4, r0, 0x18 */ // 0x808C2EC4
    r0 = r3 + -0x6c10; // 0x808C2EC8
    r0 = r0 * r4; // 0x808C2ECC
    r3 = r6 + r0; // 0x808C2ED0
    r29 = r3 + 0x38; // 0x808C2ED4
    /* b 0x808c2ee0 */ // 0x808C2ED8
    /* li r29, 0 */ // 0x808C2EDC
    /* li r0, 1 */ // 0x808C2EE4
    if (!=) goto 0x0x808c2ef0;
    /* li r0, 2 */ // 0x808C2EEC
    /* addis r3, r29, 1 */ // 0x808C2EF0
    /* lis r28, 0 */ // 0x808C2EF4
    *(-0x6edc + r3) = r0; // stw @ 0x808C2EF8
    r3 = *(0 + r28); // lwz @ 0x808C2EFC
    r3 = *(0x90 + r3); // lwz @ 0x808C2F00
    FUN_806845FC(); // bl 0x806845FC
    r3 = *(0 + r28); // lwz @ 0x808C2F08
    r3 = *(0 + r3); // lwz @ 0x808C2F0C
    r3 = *(0 + r3); // lwz @ 0x808C2F10
    FUN_80694774(); // bl 0x80694774
    if (!=) goto 0x0x808c2f5c;
    r4 = *(0x6c8 + r30); // lwz @ 0x808C2F20
    if (!=) goto 0x0x808c2f4c;
    /* li r0, -1 */ // 0x808C2F2C
    *(0x3e8 + r30) = r0; // stw @ 0x808C2F30
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 0 */ // 0x808C2F40
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x808c3128 */ // 0x808C2F48
    r3 = r30;
    r5 = r31;
    FUN_808B3FE8(r4, r3, r5); // bl 0x808B3FE8
    /* b 0x808c3128 */ // 0x808C2F58
    r3 = *(0 + r28); // lwz @ 0x808C2F5C
    r3 = *(0 + r3); // lwz @ 0x808C2F60
    r0 = *(0 + r3); // lwz @ 0x808C2F64
    if (<) goto 0x0x808c2f78;
    if (<=) goto 0x0x808c2f8c;
    if (<) goto 0x0x808c2fb4;
    if (<=) goto 0x0x808c2fa0;
    /* b 0x808c2fb4 */ // 0x808C2F88
    r3 = r30;
    r5 = r31;
    /* li r4, 0x1f */ // 0x808C2F94
    FUN_808B3FE8(r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808c3128 */ // 0x808C2F9C
    r3 = r30;
    r5 = r31;
    /* li r4, 0x2d */ // 0x808C2FA8
    FUN_808B3FE8(r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808c3128 */ // 0x808C2FB0
    /* lis r3, 0 */ // 0x808C2FB4
    r3 = *(0 + r3); // lwz @ 0x808C2FB8
    r0 = *(0x1760 + r3); // lwz @ 0x808C2FBC
    if (==) goto 0x0x808c2fd0;
    if (!=) goto 0x0x808c307c;
    FUN_808CFE7C(); // bl 0x808CFE7C
    /* addis r4, r29, 1 */ // 0x808C2FD4
    /* slwi r0, r3, 2 */ // 0x808C2FD8
    r3 = r4 + r0; // 0x808C2FDC
    r0 = *(-0x6ea8 + r3); // lwz @ 0x808C2FE0
    if (!=) goto 0x0x808c307c;
    /* lis r28, 0 */ // 0x808C2FEC
    r3 = *(0 + r28); // lwz @ 0x808C2FF0
    r0 = *(0x1760 + r3); // lwz @ 0x808C2FF4
    if (==) goto 0x0x808c300c;
    if (==) goto 0x0x808c3044;
    /* b 0x808c307c */ // 0x808C3008
    /* lis r29, 0 */ // 0x808C300C
    r3 = *(0 + r29); // lwz @ 0x808C3010
    r3 = *(0x98 + r3); // lwz @ 0x808C3014
    FUN_80661B1C(); // bl 0x80661B1C
    r4 = *(0 + r29); // lwz @ 0x808C301C
    r3 = r30;
    r6 = *(0 + r28); // lwz @ 0x808C3024
    r5 = r31;
    r7 = *(0x98 + r4); // lwz @ 0x808C302C
    /* li r4, 0x1b */ // 0x808C3030
    r0 = *(0xfc + r7); // lwz @ 0x808C3034
    *(0x1758 + r6) = r0; // stw @ 0x808C3038
    FUN_808B3FE8(r5, r4); // bl 0x808B3FE8
    /* b 0x808c3128 */ // 0x808C3040
    /* lis r29, 0 */ // 0x808C3044
    r3 = *(0 + r29); // lwz @ 0x808C3048
    r3 = *(0x98 + r3); // lwz @ 0x808C304C
    FUN_806615B0(); // bl 0x806615B0
    r4 = *(0 + r29); // lwz @ 0x808C3054
    r3 = r30;
    r6 = *(0 + r28); // lwz @ 0x808C305C
    r5 = r31;
    r7 = *(0x98 + r4); // lwz @ 0x808C3064
    /* li r4, 0x1a */ // 0x808C3068
    r0 = *(0x78 + r7); // lwz @ 0x808C306C
    *(0x1758 + r6) = r0; // stw @ 0x808C3070
    FUN_808B3FE8(r5, r4); // bl 0x808B3FE8
    /* b 0x808c3128 */ // 0x808C3078
    /* lis r3, 0 */ // 0x808C307C
    r3 = *(0 + r3); // lwz @ 0x808C3080
    r0 = *(0x1760 + r3); // lwz @ 0x808C3084
    if (!=) goto 0x0x808c30fc;
    /* lis r3, 0 */ // 0x808C3090
    /* li r4, 0 */ // 0x808C3094
    r3 = *(0 + r3); // lwz @ 0x808C3098
    r3 = *(0 + r3); // lwz @ 0x808C309C
    r0 = *(0x1f8 + r3); // lwz @ 0x808C30A0
    if (==) goto 0x0x808c30b8;
    /* li r3, 0x7c */ // 0x808C30AC
    FUN_808E74E4(r3); // bl 0x808E74E4
    r4 = *(0x83c + r3); // lwz @ 0x808C30B4
    if (!=) goto 0x0x808c30e4;
    /* lis r3, 0 */ // 0x808C30C0
    /* li r0, 5 */ // 0x808C30C4
    r6 = *(0 + r3); // lwz @ 0x808C30C8
    r3 = r30;
    r5 = r31;
    /* li r4, 0x1c */ // 0x808C30D4
    *(0x1764 + r6) = r0; // stw @ 0x808C30D8
    FUN_808B3FE8(r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808c3128 */ // 0x808C30E0
    /* lis r4, 0 */ // 0x808C30E4
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x808C30EC
    /* li r4, 0x2c */ // 0x808C30F0
    FUN_808B3E04(r4, r3, r4); // bl 0x808B3E04
    /* b 0x808c3128 */ // 0x808C30F8
    if (!=) goto 0x0x808c3118;
    r3 = r30;
    r5 = r31;
    /* li r4, 0x78 */ // 0x808C310C
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808c3128 */ // 0x808C3114
    r3 = r30;
    r5 = r31;
    /* li r4, 0x6e */ // 0x808C3120
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    r0 = *(0x24 + r1); // lwz @ 0x808C3128
    r31 = *(0x1c + r1); // lwz @ 0x808C312C
    r30 = *(0x18 + r1); // lwz @ 0x808C3130
    r29 = *(0x14 + r1); // lwz @ 0x808C3134
    r28 = *(0x10 + r1); // lwz @ 0x808C3138
    return;
}