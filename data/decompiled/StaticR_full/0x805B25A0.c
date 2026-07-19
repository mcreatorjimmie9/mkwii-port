/* Function at 0x805B25A0, size=372 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805B25A0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805B25BC
    *(0x10 + r1) = r28; // stw @ 0x805B25C0
    r0 = *(0x14 + r3); // lwz @ 0x805B25C4
    if (!=) goto 0x0x805b26f4;
    r29 = *(8 + r3); // lwz @ 0x805B25D0
    /* li r28, 0 */ // 0x805B25D4
    if (>=) goto 0x0x805b25f0;
    /* li r0, 0 */ // 0x805B25E0
    *(8 + r3) = r0; // stw @ 0x805B25E4
    /* li r28, 1 */ // 0x805B25E8
    /* b 0x805b2678 */ // 0x805B25EC
    if (>=) goto 0x0x805b25fc;
    /* li r4, 0 */ // 0x805B25F4
    /* b 0x805b2618 */ // 0x805B25F8
    r12 = *(0 + r3); // lwz @ 0x805B25FC
    r12 = *(0x10 + r12); // lwz @ 0x805B2600
    /* mtctr r12 */ // 0x805B2604
    /* bctrl  */ // 0x805B2608
    r3 = r29 * r3; // 0x805B260C
    r0 = *(4 + r30); // lwz @ 0x805B2610
    r4 = r0 + r3; // 0x805B2614
    r12 = *(0 + r30); // lwz @ 0x805B2618
    r3 = r30;
    r5 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x805B2624
    /* mtctr r12 */ // 0x805B2628
    /* bctrl  */ // 0x805B262C
    if (==) goto 0x0x805b2678;
    r4 = *(8 + r30); // lwz @ 0x805B2638
    r3 = r30;
    /* li r28, 1 */ // 0x805B2640
    r0 = r4 + 1; // 0x805B2644
    *(8 + r30) = r0; // stw @ 0x805B2648
    r12 = *(0 + r30); // lwz @ 0x805B264C
    r12 = *(0x10 + r12); // lwz @ 0x805B2650
    /* mtctr r12 */ // 0x805B2654
    /* bctrl  */ // 0x805B2658
    r4 = *(8 + r30); // lwz @ 0x805B265C
    r0 = *(0xc + r30); // lwz @ 0x805B2660
    r3 = r4 * r3; // 0x805B2664
    if (<=) goto 0x0x805b2678;
    /* li r0, 2 */ // 0x805B2670
    *(0x14 + r30) = r0; // stw @ 0x805B2674
    r0 = *(0x14 + r30); // lwz @ 0x805B2678
    if (!=) goto 0x0x805b26f4;
    r29 = *(8 + r30); // lwz @ 0x805B2684
    if (>=) goto 0x0x805b2698;
    /* li r29, 0 */ // 0x805B2690
    /* b 0x805b26b8 */ // 0x805B2694
    r12 = *(0 + r30); // lwz @ 0x805B2698
    r3 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805B26A0
    /* mtctr r12 */ // 0x805B26A4
    /* bctrl  */ // 0x805B26A8
    r3 = r29 * r3; // 0x805B26AC
    r0 = *(4 + r30); // lwz @ 0x805B26B0
    r29 = r0 + r3; // 0x805B26B4
    if (==) goto 0x0x805b26dc;
    r12 = *(0 + r30); // lwz @ 0x805B26C0
    r3 = r30;
    r4 = r29;
    r5 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x805B26D0
    /* mtctr r12 */ // 0x805B26D4
    /* bctrl  */ // 0x805B26D8
    r12 = *(0 + r30); // lwz @ 0x805B26DC
    r3 = r30;
    r4 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x805B26E8
    /* mtctr r12 */ // 0x805B26EC
    /* bctrl  */ // 0x805B26F0
    r0 = *(0x24 + r1); // lwz @ 0x805B26F4
    r31 = *(0x1c + r1); // lwz @ 0x805B26F8
    r30 = *(0x18 + r1); // lwz @ 0x805B26FC
    r29 = *(0x14 + r1); // lwz @ 0x805B2700
    r28 = *(0x10 + r1); // lwz @ 0x805B2704
    return;
}