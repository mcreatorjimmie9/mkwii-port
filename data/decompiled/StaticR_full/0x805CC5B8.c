/* Function at 0x805CC5B8, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_805CC5B8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805CC5C4
    r28 = r3;
    r29 = r4;
    r0 = *(0x106 + r3); // lbz @ 0x805CC5D0
    if (!=) goto 0x0x805cc6e4;
    /* lis r3, 0 */ // 0x805CC5DC
    /* li r4, 4 */ // 0x805CC5E0
    r3 = *(0 + r3); // lwz @ 0x805CC5E4
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805cc6e4;
    /* lis r27, 0 */ // 0x805CC5F4
    /* mulli r30, r29, 0x18 */ // 0x805CC5F8
    r3 = *(0 + r27); // lwz @ 0x805CC5FC
    r4 = r3 + r30; // 0x805CC600
    r0 = *(0x3c4 + r4); // lbz @ 0x805CC604
    if (==) goto 0x0x805cc6e4;
    /* lis r4, 0 */ // 0x805CC610
    r4 = *(0 + r4); // lwz @ 0x805CC614
    r0 = *(0x24 + r4); // lbz @ 0x805CC618
    if (>=) goto 0x0x805cc6e4;
    r5 = *(4 + r28); // lwz @ 0x805CC624
    /* lis r4, 0 */ // 0x805CC628
    /* lis r6, 0 */ // 0x805CC62C
    r7 = *(0 + r4); // lwz @ 0x805CC630
    r5 = *(0xc + r5); // lwz @ 0x805CC634
    r0 = r29 rlwinm 2; // rlwinm
    r9 = *(0 + r6); // lwz @ 0x805CC63C
    r4 = r29;
    /* lwzx r31, r5, r0 */ // 0x805CC644
    /* li r5, 1 */ // 0x805CC648
    /* li r6, 1 */ // 0x805CC64C
    /* li r8, 1 */ // 0x805CC650
    FUN_808F9C40(r4, r5, r6, r8); // bl 0x808F9C40
    r0 = *(0 + r27); // lwz @ 0x805CC658
    r3 = r0 + r30; // 0x805CC65C
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC660
    if (!=) goto 0x0x805cc684;
    /* lis r3, 0 */ // 0x805CC66C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x805CC674
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DFF8(r3, r4); // bl 0x8061DFF8
    FUN_8060EFB4(r3, r4); // bl 0x8060EFB4
    r3 = *(4 + r28); // lwz @ 0x805CC684
    r0 = *(0x22 + r31); // lhz @ 0x805CC688
    r3 = *(0x3c + r3); // lwz @ 0x805CC68C
    r3 = *(4 + r3); // lwz @ 0x805CC690
    r3 = *(0x1ce + r3); // lha @ 0x805CC694
    /* add. r0, r3, r0 */ // 0x805CC698
    if (>=) goto 0x0x805cc6a4;
    /* li r0, 0 */ // 0x805CC6A0
    *(0x22 + r31) = r0; // sth @ 0x805CC6A4
    /* lis r3, 0 */ // 0x805CC6A8
    r0 = *(0 + r3); // lwz @ 0x805CC6AC
    r3 = r0 + r30; // 0x805CC6B0
    r0 = *(0x3c4 + r3); // lbz @ 0x805CC6B4
    if (!=) goto 0x0x805cc6e4;
    r3 = *(4 + r28); // lwz @ 0x805CC6C0
    r0 = *(0x22 + r31); // lhz @ 0x805CC6C4
    r3 = *(0x3c + r3); // lwz @ 0x805CC6C8
    r3 = *(4 + r3); // lwz @ 0x805CC6CC
    r3 = *(0x1cc + r3); // lha @ 0x805CC6D0
    /* add. r0, r3, r0 */ // 0x805CC6D4
    if (>=) goto 0x0x805cc6e0;
    /* li r0, 0 */ // 0x805CC6DC
    *(0x22 + r31) = r0; // sth @ 0x805CC6E0
    r0 = *(0x24 + r1); // lwz @ 0x805CC6E8
    return;
}