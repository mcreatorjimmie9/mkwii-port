/* Function at 0x805BC8D0, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */

int FUN_805BC8D0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* slwi r0, r7, 3 */ // 0x805BC8D4
    /* subf r11, r4, r0 */ // 0x805BC8D8
    /* lis r7, 0 */ // 0x805BC8DC
    /* stmw r26, 8(r1) */ // 0x805BC8E0
    r0 = r11 >> 3; // srawi
    /* addze r10, r0 */ // 0x805BC8E8
    /* li r8, 0 */ // 0x805BC8EC
    /* slwi r9, r10, 3 */ // 0x805BC8F0
    r0 = r6 >> 3; // srawi
    /* addze r0, r0 */ // 0x805BC8F8
    r7 = r7 + 0; // 0x805BC8FC
    r10 = r3 + r10; // 0x805BC900
    /* subf r9, r9, r11 */ // 0x805BC904
    r5 = r5 + r0; // 0x805BC908
    /* b 0x805bc9dc */ // 0x805BC90C
    /* subf r11, r8, r4 */ // 0x805BC910
    /* subfic r3, r9, 8 */ // 0x805BC914
    if (<=) goto 0x0x805bc924;
    r11 = r3;
    r0 = r6 + r8; // 0x805BC924
    /* clrlwi r0, r0, 0x1d */ // 0x805BC928
    /* subfic r12, r0, 8 */ // 0x805BC92C
    r0 = r12;
    if (>=) goto 0x0x805bc940;
    r0 = r11;
    r31 = *(0 + r5); // lbz @ 0x805BC940
    /* subf r29, r0, r12 */ // 0x805BC944
    /* slwi r30, r0, 2 */ // 0x805BC948
    /* subf. r28, r0, r11 */ // 0x805BC94C
    r29 = r31 >> r29; // sraw
    /* lwzx r31, r7, r30 */ // 0x805BC954
    /* subfic r30, r0, 8 */ // 0x805BC958
    /* li r26, 0 */ // 0x805BC95C
    r31 = r29 & r31; // 0x805BC960
    r29 = r9 + r0; // 0x805BC964
    /* subf r30, r9, r30 */ // 0x805BC968
    r30 = r31 << r30; // slw
    /* clrlwi r27, r30, 0x18 */ // 0x805BC970
    if (<=) goto 0x0x805bc994;
    /* subfic r30, r28, 8 */ // 0x805BC978
    r31 = *(1 + r5); // lbz @ 0x805BC97C
    /* slwi r30, r30, 2 */ // 0x805BC980
    /* lwzx r30, r7, r30 */ // 0x805BC984
    /* andc r30, r31, r30 */ // 0x805BC988
    r30 = r30 >> r29; // sraw
    /* clrlwi r26, r30, 0x18 */ // 0x805BC990
    r9 = r9 + r11; // 0x805BC994
    /* slwi r31, r3, 2 */ // 0x805BC998
    /* subfic r3, r9, 8 */ // 0x805BC99C
    /* lwzx r9, r7, r31 */ // 0x805BC9A0
    /* slwi r3, r3, 2 */ // 0x805BC9A4
    r30 = r27 | r26; // 0x805BC9A8
    /* lwzx r3, r7, r3 */ // 0x805BC9AC
    /* clrlwi r12, r30, 0x18 */ // 0x805BC9B4
    r8 = r8 + r11; // 0x805BC9B8
    /* andc r0, r9, r3 */ // 0x805BC9BC
    /* clrlwi r0, r0, 0x18 */ // 0x805BC9C0
    r0 = r12 & r0; // 0x805BC9C4
    *(0 + r10) = r0; // stb @ 0x805BC9C8
    if (<) goto 0x0x805bc9d8;
    r5 = r5 + 1; // 0x805BC9D4
    /* li r9, 0 */ // 0x805BC9D8
    if (<) goto 0x0x805bc910;
    r3 = r6 + r4; // 0x805BC9E8
    return;
}