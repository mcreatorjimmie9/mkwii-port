/* Function at 0x806A2B98, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_806A2B98(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806A2BA8
    r30 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r3 = r30 + 0x98; // 0x806A2BB4
    /* li r4, 0 */ // 0x806A2BB8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A2BC0
    /* li r4, 0 */ // 0x806A2BC4
    /* lfs f1, 0(r31) */ // 0x806A2BC8
    FUN_8069F7A0(r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x806A2BD0
    /* li r4, 1 */ // 0x806A2BD4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A2BDC
    /* li r4, 0 */ // 0x806A2BE0
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x806A2BE8
    /* li r4, 2 */ // 0x806A2BEC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A2BF4
    /* li r4, 1 */ // 0x806A2BF8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806A2C00
    /* li r4, 3 */ // 0x806A2C04
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A2C0C
    /* li r4, 1 */ // 0x806A2C10
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x806A2C18
    r31 = *(0xc + r1); // lwz @ 0x806A2C1C
    r30 = *(8 + r1); // lwz @ 0x806A2C20
    return;
}