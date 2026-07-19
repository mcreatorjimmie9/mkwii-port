/* Function at 0x8069B688, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8069B688(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 1 */ // 0x8069B6A0
    *(0x14 + r1) = r29; // stw @ 0x8069B6A4
    r29 = r3;
    r3 = r3 + 0x98; // 0x8069B6AC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069B6B4
    r31 = r3;
    if (==) goto 0x0x8069b6d0;
    if (==) goto 0x0x8069b6e4;
    /* b 0x8069b734 */ // 0x8069B6CC
    /* lis r5, 0 */ // 0x8069B6D0
    /* li r4, 1 */ // 0x8069B6D4
    /* lfs f1, 0(r5) */ // 0x8069B6D8
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8069b734 */ // 0x8069B6E0
    r3 = *(0 + r3); // lwz @ 0x8069B6E4
    /* slwi r0, r0, 4 */ // 0x8069B6E8
    /* lwzx r3, r3, r0 */ // 0x8069B6EC
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069B6F4
    /* lis r0, 0x4330 */ // 0x8069B6F8
    *(0xc + r1) = r4; // stw @ 0x8069B6FC
    /* lis r3, 0 */ // 0x8069B700
    /* lfd f3, 0(r3) */ // 0x8069B704
    /* lis r5, 0 */ // 0x8069B708
    *(8 + r1) = r0; // stw @ 0x8069B70C
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x8069B714
    /* li r4, 1 */ // 0x8069B718
    /* lfd f2, 8(r1) */ // 0x8069B71C
    /* lfs f0, 0(r5) */ // 0x8069B720
    /* fsubs f2, f2, f3 */ // 0x8069B724
    /* fdivs f1, f1, f2 */ // 0x8069B728
    /* fsubs f1, f0, f1 */ // 0x8069B72C
    FUN_8069F718(); // bl 0x8069F718
    r3 = r29 + 0x98; // 0x8069B734
    /* li r4, 2 */ // 0x8069B738
}