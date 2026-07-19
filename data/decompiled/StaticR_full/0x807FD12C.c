/* Function at 0x807FD12C, size=272 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807FD12C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x5c + r1) = r31; // stw @ 0x807FD138
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x807FD140
    if (==) goto 0x0x807fd228;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r5 = *(0x58 + r31); // lwz @ 0x807FD150
    /* lis r6, 0 */ // 0x807FD154
    r0 = *(0x5c + r31); // lwz @ 0x807FD158
    /* lis r4, 0 */ // 0x807FD15C
    *(0x24 + r1) = r0; // stw @ 0x807FD160
    /* lfs f1, 0(r4) */ // 0x807FD168
    r4 = r31 + 0x30; // 0x807FD16C
    *(0x20 + r1) = r5; // stw @ 0x807FD170
    /* lfs f0, 0(r6) */ // 0x807FD178
    r6 = *(0x60 + r31); // lwz @ 0x807FD17C
    r0 = *(0x64 + r31); // lwz @ 0x807FD180
    *(0x2c + r1) = r0; // stw @ 0x807FD184
    *(0x28 + r1) = r6; // stw @ 0x807FD188
    r6 = *(0x68 + r31); // lwz @ 0x807FD18C
    r0 = *(0x6c + r31); // lwz @ 0x807FD190
    *(0x34 + r1) = r0; // stw @ 0x807FD194
    *(0x30 + r1) = r6; // stw @ 0x807FD198
    r6 = *(0x70 + r31); // lwz @ 0x807FD19C
    r0 = *(0x74 + r31); // lwz @ 0x807FD1A0
    *(0x3c + r1) = r0; // stw @ 0x807FD1A4
    *(0x38 + r1) = r6; // stw @ 0x807FD1A8
    r6 = *(0x78 + r31); // lwz @ 0x807FD1AC
    r0 = *(0x7c + r31); // lwz @ 0x807FD1B0
    *(0x44 + r1) = r0; // stw @ 0x807FD1B4
    *(0x40 + r1) = r6; // stw @ 0x807FD1B8
    r6 = *(0x80 + r31); // lwz @ 0x807FD1BC
    r0 = *(0x84 + r31); // lwz @ 0x807FD1C0
    *(0x4c + r1) = r0; // stw @ 0x807FD1C4
    *(0x48 + r1) = r6; // stw @ 0x807FD1C8
    /* stfs f1, 8(r1) */ // 0x807FD1CC
    /* stfs f0, 0xc(r1) */ // 0x807FD1D0
    /* stfs f1, 0x10(r1) */ // 0x807FD1D4
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 0x14(r1) */ // 0x807FD1DC
    r3 = r31;
    /* lfs f1, 0x18(r1) */ // 0x807FD1E4
    /* lfs f0, 0x1c(r1) */ // 0x807FD1E8
    /* stfs f2, 0x2c(r1) */ // 0x807FD1EC
    /* stfs f1, 0x3c(r1) */ // 0x807FD1F0
    /* stfs f0, 0x4c(r1) */ // 0x807FD1F4
    r12 = *(0 + r31); // lwz @ 0x807FD1F8
    r12 = *(0xd4 + r12); // lwz @ 0x807FD1FC
    /* mtctr r12 */ // 0x807FD200
    /* bctrl  */ // 0x807FD204
    r6 = r3;
    r3 = *(0xac + r31); // lwz @ 0x807FD20C
    r5 = r31 + 0x3c; // 0x807FD214
    r12 = *(0 + r3); // lwz @ 0x807FD218
    r12 = *(0x10 + r12); // lwz @ 0x807FD21C
    /* mtctr r12 */ // 0x807FD220
    /* bctrl  */ // 0x807FD224
    r0 = *(0x64 + r1); // lwz @ 0x807FD228
    r31 = *(0x5c + r1); // lwz @ 0x807FD22C
    return;
}