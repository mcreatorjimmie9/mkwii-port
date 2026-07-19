/* Function at 0x806A3A7C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806A3A7C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806A3A84
    *(0xc + r1) = r31; // stw @ 0x806A3A8C
    *(8 + r1) = r30; // stw @ 0x806A3A90
    r30 = r3;
    r5 = *(0x464 + r3); // lwz @ 0x806A3A98
    r3 = r5 + 0x98; // 0x806A3A9C
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A3AA4
    /* li r4, 0 */ // 0x806A3AA8
    /* lfs f1, 0(r31) */ // 0x806A3AAC
    FUN_8069F59C(r3, r4); // bl 0x8069F59C
    r3 = *(0x464 + r30); // lwz @ 0x806A3AB4
    /* li r4, 2 */ // 0x806A3AB8
    r3 = r3 + 0x98; // 0x806A3ABC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A3AC4
    /* li r4, 0 */ // 0x806A3AC8
    FUN_8069F59C(r4, r3, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806A3AD0
    r31 = *(0xc + r1); // lwz @ 0x806A3AD4
    r30 = *(8 + r1); // lwz @ 0x806A3AD8
    return;
}