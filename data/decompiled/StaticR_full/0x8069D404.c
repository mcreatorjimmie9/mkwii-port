/* Function at 0x8069D404, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8069D404(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8069D40C
    r3 = r3 + 0x98; // 0x8069D410
    *(0x24 + r1) = r0; // stw @ 0x8069D414
    *(0x1c + r1) = r31; // stw @ 0x8069D418
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8069D420
    r31 = r3;
    if (==) goto 0x0x8069d43c;
    if (==) goto 0x0x8069d450;
    /* b 0x8069d4a0 */ // 0x8069D438
    /* lis r5, 0 */ // 0x8069D43C
    /* li r4, 1 */ // 0x8069D440
    /* lfs f1, 0(r5) */ // 0x8069D444
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x8069d4a0 */ // 0x8069D44C
    r3 = *(0 + r3); // lwz @ 0x8069D450
    /* slwi r0, r0, 4 */ // 0x8069D454
    /* lwzx r3, r3, r0 */ // 0x8069D458
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8069D460
    /* lis r0, 0x4330 */ // 0x8069D464
    *(0xc + r1) = r4; // stw @ 0x8069D468
    /* lis r3, 0 */ // 0x8069D46C
    /* lfd f3, 0(r3) */ // 0x8069D470
}