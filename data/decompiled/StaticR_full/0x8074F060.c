/* Function at 0x8074F060, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8074F060(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8074F06C
    r31 = r3;
    r0 = *(0x20 + r3); // lwz @ 0x8074F074
    if (==) goto 0x0x8074f0bc;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x8074F084
    r12 = *(0x14 + r12); // lwz @ 0x8074F088
    /* mtctr r12 */ // 0x8074F08C
    /* bctrl  */ // 0x8074F090
    r3 = *(0x20 + r31); // lwz @ 0x8074F094
    r0 = *(0x2c + r31); // lhz @ 0x8074F098
    /* lfs f0, 0x20(r3) */ // 0x8074F09C
    /* lfs f1, 0x1c(r3) */ // 0x8074F0A0
    r0 = r0 | 1; // 0x8074F0A4
    /* lfs f2, 0x18(r3) */ // 0x8074F0A8
    /* stfs f2, 0x30(r31) */ // 0x8074F0AC
    *(0x2c + r31) = r0; // sth @ 0x8074F0B0
    /* stfs f1, 0x34(r31) */ // 0x8074F0B4
    /* stfs f0, 0x38(r31) */ // 0x8074F0B8
    r0 = *(0x14 + r1); // lwz @ 0x8074F0BC
    r31 = *(0xc + r1); // lwz @ 0x8074F0C0
    return;
}