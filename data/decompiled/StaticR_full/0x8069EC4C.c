/* Function at 0x8069EC4C, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8069EC4C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8069EC5C
    r30 = r3;
    r0 = *(8 + r3); // lwz @ 0x8069EC64
    if (!=) goto 0x0x8069ed14;
    r0 = *(0x1cc + r3); // lbz @ 0x8069EC70
    if (==) goto 0x0x8069ecc4;
    /* lis r31, 0 */ // 0x8069EC7C
    r4 = *(0 + r31); // lwz @ 0x8069EC80
    r0 = *(0x30 + r4); // lwz @ 0x8069EC84
    if (!=) goto 0x0x8069ecc4;
    r3 = r4;
    /* li r4, 0x3f */ // 0x8069EC94
    /* li r5, 0 */ // 0x8069EC98
    FUN_80698C44(r3, r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x8069ECA0
    /* li r4, 0 */ // 0x8069ECA4
    /* li r5, -1 */ // 0x8069ECA8
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    r3 = r30;
    /* li r4, 8 */ // 0x8069ECB4
    /* li r5, -1 */ // 0x8069ECB8
    FUN_806724B8(r5, r3, r4, r5); // bl 0x806724B8
    /* b 0x8069ed14 */ // 0x8069ECC0
    /* li r4, 0 */ // 0x8069ECC4
    r3 = r3 + 0xdc; // 0x8069ECC8
    FUN_8069F4B0(r5, r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x8069ECD0
    if (==) goto 0x0x8069ed14;
    r3 = *(0x1c8 + r30); // lwz @ 0x8069ECDC
    r0 = *(0x20 + r30); // lwz @ 0x8069ECE0
    /* subf r0, r3, r0 */ // 0x8069ECE4
    if (!=) goto 0x0x8069ed14;
    /* lis r31, 0 */ // 0x8069ECF0
    /* li r4, 0x3f */ // 0x8069ECF4
    r3 = *(0 + r31); // lwz @ 0x8069ECF8
    /* li r5, 0 */ // 0x8069ECFC
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x8069ED04
    /* li r4, 0 */ // 0x8069ED08
    /* li r5, -1 */ // 0x8069ED0C
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x8069ED14
    r31 = *(0xc + r1); // lwz @ 0x8069ED18
    r30 = *(8 + r1); // lwz @ 0x8069ED1C
    return;
}