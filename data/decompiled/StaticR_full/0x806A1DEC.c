/* Function at 0x806A1DEC, size=316 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806A1DEC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806A1DFC
    r30 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r4 = *(0x254 + r30); // lwz @ 0x806A1E08
    r0 = r30 + 0x218; // 0x806A1E0C
    /* li r31, 0 */ // 0x806A1E10
    r3 = *(0x54 + r4); // lwz @ 0x806A1E14
    if (!=) goto 0x0x806a1e28;
    /* li r31, 1 */ // 0x806A1E20
    /* b 0x806a1e74 */ // 0x806A1E24
    r3 = *(0xb0 + r4); // lwz @ 0x806A1E28
    if (!=) goto 0x0x806a1e3c;
    /* li r31, 1 */ // 0x806A1E34
    /* b 0x806a1e74 */ // 0x806A1E38
    r3 = *(0x10c + r4); // lwz @ 0x806A1E3C
    if (!=) goto 0x0x806a1e50;
    /* li r31, 1 */ // 0x806A1E48
    /* b 0x806a1e74 */ // 0x806A1E4C
    r3 = *(0x168 + r4); // lwz @ 0x806A1E50
    if (!=) goto 0x0x806a1e64;
    /* li r31, 1 */ // 0x806A1E5C
    /* b 0x806a1e74 */ // 0x806A1E60
    r3 = *(0x1c4 + r4); // lwz @ 0x806A1E64
    if (!=) goto 0x0x806a1e74;
    /* li r31, 1 */ // 0x806A1E70
    if (==) goto 0x0x806a1e9c;
    r3 = r30 + 0x98; // 0x806A1E7C
    /* li r4, 0 */ // 0x806A1E80
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A1E88
    /* li r4, 2 */ // 0x806A1E8C
    /* lfs f1, 0(r5) */ // 0x806A1E90
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x806a1eb8 */ // 0x806A1E98
    r3 = r30 + 0x98; // 0x806A1E9C
    /* li r4, 0 */ // 0x806A1EA0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A1EA8
    /* li r4, 0 */ // 0x806A1EAC
    /* lfs f1, 0(r5) */ // 0x806A1EB0
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806A1EB8
    /* li r4, 1 */ // 0x806A1EBC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A1EC4
    /* li r4, 1 */ // 0x806A1EC8
    /* lfs f1, 0(r5) */ // 0x806A1ECC
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = *(0x214 + r30); // lwz @ 0x806A1ED4
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x806A1EDC
    r12 = *(0xc + r12); // lwz @ 0x806A1EE0
    /* mtctr r12 */ // 0x806A1EE4
    /* bctrl  */ // 0x806A1EE8
    r4 = *(0x200 + r30); // lwz @ 0x806A1EEC
    r3 = r30 + 0x218; // 0x806A1EF0
    FUN_806692E0(r3); // bl 0x806692E0
    r3 = *(0x214 + r30); // lwz @ 0x806A1EF8
    r4 = *(0x204 + r30); // lwz @ 0x806A1EFC
    r12 = *(0 + r3); // lwz @ 0x806A1F00
    r12 = *(0x14 + r12); // lwz @ 0x806A1F04
    /* mtctr r12 */ // 0x806A1F08
    /* bctrl  */ // 0x806A1F0C
    r0 = *(0x14 + r1); // lwz @ 0x806A1F10
    r31 = *(0xc + r1); // lwz @ 0x806A1F14
    r30 = *(8 + r1); // lwz @ 0x806A1F18
    return;
}