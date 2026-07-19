/* Function at 0x806A1CC0, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806A1CC0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r6, -1 */ // 0x806A1CC8
    *(0x14 + r1) = r0; // stw @ 0x806A1CCC
    *(0xc + r1) = r31; // stw @ 0x806A1CD0
    r31 = r3;
    r5 = r31 + 0x218; // 0x806A1CD8
    r3 = *(0x254 + r3); // lwz @ 0x806A1CDC
    FUN_8066A36C(r5); // bl 0x8066A36C
    r3 = r31 + 0x98; // 0x806A1CE4
    /* li r4, 0 */ // 0x806A1CE8
    FUN_8069F4A0(r5, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A1CF0
    /* li r4, 2 */ // 0x806A1CF4
    /* lfs f1, 0(r5) */ // 0x806A1CF8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = *(0x214 + r31); // lwz @ 0x806A1D00
    /* li r4, 1 */ // 0x806A1D04
    r12 = *(0 + r3); // lwz @ 0x806A1D08
    r12 = *(0xc + r12); // lwz @ 0x806A1D0C
    /* mtctr r12 */ // 0x806A1D10
    /* bctrl  */ // 0x806A1D14
    r0 = *(0x14 + r1); // lwz @ 0x806A1D18
    r31 = *(0xc + r1); // lwz @ 0x806A1D1C
    return;
}