/* Function at 0x80879940, size=380 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80879940(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80879950
    r31 = r31 + 0; // 0x80879954
    *(0x28 + r1) = r30; // stw @ 0x80879958
    /* lis r30, 0 */ // 0x8087995C
    r30 = r30 + 0; // 0x80879960
    r4 = r31 + 0x35; // 0x80879964
    *(0x24 + r1) = r29; // stw @ 0x80879968
    r29 = r3;
    r3 = r3 + 0xa8; // 0x80879970
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    *(0x180 + r29) = r3; // stw @ 0x80879978
    r4 = r31 + 0x45; // 0x8087997C
    r3 = r29 + 0xa8; // 0x80879980
    FUN_80665D1C(r3, r4, r3); // bl 0x80665D1C
    *(0x184 + r29) = r3; // stw @ 0x80879988
    /* lis r3, 0 */ // 0x8087998C
    r3 = *(0 + r3); // lwz @ 0x80879990
    r3 = *(0x25 + r3); // lbz @ 0x80879994
    r0 = r3 + -3; // 0x80879998
    if (<=) goto 0x0x808799f0;
    if (==) goto 0x0x808799b8;
    if (==) goto 0x0x808799d4;
    /* b 0x80879a08 */ // 0x808799B4
    r3 = *(0x180 + r29); // lwz @ 0x808799B8
    /* lfs f0, 4(r30) */ // 0x808799BC
    /* stfs f0, 0x44(r3) */ // 0x808799C0
    /* stfs f0, 0x18(r1) */ // 0x808799C4
    /* stfs f0, 0x1c(r1) */ // 0x808799C8
    /* stfs f0, 0x48(r3) */ // 0x808799CC
    /* b 0x80879a08 */ // 0x808799D0
    r3 = *(0x180 + r29); // lwz @ 0x808799D4
    /* lfs f0, 0xb4(r30) */ // 0x808799D8
    /* stfs f0, 0x44(r3) */ // 0x808799DC
    /* stfs f0, 0x10(r1) */ // 0x808799E0
    /* stfs f0, 0x14(r1) */ // 0x808799E4
    /* stfs f0, 0x48(r3) */ // 0x808799E8
    /* b 0x80879a08 */ // 0x808799EC
    r3 = *(0x180 + r29); // lwz @ 0x808799F0
    /* lfs f0, 0xb8(r30) */ // 0x808799F4
    /* stfs f0, 0x44(r3) */ // 0x808799F8
    /* stfs f0, 8(r1) */ // 0x808799FC
    /* stfs f0, 0xc(r1) */ // 0x80879A00
    /* stfs f0, 0x48(r3) */ // 0x80879A04
    /* li r0, 1 */ // 0x80879A08
    *(0x80 + r29) = r0; // stb @ 0x80879A0C
    r3 = r29 + 0x98; // 0x80879A10
    /* li r4, 0 */ // 0x80879A14
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r30) */ // 0x80879A1C
    /* li r4, 0 */ // 0x80879A20
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r5 = *(0x17c + r29); // lwz @ 0x80879A28
    if (==) goto 0x0x80879aa0;
    r3 = *(0x178 + r29); // lwz @ 0x80879A34
    if (<) goto 0x0x80879aa0;
    r0 = *(4 + r5); // lwz @ 0x80879A40
    /* li r4, 0 */ // 0x80879A44
    /* mtctr r0 */ // 0x80879A48
    if (<=) goto 0x0x80879a78;
    r0 = *(0x14 + r5); // lwz @ 0x80879A54
    if (==) goto 0x0x80879a6c;
    if (!=) goto 0x0x80879a6c;
    /* b 0x80879a7c */ // 0x80879A68
    r5 = r5 + 4; // 0x80879A6C
    r4 = r4 + 1; // 0x80879A70
    if (counter-- != 0) goto 0x0x80879a54;
    /* li r4, -1 */ // 0x80879A78
    if (<) goto 0x0x80879aa0;
    if (>=) goto 0x0x80879aa0;
    r3 = *(0x17c + r29); // lwz @ 0x80879A8C
    /* li r0, -1 */ // 0x80879A90
    *(0x178 + r29) = r0; // stw @ 0x80879A94
    /* li r0, 0 */ // 0x80879A98
    /* stbx r0, r3, r4 */ // 0x80879A9C
    r0 = *(0x34 + r1); // lwz @ 0x80879AA0
    r31 = *(0x2c + r1); // lwz @ 0x80879AA4
    r30 = *(0x28 + r1); // lwz @ 0x80879AA8
    r29 = *(0x24 + r1); // lwz @ 0x80879AAC
    return;
}