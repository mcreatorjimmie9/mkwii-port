/* Function at 0x806BC114, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_806BC114(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806BC11C
    *(0xc + r1) = r31; // stw @ 0x806BC124
    *(8 + r1) = r30; // stw @ 0x806BC128
    r30 = r3;
    r3 = r3 + 0x98; // 0x806BC130
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806BC138
    /* li r4, 0 */ // 0x806BC13C
    /* lfs f1, 0(r31) */ // 0x806BC140
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806BC148
    /* li r4, 1 */ // 0x806BC14C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BC154
    /* li r4, 0 */ // 0x806BC158
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806BC160
    /* li r4, 2 */ // 0x806BC164
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BC16C
    /* li r4, 0 */ // 0x806BC170
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806BC178
    /* li r4, 3 */ // 0x806BC17C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BC184
    /* li r4, 1 */ // 0x806BC188
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806BC190
    /* li r4, 4 */ // 0x806BC194
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806BC19C
    /* li r4, 1 */ // 0x806BC1A0
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806BC1A8
    r31 = *(0xc + r1); // lwz @ 0x806BC1AC
    r30 = *(8 + r1); // lwz @ 0x806BC1B0
    return;
}