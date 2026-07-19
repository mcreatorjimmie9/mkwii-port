/* Function at 0x806AB324, size=252 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_806AB324(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806AB32C
    /* li r5, 0 */ // 0x806AB330
    *(0x44 + r1) = r0; // stw @ 0x806AB334
    *(0x3c + r1) = r31; // stw @ 0x806AB338
    *(0x38 + r1) = r30; // stw @ 0x806AB33C
    r30 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806AB344
    r12 = *(0x10 + r12); // lwz @ 0x806AB348
    /* mtctr r12 */ // 0x806AB34C
    r3 = r3 + 0x44; // 0x806AB350
    /* bctrl  */ // 0x806AB354
    r3 = r30;
    r4 = r30 + 0x44; // 0x806AB35C
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0x44; // 0x806AB364
    r5 = r30 + 0x478; // 0x806AB368
    /* li r4, 0 */ // 0x806AB36C
    /* li r6, 0 */ // 0x806AB370
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r30;
    /* li r4, 2 */ // 0x806AB37C
    FUN_80671C1C(r4, r6, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x190; // 0x806AB388
    /* li r4, 0 */ // 0x806AB38C
    /* li r6, 0 */ // 0x806AB390
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806AB398
    r3 = r30 + 0x190; // 0x806AB39C
    r4 = r31 + 0; // 0x806AB3A0
    r5 = r4 + 0xf; // 0x806AB3A4
    r6 = r4 + 0x1d; // 0x806AB3A8
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30;
    r5 = r30 + 0x304; // 0x806AB3B4
    /* li r4, 1 */ // 0x806AB3B8
    /* li r6, 0 */ // 0x806AB3BC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x304; // 0x806AB3C8
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    r6 = r31 + 0; // 0x806AB3D0
    r4 = r6 + 0x2b; // 0x806AB3D8
    /* li r7, 0 */ // 0x806AB3DC
    r5 = r6 + 0x3a; // 0x806AB3E0
    r6 = r6 + 0x40; // 0x806AB3E4
    FUN_8064E36C(r3, r4, r7, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806AB3F0
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r30;
    /* li r4, 5 */ // 0x806AB3FC
    /* li r5, 0 */ // 0x806AB400
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x44 + r1); // lwz @ 0x806AB408
    r31 = *(0x3c + r1); // lwz @ 0x806AB40C
    r30 = *(0x38 + r1); // lwz @ 0x806AB410
    return;
}