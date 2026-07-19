/* Function at 0x806BC2B0, size=296 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31 */
/* Calls: 11 function(s) */

int FUN_806BC2B0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806BC2B8
    /* li r5, 0 */ // 0x806BC2BC
    *(0xb4 + r1) = r0; // stw @ 0x806BC2C0
    *(0xac + r1) = r31; // stw @ 0x806BC2C4
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806BC2CC
    r12 = *(0x10 + r12); // lwz @ 0x806BC2D0
    /* mtctr r12 */ // 0x806BC2D4
    r3 = r3 + 0x44; // 0x806BC2D8
    /* bctrl  */ // 0x806BC2DC
    r3 = r31;
    r4 = r31 + 0x44; // 0x806BC2E4
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x806BC2F0
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x54; // 0x806BC2FC
    /* li r4, 0 */ // 0x806BC300
    /* li r6, 0 */ // 0x806BC304
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r31 + 0x54; // 0x806BC310
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x806BC318
    r6 = r6 + 0; // 0x806BC320
    /* li r7, 0 */ // 0x806BC324
    r4 = r6 + 0x3d; // 0x806BC328
    r5 = r6 + 0x4b; // 0x806BC32C
    r6 = r6 + 0x5d; // 0x806BC330
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806BC33C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r31 + 0x54; // 0x806BC344
    /* li r4, 1 */ // 0x806BC348
    FUN_8069FEE8(r3, r4, r3, r4); // bl 0x8069FEE8
    r3 = r31 + 0x54; // 0x806BC350
    r5 = r31 + 0x1c8; // 0x806BC354
    /* li r4, 0 */ // 0x806BC358
    FUN_8069FEF8(r4, r3, r5, r4); // bl 0x8069FEF8
    r4 = r31 + 0x1c8; // 0x806BC364
    FUN_8064E324(r5, r4, r3, r4); // bl 0x8064E324
    /* lis r3, 0 */ // 0x806BC36C
    /* li r0, 9 */ // 0x806BC370
    r3 = r3 + 0; // 0x806BC374
    r4 = r3 + -4; // 0x806BC37C
    /* mtctr r0 */ // 0x806BC380
    r3 = *(4 + r4); // lwz @ 0x806BC384
    r0 = *(8 + r4); // lwzu @ 0x806BC388
    *(4 + r5) = r3; // stw @ 0x806BC38C
    *(8 + r5) = r0; // stwu @ 0x806BC390
    if (counter-- != 0) goto 0x0x806bc384;
    /* lis r6, 0 */ // 0x806BC398
    r6 = r6 + 0; // 0x806BC3A0
    r4 = r6 + 0x6f; // 0x806BC3A8
    r5 = r6 + 0x7d; // 0x806BC3AC
    r6 = r6 + 0x89; // 0x806BC3B0
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806BC3BC
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0xb4 + r1); // lwz @ 0x806BC3C4
    r31 = *(0xac + r1); // lwz @ 0x806BC3C8
    return;
}