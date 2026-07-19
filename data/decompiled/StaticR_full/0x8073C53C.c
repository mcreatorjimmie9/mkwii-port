/* Function at 0x8073C53C, size=244 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073C53C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8073C544
    *(0x8c + r1) = r31; // stw @ 0x8073C54C
    r31 = r3;
    *(0x88 + r1) = r30; // stw @ 0x8073C554
    r3 = *(0x160 + r3); // lwz @ 0x8073C558
    r12 = *(0 + r3); // lwz @ 0x8073C55C
    r12 = *(0xc + r12); // lwz @ 0x8073C560
    /* mtctr r12 */ // 0x8073C564
    /* bctrl  */ // 0x8073C568
    r9 = *(0x6cc + r31); // lwz @ 0x8073C56C
    /* lis r7, 0 */ // 0x8073C570
    r8 = *(0x6f4 + r31); // lwz @ 0x8073C574
    r6 = r7 + 0; // 0x8073C578
    /* lfs f0, 0x30(r9) */ // 0x8073C57C
    /* stfs f0, 0x77c(r31) */ // 0x8073C584
    r0 = *(0x6f8 + r31); // lwz @ 0x8073C58C
    r5 = r31 + 0x788; // 0x8073C590
    /* lfs f0, 0x34(r9) */ // 0x8073C594
    /* stfs f0, 0x780(r31) */ // 0x8073C598
    /* lfs f0, 0x38(r9) */ // 0x8073C59C
    /* stfs f0, 0x784(r31) */ // 0x8073C5A0
    /* lfs f0, 0x3c(r9) */ // 0x8073C5A4
    /* stfs f0, 0x788(r31) */ // 0x8073C5A8
    /* lfs f0, 0x40(r9) */ // 0x8073C5AC
    /* stfs f0, 0x78c(r31) */ // 0x8073C5B0
    /* lfs f0, 0x44(r9) */ // 0x8073C5B4
    /* stfs f0, 0x790(r31) */ // 0x8073C5B8
    *(0x50 + r1) = r8; // stw @ 0x8073C5BC
    /* lfs f2, 0(r7) */ // 0x8073C5C0
    *(0x54 + r1) = r0; // stw @ 0x8073C5C4
    /* lfs f1, 4(r6) */ // 0x8073C5C8
    r7 = *(0x6fc + r31); // lwz @ 0x8073C5CC
    r0 = *(0x700 + r31); // lwz @ 0x8073C5D0
    *(0x5c + r1) = r0; // stw @ 0x8073C5D4
    /* lfs f0, 8(r6) */ // 0x8073C5D8
    *(0x58 + r1) = r7; // stw @ 0x8073C5DC
    r6 = *(0x704 + r31); // lwz @ 0x8073C5E0
    r0 = *(0x708 + r31); // lwz @ 0x8073C5E4
    *(0x64 + r1) = r0; // stw @ 0x8073C5E8
    *(0x60 + r1) = r6; // stw @ 0x8073C5EC
    r6 = *(0x70c + r31); // lwz @ 0x8073C5F0
    r0 = *(0x710 + r31); // lwz @ 0x8073C5F4
    *(0x6c + r1) = r0; // stw @ 0x8073C5F8
    *(0x68 + r1) = r6; // stw @ 0x8073C5FC
    r6 = *(0x714 + r31); // lwz @ 0x8073C600
    r0 = *(0x718 + r31); // lwz @ 0x8073C604
    *(0x74 + r1) = r0; // stw @ 0x8073C608
    *(0x70 + r1) = r6; // stw @ 0x8073C60C
    r6 = *(0x71c + r31); // lwz @ 0x8073C610
    r0 = *(0x720 + r31); // lwz @ 0x8073C614
    *(0x7c + r1) = r0; // stw @ 0x8073C618
    *(0x78 + r1) = r6; // stw @ 0x8073C61C
    /* stfs f2, 0x5c(r1) */ // 0x8073C620
    /* stfs f1, 0x6c(r1) */ // 0x8073C624
    /* stfs f0, 0x7c(r1) */ // 0x8073C628
    FUN_805E3430(); // bl 0x805E3430
}