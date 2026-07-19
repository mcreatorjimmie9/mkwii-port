/* Function at 0x806A5A94, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806A5A94(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 4 */ // 0x806A5A9C
    *(0x14 + r1) = r0; // stw @ 0x806A5AA0
    *(0xc + r1) = r31; // stw @ 0x806A5AA4
    r31 = r3;
    r3 = r3 + 0x98; // 0x806A5AAC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A5AB4
    /* li r4, 1 */ // 0x806A5AB8
    /* lfs f1, 0(r5) */ // 0x806A5ABC
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = r31;
    /* li r4, 0x45 */ // 0x806A5AC8
    /* li r5, -1 */ // 0x806A5ACC
    FUN_806A03CC(r3, r4, r5); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x806A5AD4
    r31 = *(0xc + r1); // lwz @ 0x806A5AD8
    return;
}