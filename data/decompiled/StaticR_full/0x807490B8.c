/* Function at 0x807490B8, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807490B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807490C0
    /* lis r4, 0 */ // 0x807490C4
    *(0x14 + r1) = r0; // stw @ 0x807490C8
    /* lfs f1, 0(r5) */ // 0x807490CC
    *(0xc + r1) = r31; // stw @ 0x807490D0
    r31 = r3;
    /* lfs f2, 0(r4) */ // 0x807490D8
    r12 = *(0 + r3); // lwz @ 0x807490DC
    r12 = *(0x88 + r12); // lwz @ 0x807490E0
    /* mtctr r12 */ // 0x807490E4
    /* bctrl  */ // 0x807490E8
    /* li r6, 0 */ // 0x807490EC
    /* li r5, 0 */ // 0x807490F0
    /* lis r4, 0 */ // 0x807490F4
    /* b 0x80749108 */ // 0x807490F8
    r3 = *(0xb0 + r31); // lwz @ 0x807490FC
    /* stbx r5, r3, r6 */ // 0x80749100
    r6 = r6 + 1; // 0x80749104
    r3 = *(0 + r4); // lwz @ 0x80749108
    r0 = *(0x24 + r3); // lbz @ 0x8074910C
    if (<) goto 0x0x807490fc;
    r0 = *(0x14 + r1); // lwz @ 0x80749118
    r31 = *(0xc + r1); // lwz @ 0x8074911C
    return;
}