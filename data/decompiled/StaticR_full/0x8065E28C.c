/* Function at 0x8065E28C, size=252 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_8065E28C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8065E294
    /* li r5, 0 */ // 0x8065E298
    *(0x14 + r1) = r0; // stw @ 0x8065E29C
    *(0xc + r1) = r31; // stw @ 0x8065E2A0
    *(8 + r1) = r30; // stw @ 0x8065E2A4
    r30 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x8065E2AC
    r12 = *(0x10 + r12); // lwz @ 0x8065E2B0
    /* mtctr r12 */ // 0x8065E2B4
    r3 = r3 + 0x44; // 0x8065E2B8
    /* bctrl  */ // 0x8065E2BC
    r3 = r30;
    r4 = r30 + 0x44; // 0x8065E2C4
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30;
    /* li r4, 3 */ // 0x8065E2D0
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x54; // 0x8065E2DC
    /* li r4, 0 */ // 0x8065E2E0
    /* li r6, 0 */ // 0x8065E2E4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x54; // 0x8065E2EC
    /* li r4, 0 */ // 0x8065E2F0
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r30 + 0x54; // 0x8065E2F8
    /* li r4, 0x145d */ // 0x8065E2FC
    /* li r5, 0 */ // 0x8065E300
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    r3 = r30;
    r5 = r30 + 0x1c8; // 0x8065E30C
    /* li r4, 1 */ // 0x8065E310
    /* li r6, 0 */ // 0x8065E314
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x8065E31C
    r3 = r30 + 0x1c8; // 0x8065E320
    r31 = r31 + 0; // 0x8065E324
    r4 = r31 + 0x3f5; // 0x8065E328
    r5 = r31 + 0x404; // 0x8065E32C
    r6 = r31 + 0x41b; // 0x8065E330
    FUN_8066D484(r3, r4, r5, r6); // bl 0x8066D484
    r3 = r30;
    r5 = r30 + 0x33c; // 0x8065E33C
    /* li r4, 2 */ // 0x8065E340
    /* li r6, 0 */ // 0x8065E344
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x33c; // 0x8065E34C
    r4 = r31 + 0x426; // 0x8065E350
    r5 = r31 + 0x435; // 0x8065E354
    r6 = r31 + 0x44f; // 0x8065E358
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30 + 0x33c; // 0x8065E360
    /* li r4, 0x145c */ // 0x8065E364
    /* li r5, 0 */ // 0x8065E368
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r0 = *(0x14 + r1); // lwz @ 0x8065E370
    r31 = *(0xc + r1); // lwz @ 0x8065E374
    r30 = *(8 + r1); // lwz @ 0x8065E378
    return;
}