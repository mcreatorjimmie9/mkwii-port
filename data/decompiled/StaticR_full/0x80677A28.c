/* Function at 0x80677A28, size=556 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 19 function(s) */

int FUN_80677A28(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x80677A30
    /* li r0, 0 */ // 0x80677A38
    *(0x3c + r1) = r31; // stw @ 0x80677A3C
    *(0x38 + r1) = r30; // stw @ 0x80677A40
    *(0x34 + r1) = r29; // stw @ 0x80677A44
    r29 = r3;
    *(0x44 + r3) = r0; // stw @ 0x80677A4C
    r4 = *(0 + r4); // lwz @ 0x80677A50
    r4 = *(0 + r4); // lwz @ 0x80677A54
    r0 = *(0 + r4); // lwz @ 0x80677A58
    if (<) goto 0x0x80677a6c;
    if (<=) goto 0x0x80677a8c;
    if (<) goto 0x0x80677a7c;
    if (<=) goto 0x0x80677a98;
    if (<) goto 0x0x80677aa0;
    if (>) goto 0x0x80677aa0;
    /* li r0, 1 */ // 0x80677A8C
    *(0x18c + r3) = r0; // stw @ 0x80677A90
    /* b 0x80677aa0 */ // 0x80677A94
    /* li r0, 2 */ // 0x80677A98
    *(0x18c + r3) = r0; // stw @ 0x80677A9C
    /* li r0, 0 */ // 0x80677AA0
    *(0x1c10 + r3) = r0; // stw @ 0x80677AA4
    /* li r4, 1 */ // 0x80677AA8
    /* li r5, 0 */ // 0x80677AAC
    *(0x1c0c + r3) = r0; // stw @ 0x80677AB0
    r12 = *(0x48 + r3); // lwzu @ 0x80677AB4
    r12 = *(0x10 + r12); // lwz @ 0x80677AB8
    /* mtctr r12 */ // 0x80677ABC
    /* bctrl  */ // 0x80677AC0
    r3 = r29;
    r4 = r29 + 0x48; // 0x80677AC8
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r29 + 0x48; // 0x80677AD0
    r5 = r29 + 0x1cc8; // 0x80677AD4
    /* li r4, 1 */ // 0x80677AD8
    /* li r6, 0 */ // 0x80677ADC
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r29 + 0x48; // 0x80677AE4
    r5 = r29 + 0x1cdc; // 0x80677AE8
    /* li r4, 0 */ // 0x80677AEC
    /* li r6, 0 */ // 0x80677AF0
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r29;
    /* li r4, 0x10 */ // 0x80677AFC
    FUN_80671C1C(r4, r6, r3, r4); // bl 0x80671C1C
    r3 = r29;
    r5 = r29 + 0x190; // 0x80677B08
    /* li r4, 0 */ // 0x80677B0C
    /* li r6, 0 */ // 0x80677B10
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r29 + 0x190; // 0x80677B18
    /* li r4, 0 */ // 0x80677B1C
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    /* li r0, 1 */ // 0x80677B24
    *(0x210 + r29) = r0; // stb @ 0x80677B28
    r30 = r29 + 0x304; // 0x80677B2C
    /* li r31, 0 */ // 0x80677B30
    r3 = r29;
    r5 = r30;
    r4 = r31 + 1; // 0x80677B3C
    /* li r6, 0 */ // 0x80677B40
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30;
    r4 = r31;
    FUN_806769E4(r4, r6, r3, r4); // bl 0x806769E4
    r31 = r31 + 1; // 0x80677B54
    r30 = r30 + 0x1b8; // 0x80677B58
    if (<) goto 0x0x80677b34;
    r3 = r29;
    r5 = r29 + 0x17a4; // 0x80677B68
    /* li r4, 0xd */ // 0x80677B6C
    /* li r6, 0 */ // 0x80677B70
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x80677B78
    r31 = r31 + 0; // 0x80677B80
    r4 = r29 + 0x17a4; // 0x80677B84
    r30 = r31 + 0x10d; // 0x80677B88
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r7, 0 */ // 0x80677B90
    r6 = r30;
    r4 = r31 + 0x129; // 0x80677B9C
    r5 = r31 + 0x12f; // 0x80677BA0
    r7 = r7 + 0; // 0x80677BA4
    FUN_8064E36C(r6, r3, r4, r5, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80677BB0
    FUN_8064E32C(r5, r7, r3, r4); // bl 0x8064E32C
    r3 = r29;
    r5 = r29 + 0x1918; // 0x80677BBC
    /* li r4, 0xe */ // 0x80677BC0
    /* li r6, 0 */ // 0x80677BC4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r29 + 0x1918; // 0x80677BCC
    r4 = r29 + 0x1cbc; // 0x80677BD0
    FUN_8064EEA8(r4, r6, r3, r4); // bl 0x8064EEA8
    r3 = r29;
    r5 = r29 + 0x1a94; // 0x80677BDC
    /* li r4, 0xf */ // 0x80677BE0
    /* li r6, 0 */ // 0x80677BE4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r29 + 0x1a94; // 0x80677BEC
    r4 = r31 + 0x145; // 0x80677BF0
    r5 = r31 + 0x14c; // 0x80677BF4
    r6 = r31 + 0x151; // 0x80677BF8
    /* li r7, 1 */ // 0x80677BFC
    FUN_808D55E8(r3, r4, r5, r6, r7); // bl 0x808D55E8
    /* li r0, 1 */ // 0x80677C04
    *(0x1b14 + r29) = r0; // stb @ 0x80677C08
    FUN_805ABAFC(r6, r7); // bl 0x805ABAFC
    r4 = r3;
    r3 = r29 + 0x1c20; // 0x80677C14
    r6 = *(0xc94 + r4); // lwz @ 0x80677C18
    /* li r4, 0xc */ // 0x80677C1C
    /* li r5, 4 */ // 0x80677C20
    FUN_8066D808(r4, r3, r4, r5); // bl 0x8066D808
    r3 = r29;
    /* li r4, 0 */ // 0x80677C2C
    /* li r5, 0 */ // 0x80677C30
    FUN_806724E0(r5, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x44 + r1); // lwz @ 0x80677C38
    r31 = *(0x3c + r1); // lwz @ 0x80677C3C
    r30 = *(0x38 + r1); // lwz @ 0x80677C40
    r29 = *(0x34 + r1); // lwz @ 0x80677C44
    return;
}