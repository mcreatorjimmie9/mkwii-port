/* Function at 0x80874444, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_80874444(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8087444C
    *(0xc + r1) = r31; // stw @ 0x80874454
    *(8 + r1) = r30; // stw @ 0x80874458
    r30 = r3;
    r3 = r3 + 0x98; // 0x80874460
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80874468
    /* li r4, 1 */ // 0x8087446C
    /* lfs f1, 0(r31) */ // 0x80874470
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80874478
    /* li r4, 1 */ // 0x8087447C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80874484
    /* li r4, 0 */ // 0x80874488
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80874490
    /* li r4, 2 */ // 0x80874494
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x8087449C
    /* li r4, 0 */ // 0x808744A0
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x808744A8
    r31 = *(0xc + r1); // lwz @ 0x808744AC
    r30 = *(8 + r1); // lwz @ 0x808744B0
    return;
}