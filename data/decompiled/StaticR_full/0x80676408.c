/* Function at 0x80676408, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_80676408(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 4 */ // 0x8067641C
    *(0x18 + r1) = r30; // stw @ 0x80676420
    r30 = r3;
    r3 = r3 + 0x98; // 0x80676428
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r31 = r3;
    if (==) goto 0x0x806764f0;
    r0 = *(0x38 + r3); // lwz @ 0x8067643C
    if (==) goto 0x0x80676454;
    if (==) goto 0x0x80676468;
    /* b 0x806764b8 */ // 0x80676450
    /* lis r5, 0 */ // 0x80676454
    /* li r4, 1 */ // 0x80676458
    /* lfs f1, 0(r5) */ // 0x8067645C
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806764b8 */ // 0x80676464
    r3 = *(0 + r3); // lwz @ 0x80676468
    /* slwi r0, r0, 4 */ // 0x8067646C
    /* lwzx r3, r3, r0 */ // 0x80676470
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80676478
    /* lis r0, 0x4330 */ // 0x8067647C
    *(0xc + r1) = r4; // stw @ 0x80676480
    /* lis r3, 0 */ // 0x80676484
    /* lfd f3, 0(r3) */ // 0x80676488
    /* lis r5, 0 */ // 0x8067648C
    *(8 + r1) = r0; // stw @ 0x80676490
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80676498
    /* li r4, 1 */ // 0x8067649C
    /* lfd f2, 8(r1) */ // 0x806764A0
    /* lfs f0, 0(r5) */ // 0x806764A4
    /* fsubs f2, f2, f3 */ // 0x806764A8
    /* fdivs f1, f1, f2 */ // 0x806764AC
    /* fsubs f1, f0, f1 */ // 0x806764B0
    FUN_8069F59C(); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806764B8
    /* li r4, 2 */ // 0x806764BC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806764C4
    /* li r4, 0 */ // 0x806764C8
    /* lfs f1, 0(r31) */ // 0x806764CC
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806764D4
    /* li r4, 3 */ // 0x806764D8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806764E0
    /* li r4, 0 */ // 0x806764E4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* b 0x8067656c */ // 0x806764EC
    r0 = *(0x38 + r3); // lwz @ 0x806764F0
    if (==) goto 0x0x80676508;
}