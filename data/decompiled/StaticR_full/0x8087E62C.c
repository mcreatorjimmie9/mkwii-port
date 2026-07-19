/* Function at 0x8087E62C, size=396 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8087E62C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -192(r1) */
    /* saved r23 */
    /* stmw r23, 0x9c(r1) */ // 0x8087E638
    r23 = r3;
    r24 = r4;
    *(0x190 + r3) = r5; // stb @ 0x8087E644
    FUN_80876FEC(); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x8087E64C
    r0 = r3 rlwinm 2; // rlwinm
    r5 = *(0 + r4); // lwz @ 0x8087E654
    r4 = r23;
    r5 = *(0xc + r5); // lwz @ 0x8087E660
    /* lwzx r5, r5, r0 */ // 0x8087E664
    r0 = *(0x20 + r5); // lbz @ 0x8087E668
    *(0x198 + r23) = r0; // stb @ 0x8087E66C
    FUN_8064E324(r3); // bl 0x8064E324
    /* lis r3, 0 */ // 0x8087E674
    r3 = *(0 + r3); // lwz @ 0x8087E678
    r0 = *(0xb90 + r3); // lwz @ 0x8087E67C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8087E680
    if (!=) goto 0x0x8087e694;
    r0 = *(0x25 + r3); // lbz @ 0x8087E688
    if (==) goto 0x0x8087e704;
    /* lis r26, 0 */ // 0x8087E694
    r25 = *(0 + r26); // lwzu @ 0x8087E698
    /* lis r5, 0 */ // 0x8087E69C
    r6 = r24;
    r24 = *(4 + r26); // lwz @ 0x8087E6A4
    r5 = r5 + 0; // 0x8087E6A8
    r23 = *(8 + r26); // lwz @ 0x8087E6AC
    r4 = r5 + 0x27; // 0x8087E6B0
    r12 = *(0xc + r26); // lwz @ 0x8087E6B4
    r11 = *(0x10 + r26); // lwz @ 0x8087E6BC
    r5 = r5 + 0x32; // 0x8087E6C0
    r10 = *(0x14 + r26); // lwz @ 0x8087E6C4
    r9 = *(0x18 + r26); // lwz @ 0x8087E6CC
    r8 = *(0x1c + r26); // lwz @ 0x8087E6D0
    r0 = *(0x20 + r26); // lwz @ 0x8087E6D4
    *(0x40 + r1) = r25; // stw @ 0x8087E6D8
    *(0x44 + r1) = r24; // stw @ 0x8087E6DC
    *(0x48 + r1) = r23; // stw @ 0x8087E6E0
    *(0x4c + r1) = r12; // stw @ 0x8087E6E4
    *(0x50 + r1) = r11; // stw @ 0x8087E6E8
    *(0x54 + r1) = r10; // stw @ 0x8087E6EC
    *(0x58 + r1) = r9; // stw @ 0x8087E6F0
    *(0x5c + r1) = r8; // stw @ 0x8087E6F4
    *(0x60 + r1) = r0; // stw @ 0x8087E6F8
    FUN_8064E36C(); // bl 0x8064E36C
    /* b 0x8087e798 */ // 0x8087E700
    /* lis r23, 0 */ // 0x8087E704
    r6 = r24;
    r24 = *(0 + r23); // lwzu @ 0x8087E70C
    /* lis r5, 0 */ // 0x8087E710
    r5 = r5 + 0; // 0x8087E714
    *(8 + r1) = r24; // stw @ 0x8087E718
    r25 = *(4 + r23); // lwz @ 0x8087E71C
    r4 = r5 + 0x41; // 0x8087E720
    r26 = *(8 + r23); // lwz @ 0x8087E724
    r27 = *(0xc + r23); // lwz @ 0x8087E72C
    r5 = r5 + 0x4c; // 0x8087E730
    r28 = *(0x10 + r23); // lwz @ 0x8087E734
    r29 = *(0x14 + r23); // lwz @ 0x8087E73C
    r30 = *(0x18 + r23); // lwz @ 0x8087E740
    r31 = *(0x1c + r23); // lwz @ 0x8087E744
    r12 = *(0x20 + r23); // lwz @ 0x8087E748
    r11 = *(0x24 + r23); // lwz @ 0x8087E74C
    r10 = *(0x28 + r23); // lwz @ 0x8087E750
    r9 = *(0x2c + r23); // lwz @ 0x8087E754
    r8 = *(0x30 + r23); // lwz @ 0x8087E758
    r0 = *(0x34 + r23); // lwz @ 0x8087E75C
    *(0xc + r1) = r25; // stw @ 0x8087E760
    *(0x10 + r1) = r26; // stw @ 0x8087E764
    *(0x14 + r1) = r27; // stw @ 0x8087E768
    *(0x18 + r1) = r28; // stw @ 0x8087E76C
    *(0x1c + r1) = r29; // stw @ 0x8087E770
    *(0x20 + r1) = r30; // stw @ 0x8087E774
    *(0x24 + r1) = r31; // stw @ 0x8087E778
    *(0x28 + r1) = r12; // stw @ 0x8087E77C
    *(0x2c + r1) = r11; // stw @ 0x8087E780
    *(0x30 + r1) = r10; // stw @ 0x8087E784
    *(0x34 + r1) = r9; // stw @ 0x8087E788
    *(0x38 + r1) = r8; // stw @ 0x8087E78C
    *(0x3c + r1) = r0; // stw @ 0x8087E790
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x8087E79C
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0xc4 + r1); // lwz @ 0x8087E7A8
    return;
}