/* Function at 0x8069B530, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8069B530(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 4 */ // 0x8069B544
    *(0x18 + r1) = r30; // stw @ 0x8069B548
    r30 = r3;
    r3 = r3 + 0x98; // 0x8069B550
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r31 = r3;
    if (==) goto 0x0x8069b5e4;
    r0 = *(0x38 + r3); // lwz @ 0x8069B564
    if (==) goto 0x0x8069b57c;
    if (==) goto 0x0x8069b590;
    /* b 0x8069b670 */ // 0x8069B578
    /* lis r5, 0 */ // 0x8069B57C
    /* li r4, 1 */ // 0x8069B580
    /* lfs f1, 0(r5) */ // 0x8069B584
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8069b670 */ // 0x8069B58C
    r3 = *(0 + r3); // lwz @ 0x8069B590
    /* slwi r0, r0, 4 */ // 0x8069B594
    /* lwzx r3, r3, r0 */ // 0x8069B598
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069B5A0
    /* lis r0, 0x4330 */ // 0x8069B5A4
    *(0xc + r1) = r4; // stw @ 0x8069B5A8
    /* lis r3, 0 */ // 0x8069B5AC
    /* lfd f3, 0(r3) */ // 0x8069B5B0
    /* lis r5, 0 */ // 0x8069B5B4
    *(8 + r1) = r0; // stw @ 0x8069B5B8
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x8069B5C0
    /* li r4, 1 */ // 0x8069B5C4
    /* lfd f2, 8(r1) */ // 0x8069B5C8
    /* lfs f0, 0(r5) */ // 0x8069B5CC
    /* fsubs f2, f2, f3 */ // 0x8069B5D0
    /* fdivs f1, f1, f2 */ // 0x8069B5D4
    /* fsubs f1, f0, f1 */ // 0x8069B5D8
    FUN_8069F59C(); // bl 0x8069F59C
    /* b 0x8069b670 */ // 0x8069B5E0
    r0 = *(0x38 + r3); // lwz @ 0x8069B5E4
    if (==) goto 0x0x8069b5fc;
    if (==) goto 0x0x8069b650;
    /* b 0x8069b660 */ // 0x8069B5F8
    r3 = *(0 + r3); // lwz @ 0x8069B5FC
}