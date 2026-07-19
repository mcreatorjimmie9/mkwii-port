/* Function at 0x8060C040, size=408 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8060C040(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8060C04C
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x8060C054
    r5 = *(4 + r4); // lwz @ 0x8060C058
    r5 = *(4 + r5); // lwz @ 0x8060C05C
    /* rlwinm. r0, r5, 0, 0xd, 0xd */ // 0x8060C060
    if (!=) goto 0x0x8060c12c;
    /* rlwinm. r0, r5, 0, 0xc, 0xc */ // 0x8060C068
    if (!=) goto 0x0x8060c12c;
    /* rlwinm. r0, r5, 0, 0x1c, 0x1c */ // 0x8060C070
    if (!=) goto 0x0x8060c12c;
    /* rlwinm. r6, r5, 0, 0x12, 0x12 */ // 0x8060C078
    if (!=) goto 0x0x8060c088;
    /* rlwinm. r0, r5, 0, 7, 7 */ // 0x8060C080
    if (==) goto 0x0x8060c12c;
    /* rlwinm. r0, r5, 0, 0x1d, 0x1d */ // 0x8060C088
    if (==) goto 0x0x8060c11c;
    /* rlwinm. r0, r5, 0, 4, 4 */ // 0x8060C090
    if (!=) goto 0x0x8060c12c;
    r0 = *(0xcc + r3); // lwz @ 0x8060C098
    if (!=) goto 0x0x8060c12c;
    /* rlwinm. r0, r5, 0, 7, 7 */ // 0x8060C0A4
    if (==) goto 0x0x8060c0e0;
    /* li r0, -1 */ // 0x8060C0AC
    *(0xcc + r3) = r0; // stw @ 0x8060C0B0
    r4 = *(0 + r3); // lwz @ 0x8060C0B4
    r3 = r31;
    r4 = *(4 + r4); // lwz @ 0x8060C0BC
    r0 = *(4 + r4); // lwz @ 0x8060C0C0
    r0 = r0 | 0x800; // 0x8060C0C4
    *(4 + r4) = r0; // stw @ 0x8060C0C8
    r12 = *(0xc + r31); // lwz @ 0x8060C0CC
    r12 = *(0x34 + r12); // lwz @ 0x8060C0D0
    /* mtctr r12 */ // 0x8060C0D4
    /* bctrl  */ // 0x8060C0D8
    /* b 0x8060c12c */ // 0x8060C0DC
    if (==) goto 0x0x8060c12c;
    /* li r0, 1 */ // 0x8060C0E8
    *(0xcc + r3) = r0; // stw @ 0x8060C0EC
    r4 = *(0 + r3); // lwz @ 0x8060C0F0
    r3 = r31;
    r4 = *(4 + r4); // lwz @ 0x8060C0F8
    r0 = *(4 + r4); // lwz @ 0x8060C0FC
    r0 = r0 | 0x800; // 0x8060C100
    *(4 + r4) = r0; // stw @ 0x8060C104
    r12 = *(0xc + r31); // lwz @ 0x8060C108
    r12 = *(0x34 + r12); // lwz @ 0x8060C10C
    /* mtctr r12 */ // 0x8060C110
    /* bctrl  */ // 0x8060C114
    /* b 0x8060c12c */ // 0x8060C118
    r3 = *(4 + r4); // lwz @ 0x8060C11C
    r0 = *(4 + r3); // lwz @ 0x8060C120
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r3) = r0; // stw @ 0x8060C128
    r3 = *(0 + r31); // lwz @ 0x8060C12C
    r3 = *(4 + r3); // lwz @ 0x8060C130
    r3 = *(4 + r3); // lwz @ 0x8060C134
    /* rlwinm. r0, r3, 0, 0xc, 0xc */ // 0x8060C138
    if (==) goto 0x0x8060c190;
    r0 = *(0xcc + r31); // lwz @ 0x8060C140
    if (!=) goto 0x0x8060c170;
    /* rlwinm. r0, r3, 0, 0x12, 0x12 */ // 0x8060C14C
    if (==) goto 0x0x8060c160;
    /* li r0, 1 */ // 0x8060C154
    *(0xcc + r31) = r0; // stw @ 0x8060C158
    /* b 0x8060c170 */ // 0x8060C15C
    /* rlwinm. r0, r3, 0, 7, 7 */ // 0x8060C160
    if (==) goto 0x0x8060c170;
    /* li r0, -1 */ // 0x8060C168
    *(0xcc + r31) = r0; // stw @ 0x8060C16C
    /* lis r3, 0 */ // 0x8060C170
    r4 = *(0xd0 + r31); // lwz @ 0x8060C174
    r0 = *(0 + r3); // lha @ 0x8060C178
    if (>=) goto 0x0x8060c1a0;
    r0 = r4 + 1; // 0x8060C184
    *(0xd0 + r31) = r0; // stw @ 0x8060C188
    /* b 0x8060c1a0 */ // 0x8060C18C
    /* rlwinm. r0, r3, 0, 4, 4 */ // 0x8060C190
    if (==) goto 0x0x8060c1a0;
    /* li r0, 0 */ // 0x8060C198
    *(0xd0 + r31) = r0; // stw @ 0x8060C19C
    r4 = *(0 + r31); // lwz @ 0x8060C1A0
    /* li r3, 1 */ // 0x8060C1A4
    r4 = *(4 + r4); // lwz @ 0x8060C1A8
    r4 = *(4 + r4); // lwz @ 0x8060C1AC
    /* rlwinm. r0, r4, 0, 0xc, 0xc */ // 0x8060C1B0
    if (!=) goto 0x0x8060c1c4;
    /* rlwinm. r0, r4, 0, 4, 4 */ // 0x8060C1B8
    if (!=) goto 0x0x8060c1c4;
    /* li r3, 0 */ // 0x8060C1C0
    r0 = *(0x14 + r1); // lwz @ 0x8060C1C4
    r31 = *(0xc + r1); // lwz @ 0x8060C1C8
    return;
}