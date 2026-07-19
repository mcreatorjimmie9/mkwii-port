/* Function at 0x807F0054, size=272 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807F0054(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    *(0x6c + r1) = r31; // stw @ 0x807F0060
    r31 = r3;
    r0 = *(0xac + r3); // lwz @ 0x807F0068
    if (==) goto 0x0x807f0150;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r5 = *(0x58 + r31); // lwz @ 0x807F0078
    /* lis r6, 0 */ // 0x807F007C
    r0 = *(0x5c + r31); // lwz @ 0x807F0080
    /* lis r4, 0 */ // 0x807F0084
    *(0x34 + r1) = r0; // stw @ 0x807F0088
    /* lfs f1, 0(r4) */ // 0x807F0090
    r4 = r31 + 0x30; // 0x807F0094
    *(0x30 + r1) = r5; // stw @ 0x807F0098
    /* lfs f0, 0(r6) */ // 0x807F00A0
    r6 = *(0x60 + r31); // lwz @ 0x807F00A4
    r0 = *(0x64 + r31); // lwz @ 0x807F00A8
    *(0x3c + r1) = r0; // stw @ 0x807F00AC
    *(0x38 + r1) = r6; // stw @ 0x807F00B0
    r6 = *(0x68 + r31); // lwz @ 0x807F00B4
    r0 = *(0x6c + r31); // lwz @ 0x807F00B8
    *(0x44 + r1) = r0; // stw @ 0x807F00BC
    *(0x40 + r1) = r6; // stw @ 0x807F00C0
    r6 = *(0x70 + r31); // lwz @ 0x807F00C4
    r0 = *(0x74 + r31); // lwz @ 0x807F00C8
    *(0x4c + r1) = r0; // stw @ 0x807F00CC
    *(0x48 + r1) = r6; // stw @ 0x807F00D0
    r6 = *(0x78 + r31); // lwz @ 0x807F00D4
    r0 = *(0x7c + r31); // lwz @ 0x807F00D8
    *(0x54 + r1) = r0; // stw @ 0x807F00DC
    *(0x50 + r1) = r6; // stw @ 0x807F00E0
    r6 = *(0x80 + r31); // lwz @ 0x807F00E4
    r0 = *(0x84 + r31); // lwz @ 0x807F00E8
    *(0x5c + r1) = r0; // stw @ 0x807F00EC
    *(0x58 + r1) = r6; // stw @ 0x807F00F0
    /* stfs f1, 8(r1) */ // 0x807F00F4
    /* stfs f0, 0xc(r1) */ // 0x807F00F8
    /* stfs f1, 0x10(r1) */ // 0x807F00FC
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 0x20(r1) */ // 0x807F0104
    /* lfs f1, 0x24(r1) */ // 0x807F010C
    /* lfs f0, 0x28(r1) */ // 0x807F0110
    /* stfs f2, 0x3c(r1) */ // 0x807F0114
    /* stfs f1, 0x4c(r1) */ // 0x807F0118
    /* stfs f0, 0x5c(r1) */ // 0x807F011C
    r4 = *(0x20 + r31); // lwz @ 0x807F0120
    /* lfs f1, 0x30(r4) */ // 0x807F0124
    r4 = r4 + 0x24; // 0x807F0128
    FUN_805A443C(r4); // bl 0x805A443C
    r3 = *(0xac + r31); // lwz @ 0x807F0130
    r5 = r31 + 0x3c; // 0x807F0138
    r12 = *(0 + r3); // lwz @ 0x807F0140
    r12 = *(0x10 + r12); // lwz @ 0x807F0144
    /* mtctr r12 */ // 0x807F0148
    /* bctrl  */ // 0x807F014C
    r0 = *(0x74 + r1); // lwz @ 0x807F0150
    r31 = *(0x6c + r1); // lwz @ 0x807F0154
    return;
}