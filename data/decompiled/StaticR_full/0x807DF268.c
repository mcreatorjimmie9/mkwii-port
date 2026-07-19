/* Function at 0x807DF268, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DF268(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807DF270
    r4 = r4 + 0; // 0x807DF274
    *(0x24 + r1) = r0; // stw @ 0x807DF278
    /* lfs f0, 0x2c0(r4) */ // 0x807DF27C
    /* li r0, 0 */ // 0x807DF280
    *(0x1c + r1) = r31; // stw @ 0x807DF284
    r31 = r3;
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807DF28C
    if (>=) goto 0x0x807df2a4;
    /* lfs f0, 0x2c4(r4) */ // 0x807DF294
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DF298
    if (>=) goto 0x0x807df2a4;
    /* li r0, 1 */ // 0x807DF2A0
    if (==) goto 0x0x807df2b4;
    /* fmr f3, f1 */ // 0x807DF2AC
    /* b 0x807df2b8 */ // 0x807DF2B0
    /* lfs f3, 0x270(r4) */ // 0x807DF2B4
    /* lfs f0, 0x27c(r4) */ // 0x807DF2B8
    /* li r0, 0 */ // 0x807DF2BC
    /* stfs f3, 0x10(r1) */ // 0x807DF2C0
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807DF2C4
    if (>=) goto 0x0x807df2dc;
    /* lfs f0, 0x28c(r4) */ // 0x807DF2CC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DF2D0
    if (>=) goto 0x0x807df2dc;
    /* li r0, 1 */ // 0x807DF2D8
    if (==) goto 0x0x807df2e8;
    /* b 0x807df2ec */ // 0x807DF2E4
    /* lfs f2, 0x270(r4) */ // 0x807DF2E8
    /* stfs f2, 0x14(r1) */ // 0x807DF2EC
    r7 = *(0x3c + r3); // lwz @ 0x807DF2F4
    /* li r6, 0 */ // 0x807DF2F8
    r5 = *(0x10 + r1); // lwz @ 0x807DF2FC
    r0 = *(0x14 + r1); // lwz @ 0x807DF300
    r7 = r7 + -3; // 0x807DF304
    *(8 + r1) = r5; // stw @ 0x807DF308
    /* cntlzw r5, r7 */ // 0x807DF30C
    /* srwi r5, r5, 5 */ // 0x807DF310
    *(0xc + r1) = r0; // stw @ 0x807DF314
    r3 = *(0x14 + r3); // lwz @ 0x807DF318
    FUN_807DCB90(); // bl 0x807DCB90
    r3 = *(0x14 + r31); // lwz @ 0x807DF320
    /* li r4, 2 */ // 0x807DF324
    /* li r0, 0 */ // 0x807DF328
    *(8 + r3) = r4; // stw @ 0x807DF32C
    r3 = *(0x14 + r31); // lwz @ 0x807DF330
    *(0xf9 + r3) = r0; // stb @ 0x807DF334
    r31 = *(0x1c + r1); // lwz @ 0x807DF338
    r0 = *(0x24 + r1); // lwz @ 0x807DF33C
    return;
}