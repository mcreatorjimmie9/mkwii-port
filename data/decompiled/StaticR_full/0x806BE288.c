/* Function at 0x806BE288, size=316 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 11 function(s) */

int FUN_806BE288(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r4, 0 */ // 0x806BE290
    /* li r5, 0 */ // 0x806BE294
    *(0x24 + r1) = r0; // stw @ 0x806BE298
    /* stmw r27, 0xc(r1) */ // 0x806BE29C
    r27 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806BE2A4
    r12 = *(0x10 + r12); // lwz @ 0x806BE2A8
    /* mtctr r12 */ // 0x806BE2AC
    r3 = r3 + 0x44; // 0x806BE2B0
    /* bctrl  */ // 0x806BE2B4
    r3 = r27;
    r4 = r27 + 0x44; // 0x806BE2BC
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    FUN_805ABAFC(r3, r3, r4); // bl 0x805ABAFC
    r4 = r3;
    r3 = r27 + 0x2a44; // 0x806BE2CC
    r6 = *(0xc98 + r4); // lwz @ 0x806BE2D0
    /* li r4, 0x18 */ // 0x806BE2D4
    /* li r5, 4 */ // 0x806BE2D8
    FUN_8066D808(r4, r3, r4, r5); // bl 0x8066D808
    r3 = r27;
    /* li r4, 0x1a */ // 0x806BE2E4
    FUN_80671C1C(r4, r5, r3, r4); // bl 0x80671C1C
    r3 = r27;
    r5 = r27 + 0x54; // 0x806BE2F0
    /* li r4, 0 */ // 0x806BE2F4
    /* li r6, 0 */ // 0x806BE2F8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r27 + 0x54; // 0x806BE300
    /* li r4, 0 */ // 0x806BE304
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r3 = r27 + 0x54; // 0x806BE30C
    /* li r4, 0x1004 */ // 0x806BE310
    /* li r5, 0 */ // 0x806BE314
    FUN_808D5844(r4, r3, r4, r5); // bl 0x808D5844
    /* li r29, 0 */ // 0x806BE31C
    r31 = r29 rlwinm 1; // rlwinm
    /* li r28, 0 */ // 0x806BE324
    /* clrlwi r0, r28, 0x18 */ // 0x806BE328
    r3 = r27;
    r0 = r0 + r31; // 0x806BE330
    /* li r6, 0 */ // 0x806BE334
    /* clrlwi r4, r0, 0x18 */ // 0x806BE338
    /* mulli r0, r4, 0x1a0 */ // 0x806BE33C
    r4 = r4 + 1; // 0x806BE340
    r5 = r27 + r0; // 0x806BE344
    r30 = r5 + 0x1c8; // 0x806BE348
    r5 = r30;
    FUN_80671C2C(r4, r5); // bl 0x80671C2C
    r3 = r30;
    r4 = r27 + 0x2a44; // 0x806BE358
    /* clrlwi r5, r29, 0x18 */ // 0x806BE35C
    /* clrlwi r6, r28, 0x18 */ // 0x806BE360
    FUN_806BDB3C(r3, r4); // bl 0x806BDB3C
    r28 = r28 + 1; // 0x806BE368
    if (<) goto 0x0x806be328;
    r29 = r29 + 1; // 0x806BE374
    if (<) goto 0x0x806be320;
    r3 = r27;
    r5 = r27 + 0x28c8; // 0x806BE384
    /* li r4, 0x19 */ // 0x806BE388
    /* li r6, 0 */ // 0x806BE38C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r6, 0 */ // 0x806BE394
    r3 = r27 + 0x28c8; // 0x806BE398
    r6 = r6 + 0; // 0x806BE39C
    r4 = r6 + 0x160; // 0x806BE3A0
    r5 = r6 + 0x16f; // 0x806BE3A4
    r6 = r6 + 0x184; // 0x806BE3A8
    FUN_8066D484(r3, r6, r4, r5, r6); // bl 0x8066D484
    r0 = *(0x24 + r1); // lwz @ 0x806BE3B4
    return;
}