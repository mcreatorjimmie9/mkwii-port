/* Function at 0x8074B694, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8074B694(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8074B6A0
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x8074B6A8
    r12 = *(0 + r3); // lwz @ 0x8074B6AC
    r12 = *(0x20 + r12); // lwz @ 0x8074B6B0
    /* mtctr r12 */ // 0x8074B6B4
    /* bctrl  */ // 0x8074B6B8
    /* lfs f0, 0x164(r31) */ // 0x8074B6BC
    /* lfs f2, 0xf4(r31) */ // 0x8074B6C0
    /* fadds f0, f0, f1 */ // 0x8074B6C4
    /* stfs f0, 0x164(r31) */ // 0x8074B6C8
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8074B6CC
    if (<=) goto 0x0x8074b6e4;
    /* lis r3, 0 */ // 0x8074B6D4
    /* lfs f0, 0(r3) */ // 0x8074B6D8
    /* fsubs f0, f2, f0 */ // 0x8074B6DC
    /* stfs f0, 0x164(r31) */ // 0x8074B6E0
    r3 = r31;
    FUN_8074B458(r3, r3); // bl 0x8074B458
    r0 = *(0x14 + r1); // lwz @ 0x8074B6EC
    r31 = *(0xc + r1); // lwz @ 0x8074B6F0
    return;
}