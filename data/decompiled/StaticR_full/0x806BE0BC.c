/* Function at 0x806BE0BC, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806BE0BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 4 */ // 0x806BE0C4
    *(0xc + r1) = r31; // stw @ 0x806BE0CC
    *(8 + r1) = r30; // stw @ 0x806BE0D0
    r30 = r3;
    r3 = r3 + 0x98; // 0x806BE0D8
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806BE0E0
    if (!=) goto 0x0x806be134;
    r3 = *(0x188 + r30); // lwz @ 0x806BE0EC
    r4 = *(0x190 + r30); // lwz @ 0x806BE0F0
    FUN_8066E138(); // bl 0x8066E138
    if (==) goto 0x0x806be134;
    r3 = r30 + 0x98; // 0x806BE100
    /* li r4, 2 */ // 0x806BE104
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806BE10C
    /* li r4, 0 */ // 0x806BE110
    /* lfs f1, 0(r31) */ // 0x806BE114
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806BE11C
    /* li r4, 3 */ // 0x806BE120
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BE128
    /* li r4, 0 */ // 0x806BE12C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806BE134
    r31 = *(0xc + r1); // lwz @ 0x806BE138
    r30 = *(8 + r1); // lwz @ 0x806BE13C
    return;
}