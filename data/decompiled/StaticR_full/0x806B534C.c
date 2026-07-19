/* Function at 0x806B534C, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_806B534C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806B535C
    r30 = r3;
    r0 = *(8 + r3); // lwz @ 0x806B5364
    if (!=) goto 0x0x806b547c;
    /* lis r4, 0 */ // 0x806B5370
    r4 = *(0 + r4); // lwz @ 0x806B5374
    r0 = *(0xb74 + r4); // lwz @ 0x806B5378
    if (!=) goto 0x0x806b5398;
    /* lis r5, 0 */ // 0x806B5384
    /* li r4, 0 */ // 0x806B5388
    /* lfs f1, 0(r5) */ // 0x806B538C
    FUN_80671C48(r5, r4); // bl 0x80671C48
    /* b 0x806b547c */ // 0x806B5394
    /* li r4, 0 */ // 0x806B5398
    r3 = r3 + 0x238; // 0x806B539C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806B53A4
    if (==) goto 0x0x806b53c4;
    if (==) goto 0x0x806b53f0;
    if (==) goto 0x0x806b5468;
    /* b 0x806b547c */ // 0x806B53C0
    /* lis r3, 0 */ // 0x806B53C4
    r3 = *(0 + r3); // lwz @ 0x806B53C8
    r0 = *(0x28 + r3); // lwz @ 0x806B53CC
    if (<) goto 0x0x806b547c;
    /* lis r4, 0 */ // 0x806B53D8
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x806B53E0
    /* li r4, 0 */ // 0x806B53E4
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    /* b 0x806b547c */ // 0x806B53EC
    r3 = r30 + 0x238; // 0x806B53F0
    /* li r4, 0 */ // 0x806B53F4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    r0 = *(0x35 + r3); // lbz @ 0x806B53FC
    if (!=) goto 0x0x806b547c;
    /* lis r3, 0 */ // 0x806B5408
    /* lis r31, 0 */ // 0x806B540C
    r3 = *(0 + r3); // lwz @ 0x806B5410
    /* li r4, 1 */ // 0x806B5414
    /* lfs f0, 0(r31) */ // 0x806B5418
    /* li r0, 0 */ // 0x806B541C
    *(0x28 + r3) = r4; // stw @ 0x806B5420
    r4 = r3 + 0x14; // 0x806B5424
    *(0x1c + r3) = r4; // stw @ 0x806B5428
    /* stfs f0, 0x20(r3) */ // 0x806B542C
    *(0x24 + r3) = r0; // stb @ 0x806B5430
    FUN_8064889C(r4); // bl 0x8064889C
    r3 = r30 + 0x238; // 0x806B5438
    /* li r4, 0 */ // 0x806B543C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806B5444
    /* li r4, 2 */ // 0x806B5448
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* lis r3, 0 */ // 0x806B5450
    /* li r4, 0xcc */ // 0x806B5454
    r3 = *(0 + r3); // lwz @ 0x806B5458
    /* li r5, 0 */ // 0x806B545C
    FUN_80787C60(r3, r4, r5); // bl 0x80787C60
    /* b 0x806b547c */ // 0x806B5464
    /* lis r4, 0 */ // 0x806B5468
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x806B5470
    /* li r4, 0 */ // 0x806B5474
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806B547C
    r31 = *(0xc + r1); // lwz @ 0x806B5480
    r30 = *(8 + r1); // lwz @ 0x806B5484
    return;
}