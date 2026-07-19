/* Function at 0x8089E384, size=272 bytes */
/* Stack frame: 1728 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8089E384(int r3, int r4, int r5)
{
    /* Stack frame: -1728(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8089E394
    r31 = r31 + 0; // 0x8089E398
    *(0x6b8 + r1) = r30; // stw @ 0x8089E39C
    r30 = r4;
    *(0x6b4 + r1) = r29; // stw @ 0x8089E3A4
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x8089E3AC
    if (!=) goto 0x0x8089f3a4;
    /* lis r3, 0 */ // 0x8089E3B8
    r3 = *(0 + r3); // lwz @ 0x8089E3BC
    FUN_8061D97C(r3); // bl 0x8061D97C
    *(8 + r29) = r3; // stw @ 0x8089E3C4
    *(0xc + r29) = r30; // stw @ 0x8089E3C8
    FUN_8061E2F8(r3); // bl 0x8061E2F8
    if (>) goto 0x0x8089f304;
    /* lis r4, 0 */ // 0x8089E3D8
    /* slwi r0, r3, 2 */ // 0x8089E3DC
    r4 = r4 + 0; // 0x8089E3E0
    /* lwzx r4, r4, r0 */ // 0x8089E3E4
    /* mtctr r4 */ // 0x8089E3E8
    /* bctr  */ // 0x8089E3EC
    /* lfs f3, 0xc(r31) */ // 0x8089E3F0
    /* li r3, 0x44 */ // 0x8089E3F4
    /* lfs f6, 0(r31) */ // 0x8089E3F8
    /* lfs f4, 8(r31) */ // 0x8089E3FC
    /* lfs f2, 0x10(r31) */ // 0x8089E400
    /* lfs f5, 4(r31) */ // 0x8089E404
    /* lfs f1, 0x14(r31) */ // 0x8089E408
    /* lfs f0, 0x18(r31) */ // 0x8089E40C
    /* stfs f6, 0x5d0(r1) */ // 0x8089E410
    /* stfs f5, 0x5d4(r1) */ // 0x8089E414
    /* stfs f4, 0x5d8(r1) */ // 0x8089E418
    /* stfs f4, 0x5dc(r1) */ // 0x8089E41C
    /* stfs f3, 0x5e0(r1) */ // 0x8089E420
    /* stfs f2, 0x5e4(r1) */ // 0x8089E424
    /* stfs f1, 0x5e8(r1) */ // 0x8089E428
    /* stfs f3, 0x5ec(r1) */ // 0x8089E42C
    /* stfs f2, 0x5f0(r1) */ // 0x8089E430
    /* stfs f6, 0x5f4(r1) */ // 0x8089E434
    /* stfs f3, 0x5f8(r1) */ // 0x8089E438
    /* stfs f0, 0x5fc(r1) */ // 0x8089E43C
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x8089e458;
    /* li r4, 4 */ // 0x8089E450
    FUN_808B2688(r5, r4); // bl 0x808B2688
    *(4 + r29) = r3; // stw @ 0x8089E458
    /* b 0x8089f3a4 */ // 0x8089E45C
    /* lfs f3, 0(r31) */ // 0x8089E460
    /* li r3, 0x44 */ // 0x8089E464
    /* lfs f2, 0xc(r31) */ // 0x8089E468
    /* lfs f1, 0x1c(r31) */ // 0x8089E46C
    /* lfs f0, 0x20(r31) */ // 0x8089E470
    /* stfs f3, 8(r1) */ // 0x8089E474
    /* stfs f2, 0xc(r1) */ // 0x8089E478
    /* stfs f1, 0x10(r1) */ // 0x8089E47C
    /* stfs f3, 0x14(r1) */ // 0x8089E480
    /* stfs f2, 0x18(r1) */ // 0x8089E484
    /* stfs f0, 0x1c(r1) */ // 0x8089E488
    FUN_805E3430(); // bl 0x805E3430
}