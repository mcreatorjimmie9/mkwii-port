/* Function at 0x806BDD14, size=380 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_806BDD14(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 4 */ // 0x806BDD1C
    *(0x28 + r1) = r30; // stw @ 0x806BDD28
    /* lis r30, 0 */ // 0x806BDD2C
    r30 = r30 + 0; // 0x806BDD30
    *(0x24 + r1) = r29; // stw @ 0x806BDD34
    r29 = r3;
    r3 = r3 + 0x98; // 0x806BDD3C
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r3 = *(0x38 + r3); // lwz @ 0x806BDD44
    r0 = r3 + -1; // 0x806BDD48
    if (>) goto 0x0x806bde74;
    r3 = *(0x194 + r29); // lwz @ 0x806BDD54
    /* lfs f3, 0x198(r29) */ // 0x806BDD58
    /* lfs f4, 0x2c(r3) */ // 0x806BDD5C
    /* lfs f1, 0x11c(r30) */ // 0x806BDD60
    /* fsubs f2, f4, f3 */ // 0x806BDD64
    /* .byte 0xfc, 0x02, 0x08, 0x40 */ // 0x806BDD68
    if (<=) goto 0x0x806bdd78;
    /* fsubs f4, f4, f1 */ // 0x806BDD70
    /* b 0x806bdd90 */ // 0x806BDD74
    /* lfs f0, 0x120(r30) */ // 0x806BDD78
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x806BDD7C
    if (>=) goto 0x0x806bdd8c;
    /* fadds f4, f4, f1 */ // 0x806BDD84
    /* b 0x806bdd90 */ // 0x806BDD88
    /* fmr f4, f3 */ // 0x806BDD8C
    /* frsp f2, f4 */ // 0x806BDD90
    /* lfs f1, 0x124(r30) */ // 0x806BDD94
    /* lfs f0, 0(r30) */ // 0x806BDD98
    /* stfs f2, 0x2c(r3) */ // 0x806BDD9C
    /* stfs f1, 0x30(r3) */ // 0x806BDDA0
    /* stfs f0, 0x34(r3) */ // 0x806BDDA4
    /* stfs f4, 8(r1) */ // 0x806BDDA8
    r3 = *(0x188 + r29); // lwz @ 0x806BDDAC
    /* stfs f1, 0xc(r1) */ // 0x806BDDB0
    r4 = *(0x190 + r29); // lwz @ 0x806BDDB4
    /* stfs f2, 0x10(r1) */ // 0x806BDDB8
    /* stfs f1, 0x14(r1) */ // 0x806BDDBC
    /* stfs f0, 0x18(r1) */ // 0x806BDDC0
    FUN_8066E138(); // bl 0x8066E138
    if (!=) goto 0x0x806bde74;
    r0 = *(0x19c + r29); // lbz @ 0x806BDDD0
    if (!=) goto 0x0x806bde74;
    /* lis r31, 0 */ // 0x806BDDDC
    r5 = *(0x188 + r29); // lwz @ 0x806BDDE0
    r31 = r31 + 0; // 0x806BDDE4
    r6 = *(0x190 + r29); // lwz @ 0x806BDDE8
    r3 = r29;
    /* li r7, 2 */ // 0x806BDDF0
    r4 = r31 + 0xf7; // 0x806BDDF4
    FUN_806A105C(r3, r7, r4); // bl 0x806A105C
    r5 = *(0x188 + r29); // lwz @ 0x806BDDFC
    r3 = r29;
    r6 = *(0x190 + r29); // lwz @ 0x806BDE04
    r4 = r31 + 0xfd; // 0x806BDE08
    /* li r7, 2 */ // 0x806BDE0C
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x188 + r29); // lwz @ 0x806BDE14
    r3 = r29;
    r6 = *(0x190 + r29); // lwz @ 0x806BDE1C
    r4 = r31 + 0x10c; // 0x806BDE20
    /* li r7, 2 */ // 0x806BDE24
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r3 = r29 + 0x98; // 0x806BDE2C
    /* li r4, 2 */ // 0x806BDE30
    FUN_8069F4A0(r4, r7, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r30) */ // 0x806BDE38
    /* li r4, 0 */ // 0x806BDE3C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x98; // 0x806BDE44
    /* li r4, 3 */ // 0x806BDE48
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r30) */ // 0x806BDE50
    /* li r4, 0 */ // 0x806BDE54
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* li r0, 1 */ // 0x806BDE5C
    *(0x19c + r29) = r0; // stb @ 0x806BDE60
    r3 = r29;
    /* li r4, 0x3b */ // 0x806BDE68
    /* li r5, -1 */ // 0x806BDE6C
    FUN_806A03CC(r3, r4, r5); // bl 0x806A03CC
    r0 = *(0x34 + r1); // lwz @ 0x806BDE74
    r31 = *(0x2c + r1); // lwz @ 0x806BDE78
    r30 = *(0x28 + r1); // lwz @ 0x806BDE7C
    r29 = *(0x24 + r1); // lwz @ 0x806BDE80
    return;
}