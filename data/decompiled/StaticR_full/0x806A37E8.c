/* Function at 0x806A37E8, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806A37E8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    /* li r4, 1 */ // 0x806A37FC
    *(0x18 + r1) = r30; // stw @ 0x806A3800
    r30 = r3;
    r3 = r3 + 0x98; // 0x806A3808
    *(0x14 + r1) = r29; // stw @ 0x806A380C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r29 = r3;
    if (==) goto 0x0x806a38a0;
    r0 = *(0x38 + r3); // lwz @ 0x806A3820
    if (==) goto 0x0x806a3838;
    if (==) goto 0x0x806a384c;
    /* b 0x806a391c */ // 0x806A3834
    /* lis r5, 0 */ // 0x806A3838
    /* li r4, 1 */ // 0x806A383C
    /* lfs f1, 0(r5) */ // 0x806A3840
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806a391c */ // 0x806A3848
    r3 = *(0 + r3); // lwz @ 0x806A384C
    /* slwi r0, r0, 4 */ // 0x806A3850
    /* lwzx r3, r3, r0 */ // 0x806A3854
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A385C
    /* lis r0, 0x4330 */ // 0x806A3860
    *(0xc + r1) = r4; // stw @ 0x806A3864
    /* lis r3, 0 */ // 0x806A3868
    /* lfd f3, 0(r3) */ // 0x806A386C
    /* lis r5, 0 */ // 0x806A3870
    *(8 + r1) = r0; // stw @ 0x806A3874
    r3 = r29;
    /* lfs f1, 0x3c(r29) */ // 0x806A387C
    /* li r4, 1 */ // 0x806A3880
    /* lfd f2, 8(r1) */ // 0x806A3884
    /* lfs f0, 0(r5) */ // 0x806A3888
    /* fsubs f2, f2, f3 */ // 0x806A388C
    /* fdivs f1, f1, f2 */ // 0x806A3890
    /* fsubs f1, f0, f1 */ // 0x806A3894
    FUN_8069F59C(); // bl 0x8069F59C
    /* b 0x806a391c */ // 0x806A389C
    r0 = *(0x38 + r3); // lwz @ 0x806A38A0
    if (==) goto 0x0x806a38b8;
    if (==) goto 0x0x806a390c;
    /* b 0x806a391c */ // 0x806A38B4
    r3 = *(0 + r3); // lwz @ 0x806A38B8
    /* slwi r0, r0, 4 */ // 0x806A38BC
    /* lwzx r3, r3, r0 */ // 0x806A38C0
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A38C8
    /* lis r0, 0x4330 */ // 0x806A38CC
    *(0xc + r1) = r4; // stw @ 0x806A38D0
}