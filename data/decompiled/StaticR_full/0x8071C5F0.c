/* Function at 0x8071C5F0, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8071C5F0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x8071C5F8
    /* lis r31, 0 */ // 0x8071C604
    r31 = r31 + 0; // 0x8071C608
    *(0x18 + r1) = r30; // stw @ 0x8071C60C
    *(0x14 + r1) = r29; // stw @ 0x8071C610
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x8071C618
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* li r5, 0x10 */ // 0x8071C620
    /* li r6, 0x12c0 */ // 0x8071C624
    r0 = r6 / r5; // 0x8071C628
    /* li r3, 0x11 */ // 0x8071C62C
    /* lis r8, 0 */ // 0x8071C630
    /* lfs f1, 0x34(r29) */ // 0x8071C634
    /* lfs f0, 8(r31) */ // 0x8071C638
    r7 = r31 + 4; // 0x8071C63C
    /* fadds f0, f0, f1 */ // 0x8071C640
    r8 = r8 + 0; // 0x8071C644
    r4 = *(0x2c + r29); // lhz @ 0x8071C648
    r30 = r3 * r3; // 0x8071C64C
    /* stfs f0, 0x34(r29) */ // 0x8071C650
    r3 = r4 | 1; // 0x8071C654
    *(0x2c + r29) = r3; // sth @ 0x8071C658
    /* lfs f3, 0xc(r31) */ // 0x8071C65C
    *(0 + r29) = r8; // stw @ 0x8071C660
    r4 = r5 * r5; // 0x8071C664
    /* lfs f2, 0x10(r31) */ // 0x8071C668
    r10 = *(4 + r31); // lbz @ 0x8071C66C
    r9 = *(1 + r7); // lbz @ 0x8071C670
    r8 = *(2 + r7); // lbz @ 0x8071C674
    r7 = *(3 + r7); // lbz @ 0x8071C678
    /* mulli r3, r30, 0xc */ // 0x8071C67C
    /* lfs f1, 0x14(r31) */ // 0x8071C680
    /* lfs f0, 0x18(r31) */ // 0x8071C684
    /* slwi r4, r4, 1 */ // 0x8071C688
    *(8 + r1) = r10; // stb @ 0x8071C68C
    r3 = r3 + 0x10; // 0x8071C690
    *(9 + r1) = r9; // stb @ 0x8071C694
    *(0xa + r1) = r8; // stb @ 0x8071C698
    *(0xb + r1) = r7; // stb @ 0x8071C69C
    *(0xf4 + r29) = r10; // stb @ 0x8071C6A0
    *(0xf5 + r29) = r9; // stb @ 0x8071C6A4
    *(0xf6 + r29) = r8; // stb @ 0x8071C6A8
    *(0xf7 + r29) = r7; // stb @ 0x8071C6AC
    *(0xc0 + r29) = r6; // stw @ 0x8071C6B0
    *(0xc4 + r29) = r6; // stw @ 0x8071C6B4
    /* stfs f3, 0xcc(r29) */ // 0x8071C6B8
    /* stfs f2, 0xc8(r29) */ // 0x8071C6BC
    /* stfs f1, 0xd0(r29) */ // 0x8071C6C0
    /* stfs f0, 0xd4(r29) */ // 0x8071C6C4
    *(0xd8 + r29) = r5; // stw @ 0x8071C6C8
    *(0xdc + r29) = r5; // stw @ 0x8071C6CC
    *(0xe8 + r29) = r4; // stw @ 0x8071C6D0
    *(0xec + r29) = r30; // stw @ 0x8071C6D4
    *(0xe0 + r29) = r0; // stw @ 0x8071C6D8
    *(0xe4 + r29) = r0; // stw @ 0x8071C6DC
    FUN_805E3430(); // bl 0x805E3430
}