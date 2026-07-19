/* Function at 0x807F8218, size=680 bytes */
/* Stack frame: 400 bytes */
/* Saved registers: r31, r30 */
/* Calls: 17 function(s) */

int FUN_807F8218(int r3, int r4)
{
    /* Stack frame: -400(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18c + r1) = r31; // stw @ 0x807F8228
    /* lis r31, 0 */ // 0x807F822C
    r31 = r31 + 0; // 0x807F8230
    *(0x188 + r1) = r30; // stw @ 0x807F8234
    r30 = r3;
    /* lfs f1, 0x18(r31) */ // 0x807F823C
    /* lfs f2, 0(r31) */ // 0x807F8244
    /* lfs f0, 0x1c(r31) */ // 0x807F8248
    /* stfs f1, 0xbc(r1) */ // 0x807F824C
    /* lfs f1, 0x10(r31) */ // 0x807F8250
    /* stfs f2, 0xc0(r1) */ // 0x807F8254
    /* stfs f0, 0xc4(r1) */ // 0x807F8258
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x20(r31) */ // 0x807F8260
    /* lfs f2, 0(r31) */ // 0x807F8268
    /* lfs f0, 0x24(r31) */ // 0x807F8270
    /* stfs f1, 0xb0(r1) */ // 0x807F8274
    /* lfs f1, 0x10(r31) */ // 0x807F8278
    /* stfs f2, 0xb4(r1) */ // 0x807F827C
    /* stfs f0, 0xb8(r1) */ // 0x807F8280
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x18(r31) */ // 0x807F8288
    /* lfs f2, 0(r31) */ // 0x807F8290
    /* lfs f0, 0x28(r31) */ // 0x807F8298
    /* stfs f1, 0xa4(r1) */ // 0x807F829C
    /* lfs f1, 0x10(r31) */ // 0x807F82A0
    /* stfs f2, 0xa8(r1) */ // 0x807F82A4
    /* stfs f0, 0xac(r1) */ // 0x807F82A8
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x20(r31) */ // 0x807F82B0
    /* lfs f2, 0(r31) */ // 0x807F82B8
    /* lfs f0, 0x24(r31) */ // 0x807F82C0
    /* stfs f1, 0x98(r1) */ // 0x807F82C4
    /* lfs f1, 0x10(r31) */ // 0x807F82C8
    /* stfs f2, 0x9c(r1) */ // 0x807F82CC
    /* stfs f0, 0xa0(r1) */ // 0x807F82D0
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x2c(r31) */ // 0x807F82D8
    /* lfs f2, 0(r31) */ // 0x807F82E0
    /* lfs f0, 0x28(r31) */ // 0x807F82E8
    /* stfs f1, 0x8c(r1) */ // 0x807F82EC
    /* lfs f1, 0x10(r31) */ // 0x807F82F0
    /* stfs f2, 0x90(r1) */ // 0x807F82F4
    /* stfs f0, 0x94(r1) */ // 0x807F82F8
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x30(r31) */ // 0x807F8300
    /* lfs f2, 0(r31) */ // 0x807F8308
    /* lfs f0, 0x34(r31) */ // 0x807F8310
    /* stfs f1, 0x80(r1) */ // 0x807F8314
    /* lfs f1, 0x10(r31) */ // 0x807F8318
    /* stfs f2, 0x84(r1) */ // 0x807F831C
    /* stfs f0, 0x88(r1) */ // 0x807F8320
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x2c(r31) */ // 0x807F8328
    /* lfs f2, 0(r31) */ // 0x807F8330
    /* lfs f0, 0x1c(r31) */ // 0x807F8338
    /* stfs f1, 0x74(r1) */ // 0x807F833C
    /* lfs f1, 0x10(r31) */ // 0x807F8340
    /* stfs f2, 0x78(r1) */ // 0x807F8344
    /* stfs f0, 0x7c(r1) */ // 0x807F8348
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x30(r31) */ // 0x807F8350
    /* lfs f2, 0(r31) */ // 0x807F8358
    /* lfs f0, 0x24(r31) */ // 0x807F8360
    /* stfs f1, 0x68(r1) */ // 0x807F8364
    /* lfs f1, 0x10(r31) */ // 0x807F8368
    /* stfs f2, 0x6c(r1) */ // 0x807F836C
    /* stfs f0, 0x70(r1) */ // 0x807F8370
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x38(r31) */ // 0x807F8378
    /* lfs f2, 0x3c(r31) */ // 0x807F8380
    /* lfs f0, 0x40(r31) */ // 0x807F8388
    /* stfs f1, 0x5c(r1) */ // 0x807F838C
    /* lfs f1, 0x10(r31) */ // 0x807F8390
    /* stfs f2, 0x60(r1) */ // 0x807F8394
    /* stfs f0, 0x64(r1) */ // 0x807F8398
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x44(r31) */ // 0x807F83A0
    /* lfs f2, 0x3c(r31) */ // 0x807F83A8
    /* lfs f0, 0x48(r31) */ // 0x807F83B0
    /* stfs f1, 0x50(r1) */ // 0x807F83B4
    /* lfs f1, 0x10(r31) */ // 0x807F83B8
    /* stfs f2, 0x54(r1) */ // 0x807F83BC
    /* stfs f0, 0x58(r1) */ // 0x807F83C0
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x38(r31) */ // 0x807F83C8
    /* lfs f2, 0x3c(r31) */ // 0x807F83D0
    /* lfs f0, 0x4c(r31) */ // 0x807F83D8
    /* stfs f1, 0x44(r1) */ // 0x807F83DC
    /* lfs f1, 0x10(r31) */ // 0x807F83E0
    /* stfs f2, 0x48(r1) */ // 0x807F83E4
    /* stfs f0, 0x4c(r1) */ // 0x807F83E8
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x44(r31) */ // 0x807F83F0
    /* lfs f2, 0x3c(r31) */ // 0x807F83F8
    /* lfs f0, 0x50(r31) */ // 0x807F8400
    /* stfs f1, 0x38(r1) */ // 0x807F8404
    /* lfs f1, 0x10(r31) */ // 0x807F8408
    /* stfs f2, 0x3c(r1) */ // 0x807F840C
    /* stfs f0, 0x40(r1) */ // 0x807F8410
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x54(r31) */ // 0x807F8418
    /* lfs f2, 0x3c(r31) */ // 0x807F8420
    /* lfs f0, 0x4c(r31) */ // 0x807F8428
    /* stfs f1, 0x2c(r1) */ // 0x807F842C
    /* lfs f1, 0x10(r31) */ // 0x807F8430
    /* stfs f2, 0x30(r1) */ // 0x807F8434
    /* stfs f0, 0x34(r1) */ // 0x807F8438
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x58(r31) */ // 0x807F8440
    /* lfs f2, 0x3c(r31) */ // 0x807F8448
    /* lfs f0, 0x50(r31) */ // 0x807F8450
    /* stfs f1, 0x20(r1) */ // 0x807F8454
    /* lfs f1, 0x10(r31) */ // 0x807F8458
    /* stfs f2, 0x24(r1) */ // 0x807F845C
    /* stfs f0, 0x28(r1) */ // 0x807F8460
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x54(r31) */ // 0x807F8468
    /* lfs f2, 0x3c(r31) */ // 0x807F8470
    /* lfs f0, 0x40(r31) */ // 0x807F8478
    /* stfs f1, 0x14(r1) */ // 0x807F847C
    /* lfs f1, 0x10(r31) */ // 0x807F8480
    /* stfs f2, 0x18(r1) */ // 0x807F8484
    /* stfs f0, 0x1c(r1) */ // 0x807F8488
    FUN_805A443C(); // bl 0x805A443C
    /* lfs f1, 0x58(r31) */ // 0x807F8490
    /* lfs f2, 0x3c(r31) */ // 0x807F8498
    /* lfs f0, 0x48(r31) */ // 0x807F84A0
    /* stfs f1, 8(r1) */ // 0x807F84A4
    /* lfs f1, 0x10(r31) */ // 0x807F84A8
    /* stfs f2, 0xc(r1) */ // 0x807F84AC
    /* stfs f0, 0x10(r1) */ // 0x807F84B0
    FUN_805A443C(); // bl 0x805A443C
    /* li r3, 0x44 */ // 0x807F84B8
    FUN_805E3430(r3); // bl 0x805E3430
}