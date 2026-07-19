/* Function at 0x8090E528, size=156 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8090E528(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8090E538
    r31 = r31 + 0; // 0x8090E53C
    *(0x28 + r1) = r30; // stw @ 0x8090E540
    r30 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x8090E548
    if (==) goto 0x0x8090e618;
    r0 = *(0x54 + r3); // lbz @ 0x8090E554
    if (==) goto 0x0x8090e568;
    r4 = r3 + 0x48; // 0x8090E560
    /* b 0x8090e598 */ // 0x8090E564
    /* li r0, 1 */ // 0x8090E568
    *(0x54 + r3) = r0; // stb @ 0x8090E56C
    r4 = r30 + 0x58; // 0x8090E574
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x8090E57C
    r4 = r30 + 0x48; // 0x8090E580
    /* stfs f0, 0x48(r30) */ // 0x8090E584
    /* lfs f0, 0xc(r1) */ // 0x8090E588
    /* stfs f0, 0x4c(r30) */ // 0x8090E58C
    /* lfs f0, 0x10(r1) */ // 0x8090E590
    /* stfs f0, 0x50(r30) */ // 0x8090E594
    /* lis r3, 0 */ // 0x8090E598
    /* lfs f1, 0(r4) */ // 0x8090E59C
    /* lfs f0, 0(r3) */ // 0x8090E5A0
    /* fmuls f1, f0, f1 */ // 0x8090E5A4
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8090E5AC
    r0 = *(0x120 + r30); // lbz @ 0x8090E5B0
    /* lfs f0, 0x10(r31) */ // 0x8090E5B4
    /* fabs f1, f1 */ // 0x8090E5B8
    /* lfs f2, 0(r3) */ // 0x8090E5BC
}