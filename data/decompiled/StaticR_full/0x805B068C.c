/* Function at 0x805B068C, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805B068C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r0 = *(0xa6 + r3); // lbz @ 0x805B0698
    *(0x18 + r1) = r30; // stw @ 0x805B06A4
    *(0x14 + r1) = r29; // stw @ 0x805B06A8
    *(0x10 + r1) = r28; // stw @ 0x805B06AC
    if (!=) goto 0x0x805b06c0;
    /* lis r3, 0 */ // 0x805B06B4
    /* lfs f1, 0(r3) */ // 0x805B06B8
    /* b 0x805b0724 */ // 0x805B06BC
    r30 = r3;
    /* li r29, 0 */ // 0x805B06C4
    /* li r28, 0 */ // 0x805B06C8
    r3 = *(0x94 + r30); // lwz @ 0x805B06CC
    r12 = *(0 + r3); // lwz @ 0x805B06D0
    r31 = *(8 + r3); // lwz @ 0x805B06D4
    r12 = *(0x10 + r12); // lwz @ 0x805B06D8
    /* mtctr r12 */ // 0x805B06DC
    /* bctrl  */ // 0x805B06E0
    r0 = r31 * r3; // 0x805B06E4
    r28 = r28 + 1; // 0x805B06E8
    r30 = r30 + 4; // 0x805B06EC
    r29 = r29 + r0; // 0x805B06F4
    if (<) goto 0x0x805b06cc;
    /* lis r0, 0x4330 */ // 0x805B06FC
    *(0xc + r1) = r29; // stw @ 0x805B0700
    /* lis r4, 0 */ // 0x805B0704
    /* lis r3, 0 */ // 0x805B0708
    *(8 + r1) = r0; // stw @ 0x805B070C
    /* lfd f2, 0(r4) */ // 0x805B0710
    /* lfd f1, 8(r1) */ // 0x805B0714
    /* lfs f0, 0(r3) */ // 0x805B0718
    /* fsubs f1, f1, f2 */ // 0x805B071C
    /* fdivs f1, f1, f0 */ // 0x805B0720
    r0 = *(0x24 + r1); // lwz @ 0x805B0724
    r31 = *(0x1c + r1); // lwz @ 0x805B0728
    r30 = *(0x18 + r1); // lwz @ 0x805B072C
    r29 = *(0x14 + r1); // lwz @ 0x805B0730
    r28 = *(0x10 + r1); // lwz @ 0x805B0734
    return;
}