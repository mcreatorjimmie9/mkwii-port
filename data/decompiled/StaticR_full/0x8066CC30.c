/* Function at 0x8066CC30, size=332 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 13 function(s) */

int FUN_8066CC30(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, -1 */ // 0x8066CC38
    /* li r5, 1 */ // 0x8066CC3C
    *(0x44 + r1) = r0; // stw @ 0x8066CC40
    /* li r0, 0 */ // 0x8066CC44
    *(0x3c + r1) = r31; // stw @ 0x8066CC48
    *(0x38 + r1) = r30; // stw @ 0x8066CC4C
    r30 = r3;
    *(0x604 + r3) = r4; // stw @ 0x8066CC54
    /* li r4, 1 */ // 0x8066CC58
    *(0x1a0 + r3) = r5; // stw @ 0x8066CC5C
    /* li r5, 0 */ // 0x8066CC60
    *(0x1a4 + r3) = r0; // stb @ 0x8066CC64
    r12 = *(0x44 + r3); // lwzu @ 0x8066CC68
    r12 = *(0x10 + r12); // lwz @ 0x8066CC6C
    /* mtctr r12 */ // 0x8066CC70
    /* bctrl  */ // 0x8066CC74
    r3 = r30;
    r4 = r30 + 0x44; // 0x8066CC7C
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r30 + 0x44; // 0x8066CC84
    r5 = r30 + 0x18c; // 0x8066CC88
    /* li r4, 0 */ // 0x8066CC8C
    /* li r6, 0 */ // 0x8066CC90
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r30;
    /* li r4, 3 */ // 0x8066CC9C
    FUN_80671C1C(r4, r6, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x1a8; // 0x8066CCA8
    /* li r4, 0 */ // 0x8066CCAC
    /* li r6, 0 */ // 0x8066CCB0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r0 = *(4 + r30); // lwz @ 0x8066CCB8
    if (!=) goto 0x0x8066ccd4;
    r3 = r30 + 0x1a8; // 0x8066CCC4
    /* li r4, 1 */ // 0x8066CCC8
    FUN_808D5444(r3, r4); // bl 0x808D5444
    /* b 0x8066cce0 */ // 0x8066CCD0
    r3 = r30 + 0x1a8; // 0x8066CCD4
    /* li r4, 0 */ // 0x8066CCD8
    FUN_808D5444(r4, r3, r4); // bl 0x808D5444
    r3 = r30;
    r5 = r30 + 0x31c; // 0x8066CCE4
    /* li r4, 1 */ // 0x8066CCE8
    /* li r6, 0 */ // 0x8066CCEC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x8066CCF4
    r3 = r30 + 0x31c; // 0x8066CCF8
    r31 = r31 + 0; // 0x8066CCFC
    r4 = r31 + 0x73; // 0x8066CD00
    r5 = r31 + 0x82; // 0x8066CD04
    r6 = r31 + 0x90; // 0x8066CD08
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30;
    r5 = r30 + 0x490; // 0x8066CD14
    /* li r4, 2 */ // 0x8066CD18
    /* li r6, 0 */ // 0x8066CD1C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x490; // 0x8066CD28
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    r4 = r31 + 0x9e; // 0x8066CD34
    r5 = r31 + 0xad; // 0x8066CD38
    r6 = r31 + 0xb3; // 0x8066CD3C
    /* li r7, 0 */ // 0x8066CD40
    FUN_8064E36C(r3, r4, r5, r6, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8066CD4C
    FUN_8064E32C(r6, r7, r3, r4); // bl 0x8064E32C
    r3 = r30;
    /* li r4, 5 */ // 0x8066CD58
    /* li r5, 0 */ // 0x8066CD5C
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x44 + r1); // lwz @ 0x8066CD64
    r31 = *(0x3c + r1); // lwz @ 0x8066CD68
    r30 = *(0x38 + r1); // lwz @ 0x8066CD6C
    return;
}