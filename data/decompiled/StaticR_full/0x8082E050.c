/* Function at 0x8082E050, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8082E050(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x8082E058
    /* li r5, 1 */ // 0x8082E05C
    *(0x24 + r1) = r0; // stw @ 0x8082E060
    r6 = r6 + 0; // 0x8082E064
    /* lfs f4, 0(r4) */ // 0x8082E068
    *(0x1c + r1) = r31; // stw @ 0x8082E06C
    r31 = r3;
    /* lfs f1, 0(r6) */ // 0x8082E074
    r0 = *(4 + r3); // lwz @ 0x8082E078
    /* lfs f3, 4(r4) */ // 0x8082E07C
    r0 = r5 << r0; // slw
    /* lfs f2, 8(r4) */ // 0x8082E084
    /* lfs f0, 4(r6) */ // 0x8082E088
    /* andi. r0, r0, 0x23 */ // 0x8082E08C
    /* stfs f4, 0x38(r3) */ // 0x8082E090
    /* stfs f3, 0x3c(r3) */ // 0x8082E094
    /* stfs f2, 0x40(r3) */ // 0x8082E098
    /* stfs f1, 0x2c(r3) */ // 0x8082E09C
    /* stfs f0, 0x30(r3) */ // 0x8082E0A0
    /* stfs f1, 0x34(r3) */ // 0x8082E0A4
    if (!=) goto 0x0x8082e0c8;
    /* lfs f0, 0x10(r6) */ // 0x8082E0AC
    /* .byte 0xe0, 0x43, 0x00, 0x38 */ // 0x8082E0B0
    /* .byte 0x10, 0x22, 0x00, 0x18 */ // 0x8082E0B4
    /* .byte 0xe0, 0x43, 0x80, 0x40 */ // 0x8082E0B8
    /* xxsel vs1, vs3, vs0, v0 */ // 0x8082E0BC
    /* .byte 0x10, 0x22, 0x00, 0x18 */ // 0x8082E0C0
    /* xssubsp f1, f3, f16 */ // 0x8082E0C4
    /* lfs f1, 0x3c(r3) */ // 0x8082E0C8
    /* lfs f0, 0x14(r6) */ // 0x8082E0CC
    /* fmuls f1, f1, f1 */ // 0x8082E0D0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082E0D4
    /* mfcr r0 */ // 0x8082E0D8
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8082E0DC
    if (==) goto 0x0x8082e124;
    /* lfs f0, 0(r6) */ // 0x8082E0E4
    /* stfs f0, 0x3c(r3) */ // 0x8082E0EC
    r5 = *(0x38 + r3); // lwz @ 0x8082E0F0
    r0 = *(0x3c + r3); // lwz @ 0x8082E0F4
    *(0xc + r1) = r0; // stw @ 0x8082E0F8
    *(8 + r1) = r5; // stw @ 0x8082E0FC
    r0 = *(0x40 + r3); // lwz @ 0x8082E100
    r3 = r3 + 0x38; // 0x8082E104
    *(0x10 + r1) = r0; // stw @ 0x8082E108
    FUN_80816F30(r3); // bl 0x80816F30
    r3 = r31 + 0x2c; // 0x8082E110
    r4 = r31 + 0x38; // 0x8082E114
    r5 = r31 + 0x20; // 0x8082E118
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* b 0x8082e144 */ // 0x8082E120
    /* lfs f1, 0(r6) */ // 0x8082E124
    /* lfs f0, 4(r6) */ // 0x8082E128
}