/* Function at 0x8073E504, size=476 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8073E504(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8073E51C
    r29 = r3;
    r5 = *(0x124 + r3); // lwz @ 0x8073E524
    if (!=) goto 0x0x8073e53c;
    r0 = *(0x320 + r3); // lwz @ 0x8073E530
    if (==) goto 0x0x8073e6c4;
    if (!=) goto 0x0x8073e550;
    r0 = *(0x31c + r3); // lwz @ 0x8073E544
    if (==) goto 0x0x8073e6c4;
    if (!=) goto 0x0x8073e610;
    r0 = r4 + 2; // 0x8073E558
    /* slwi r0, r0, 2 */ // 0x8073E55C
    r31 = r3 + r0; // 0x8073E560
    r3 = *(0x318 + r31); // lwz @ 0x8073E564
    r12 = *(0 + r3); // lwz @ 0x8073E568
    r12 = *(0x14 + r12); // lwz @ 0x8073E56C
    /* mtctr r12 */ // 0x8073E570
    /* bctrl  */ // 0x8073E574
    r3 = *(0x318 + r31); // lwz @ 0x8073E578
    r4 = r29 + 0x6f4; // 0x8073E57C
    r12 = *(0 + r3); // lwz @ 0x8073E580
    r12 = *(0x78 + r12); // lwz @ 0x8073E584
    /* mtctr r12 */ // 0x8073E588
    /* bctrl  */ // 0x8073E58C
    r3 = *(0x318 + r31); // lwz @ 0x8073E590
    /* mulli r0, r30, 0xc */ // 0x8073E594
    r12 = *(0 + r3); // lwz @ 0x8073E598
    r4 = r29 + r0; // 0x8073E59C
    r12 = *(0x74 + r12); // lwz @ 0x8073E5A0
    r4 = r4 + 0x7bc; // 0x8073E5A4
    /* mtctr r12 */ // 0x8073E5A8
    /* bctrl  */ // 0x8073E5AC
    r0 = *(0xb0 + r29); // lbz @ 0x8073E5B0
    if (==) goto 0x0x8073e5d4;
    r3 = *(0x318 + r31); // lwz @ 0x8073E5BC
    r4 = r29 + 0x72c; // 0x8073E5C0
    r12 = *(0 + r3); // lwz @ 0x8073E5C4
    r12 = *(0x70 + r12); // lwz @ 0x8073E5C8
    /* mtctr r12 */ // 0x8073E5CC
    /* bctrl  */ // 0x8073E5D0
    r0 = *(0xb0 + r29); // lbz @ 0x8073E5D4
    if (==) goto 0x0x8073e5f8;
    r3 = *(0x318 + r31); // lwz @ 0x8073E5E0
    r4 = r29 + 0x738; // 0x8073E5E4
    r12 = *(0 + r3); // lwz @ 0x8073E5E8
    r12 = *(0x58 + r12); // lwz @ 0x8073E5EC
    /* mtctr r12 */ // 0x8073E5F0
    /* bctrl  */ // 0x8073E5F4
    r3 = *(0x318 + r31); // lwz @ 0x8073E5F8
    r12 = *(0 + r3); // lwz @ 0x8073E5FC
    r12 = *(0x80 + r12); // lwz @ 0x8073E600
    /* mtctr r12 */ // 0x8073E604
    /* bctrl  */ // 0x8073E608
    /* b 0x8073e6c4 */ // 0x8073E60C
    if (!=) goto 0x0x8073e6c4;
    r3 = *(0x31c + r3); // lwz @ 0x8073E618
    r12 = *(0 + r3); // lwz @ 0x8073E61C
    r12 = *(0x14 + r12); // lwz @ 0x8073E620
    /* mtctr r12 */ // 0x8073E624
    /* bctrl  */ // 0x8073E628
    r3 = *(0x31c + r29); // lwz @ 0x8073E62C
    r4 = r29 + 0x6f4; // 0x8073E630
    r12 = *(0 + r3); // lwz @ 0x8073E634
    r12 = *(0x78 + r12); // lwz @ 0x8073E638
    /* mtctr r12 */ // 0x8073E63C
    /* bctrl  */ // 0x8073E640
    r3 = *(0x31c + r29); // lwz @ 0x8073E644
    r4 = r29 + 0x7c8; // 0x8073E648
    r12 = *(0 + r3); // lwz @ 0x8073E64C
    r12 = *(0x74 + r12); // lwz @ 0x8073E650
    /* mtctr r12 */ // 0x8073E654
    /* bctrl  */ // 0x8073E658
    r0 = *(0xb0 + r29); // lbz @ 0x8073E65C
    if (==) goto 0x0x8073e680;
    r3 = *(0x31c + r29); // lwz @ 0x8073E668
    r4 = r29 + 0x72c; // 0x8073E66C
    r12 = *(0 + r3); // lwz @ 0x8073E670
    r12 = *(0x70 + r12); // lwz @ 0x8073E674
    /* mtctr r12 */ // 0x8073E678
    /* bctrl  */ // 0x8073E67C
    r0 = *(0xb0 + r29); // lbz @ 0x8073E680
    if (==) goto 0x0x8073e6b0;
    r0 = r30 + 1; // 0x8073E68C
    r4 = r29 + 0x738; // 0x8073E690
    /* slwi r0, r0, 2 */ // 0x8073E694
    r3 = r29 + r0; // 0x8073E698
    r3 = *(0x318 + r3); // lwz @ 0x8073E69C
    r12 = *(0 + r3); // lwz @ 0x8073E6A0
    r12 = *(0x58 + r12); // lwz @ 0x8073E6A4
    /* mtctr r12 */ // 0x8073E6A8
    /* bctrl  */ // 0x8073E6AC
    r3 = *(0x31c + r29); // lwz @ 0x8073E6B0
    r12 = *(0 + r3); // lwz @ 0x8073E6B4
    r12 = *(0x80 + r12); // lwz @ 0x8073E6B8
    /* mtctr r12 */ // 0x8073E6BC
    /* bctrl  */ // 0x8073E6C0
    r0 = *(0x24 + r1); // lwz @ 0x8073E6C4
    r31 = *(0x1c + r1); // lwz @ 0x8073E6C8
    r30 = *(0x18 + r1); // lwz @ 0x8073E6CC
    r29 = *(0x14 + r1); // lwz @ 0x8073E6D0
    return;
}