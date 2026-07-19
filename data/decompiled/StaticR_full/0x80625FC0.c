/* Function at 0x80625FC0, size=332 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80625FC0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80625FCC
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x80625FD4
    r4 = *(4 + r4); // lwz @ 0x80625FD8
    r0 = *(0x10 + r4); // lwz @ 0x80625FDC
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80625FE0
    if (==) goto 0x0x80626088;
    FUN_8061E574(); // bl 0x8061E574
    /* lis r3, 0 */ // 0x80625FEC
    /* fabs f1, f1 */ // 0x80625FF0
    /* lfs f0, 0(r3) */ // 0x80625FF4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80625FF8
    if (>) goto 0x0x80626074;
    r3 = *(0 + r31); // lwz @ 0x80626000
    r3 = *(4 + r3); // lwz @ 0x80626004
    r3 = *(4 + r3); // lwz @ 0x80626008
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x8062600C
    if (!=) goto 0x0x80626074;
    /* rlwinm. r0, r3, 0, 0x13, 0x13 */ // 0x80626014
    if (!=) goto 0x0x80626074;
    /* rlwinm. r0, r3, 0, 0xd, 0xd */ // 0x8062601C
    if (==) goto 0x0x80626088;
    r3 = r31;
    FUN_8061E538(r3); // bl 0x8061E538
    /* lis r6, 0 */ // 0x8062602C
    /* lfs f3, 0(r3) */ // 0x80626030
    r5 = r6 + 0; // 0x80626034
    /* lfs f2, 0(r6) */ // 0x80626038
    /* lfs f1, 4(r3) */ // 0x8062603C
    /* lis r4, 0 */ // 0x80626040
    /* lfs f0, 4(r5) */ // 0x80626044
    /* fmuls f2, f3, f2 */ // 0x80626048
    /* lfs f4, 8(r3) */ // 0x8062604C
    /* fmuls f1, f1, f0 */ // 0x80626050
    /* lfs f3, 8(r5) */ // 0x80626054
    /* lfs f0, 0(r4) */ // 0x80626058
    /* fmuls f3, f4, f3 */ // 0x8062605C
    /* fadds f1, f2, f1 */ // 0x80626060
    /* fadds f1, f3, f1 */ // 0x80626064
    /* fabs f1, f1 */ // 0x80626068
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8062606C
    if (<=) goto 0x0x80626088;
    r3 = *(0 + r31); // lwz @ 0x80626074
    r3 = *(4 + r3); // lwz @ 0x80626078
    r0 = *(0x10 + r3); // lwz @ 0x8062607C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x10 + r3) = r0; // stw @ 0x80626084
    r3 = *(0 + r31); // lwz @ 0x80626088
    r4 = *(4 + r3); // lwz @ 0x8062608C
    r5 = *(0x10 + r4); // lwz @ 0x80626090
    /* rlwinm. r0, r5, 0, 0x1a, 0x1a */ // 0x80626094
    if (==) goto 0x0x806260c8;
    /* rlwinm. r0, r5, 0, 0x1c, 0x1c */ // 0x8062609C
    if (!=) goto 0x0x806260c8;
    r4 = *(4 + r4); // lwz @ 0x806260A4
    /* rlwinm. r0, r4, 0, 0x19, 0x1a */ // 0x806260A8
    if (==) goto 0x0x806260b8;
    /* rlwinm. r0, r4, 0, 0x13, 0x13 */ // 0x806260B0
    if (==) goto 0x0x806260c8;
    r3 = *(4 + r3); // lwz @ 0x806260B8
    r0 = *(0x10 + r3); // lwz @ 0x806260BC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x10 + r3) = r0; // stw @ 0x806260C4
    r3 = *(0 + r31); // lwz @ 0x806260C8
    r3 = *(4 + r3); // lwz @ 0x806260CC
    r0 = *(8 + r3); // lwz @ 0x806260D0
    /* clrlwi. r0, r0, 0x1f */ // 0x806260D4
    if (!=) goto 0x0x806260f8;
    r0 = *(0x10 + r3); // lwz @ 0x806260DC
    r3 = r31;
    r31 = r0 rlwinm 0x1c; // rlwinm
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* cntlzw r0, r31 */ // 0x806260EC
    /* srwi r0, r0, 5 */ // 0x806260F0
    *(0x170 + r3) = r0; // stb @ 0x806260F4
    r0 = *(0x14 + r1); // lwz @ 0x806260F8
    r31 = *(0xc + r1); // lwz @ 0x806260FC
    return;
}