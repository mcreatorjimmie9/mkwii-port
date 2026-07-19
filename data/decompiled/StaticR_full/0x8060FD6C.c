/* Function at 0x8060FD6C, size=356 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8060FD6C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8060FD78
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x8060FD80
    r5 = *(4 + r4); // lwz @ 0x8060FD84
    r0 = *(0xc + r5); // lwz @ 0x8060FD88
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x8060FD8C
    if (==) goto 0x0x8060fe7c;
    r0 = *(4 + r5); // lwz @ 0x8060FD94
    /* rlwinm. r0, r0, 0, 0x16, 0x16 */ // 0x8060FD98
    if (==) goto 0x0x8060fdd8;
    r4 = *(4 + r4); // lwz @ 0x8060FDA0
    r0 = *(0xc + r4); // lwz @ 0x8060FDA4
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060FDAC
    r4 = *(0 + r3); // lwz @ 0x8060FDB0
    r4 = *(4 + r4); // lwz @ 0x8060FDB4
    r0 = *(0xc + r4); // lwz @ 0x8060FDB8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060FDC0
    r4 = *(0 + r3); // lwz @ 0x8060FDC4
    r4 = *(4 + r4); // lwz @ 0x8060FDC8
    r0 = *(8 + r4); // lwz @ 0x8060FDCC
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x8060FDD4
    r3 = *(0 + r3); // lwz @ 0x8060FDD8
    r3 = *(4 + r3); // lwz @ 0x8060FDDC
    r0 = *(8 + r3); // lwz @ 0x8060FDE0
    /* rlwinm. r0, r0, 0, 8, 8 */ // 0x8060FDE4
    if (==) goto 0x0x8060fe7c;
    r3 = r31;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r0 = *(0x78 + r3); // lwz @ 0x8060FDF4
    /* lis r5, 0 */ // 0x8060FDF8
    *(0xc + r1) = r0; // stw @ 0x8060FDFC
    /* lfs f0, 0(r5) */ // 0x8060FE00
    /* lfs f1, 0xc(r1) */ // 0x8060FE04
    r4 = *(0x1c0 + r31); // lwz @ 0x8060FE08
    /* fadds f0, f1, f0 */ // 0x8060FE0C
    r5 = *(0x74 + r3); // lwz @ 0x8060FE10
    /* lfs f1, 8(r4) */ // 0x8060FE14
    r0 = *(0x7c + r3); // lwz @ 0x8060FE18
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060FE1C
    *(8 + r1) = r5; // stw @ 0x8060FE20
    *(0x10 + r1) = r0; // stw @ 0x8060FE24
    if (>=) goto 0x0x8060fe38;
    /* fmr f0, f1 */ // 0x8060FE2C
    /* li r0, 1 */ // 0x8060FE30
    /* b 0x8060fe3c */ // 0x8060FE34
    /* li r0, 0 */ // 0x8060FE38
    if (==) goto 0x0x8060fe58;
    r3 = *(0 + r31); // lwz @ 0x8060FE44
    r3 = *(4 + r3); // lwz @ 0x8060FE48
    r0 = *(8 + r3); // lwz @ 0x8060FE4C
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x8060FE54
    /* stfs f0, 0xc(r1) */ // 0x8060FE58
    r3 = r31;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 8(r1) */ // 0x8060FE64
    /* stfs f0, 0x74(r3) */ // 0x8060FE68
    /* lfs f0, 0xc(r1) */ // 0x8060FE6C
    /* stfs f0, 0x78(r3) */ // 0x8060FE70
    /* lfs f0, 0x10(r1) */ // 0x8060FE74
    /* stfs f0, 0x7c(r3) */ // 0x8060FE78
    r3 = *(0 + r31); // lwz @ 0x8060FE7C
    r3 = *(4 + r3); // lwz @ 0x8060FE80
    r0 = *(4 + r3); // lwz @ 0x8060FE84
    /* rlwinm. r0, r0, 0, 0x16, 0x16 */ // 0x8060FE88
    if (==) goto 0x0x8060febc;
    r0 = *(0xc + r3); // lwz @ 0x8060FE90
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x8060FE94
    if (!=) goto 0x0x8060febc;
    /* lis r4, 0 */ // 0x8060FE9C
    r3 = *(0 + r31); // lwz @ 0x8060FEA0
    /* lfs f0, 0(r4) */ // 0x8060FEA4
    /* stfs f0, 0x1b0(r31) */ // 0x8060FEA8
    r3 = *(4 + r3); // lwz @ 0x8060FEAC
    r0 = *(4 + r3); // lwz @ 0x8060FEB0
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r3) = r0; // stw @ 0x8060FEB8
    r0 = *(0x24 + r1); // lwz @ 0x8060FEBC
    r31 = *(0x1c + r1); // lwz @ 0x8060FEC0
    return;
}