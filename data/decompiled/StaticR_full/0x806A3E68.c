/* Function at 0x806A3E68, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806A3E68(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 3 */ // 0x806A3E70
    *(0xc + r1) = r31; // stw @ 0x806A3E78
    *(8 + r1) = r30; // stw @ 0x806A3E7C
    r30 = r3;
    r3 = r3 + 0x98; // 0x806A3E84
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x35 + r3); // lbz @ 0x806A3E8C
    if (!=) goto 0x0x806a3f00;
    r4 = *(0x38 + r3); // lwz @ 0x806A3E98
    r0 = r4 + -1; // 0x806A3E9C
    if (<=) goto 0x0x806a3ebc;
    if (<) goto 0x0x806a3f00;
    if (<=) goto 0x0x806a3ee8;
    /* b 0x806a3f00 */ // 0x806A3EB8
    /* lis r31, 0 */ // 0x806A3EBC
    /* li r4, 3 */ // 0x806A3EC0
    /* lfs f1, 0(r31) */ // 0x806A3EC4
    FUN_8069F59C(r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806A3ECC
    /* li r4, 1 */ // 0x806A3ED0
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A3ED8
    /* li r4, 0 */ // 0x806A3EDC
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* b 0x806a3f00 */ // 0x806A3EE4
    /* lis r5, 0 */ // 0x806A3EE8
    /* li r4, 0 */ // 0x806A3EEC
    /* lfs f1, 0(r5) */ // 0x806A3EF0
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r3 = r30;
    FUN_806A0C48(r5, r4, r3); // bl 0x806A0C48
    r0 = *(0x14 + r1); // lwz @ 0x806A3F00
    r31 = *(0xc + r1); // lwz @ 0x806A3F04
    r30 = *(8 + r1); // lwz @ 0x806A3F08
    return;
}