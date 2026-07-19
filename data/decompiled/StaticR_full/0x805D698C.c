/* Function at 0x805D698C, size=92 bytes */
/* Stack frame: 0 bytes */

int FUN_805D698C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* lis r8, 1 */ // 0x805D698C
    r0 = r8 + -0x7340; // 0x805D6994
    r0 = r7 * r0; // 0x805D6998
    r3 = r3 + r0; // 0x805D699C
    if (<=) goto 0x0x805d69a8;
    /* li r4, 7 */ // 0x805D69A4
    r0 = r5 + 0xff; // 0x805D69A8
    /* clrlwi r0, r0, 0x18 */ // 0x805D69AC
    if (<=) goto 0x0x805d69bc;
    /* li r5, 1 */ // 0x805D69B8
    r0 = r6 + 0xff; // 0x805D69BC
    /* clrlwi r0, r0, 0x18 */ // 0x805D69C0
    if (<=) goto 0x0x805d69d0;
    /* li r6, 1 */ // 0x805D69CC
    r0 = *(0x5688 + r3); // lwz @ 0x805D69D0
    r0 = r4 rlwimi 0x19; // rlwimi
    r0 = r5 rlwimi 0x15; // rlwimi
    r0 = r6 rlwimi 0x10; // rlwimi
    *(0x5688 + r3) = r0; // stw @ 0x805D69E0
    return;
}