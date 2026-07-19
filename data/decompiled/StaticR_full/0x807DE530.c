/* Function at 0x807DE530, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DE530(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807DE538
    /* lis r4, 0 */ // 0x807DE53C
    *(0x14 + r1) = r0; // stw @ 0x807DE540
    /* li r0, 0 */ // 0x807DE544
    /* lfs f1, 0(r5) */ // 0x807DE548
    /* lis r5, 0 */ // 0x807DE54C
    *(0xc + r1) = r31; // stw @ 0x807DE550
    r5 = r5 + 0; // 0x807DE554
    /* lfs f0, 0(r4) */ // 0x807DE558
    r31 = r3;
    /* stfs f1, 0x68(r3) */ // 0x807DE560
    /* li r4, 1 */ // 0x807DE564
    /* stfs f0, 0x6c(r3) */ // 0x807DE568
    *(0xd4 + r3) = r0; // stw @ 0x807DE56C
    /* lfs f1, 0x18(r5) */ // 0x807DE570
    /* lfs f2, 0x14(r5) */ // 0x807DE574
    /* lfs f3, 0x1c(r5) */ // 0x807DE578
    /* lfs f4, 0xc(r5) */ // 0x807DE57C
    FUN_807DD9EC(); // bl 0x807DD9EC
    /* li r0, 1 */ // 0x807DE584
    *(0x10c + r31) = r0; // stw @ 0x807DE588
    r31 = *(0xc + r1); // lwz @ 0x807DE58C
    r0 = *(0x14 + r1); // lwz @ 0x807DE590
    return;
}