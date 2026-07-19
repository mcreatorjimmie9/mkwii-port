/* Function at 0x80707E6C, size=268 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_80707E6C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80707E74
    /* li r5, 0 */ // 0x80707E78
    *(0x14 + r1) = r0; // stw @ 0x80707E7C
    *(0xc + r1) = r31; // stw @ 0x80707E80
    *(8 + r1) = r30; // stw @ 0x80707E84
    r30 = r3;
    r12 = *(0x6c + r3); // lwz @ 0x80707E8C
    r12 = *(0x10 + r12); // lwz @ 0x80707E90
    /* mtctr r12 */ // 0x80707E94
    r3 = r3 + 0x6c; // 0x80707E98
    /* bctrl  */ // 0x80707E9C
    r3 = r30;
    r4 = r30 + 0x6c; // 0x80707EA4
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30;
    /* li r4, 4 */ // 0x80707EB0
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x7c; // 0x80707EBC
    /* li r4, 0 */ // 0x80707EC0
    /* li r6, 0 */ // 0x80707EC4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x80707ECC
    r3 = r30 + 0x7c; // 0x80707ED0
    r31 = r31 + 0; // 0x80707ED4
    r4 = r31 + 0x63; // 0x80707ED8
    r5 = r31 + 0x72; // 0x80707EDC
    r6 = r31 + 0x7d; // 0x80707EE0
    FUN_8066D484(r3, r4, r5, r6); // bl 0x8066D484
    r3 = r30;
    r5 = r30 + 0x1f0; // 0x80707EEC
    /* li r4, 1 */ // 0x80707EF0
    /* li r6, 0 */ // 0x80707EF4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x1f0; // 0x80707EFC
    /* li r4, 0 */ // 0x80707F00
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30;
    r5 = r30 + 0x364; // 0x80707F0C
    /* li r4, 3 */ // 0x80707F10
    /* li r6, 0 */ // 0x80707F14
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x364; // 0x80707F1C
    r4 = r31 + 0x88; // 0x80707F20
    r5 = r31 + 0x97; // 0x80707F24
    r6 = r31 + 0xb1; // 0x80707F28
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30;
    r5 = r30 + 0x4d8; // 0x80707F34
    /* li r4, 2 */ // 0x80707F38
    /* li r6, 0 */ // 0x80707F3C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x4d8; // 0x80707F44
    r4 = r31 + 0xc6; // 0x80707F48
    r5 = r31 + 0xcc; // 0x80707F4C
    r6 = r31 + 0xe5; // 0x80707F50
    FUN_8066D150(r3, r4, r5, r6); // bl 0x8066D150
    /* li r0, 0 */ // 0x80707F58
    *(0x64c + r30) = r0; // stb @ 0x80707F5C
    r31 = *(0xc + r1); // lwz @ 0x80707F60
    r30 = *(8 + r1); // lwz @ 0x80707F64
    r0 = *(0x14 + r1); // lwz @ 0x80707F68
    return;
}