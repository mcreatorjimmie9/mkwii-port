/* Function at 0x8073A148, size=488 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8073A148(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x68 + r1) = r30; // stw @ 0x8073A15C
    r0 = *(0x24 + r3); // lbz @ 0x8073A160
    if (==) goto 0x0x8073a180;
    r4 = *(0x54 + r3); // lwz @ 0x8073A16C
    r0 = r4 + -1; // 0x8073A170
    /* cntlzw r0, r0 */ // 0x8073A174
    /* srwi r5, r0, 5 */ // 0x8073A178
    /* b 0x8073a1b4 */ // 0x8073A17C
    /* lis r4, 0x2aab */ // 0x8073A180
    r5 = *(0x12e + r3); // lbz @ 0x8073A184
    r0 = r4 + -0x5555; // 0x8073A188
    r6 = *(0x54 + r3); // lwz @ 0x8073A18C
    /* mulhw r4, r0, r5 */ // 0x8073A190
    /* srwi r0, r4, 0x1f */ // 0x8073A194
    r0 = r4 + r0; // 0x8073A198
    /* mulli r0, r0, 6 */ // 0x8073A19C
    /* subf r4, r0, r5 */ // 0x8073A1A0
    r0 = r4 + 1; // 0x8073A1A4
    /* subf r0, r6, r0 */ // 0x8073A1A8
    /* cntlzw r0, r0 */ // 0x8073A1AC
    /* srwi r5, r0, 5 */ // 0x8073A1B0
    r4 = *(0x54 + r3); // lwz @ 0x8073A1B4
    r0 = r4 + 1; // 0x8073A1B8
    *(0x54 + r3) = r0; // stw @ 0x8073A1BC
    if (<=) goto 0x0x8073a1d0;
    /* li r0, 0x2b2 */ // 0x8073A1C8
    *(0x54 + r3) = r0; // stw @ 0x8073A1CC
    if (==) goto 0x0x8073a228;
    r0 = *(4 + r3); // lbz @ 0x8073A1D8
    if (!=) goto 0x0x8073a228;
    r30 = *(0x230 + r3); // lwz @ 0x8073A1E4
    if (==) goto 0x0x8073a228;
    r12 = *(0 + r30); // lwz @ 0x8073A1F0
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x8073A1F8
    /* mtctr r12 */ // 0x8073A1FC
    /* bctrl  */ // 0x8073A200
    r0 = *(0xb0 + r31); // lbz @ 0x8073A204
    if (==) goto 0x0x8073a228;
    r12 = *(0 + r30); // lwz @ 0x8073A210
    r3 = r30;
    r4 = r31 + 0x72c; // 0x8073A218
    r12 = *(0x70 + r12); // lwz @ 0x8073A21C
    /* mtctr r12 */ // 0x8073A220
    /* bctrl  */ // 0x8073A224
    /* lfs f1, 0x74(r31) */ // 0x8073A228
    /* lis r3, 0 */ // 0x8073A22C
    /* lfs f0, 0(r3) */ // 0x8073A230
    r3 = r31 + 0x6f4; // 0x8073A234
    /* fneg f1, f1 */ // 0x8073A238
    /* stfs f0, 0x20(r1) */ // 0x8073A23C
    /* stfs f1, 0x24(r1) */ // 0x8073A248
    /* stfs f0, 0x28(r1) */ // 0x8073A24C
    FUN_80743D20(r4, r5); // bl 0x80743D20
    r6 = *(0x6f4 + r31); // lwz @ 0x8073A254
    r0 = *(0x6f8 + r31); // lwz @ 0x8073A25C
    r4 = r31 + 0x6d0; // 0x8073A260
    *(0x34 + r1) = r0; // stw @ 0x8073A264
    *(0x30 + r1) = r6; // stw @ 0x8073A26C
    r6 = *(0x6fc + r31); // lwz @ 0x8073A270
    r0 = *(0x700 + r31); // lwz @ 0x8073A274
    *(0x3c + r1) = r0; // stw @ 0x8073A278
    *(0x38 + r1) = r6; // stw @ 0x8073A27C
    r6 = *(0x704 + r31); // lwz @ 0x8073A280
    r0 = *(0x708 + r31); // lwz @ 0x8073A284
    *(0x44 + r1) = r0; // stw @ 0x8073A288
    *(0x40 + r1) = r6; // stw @ 0x8073A28C
    r6 = *(0x70c + r31); // lwz @ 0x8073A290
    r0 = *(0x710 + r31); // lwz @ 0x8073A294
    *(0x4c + r1) = r0; // stw @ 0x8073A298
    *(0x48 + r1) = r6; // stw @ 0x8073A29C
    r6 = *(0x714 + r31); // lwz @ 0x8073A2A0
    r0 = *(0x718 + r31); // lwz @ 0x8073A2A4
    *(0x54 + r1) = r0; // stw @ 0x8073A2A8
    *(0x50 + r1) = r6; // stw @ 0x8073A2AC
    r6 = *(0x71c + r31); // lwz @ 0x8073A2B0
    r0 = *(0x720 + r31); // lwz @ 0x8073A2B4
    *(0x5c + r1) = r0; // stw @ 0x8073A2B8
    *(0x58 + r1) = r6; // stw @ 0x8073A2BC
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 8(r1) */ // 0x8073A2C4
    /* lfs f1, 0xc(r1) */ // 0x8073A2C8
    /* lfs f0, 0x10(r1) */ // 0x8073A2CC
    /* stfs f2, 0x3c(r1) */ // 0x8073A2D0
    /* stfs f1, 0x4c(r1) */ // 0x8073A2D4
    /* stfs f0, 0x5c(r1) */ // 0x8073A2D8
    r30 = *(0x230 + r31); // lwz @ 0x8073A2DC
    if (!=) goto 0x0x8073a2f0;
    /* li r0, 0 */ // 0x8073A2E8
    /* b 0x8073a364 */ // 0x8073A2EC
    r3 = r30 + 0x74; // 0x8073A2F0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073a308;
    /* li r3, 0 */ // 0x8073A300
    /* b 0x8073a30c */ // 0x8073A304
    r3 = *(0xc + r3); // lwz @ 0x8073A308
    /* li r0, 0 */ // 0x8073A310
    if (==) goto 0x0x8073a320;
    if (!=) goto 0x0x8073a324;
    /* li r0, 1 */ // 0x8073A320
    if (!=) goto 0x0x8073a334;
    /* li r0, 0 */ // 0x8073A32C
}