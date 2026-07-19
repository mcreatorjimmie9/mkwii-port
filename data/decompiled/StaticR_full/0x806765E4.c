/* Function at 0x806765E4, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806765E4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 1 */ // 0x806765F8
    *(0x18 + r1) = r30; // stw @ 0x806765FC
    r30 = r3;
    r3 = r3 + 0x98; // 0x80676604
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r31 = r3;
    if (==) goto 0x0x806766b4;
    r0 = *(0x38 + r3); // lwz @ 0x80676618
    if (==) goto 0x0x80676630;
    if (==) goto 0x0x80676644;
    /* b 0x80676694 */ // 0x8067662C
    /* lis r5, 0 */ // 0x80676630
    /* li r4, 1 */ // 0x80676634
    /* lfs f1, 0(r5) */ // 0x80676638
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x80676694 */ // 0x80676640
    r3 = *(0 + r3); // lwz @ 0x80676644
    /* slwi r0, r0, 4 */ // 0x80676648
    /* lwzx r3, r3, r0 */ // 0x8067664C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80676654
    /* lis r0, 0x4330 */ // 0x80676658
    *(0xc + r1) = r4; // stw @ 0x8067665C
    /* lis r3, 0 */ // 0x80676660
    /* lfd f3, 0(r3) */ // 0x80676664
    /* lis r5, 0 */ // 0x80676668
    *(8 + r1) = r0; // stw @ 0x8067666C
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80676674
    /* li r4, 1 */ // 0x80676678
    /* lfd f2, 8(r1) */ // 0x8067667C
    /* lfs f0, 0(r5) */ // 0x80676680
    /* fsubs f2, f2, f3 */ // 0x80676684
    /* fdivs f1, f1, f2 */ // 0x80676688
    /* fsubs f1, f0, f1 */ // 0x8067668C
    FUN_8069F59C(); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80676694
    /* li r4, 2 */ // 0x80676698
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806766A0
    /* li r4, 0 */ // 0x806766A4
    /* lfs f1, 0(r5) */ // 0x806766A8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x80676730 */ // 0x806766B0
    r0 = *(0x38 + r3); // lwz @ 0x806766B4
    if (==) goto 0x0x806766cc;
}