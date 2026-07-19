/* Function at 0x805BC798, size=312 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */

int FUN_805BC798(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* slwi r7, r7, 3 */ // 0x805BC79C
    r0 = r6 >> 3; // srawi
    /* lis r8, 0 */ // 0x805BC7A4
    /* stmw r24, 0x10(r1) */ // 0x805BC7A8
    /* addze r11, r0 */ // 0x805BC7AC
    /* slwi r10, r11, 3 */ // 0x805BC7B0
    /* subf r9, r4, r7 */ // 0x805BC7B4
    r0 = r9 >> 3; // srawi
    r11 = r5 + r11; // 0x805BC7BC
    /* addze r0, r0 */ // 0x805BC7C0
    /* subf r10, r10, r6 */ // 0x805BC7C4
    r12 = r3 + r0; // 0x805BC7C8
    r3 = r8 + 0; // 0x805BC7CC
    /* li r8, 0 */ // 0x805BC7D0
    /* b 0x805bc8b8 */ // 0x805BC7D4
    /* subf r31, r8, r4 */ // 0x805BC7D8
    /* subfic r5, r10, 8 */ // 0x805BC7DC
    if (<=) goto 0x0x805bc7ec;
    r31 = r5;
    /* subf r27, r9, r7 */ // 0x805BC7EC
    r0 = r27 + -1; // 0x805BC7F0
    /* clrlwi r27, r0, 0x1d */ // 0x805BC7F4
    r30 = r27 + 1; // 0x805BC7F8
    r0 = r30;
    if (>=) goto 0x0x805bc80c;
    r0 = r31;
    r29 = *(0 + r12); // lbz @ 0x805BC80C
    /* subf r27, r0, r30 */ // 0x805BC810
    /* slwi r28, r0, 2 */ // 0x805BC814
    /* subf. r26, r0, r31 */ // 0x805BC818
    r27 = r29 >> r27; // sraw
    /* lwzx r29, r3, r28 */ // 0x805BC820
    /* subfic r28, r0, 8 */ // 0x805BC824
    /* li r24, 0 */ // 0x805BC828
    r29 = r27 & r29; // 0x805BC82C
    r27 = r10 + r0; // 0x805BC830
    /* subf r28, r10, r28 */ // 0x805BC834
    r28 = r29 << r28; // slw
    /* clrlwi r25, r28, 0x18 */ // 0x805BC83C
    if (<=) goto 0x0x805bc860;
    /* subfic r28, r26, 8 */ // 0x805BC844
    r29 = *(1 + r12); // lbz @ 0x805BC848
    /* slwi r28, r28, 2 */ // 0x805BC84C
    /* lwzx r28, r3, r28 */ // 0x805BC850
    /* andc r28, r29, r28 */ // 0x805BC854
    r28 = r28 >> r27; // sraw
    /* clrlwi r24, r28, 0x18 */ // 0x805BC85C
    r10 = r10 + r31; // 0x805BC860
    /* slwi r28, r5, 2 */ // 0x805BC864
    /* subfic r10, r10, 8 */ // 0x805BC868
    r5 = r25 | r24; // 0x805BC86C
    /* slwi r10, r10, 2 */ // 0x805BC870
    /* lwzx r28, r3, r28 */ // 0x805BC874
    /* lwzx r29, r3, r10 */ // 0x805BC878
    r10 = *(0 + r11); // lbz @ 0x805BC880
    /* clrlwi r5, r5, 0x18 */ // 0x805BC884
    /* andc r0, r28, r29 */ // 0x805BC888
    r8 = r8 + r31; // 0x805BC88C
    /* clrlwi r0, r0, 0x18 */ // 0x805BC890
    r9 = r9 + r31; // 0x805BC894
    /* andc r10, r10, r0 */ // 0x805BC898
    r0 = r5 & r0; // 0x805BC89C
    r0 = r10 | r0; // 0x805BC8A0
    *(0 + r11) = r0; // stb @ 0x805BC8A4
    if (<) goto 0x0x805bc8b4;
    /* li r10, 0 */ // 0x805BC8B4
    if (<) goto 0x0x805bc7d8;
    r3 = r6 + r4; // 0x805BC8C4
    return;
}