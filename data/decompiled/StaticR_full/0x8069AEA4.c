/* Function at 0x8069AEA4, size=460 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r26 */
/* Calls: 9 function(s) */

int FUN_8069AEA4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r26 */
    /* stmw r26, 0x38(r1) */ // 0x8069AEB0
    r31 = r3;
    r26 = r5;
    r30 = r6;
    r29 = r7;
    r27 = r8;
    r28 = r9;
    *(0x234 + r3) = r4; // stw @ 0x8069AECC
    r4 = r31;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x8069AEDC
    r4 = r26;
    r5 = r30;
    r6 = r29;
    r7 = r7 + 0; // 0x8069AEF0
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8069AEFC
    FUN_8064E32C(r3, r7, r3, r4); // bl 0x8064E32C
    /* lis r4, 0 */ // 0x8069AF04
    r3 = r31 + 0xa8; // 0x8069AF08
    r4 = r4 + 0; // 0x8069AF0C
    r4 = r4 + 0x24; // 0x8069AF10
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    r29 = r3;
    if (!=) goto 0x0x8069af2c;
    /* li r29, 0 */ // 0x8069AF24
    /* b 0x8069af7c */ // 0x8069AF28
    /* lis r30, 0 */ // 0x8069AF2C
    r30 = r30 + 0; // 0x8069AF30
    if (==) goto 0x0x8069af78;
    r12 = *(0 + r3); // lwz @ 0x8069AF38
    r12 = *(0xc + r12); // lwz @ 0x8069AF3C
    /* mtctr r12 */ // 0x8069AF40
    /* bctrl  */ // 0x8069AF44
    /* b 0x8069af60 */ // 0x8069AF48
    if (!=) goto 0x0x8069af5c;
    /* li r0, 1 */ // 0x8069AF54
    /* b 0x8069af6c */ // 0x8069AF58
    r3 = *(0 + r3); // lwz @ 0x8069AF5C
    if (!=) goto 0x0x8069af4c;
    /* li r0, 0 */ // 0x8069AF68
    if (==) goto 0x0x8069af78;
    /* b 0x8069af7c */ // 0x8069AF74
    /* li r29, 0 */ // 0x8069AF78
    r4 = r31 + 0x1f8; // 0x8069AF7C
    r0 = r31 + 0x20c; // 0x8069AF80
    *(0x198 + r31) = r4; // stw @ 0x8069AF84
    r5 = r27;
    r6 = r28;
    r3 = r31 + 0x174; // 0x8069AF90
    *(0x180 + r31) = r29; // stw @ 0x8069AF94
    /* li r4, 0 */ // 0x8069AF98
    *(0x19c + r31) = r0; // stw @ 0x8069AF9C
    FUN_80669214(r6, r3, r4); // bl 0x80669214
    r3 = r31 + 0x174; // 0x8069AFA4
    r5 = r31 + 0x220; // 0x8069AFA8
    /* li r4, 0 */ // 0x8069AFAC
    /* li r6, 0 */ // 0x8069AFB0
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    r3 = *(0x64 + r31); // lwz @ 0x8069AFB8
    r3 = *(0xc + r3); // lwz @ 0x8069AFBC
    r30 = *(0x38 + r3); // lwz @ 0x8069AFC0
    if (!=) goto 0x0x8069afd4;
    /* li r30, 0 */ // 0x8069AFCC
    /* b 0x8069b028 */ // 0x8069AFD0
    /* lis r29, 0 */ // 0x8069AFD4
    r29 = r29 + 0; // 0x8069AFD8
    if (==) goto 0x0x8069b024;
    r12 = *(0 + r30); // lwz @ 0x8069AFE0
    r3 = r30;
    r12 = *(8 + r12); // lwz @ 0x8069AFE8
    /* mtctr r12 */ // 0x8069AFEC
    /* bctrl  */ // 0x8069AFF0
    /* b 0x8069b00c */ // 0x8069AFF4
    if (!=) goto 0x0x8069b008;
    /* li r0, 1 */ // 0x8069B000
    /* b 0x8069b018 */ // 0x8069B004
    r3 = *(0 + r3); // lwz @ 0x8069B008
    if (!=) goto 0x0x8069aff8;
    /* li r0, 0 */ // 0x8069B014
    if (==) goto 0x0x8069b024;
    /* b 0x8069b028 */ // 0x8069B020
    /* li r30, 0 */ // 0x8069B024
    r3 = r30;
    r4 = r31 + 0x174; // 0x8069B02C
    FUN_8066A310(r3, r4); // bl 0x8066A310
    /* lis r30, 0 */ // 0x8069B034
    r3 = r31 + 0xa8; // 0x8069B038
    r30 = r30 + 0; // 0x8069B03C
    r4 = r30 + 0x2a; // 0x8069B040
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    *(0x238 + r31) = r3; // stw @ 0x8069B048
    r4 = r30 + 0x38; // 0x8069B04C
    r3 = r31 + 0xa8; // 0x8069B050
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    *(0x23c + r31) = r3; // stw @ 0x8069B058
    r0 = *(0x54 + r1); // lwz @ 0x8069B060
    return;
}