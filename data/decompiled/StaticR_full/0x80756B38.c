/* Function at 0x80756B38, size=372 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80756B38(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x80756B48
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80756B50
    r30 = r3;
    if (==) goto 0x0x80756b70;
    if (==) goto 0x0x80756b78;
    if (==) goto 0x0x80756c04;
    /* b 0x80756c90 */ // 0x80756B6C
    r3 = r31;
    /* b 0x80756c94 */ // 0x80756B74
    r0 = *(0x152 + r3); // lbz @ 0x80756B78
    if (!=) goto 0x0x80756bfc;
    r3 = r4;
    /* li r4, 0 */ // 0x80756B88
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* lfs f1, 0x10c(r30) */ // 0x80756B90
    /* li r0, 1 */ // 0x80756B94
    /* lfs f3, 0x110(r30) */ // 0x80756B98
    /* li r5, 0 */ // 0x80756B9C
    /* lfs f0, 0x114(r30) */ // 0x80756BA0
    /* lis r4, 0 */ // 0x80756BA4
    *(0x152 + r30) = r0; // stb @ 0x80756BA8
    /* lis r3, 0 */ // 0x80756BAC
    /* lis r6, 0 */ // 0x80756BB0
    /* lis r0, 0x4330 */ // 0x80756BB4
    *(0x154 + r30) = r5; // sth @ 0x80756BB8
    /* lis r5, 0 */ // 0x80756BBC
    /* lfs f2, 0(r6) */ // 0x80756BC0
    /* stfs f1, 0x158(r30) */ // 0x80756BC4
    /* lfd f1, 0(r3) */ // 0x80756BC8
    /* stfs f3, 0x15c(r30) */ // 0x80756BCC
    /* stfs f0, 0x160(r30) */ // 0x80756BD0
    r3 = *(0 + r4); // lwz @ 0x80756BD4
    /* lfs f0, 0(r5) */ // 0x80756BD8
    /* xoris r3, r3, 0x8000 */ // 0x80756BDC
    *(0xc + r1) = r3; // stw @ 0x80756BE0
    /* fmuls f2, f2, f0 */ // 0x80756BE4
    *(8 + r1) = r0; // stw @ 0x80756BE8
    /* lfd f0, 8(r1) */ // 0x80756BEC
    /* fsubs f0, f0, f1 */ // 0x80756BF0
    /* fdivs f0, f2, f0 */ // 0x80756BF4
    /* stfs f0, 0x168(r30) */ // 0x80756BF8
    r3 = r31;
    /* b 0x80756c94 */ // 0x80756C00
    r0 = *(0x152 + r3); // lbz @ 0x80756C04
    if (!=) goto 0x0x80756c88;
    r3 = r4;
    /* li r4, 0 */ // 0x80756C14
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* lfs f1, 0x10c(r30) */ // 0x80756C1C
    /* li r0, 1 */ // 0x80756C20
    /* lfs f3, 0x110(r30) */ // 0x80756C24
    /* li r5, 0 */ // 0x80756C28
    /* lfs f0, 0x114(r30) */ // 0x80756C2C
    /* lis r4, 0 */ // 0x80756C30
    *(0x152 + r30) = r0; // stb @ 0x80756C34
    /* lis r3, 0 */ // 0x80756C38
    /* lis r6, 0 */ // 0x80756C3C
    /* lis r0, 0x4330 */ // 0x80756C40
    *(0x154 + r30) = r5; // sth @ 0x80756C44
    /* lis r5, 0 */ // 0x80756C48
    /* lfs f2, 0(r6) */ // 0x80756C4C
    /* stfs f1, 0x158(r30) */ // 0x80756C50
    /* lfd f1, 0(r3) */ // 0x80756C54
    /* stfs f3, 0x15c(r30) */ // 0x80756C58
    /* stfs f0, 0x160(r30) */ // 0x80756C5C
    r3 = *(0 + r4); // lwz @ 0x80756C60
    /* lfs f0, 0(r5) */ // 0x80756C64
    /* xoris r3, r3, 0x8000 */ // 0x80756C68
    *(0xc + r1) = r3; // stw @ 0x80756C6C
    /* fmuls f2, f2, f0 */ // 0x80756C70
    *(8 + r1) = r0; // stw @ 0x80756C74
    /* lfd f0, 8(r1) */ // 0x80756C78
    /* fsubs f0, f0, f1 */ // 0x80756C7C
    /* fdivs f0, f2, f0 */ // 0x80756C80
    /* stfs f0, 0x168(r30) */ // 0x80756C84
    r3 = r31;
    /* b 0x80756c94 */ // 0x80756C8C
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80756C94
    r31 = *(0x1c + r1); // lwz @ 0x80756C98
    r30 = *(0x18 + r1); // lwz @ 0x80756C9C
    return;
}