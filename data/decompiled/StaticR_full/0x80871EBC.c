/* Function at 0x80871EBC, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80871EBC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80871ED0
    r30 = r3;
    FUN_8069FE14(); // bl 0x8069FE14
    /* lfs f1, 0(r31) */ // 0x80871EDC
    r3 = r30;
    /* lfs f0, 0x258(r30) */ // 0x80871EE4
    /* fsubs f0, f1, f0 */ // 0x80871EE8
    /* stfs f0, 0(r31) */ // 0x80871EEC
    FUN_806A01D0(r3); // bl 0x806A01D0
    r0 = *(0x14 + r1); // lwz @ 0x80871EF4
    r31 = *(0xc + r1); // lwz @ 0x80871EF8
    r30 = *(8 + r1); // lwz @ 0x80871EFC
    return;
}