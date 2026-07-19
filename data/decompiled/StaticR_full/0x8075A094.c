/* Function at 0x8075A094, size=340 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8075A094(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r6, 0 */ // 0x8075A09C
    /* li r7, 0 */ // 0x8075A0A0
    *(0x14 + r1) = r0; // stw @ 0x8075A0A4
    *(0xc + r1) = r31; // stw @ 0x8075A0A8
    r10 = *(0xb0 + r3); // lwz @ 0x8075A0AC
    /* mtctr r10 */ // 0x8075A0B0
    if (<=) goto 0x0x8075a0e0;
    r5 = *(0xb8 + r3); // lwz @ 0x8075A0BC
    /* lwzx r5, r5, r7 */ // 0x8075A0C0
    r0 = *(0xb0 + r5); // lbz @ 0x8075A0C4
    if (!=) goto 0x0x8075a0d4;
    /* b 0x8075a0e4 */ // 0x8075A0D0
    r7 = r7 + 4; // 0x8075A0D4
    r6 = r6 + 1; // 0x8075A0D8
    if (counter-- != 0) goto 0x0x8075a0bc;
    /* li r6, -1 */ // 0x8075A0E0
    if (==) goto 0x0x8075a1d4;
    r5 = *(0xc8 + r3); // lwz @ 0x8075A0EC
    /* slwi r0, r4, 2 */ // 0x8075A0F0
    /* lfs f0, 0x128(r3) */ // 0x8075A0F4
    /* li r8, 0 */ // 0x8075A0F8
    /* lwzx r5, r5, r0 */ // 0x8075A0FC
    /* lfs f1, 0x1c8(r5) */ // 0x8075A100
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8075A104
    /* cror cr0eq, cr0lt, cr0eq */ // 0x8075A108
    if (!=) goto 0x0x8075a124;
    /* lis r5, 0 */ // 0x8075A110
    /* lfs f0, 0(r5) */ // 0x8075A114
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8075A118
    if (<=) goto 0x0x8075a124;
    /* li r8, 1 */ // 0x8075A120
    /* li r7, 0 */ // 0x8075A124
    /* li r9, 0 */ // 0x8075A128
    /* mtctr r10 */ // 0x8075A12C
    if (<=) goto 0x0x8075a15c;
    r5 = *(0xb8 + r3); // lwz @ 0x8075A138
    /* lwzx r5, r5, r9 */ // 0x8075A13C
    r0 = *(0xb4 + r5); // lwz @ 0x8075A140
    if (!=) goto 0x0x8075a150;
    /* b 0x8075a160 */ // 0x8075A14C
    r9 = r9 + 4; // 0x8075A150
    r7 = r7 + 1; // 0x8075A154
    if (counter-- != 0) goto 0x0x8075a138;
    /* li r7, -1 */ // 0x8075A15C
    r0 = r7 + 1; // 0x8075A160
    /* cntlzw r0, r0 */ // 0x8075A168
    /* srwi r0, r0, 5 */ // 0x8075A16C
    if (==) goto 0x0x8075a1d4;
    if (==) goto 0x0x8075a1d4;
    r7 = *(0xb8 + r3); // lwz @ 0x8075A17C
    /* slwi r0, r6, 2 */ // 0x8075A180
    /* lis r6, 0 */ // 0x8075A184
    /* lis r5, 0 */ // 0x8075A188
    /* lwzx r7, r7, r0 */ // 0x8075A18C
    /* lfs f1, 0(r6) */ // 0x8075A190
    *(0xb4 + r7) = r4; // stw @ 0x8075A194
    /* li r4, 0 */ // 0x8075A198
    /* lfs f2, 0(r5) */ // 0x8075A19C
    r3 = *(0xb8 + r3); // lwz @ 0x8075A1A0
    /* lwzx r31, r3, r0 */ // 0x8075A1A4
    r3 = *(8 + r31); // lwz @ 0x8075A1A8
    r3 = *(0x28 + r3); // lwz @ 0x8075A1AC
    FUN_805E70EC(); // bl 0x805E70EC
    /* li r0, 1 */ // 0x8075A1B4
    *(0xb0 + r31) = r0; // stb @ 0x8075A1B8
    r3 = r31;
    /* li r4, 1 */ // 0x8075A1C0
    r12 = *(0 + r31); // lwz @ 0x8075A1C4
    r12 = *(0x68 + r12); // lwz @ 0x8075A1C8
    /* mtctr r12 */ // 0x8075A1CC
    /* bctrl  */ // 0x8075A1D0
    r0 = *(0x14 + r1); // lwz @ 0x8075A1D4
    r31 = *(0xc + r1); // lwz @ 0x8075A1D8
    return;
}