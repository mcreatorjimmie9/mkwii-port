/* Function at 0x808CA118, size=440 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_808CA118(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x808CA120
    /* li r31, 0 */ // 0x808CA12C
    *(0x18 + r1) = r30; // stw @ 0x808CA130
    *(0x14 + r1) = r29; // stw @ 0x808CA134
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808CA13C
    r28 = r3;
    /* li r3, 1 */ // 0x808CA144
    r5 = *(0 + r5); // lwz @ 0x808CA148
    r0 = *(0x26 + r5); // lbz @ 0x808CA14C
    if (<) goto 0x0x808ca15c;
    r3 = r0;
    /* rlwinm. r0, r4, 0, 0x1b, 0x1b */ // 0x808CA15C
    /* clrlwi r30, r3, 0x18 */ // 0x808CA160
    if (==) goto 0x0x808ca16c;
    r31 = r30;
    /* rlwinm. r0, r4, 0, 0x1a, 0x1a */ // 0x808CA16C
    if (==) goto 0x0x808ca17c;
    r0 = r31 + r30; // 0x808CA174
    /* clrlwi r31, r0, 0x18 */ // 0x808CA178
    /* rlwinm. r0, r4, 0, 0x19, 0x19 */ // 0x808CA17C
    if (==) goto 0x0x808ca18c;
    r0 = r31 + r30; // 0x808CA184
    /* clrlwi r31, r0, 0x18 */ // 0x808CA188
    /* rlwinm. r0, r4, 0, 0x18, 0x18 */ // 0x808CA18C
    if (==) goto 0x0x808ca1a4;
    r0 = r30 rlwinm 1; // rlwinm
    r3 = r31 + r0; // 0x808CA198
    r0 = r3 + 1; // 0x808CA19C
    /* clrlwi r31, r0, 0x18 */ // 0x808CA1A0
    /* rlwinm. r0, r4, 0, 0x1e, 0x1e */ // 0x808CA1A4
    if (==) goto 0x0x808ca1b4;
    r0 = r31 + 1; // 0x808CA1AC
    /* clrlwi r31, r0, 0x18 */ // 0x808CA1B0
    /* rlwinm. r0, r4, 0, 0x1c, 0x1c */ // 0x808CA1B4
    if (==) goto 0x0x808ca1c4;
    r0 = r31 + 1; // 0x808CA1BC
    /* clrlwi r31, r0, 0x18 */ // 0x808CA1C0
    r12 = *(0 + r28); // lwz @ 0x808CA1C4
    r3 = r28;
    r12 = *(0x6c + r12); // lwz @ 0x808CA1CC
    /* mtctr r12 */ // 0x808CA1D0
    /* bctrl  */ // 0x808CA1D4
    r12 = *(0 + r28); // lwz @ 0x808CA1D8
    r31 = r31 + r3; // 0x808CA1DC
    r3 = r28;
    r12 = *(0x6c + r12); // lwz @ 0x808CA1E4
    /* mtctr r12 */ // 0x808CA1E8
    /* bctrl  */ // 0x808CA1EC
    /* clrlwi. r0, r3, 0x18 */ // 0x808CA1F0
    if (==) goto 0x0x808ca208;
    /* rlwinm. r0, r29, 0, 0x14, 0x14 */ // 0x808CA1F8
    if (==) goto 0x0x808ca208;
    r0 = r31 + r30; // 0x808CA200
    /* clrlwi r31, r0, 0x18 */ // 0x808CA204
    /* rlwinm. r0, r29, 0, 0x1d, 0x1d */ // 0x808CA208
    if (==) goto 0x0x808ca21c;
    r0 = r30 rlwinm 1; // rlwinm
    r0 = r31 + r0; // 0x808CA214
    /* clrlwi r31, r0, 0x18 */ // 0x808CA218
    /* rlwinm. r0, r29, 0, 0x17, 0x17 */ // 0x808CA21C
    if (==) goto 0x0x808ca22c;
    r0 = r31 + 1; // 0x808CA224
    /* clrlwi r31, r0, 0x18 */ // 0x808CA228
    /* rlwinm. r0, r29, 0, 0x13, 0x13 */ // 0x808CA22C
    if (==) goto 0x0x808ca23c;
    r0 = r31 + 1; // 0x808CA234
    /* clrlwi r31, r0, 0x18 */ // 0x808CA238
    /* rlwinm. r0, r29, 0, 0x16, 0x16 */ // 0x808CA23C
    if (==) goto 0x0x808ca24c;
    r0 = r31 + 2; // 0x808CA244
    /* clrlwi r31, r0, 0x18 */ // 0x808CA248
    /* rlwinm. r0, r29, 0, 0x15, 0x15 */ // 0x808CA24C
    if (==) goto 0x0x808ca25c;
    r0 = r31 + 1; // 0x808CA254
    /* clrlwi r31, r0, 0x18 */ // 0x808CA258
    /* rlwinm. r0, r29, 0, 0x12, 0x12 */ // 0x808CA25C
    if (==) goto 0x0x808ca26c;
    r0 = r31 + 1; // 0x808CA264
    /* clrlwi r31, r0, 0x18 */ // 0x808CA268
    /* lis r4, 0 */ // 0x808CA26C
    /* li r3, 0 */ // 0x808CA270
    r4 = *(0 + r4); // lwz @ 0x808CA274
    r0 = *(0xb70 + r4); // lwz @ 0x808CA278
    if (<) goto 0x0x808ca290;
    if (>) goto 0x0x808ca290;
    /* li r3, 1 */ // 0x808CA28C
    if (==) goto 0x0x808ca2ac;
    r0 = r30 rlwinm 1; // rlwinm
    r0 = r31 + r0; // 0x808CA29C
    /* clrlwi r31, r0, 0x18 */ // 0x808CA2A0
    r0 = r31 + 1; // 0x808CA2A4
    /* clrlwi r31, r0, 0x18 */ // 0x808CA2A8
    /* clrlwi r3, r31, 0x18 */ // 0x808CA2AC
    r31 = *(0x1c + r1); // lwz @ 0x808CA2B0
    r30 = *(0x18 + r1); // lwz @ 0x808CA2B4
    r29 = *(0x14 + r1); // lwz @ 0x808CA2B8
    r28 = *(0x10 + r1); // lwz @ 0x808CA2BC
    r0 = *(0x24 + r1); // lwz @ 0x808CA2C0
    return;
}