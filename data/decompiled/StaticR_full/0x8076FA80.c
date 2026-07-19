/* Function at 0x8076FA80, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8076FA80(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* extsh r4, r4 */ // 0x8076FA88
    *(0x18 + r1) = r30; // stw @ 0x8076FA94
    *(0x14 + r1) = r29; // stw @ 0x8076FA98
    r29 = r3;
    FUN_8076C984(); // bl 0x8076C984
    /* lis r3, 0 */ // 0x8076FAA4
    /* lis r4, 0 */ // 0x8076FAA8
    /* lfs f0, 0(r3) */ // 0x8076FAAC
    r4 = r4 + 0; // 0x8076FAB0
    *(0 + r29) = r4; // stw @ 0x8076FAB4
    /* li r30, 0 */ // 0x8076FAB8
    /* li r31, 0 */ // 0x8076FABC
    /* stfs f0, 0x30(r29) */ // 0x8076FAC0
    /* b 0x8076fb28 */ // 0x8076FAC4
    r0 = r30 + 1; // 0x8076FAC8
    r3 = *(0xc + r29); // lwz @ 0x8076FACC
    /* slwi r0, r0, 4 */ // 0x8076FAD0
    r4 = r3 + r0; // 0x8076FAD4
    /* lfsux f3, r3, r31 */ // 0x8076FAD8
    /* lfs f2, 0(r4) */ // 0x8076FADC
    /* lfs f1, 4(r3) */ // 0x8076FAE0
    /* lfs f0, 4(r4) */ // 0x8076FAE4
    /* fsubs f4, f3, f2 */ // 0x8076FAE8
    /* lfs f2, 8(r3) */ // 0x8076FAEC
    /* fsubs f3, f1, f0 */ // 0x8076FAF0
    /* lfs f0, 8(r4) */ // 0x8076FAF4
    /* fmuls f1, f4, f4 */ // 0x8076FAF8
    /* fsubs f2, f2, f0 */ // 0x8076FAFC
    /* fmuls f0, f3, f3 */ // 0x8076FB00
    /* fmuls f2, f2, f2 */ // 0x8076FB04
    /* fadds f0, f1, f0 */ // 0x8076FB08
    /* fadds f1, f2, f0 */ // 0x8076FB0C
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x30(r29) */ // 0x8076FB14
    r31 = r31 + 0x10; // 0x8076FB18
    r30 = r30 + 1; // 0x8076FB1C
    /* fadds f0, f0, f1 */ // 0x8076FB20
    /* stfs f0, 0x30(r29) */ // 0x8076FB24
    r3 = *(8 + r29); // lhz @ 0x8076FB28
    r3 = r3 + -1; // 0x8076FB2C
    if (<) goto 0x0x8076fac8;
    r0 = *(0xa + r29); // lbz @ 0x8076FB38
    if (!=) goto 0x0x8076fb98;
    r4 = *(0xc + r29); // lwz @ 0x8076FB44
    /* slwi r0, r3, 4 */ // 0x8076FB48
    r3 = r4 + r0; // 0x8076FB4C
    /* lfs f3, 0(r4) */ // 0x8076FB50
    /* lfsx f2, r4, r0 */ // 0x8076FB54
    /* lfs f1, 4(r4) */ // 0x8076FB58
    /* fsubs f4, f3, f2 */ // 0x8076FB5C
    /* lfs f0, 4(r3) */ // 0x8076FB60
    /* lfs f2, 8(r4) */ // 0x8076FB64
    /* fsubs f3, f1, f0 */ // 0x8076FB68
    /* lfs f0, 8(r3) */ // 0x8076FB6C
    /* fmuls f1, f4, f4 */ // 0x8076FB70
    /* fsubs f2, f2, f0 */ // 0x8076FB74
    /* fmuls f0, f3, f3 */ // 0x8076FB78
    /* fmuls f2, f2, f2 */ // 0x8076FB7C
    /* fadds f0, f1, f0 */ // 0x8076FB80
    /* fadds f1, f2, f0 */ // 0x8076FB84
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x30(r29) */ // 0x8076FB8C
    /* fadds f0, f0, f1 */ // 0x8076FB90
    /* stfs f0, 0x30(r29) */ // 0x8076FB94
}