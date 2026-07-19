/* Function at 0x8083A124, size=220 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8083A124(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8083A134
    r31 = r31 + 0; // 0x8083A138
    *(0x48 + r1) = r30; // stw @ 0x8083A13C
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x8083A144
    r29 = r5;
    *(0x40 + r1) = r28; // stw @ 0x8083A14C
    r28 = r4;
    FUN_8083AB34(); // bl 0x8083AB34
    r0 = *(0x1cc + r30); // lbz @ 0x8083A158
    if (==) goto 0x0x8083a1a0;
    r0 = *(0x78 + r30); // lwz @ 0x8083A164
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8083A168
    if (==) goto 0x0x8083a1a0;
    /* lis r3, 0 */ // 0x8083A170
    r4 = *(0x6c + r30); // lbz @ 0x8083A174
    r3 = *(0 + r3); // lwz @ 0x8083A178
    FUN_8061D97C(r3); // bl 0x8061D97C
    FUN_8061DA88(r3); // bl 0x8061DA88
    /* lfs f2, 4(r3) */ // 0x8083A184
    /* lfs f0, 0x18(r31) */ // 0x8083A188
    /* lfs f1, 0x48(r30) */ // 0x8083A18C
    /* fadds f0, f0, f2 */ // 0x8083A190
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8083A194
    if (>=) goto 0x0x8083a1a0;
    /* stfs f0, 0x48(r30) */ // 0x8083A19C
    r0 = *(0x74 + r30); // lwz @ 0x8083A1A0
    /* clrlwi. r0, r0, 0x1f */ // 0x8083A1A4
    if (!=) goto 0x0x8083a34c;
    r0 = *(0x1cc + r30); // lbz @ 0x8083A1AC
    if (!=) goto 0x0x8083a1d0;
    r0 = *(0x78 + r30); // lwz @ 0x8083A1B8
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8083A1BC
    if (!=) goto 0x0x8083a34c;
    r0 = *(0x1d8 + r30); // lwz @ 0x8083A1C4
    if (>) goto 0x0x8083a34c;
    r3 = r30 + 0x268; // 0x8083A1D0
    r4 = r30 + 0x1dc; // 0x8083A1D4
    r5 = r30 + 0x44; // 0x8083A1D8
    FUN_8083E734(r3, r4, r5); // bl 0x8083E734
    if (==) goto 0x0x8083a1fc;
    r5 = r28;
    r6 = r29;
    r3 = r30 + 0x268; // 0x8083A1F0
    r4 = r30 + 0x1dc; // 0x8083A1F4
    FUN_8083E824(r5, r6, r3, r4); // bl 0x8083E824
    /* .byte 0xe0, 0x5e, 0x01, 0xe0 */ // 0x8083A1FC
}