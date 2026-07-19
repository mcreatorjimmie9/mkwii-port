/* Function at 0x80878648, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80878648(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80878650
    *(0x14 + r1) = r0; // stw @ 0x80878654
    *(0xc + r1) = r31; // stw @ 0x80878658
    r31 = r3;
    r3 = r3 + 0x98; // 0x80878660
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80878668
    /* li r4, 0 */ // 0x8087866C
    /* lfs f1, 0(r5) */ // 0x80878670
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = r31;
    FUN_806A0740(r5, r4, r3); // bl 0x806A0740
    r0 = *(0x14 + r1); // lwz @ 0x80878680
    r31 = *(0xc + r1); // lwz @ 0x80878684
    return;
}