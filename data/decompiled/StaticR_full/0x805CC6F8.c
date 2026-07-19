/* Function at 0x805CC6F8, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805CC6F8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805CC708
    r30 = r4;
    r0 = *(0x106 + r3); // lbz @ 0x805CC710
    if (!=) goto 0x0x805cc7a0;
    /* lis r3, 0 */ // 0x805CC71C
    /* li r4, 4 */ // 0x805CC720
    r3 = *(0 + r3); // lwz @ 0x805CC724
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805cc7a0;
    r4 = r30;
    /* lis r3, 0 */ // 0x805CC738
    /* mulli r0, r4, 0x18 */ // 0x805CC73C
    r31 = *(0 + r3); // lwz @ 0x805CC740
    /* li r5, 0 */ // 0x805CC744
    r3 = r31;
    r7 = r31 + r0; // 0x805CC74C
    /* li r6, 1 */ // 0x805CC750
    r8 = *(0x3c4 + r7); // lbz @ 0x805CC754
    /* li r7, 0 */ // 0x805CC758
    /* li r9, 0 */ // 0x805CC75C
    FUN_808F9C40(r6, r7, r9); // bl 0x808F9C40
    /* lis r3, 0 */ // 0x805CC764
    /* lis r4, 0 */ // 0x805CC768
    r5 = *(0 + r3); // lwz @ 0x805CC76C
    /* mulli r0, r30, 0xf0 */ // 0x805CC770
    r7 = *(0 + r4); // lwz @ 0x805CC774
    /* lis r3, 0 */ // 0x805CC778
    r9 = *(0 + r3); // lwz @ 0x805CC77C
    /* li r6, 1 */ // 0x805CC780
    r4 = r5 + r0; // 0x805CC784
    r0 = *(0xf4 + r4); // lwz @ 0x805CC788
    r3 = r31;
    r4 = r30;
    /* li r8, 3 */ // 0x805CC794
    /* clrlwi r5, r0, 0x18 */ // 0x805CC798
    FUN_808F9A64(r3, r4, r8); // bl 0x808F9A64
    r0 = *(0x14 + r1); // lwz @ 0x805CC7A0
    r31 = *(0xc + r1); // lwz @ 0x805CC7A4
    r30 = *(8 + r1); // lwz @ 0x805CC7A8
    return;
}