/* Function at 0x8069E2D4, size=196 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_8069E2D4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069E2DC
    /* li r5, 0 */ // 0x8069E2E0
    *(0x44 + r1) = r0; // stw @ 0x8069E2E4
    *(0x3c + r1) = r31; // stw @ 0x8069E2E8
    r31 = r3;
    r12 = *(0x1b8 + r3); // lwz @ 0x8069E2F0
    r12 = *(0x10 + r12); // lwz @ 0x8069E2F4
    /* mtctr r12 */ // 0x8069E2F8
    r3 = r3 + 0x1b8; // 0x8069E2FC
    /* bctrl  */ // 0x8069E300
    r3 = r31;
    r4 = r31 + 0x1b8; // 0x8069E308
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x8069E314
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x44; // 0x8069E320
    /* li r4, 0 */ // 0x8069E324
    /* li r6, 0 */ // 0x8069E328
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r31 + 0x44; // 0x8069E334
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x8069E33C
    /* li r0, 0 */ // 0x8069E340
    r6 = r6 + 0; // 0x8069E344
    *(8 + r1) = r0; // stw @ 0x8069E348
    *(0xc + r1) = r0; // stw @ 0x8069E354
    r4 = r6 + 0x7c; // 0x8069E358
    r5 = r6 + 0x82; // 0x8069E35C
    r6 = r6 + 0x8c; // 0x8069E360
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8069E36C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r31;
    /* li r4, 0 */ // 0x8069E378
    /* li r5, 0 */ // 0x8069E37C
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x44 + r1); // lwz @ 0x8069E384
    r31 = *(0x3c + r1); // lwz @ 0x8069E388
    return;
}