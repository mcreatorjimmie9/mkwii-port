/* Function at 0x80676154, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80676154(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80676164
    r30 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r3 = r30 + 0x98; // 0x80676170
    /* li r4, 0 */ // 0x80676174
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x8067617C
    /* li r4, 0 */ // 0x80676180
    /* lfs f1, 0(r31) */ // 0x80676184
    FUN_8069F7A0(r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x8067618C
    /* li r4, 2 */ // 0x80676190
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80676198
    /* li r4, 1 */ // 0x8067619C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806761A4
    /* li r4, 3 */ // 0x806761A8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806761B0
    /* li r4, 1 */ // 0x806761B4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806761BC
    r31 = *(0xc + r1); // lwz @ 0x806761C0
    r30 = *(8 + r1); // lwz @ 0x806761C4
    return;
}