/* Function at 0x8069D4EC, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8069D4EC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069D4F4
    r3 = r3 + 0x98; // 0x8069D4F8
    *(0x24 + r1) = r0; // stw @ 0x8069D4FC
    *(0x1c + r1) = r31; // stw @ 0x8069D500
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069D508
    r31 = r3;
    if (==) goto 0x0x8069d524;
    if (==) goto 0x0x8069d578;
    /* b 0x8069d588 */ // 0x8069D520
    r3 = *(0 + r3); // lwz @ 0x8069D524
    /* slwi r0, r0, 4 */ // 0x8069D528
    /* lwzx r3, r3, r0 */ // 0x8069D52C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069D534
    /* lis r0, 0x4330 */ // 0x8069D538
    *(0xc + r1) = r4; // stw @ 0x8069D53C
    /* lis r3, 0 */ // 0x8069D540
    /* lfd f3, 0(r3) */ // 0x8069D544
    /* lis r5, 0 */ // 0x8069D548
    *(8 + r1) = r0; // stw @ 0x8069D54C
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x8069D554
}