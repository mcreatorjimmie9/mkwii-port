/* Function at 0x8087E480, size=428 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_8087E480(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x8087E490
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x8087E498
    r12 = *(0x3c + r12); // lwz @ 0x8087E49C
    /* mtctr r12 */ // 0x8087E4A0
    /* bctrl  */ // 0x8087E4A4
    r3 = r30;
    FUN_80876FEC(r3); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x8087E4B0
    r3 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x8087E4B8
    r0 = *(0x198 + r30); // lbz @ 0x8087E4BC
    r4 = *(0xc + r4); // lwz @ 0x8087E4C0
    /* lwzx r3, r4, r3 */ // 0x8087E4C4
    r31 = *(0x20 + r3); // lbz @ 0x8087E4C8
    if (==) goto 0x0x8087e5d8;
    r3 = r30;
    FUN_80876FEC(r3); // bl 0x80876FEC
    r0 = *(0x19c + r30); // lwz @ 0x8087E4DC
    if (!=) goto 0x0x8087e5d8;
    r3 = r30 + 0x98; // 0x8087E4E8
    /* li r4, 1 */ // 0x8087E4EC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8087E4F4
    if (==) goto 0x0x8087e50c;
    if (==) goto 0x0x8087e52c;
    /* b 0x8087e5d8 */ // 0x8087E508
    r3 = r30 + 0x98; // 0x8087E50C
    /* li r4, 1 */ // 0x8087E510
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8087E518
    /* li r4, 0 */ // 0x8087E51C
    /* lfs f1, 0(r5) */ // 0x8087E520
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x8087e5d8 */ // 0x8087E528
    r12 = *(0 + r30); // lwz @ 0x8087E52C
    r3 = r30;
    r12 = *(0x48 + r12); // lwz @ 0x8087E534
    /* mtctr r12 */ // 0x8087E538
    /* bctrl  */ // 0x8087E53C
    if (!=) goto 0x0x8087e568;
    r0 = *(0x198 + r30); // lbz @ 0x8087E548
    if (>=) goto 0x0x8087e568;
    r5 = *(0x190 + r30); // lbz @ 0x8087E554
    r3 = r30;
    /* li r4, 0xe5 */ // 0x8087E55C
    FUN_806A03CC(r3, r4); // bl 0x806A03CC
    /* b 0x8087e594 */ // 0x8087E564
    r12 = *(0 + r30); // lwz @ 0x8087E568
    r3 = r30;
    r12 = *(0x48 + r12); // lwz @ 0x8087E570
    /* mtctr r12 */ // 0x8087E574
    /* bctrl  */ // 0x8087E578
    if (!=) goto 0x0x8087e594;
    r5 = *(0x190 + r30); // lbz @ 0x8087E584
    r3 = r30;
    /* li r4, 0xe6 */ // 0x8087E58C
    FUN_806A03CC(r3, r4); // bl 0x806A03CC
    *(0x198 + r30) = r31; // stb @ 0x8087E594
    r3 = r30 + 0x98; // 0x8087E598
    /* li r4, 0 */ // 0x8087E59C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    r4 = *(0x198 + r30); // lbz @ 0x8087E5A4
    /* lis r0, 0x4330 */ // 0x8087E5A8
    *(0xc + r1) = r4; // stw @ 0x8087E5AC
    /* lis r4, 0 */ // 0x8087E5B0
    /* lfd f2, 0(r4) */ // 0x8087E5B4
    /* lis r5, 0 */ // 0x8087E5B8
    *(8 + r1) = r0; // stw @ 0x8087E5BC
    /* li r4, 0 */ // 0x8087E5C0
    /* lfs f0, 0(r5) */ // 0x8087E5C4
    /* lfd f1, 8(r1) */ // 0x8087E5C8
    /* fsubs f1, f1, f2 */ // 0x8087E5CC
    /* fsubs f1, f1, f0 */ // 0x8087E5D0
    FUN_8069F7A0(r4); // bl 0x8069F7A0
    r3 = r30;
    FUN_80876FEC(r3); // bl 0x80876FEC
    *(0x19c + r30) = r3; // stw @ 0x8087E5E0
    r4 = r3;
    /* lis r3, 0 */ // 0x8087E5E8
    r3 = *(0 + r3); // lwz @ 0x8087E5EC
    FUN_8061D97C(r4, r3); // bl 0x8061D97C
    FUN_8061F01C(r4, r3); // bl 0x8061F01C
    r4 = *(0x1a0 + r30); // lwz @ 0x8087E5F8
    r0 = r3 + 1; // 0x8087E5FC
    /* cntlzw r0, r0 */ // 0x8087E600
    r3 = *(0xbb + r4); // lbz @ 0x8087E604
    /* srwi r0, r0, 5 */ // 0x8087E608
    r0 = r3 rlwimi 0; // rlwimi
    *(0xbb + r4) = r0; // stb @ 0x8087E610
    r31 = *(0x1c + r1); // lwz @ 0x8087E614
    r30 = *(0x18 + r1); // lwz @ 0x8087E618
    r0 = *(0x24 + r1); // lwz @ 0x8087E61C
    return;
}