/* Function at 0x806A5B20, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806A5B20(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x806A5B28
    *(0x14 + r1) = r0; // stw @ 0x806A5B2C
    *(0xc + r1) = r31; // stw @ 0x806A5B30
    r31 = r3;
    FUN_806A0A34(r5); // bl 0x806A0A34
    r3 = r31 + 0x98; // 0x806A5B3C
    /* li r4, 4 */ // 0x806A5B40
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A5B48
    /* li r4, 2 */ // 0x806A5B4C
    /* lfs f1, 0(r5) */ // 0x806A5B50
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r31;
    /* li r4, 0x46 */ // 0x806A5B5C
    /* li r5, -1 */ // 0x806A5B60
    FUN_806A03CC(r3, r4, r5); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x806A5B68
    r31 = *(0xc + r1); // lwz @ 0x806A5B6C
    return;
}