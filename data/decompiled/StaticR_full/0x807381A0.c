/* Function at 0x807381A0, size=244 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_807381A0(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x807381A8
    *(0x84 + r1) = r0; // stw @ 0x807381AC
    *(0x7c + r1) = r31; // stw @ 0x807381B0
    r31 = r3;
    r4 = r31 + 0x6f4; // 0x807381BC
    FUN_805C70D8(r3, r4); // bl 0x805C70D8
    /* lfs f2, 0x38(r1) */ // 0x807381C4
    /* lfs f1, 0x3c(r1) */ // 0x807381CC
    r4 = r31 + 0x6f4; // 0x807381D0
    /* lfs f0, 0x40(r1) */ // 0x807381D4
    /* li r5, 1 */ // 0x807381D8
    /* stfs f2, 0x48(r1) */ // 0x807381DC
    /* stfs f1, 0x58(r1) */ // 0x807381E0
    /* stfs f0, 0x68(r1) */ // 0x807381E4
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 0x2c(r1) */ // 0x807381EC
    /* lfs f1, 0x30(r1) */ // 0x807381F4
    r4 = r31 + 0x6f4; // 0x807381F8
    /* lfs f0, 0x34(r1) */ // 0x807381FC
    /* li r5, 2 */ // 0x80738200
    /* stfs f2, 0x4c(r1) */ // 0x80738204
    /* stfs f1, 0x5c(r1) */ // 0x80738208
    /* stfs f0, 0x6c(r1) */ // 0x8073820C
    FUN_805C70D8(r5); // bl 0x805C70D8
    FUN_805A4400(r3, r4); // bl 0x805A4400
    /* lfs f2, 0x14(r1) */ // 0x80738220
    /* lfs f1, 0x18(r1) */ // 0x80738228
    r4 = r31 + 0x6f4; // 0x8073822C
    /* lfs f0, 0x1c(r1) */ // 0x80738230
    /* li r5, 3 */ // 0x80738234
    /* stfs f2, 0x50(r1) */ // 0x80738238
    /* stfs f1, 0x60(r1) */ // 0x8073823C
    /* stfs f0, 0x70(r1) */ // 0x80738240
    FUN_805C70D8(r5); // bl 0x805C70D8
    /* lfs f2, 8(r1) */ // 0x80738248
    r3 = r31;
    /* lfs f1, 0xc(r1) */ // 0x80738250
    /* lfs f0, 0x10(r1) */ // 0x80738258
    r8 = r31 + 0x7c8; // 0x8073825C
    /* stfs f2, 0x54(r1) */ // 0x80738260
    /* li r5, 4 */ // 0x80738264
    /* li r6, 7 */ // 0x80738268
    /* li r9, 1 */ // 0x8073826C
    /* stfs f1, 0x64(r1) */ // 0x80738270
    /* stfs f0, 0x74(r1) */ // 0x80738274
    r4 = *(0x610 + r31); // lwz @ 0x80738278
    FUN_807271EC(r6, r9); // bl 0x807271EC
    r0 = *(0x84 + r1); // lwz @ 0x80738280
    r31 = *(0x7c + r1); // lwz @ 0x80738284
    return;
}