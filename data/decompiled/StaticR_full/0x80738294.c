/* Function at 0x80738294, size=256 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80738294(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x807382A0
    r31 = r3;
    r0 = *(0x43 + r3); // lbz @ 0x807382A8
    if (!=) goto 0x0x80738380;
    r4 = r31 + 0x6f4; // 0x807382B8
    /* li r5, 0 */ // 0x807382BC
    FUN_805C70D8(r3, r4, r5); // bl 0x805C70D8
    /* lfs f2, 0x38(r1) */ // 0x807382C4
    /* lfs f1, 0x3c(r1) */ // 0x807382CC
    r4 = r31 + 0x6f4; // 0x807382D0
    /* lfs f0, 0x40(r1) */ // 0x807382D4
    /* li r5, 1 */ // 0x807382D8
    /* stfs f2, 0x48(r1) */ // 0x807382DC
    /* stfs f1, 0x58(r1) */ // 0x807382E0
    /* stfs f0, 0x68(r1) */ // 0x807382E4
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x2c(r1) */ // 0x807382EC
    /* lfs f1, 0x30(r1) */ // 0x807382F4
    r4 = r31 + 0x6f4; // 0x807382F8
    /* lfs f0, 0x34(r1) */ // 0x807382FC
    /* li r5, 2 */ // 0x80738300
    /* stfs f2, 0x4c(r1) */ // 0x80738304
    /* stfs f1, 0x5c(r1) */ // 0x80738308
    /* stfs f0, 0x6c(r1) */ // 0x8073830C
    FUN_805C70D8(r5); // bl 0x805C70D8
    FUN_805A4400(r3, r4); // bl 0x805A4400
    /* lfs f2, 0x14(r1) */ // 0x80738320
    /* lfs f1, 0x18(r1) */ // 0x80738328
    r4 = r31 + 0x6f4; // 0x8073832C
    /* lfs f0, 0x1c(r1) */ // 0x80738330
    /* li r5, 3 */ // 0x80738334
    /* stfs f2, 0x50(r1) */ // 0x80738338
    /* stfs f1, 0x60(r1) */ // 0x8073833C
    /* stfs f0, 0x70(r1) */ // 0x80738340
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x80738348
    r3 = r31;
    /* lfs f1, 0xc(r1) */ // 0x80738350
    /* lfs f0, 0x10(r1) */ // 0x80738358
    r8 = r31 + 0x7c8; // 0x8073835C
    /* stfs f2, 0x54(r1) */ // 0x80738360
    /* li r5, 4 */ // 0x80738364
    /* li r6, 7 */ // 0x80738368
    /* li r9, 1 */ // 0x8073836C
    /* stfs f1, 0x64(r1) */ // 0x80738370
    /* stfs f0, 0x74(r1) */ // 0x80738374
    r4 = *(0x610 + r31); // lwz @ 0x80738378
    FUN_807273A0(r6, r9); // bl 0x807273A0
    r0 = *(0x84 + r1); // lwz @ 0x80738380
    r31 = *(0x7c + r1); // lwz @ 0x80738384
    return;
}