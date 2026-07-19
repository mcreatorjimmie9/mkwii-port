/* Function at 0x806CD1B8, size=11048 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 540 function(s) */

int FUN_806CD1B8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806CD1C8
    r31 = r31 + 0; // 0x806CD1CC
    *(8 + r1) = r30; // stw @ 0x806CD1D0
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x806CD1D8
    /* lfs f2, 4(r31) */ // 0x806CD1DC
    /* lfs f3, 8(r31) */ // 0x806CD1E0
    FUN_806CFCE0(); // bl 0x806CFCE0
    /* lfs f1, 0xc(r31) */ // 0x806CD1E8
    r3 = r30 + 0xc; // 0x806CD1EC
    /* lfs f2, 0x10(r31) */ // 0x806CD1F0
    /* lfs f3, 8(r31) */ // 0x806CD1F4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x14(r31) */ // 0x806CD1FC
    r3 = r30 + 0x18; // 0x806CD200
    /* lfs f2, 0x18(r31) */ // 0x806CD204
    /* lfs f3, 8(r31) */ // 0x806CD208
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x1c(r31) */ // 0x806CD210
    r3 = r30 + 0x24; // 0x806CD214
    /* lfs f2, 0x20(r31) */ // 0x806CD218
    /* lfs f3, 0x24(r31) */ // 0x806CD21C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x28(r31) */ // 0x806CD224
    r3 = r30 + 0x30; // 0x806CD228
    /* lfs f2, 0x2c(r31) */ // 0x806CD22C
    /* lfs f3, 8(r31) */ // 0x806CD230
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x1c(r31) */ // 0x806CD238
    r3 = r30 + 0x3c; // 0x806CD23C
    /* lfs f2, 0x30(r31) */ // 0x806CD240
    /* lfs f3, 0x34(r31) */ // 0x806CD244
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x1c(r31) */ // 0x806CD24C
    r3 = r30 + 0x48; // 0x806CD250
    /* lfs f2, 0x38(r31) */ // 0x806CD254
    /* lfs f3, 0x24(r31) */ // 0x806CD258
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x28(r31) */ // 0x806CD260
    r3 = r30 + 0x54; // 0x806CD264
    /* lfs f2, 0x3c(r31) */ // 0x806CD268
    /* lfs f3, 8(r31) */ // 0x806CD26C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x1c(r31) */ // 0x806CD274
    r3 = r30 + 0x60; // 0x806CD278
    /* lfs f2, 0x40(r31) */ // 0x806CD27C
    /* lfs f3, 0x34(r31) */ // 0x806CD280
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x44(r31) */ // 0x806CD288
    r3 = r30 + 0x6c; // 0x806CD28C
    /* lfs f2, 0x20(r31) */ // 0x806CD290
    /* lfs f3, 0x48(r31) */ // 0x806CD294
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x4c(r31) */ // 0x806CD29C
    r3 = r30 + 0x78; // 0x806CD2A0
    /* lfs f2, 0x30(r31) */ // 0x806CD2A4
    /* lfs f3, 0x50(r31) */ // 0x806CD2A8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x54(r31) */ // 0x806CD2B0
    r3 = r30 + 0x84; // 0x806CD2B4
    /* lfs f2, 0x58(r31) */ // 0x806CD2B8
    /* lfs f3, 0x5c(r31) */ // 0x806CD2BC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x60(r31) */ // 0x806CD2C4
    r3 = r30 + 0x90; // 0x806CD2C8
    /* lfs f2, 0x20(r31) */ // 0x806CD2CC
    /* lfs f3, 0x48(r31) */ // 0x806CD2D0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x30(r31) */ // 0x806CD2D8
    r3 = r30 + 0x9c; // 0x806CD2DC
    /* lfs f3, 0x24(r31) */ // 0x806CD2E0
    /* fmr f2, f1 */ // 0x806CD2E4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x64(r31) */ // 0x806CD2EC
    r3 = r30 + 0xa8; // 0x806CD2F0
    /* lfs f2, 0x58(r31) */ // 0x806CD2F4
    /* lfs f3, 0x5c(r31) */ // 0x806CD2F8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x44(r31) */ // 0x806CD300
    r3 = r30 + 0xb4; // 0x806CD304
    /* lfs f2, 0x68(r31) */ // 0x806CD308
    /* lfs f3, 0x48(r31) */ // 0x806CD30C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x4c(r31) */ // 0x806CD314
    r3 = r30 + 0xc0; // 0x806CD318
    /* lfs f2, 0x6c(r31) */ // 0x806CD31C
    /* lfs f3, 0x50(r31) */ // 0x806CD320
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x54(r31) */ // 0x806CD328
    r3 = r30 + 0xcc; // 0x806CD32C
    /* lfs f2, 0x3c(r31) */ // 0x806CD330
    /* lfs f3, 0x5c(r31) */ // 0x806CD334
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x60(r31) */ // 0x806CD33C
    r3 = r30 + 0xd8; // 0x806CD340
    /* lfs f2, 0x68(r31) */ // 0x806CD344
    /* lfs f3, 0x48(r31) */ // 0x806CD348
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x30(r31) */ // 0x806CD350
    r3 = r30 + 0xe4; // 0x806CD354
    /* lfs f2, 0x6c(r31) */ // 0x806CD358
    /* lfs f3, 0x50(r31) */ // 0x806CD35C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x64(r31) */ // 0x806CD364
    r3 = r30 + 0xf0; // 0x806CD368
    /* lfs f2, 0x3c(r31) */ // 0x806CD36C
    /* lfs f3, 0x5c(r31) */ // 0x806CD370
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0(r31) */ // 0x806CD378
    r3 = r30 + 0xfc; // 0x806CD37C
    /* lfs f2, 4(r31) */ // 0x806CD380
    /* lfs f3, 8(r31) */ // 0x806CD384
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x70(r31) */ // 0x806CD38C
    r3 = r30 + 0x108; // 0x806CD390
    /* lfs f2, 0x18(r31) */ // 0x806CD394
    /* lfs f3, 0x74(r31) */ // 0x806CD398
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x14(r31) */ // 0x806CD3A0
    r3 = r30 + 0x114; // 0x806CD3A4
    /* lfs f2, 0x18(r31) */ // 0x806CD3A8
    /* lfs f3, 8(r31) */ // 0x806CD3AC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD3B4
    r3 = r30 + 0x120; // 0x806CD3B8
    /* lfs f2, 0x78(r31) */ // 0x806CD3BC
    /* lfs f3, 8(r31) */ // 0x806CD3C0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD3C8
    r3 = r30 + 0x12c; // 0x806CD3CC
    /* lfs f2, 0x7c(r31) */ // 0x806CD3D0
    /* lfs f3, 8(r31) */ // 0x806CD3D4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x80(r31) */ // 0x806CD3DC
    r3 = r30 + 0x138; // 0x806CD3E0
    /* lfs f2, 0x84(r31) */ // 0x806CD3E4
    /* lfs f3, 0x48(r31) */ // 0x806CD3E8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD3F0
    r3 = r30 + 0x144; // 0x806CD3F4
    /* lfs f3, 8(r31) */ // 0x806CD3F8
    /* fmr f2, f1 */ // 0x806CD3FC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD404
    r3 = r30 + 0x150; // 0x806CD408
    /* lfs f3, 8(r31) */ // 0x806CD40C
    /* fmr f2, f1 */ // 0x806CD410
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD418
    r3 = r30 + 0x15c; // 0x806CD41C
    /* lfs f3, 8(r31) */ // 0x806CD420
    /* fmr f2, f1 */ // 0x806CD424
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD42C
    r3 = r30 + 0x168; // 0x806CD430
    /* lfs f3, 8(r31) */ // 0x806CD434
    /* fmr f2, f1 */ // 0x806CD438
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD440
    r3 = r30 + 0x174; // 0x806CD444
    /* lfs f3, 8(r31) */ // 0x806CD448
    /* fmr f2, f1 */ // 0x806CD44C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD454
    r3 = r30 + 0x180; // 0x806CD458
    /* lfs f3, 8(r31) */ // 0x806CD45C
    /* fmr f2, f1 */ // 0x806CD460
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD468
    r3 = r30 + 0x18c; // 0x806CD46C
    /* lfs f3, 8(r31) */ // 0x806CD470
    /* fmr f2, f1 */ // 0x806CD474
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD47C
    r3 = r30 + 0x198; // 0x806CD480
    /* lfs f3, 8(r31) */ // 0x806CD484
    /* fmr f2, f1 */ // 0x806CD488
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD490
    r3 = r30 + 0x1a4; // 0x806CD494
    /* lfs f3, 8(r31) */ // 0x806CD498
    /* fmr f2, f1 */ // 0x806CD49C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD4A4
    r3 = r30 + 0x1b0; // 0x806CD4A8
    /* lfs f3, 8(r31) */ // 0x806CD4AC
    /* fmr f2, f1 */ // 0x806CD4B0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD4B8
    r3 = r30 + 0x1bc; // 0x806CD4BC
    /* lfs f3, 8(r31) */ // 0x806CD4C0
    /* fmr f2, f1 */ // 0x806CD4C4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD4CC
    r3 = r30 + 0x1c8; // 0x806CD4D0
    /* lfs f3, 8(r31) */ // 0x806CD4D4
    /* fmr f2, f1 */ // 0x806CD4D8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD4E0
    r3 = r30 + 0x1d4; // 0x806CD4E4
    /* lfs f3, 8(r31) */ // 0x806CD4E8
    /* fmr f2, f1 */ // 0x806CD4EC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD4F4
    r3 = r30 + 0x1e0; // 0x806CD4F8
    /* lfs f3, 8(r31) */ // 0x806CD4FC
    /* fmr f2, f1 */ // 0x806CD500
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD508
    r3 = r30 + 0x1ec; // 0x806CD50C
    /* lfs f3, 8(r31) */ // 0x806CD510
    /* fmr f2, f1 */ // 0x806CD514
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD51C
    r3 = r30 + 0x1f8; // 0x806CD520
    /* lfs f3, 8(r31) */ // 0x806CD524
    /* fmr f2, f1 */ // 0x806CD528
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD530
    r3 = r30 + 0x204; // 0x806CD534
    /* lfs f3, 8(r31) */ // 0x806CD538
    /* fmr f2, f1 */ // 0x806CD53C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD544
    r3 = r30 + 0x210; // 0x806CD548
    /* lfs f3, 8(r31) */ // 0x806CD54C
    /* fmr f2, f1 */ // 0x806CD550
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD558
    r3 = r30 + 0x21c; // 0x806CD55C
    /* lfs f3, 8(r31) */ // 0x806CD560
    /* fmr f2, f1 */ // 0x806CD564
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD56C
    r3 = r30 + 0x228; // 0x806CD570
    /* lfs f3, 8(r31) */ // 0x806CD574
    /* fmr f2, f1 */ // 0x806CD578
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD580
    r3 = r30 + 0x234; // 0x806CD584
    /* lfs f3, 8(r31) */ // 0x806CD588
    /* fmr f2, f1 */ // 0x806CD58C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD594
    r3 = r30 + 0x240; // 0x806CD598
    /* lfs f3, 8(r31) */ // 0x806CD59C
    /* fmr f2, f1 */ // 0x806CD5A0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD5A8
    r3 = r30 + 0x24c; // 0x806CD5AC
    /* lfs f3, 8(r31) */ // 0x806CD5B0
    /* fmr f2, f1 */ // 0x806CD5B4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD5BC
    r3 = r30 + 0x258; // 0x806CD5C0
    /* lfs f3, 8(r31) */ // 0x806CD5C4
    /* fmr f2, f1 */ // 0x806CD5C8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD5D0
    r3 = r30 + 0x264; // 0x806CD5D4
    /* lfs f3, 8(r31) */ // 0x806CD5D8
    /* fmr f2, f1 */ // 0x806CD5DC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD5E4
    r3 = r30 + 0x270; // 0x806CD5E8
    /* lfs f3, 8(r31) */ // 0x806CD5EC
    /* fmr f2, f1 */ // 0x806CD5F0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD5F8
    r3 = r30 + 0x27c; // 0x806CD5FC
    /* lfs f3, 8(r31) */ // 0x806CD600
    /* fmr f2, f1 */ // 0x806CD604
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD60C
    r3 = r30 + 0x288; // 0x806CD610
    /* lfs f3, 8(r31) */ // 0x806CD614
    /* fmr f2, f1 */ // 0x806CD618
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD620
    r3 = r30 + 0x294; // 0x806CD624
    /* lfs f3, 8(r31) */ // 0x806CD628
    /* fmr f2, f1 */ // 0x806CD62C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD634
    r3 = r30 + 0x2a0; // 0x806CD638
    /* lfs f3, 8(r31) */ // 0x806CD63C
    /* fmr f2, f1 */ // 0x806CD640
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD648
    r3 = r30 + 0x2ac; // 0x806CD64C
    /* lfs f3, 8(r31) */ // 0x806CD650
    /* fmr f2, f1 */ // 0x806CD654
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD65C
    r3 = r30 + 0x2b8; // 0x806CD660
    /* lfs f3, 8(r31) */ // 0x806CD664
    /* fmr f2, f1 */ // 0x806CD668
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD670
    r3 = r30 + 0x2c4; // 0x806CD674
    /* lfs f3, 8(r31) */ // 0x806CD678
    /* fmr f2, f1 */ // 0x806CD67C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD684
    r3 = r30 + 0x2d0; // 0x806CD688
    /* lfs f3, 8(r31) */ // 0x806CD68C
    /* fmr f2, f1 */ // 0x806CD690
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD698
    r3 = r30 + 0x2dc; // 0x806CD69C
    /* lfs f3, 8(r31) */ // 0x806CD6A0
    /* fmr f2, f1 */ // 0x806CD6A4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD6AC
    r3 = r30 + 0x2e8; // 0x806CD6B0
    /* lfs f3, 8(r31) */ // 0x806CD6B4
    /* fmr f2, f1 */ // 0x806CD6B8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD6C0
    r3 = r30 + 0x2f4; // 0x806CD6C4
    /* lfs f3, 8(r31) */ // 0x806CD6C8
    /* fmr f2, f1 */ // 0x806CD6CC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD6D4
    r3 = r30 + 0x300; // 0x806CD6D8
    /* lfs f3, 8(r31) */ // 0x806CD6DC
    /* fmr f2, f1 */ // 0x806CD6E0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD6E8
    r3 = r30 + 0x30c; // 0x806CD6EC
    /* lfs f3, 8(r31) */ // 0x806CD6F0
    /* fmr f2, f1 */ // 0x806CD6F4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD6FC
    r3 = r30 + 0x318; // 0x806CD700
    /* lfs f3, 8(r31) */ // 0x806CD704
    /* fmr f2, f1 */ // 0x806CD708
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD710
    r3 = r30 + 0x324; // 0x806CD714
    /* lfs f3, 8(r31) */ // 0x806CD718
    /* fmr f2, f1 */ // 0x806CD71C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD724
    r3 = r30 + 0x330; // 0x806CD728
    /* lfs f3, 8(r31) */ // 0x806CD72C
    /* fmr f2, f1 */ // 0x806CD730
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD738
    r3 = r30 + 0x33c; // 0x806CD73C
    /* lfs f3, 8(r31) */ // 0x806CD740
    /* fmr f2, f1 */ // 0x806CD744
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD74C
    r3 = r30 + 0x348; // 0x806CD750
    /* lfs f3, 8(r31) */ // 0x806CD754
    /* fmr f2, f1 */ // 0x806CD758
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD760
    r3 = r30 + 0x354; // 0x806CD764
    /* lfs f3, 8(r31) */ // 0x806CD768
    /* fmr f2, f1 */ // 0x806CD76C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD774
    r3 = r30 + 0x360; // 0x806CD778
    /* lfs f3, 8(r31) */ // 0x806CD77C
    /* fmr f2, f1 */ // 0x806CD780
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD788
    r3 = r30 + 0x36c; // 0x806CD78C
    /* lfs f3, 8(r31) */ // 0x806CD790
    /* fmr f2, f1 */ // 0x806CD794
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD79C
    r3 = r30 + 0x378; // 0x806CD7A0
    /* lfs f3, 8(r31) */ // 0x806CD7A4
    /* fmr f2, f1 */ // 0x806CD7A8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD7B0
    r3 = r30 + 0x384; // 0x806CD7B4
    /* lfs f3, 8(r31) */ // 0x806CD7B8
    /* fmr f2, f1 */ // 0x806CD7BC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD7C4
    r3 = r30 + 0x390; // 0x806CD7C8
    /* lfs f3, 8(r31) */ // 0x806CD7CC
    /* fmr f2, f1 */ // 0x806CD7D0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD7D8
    r3 = r30 + 0x39c; // 0x806CD7DC
    /* lfs f3, 8(r31) */ // 0x806CD7E0
    /* fmr f2, f1 */ // 0x806CD7E4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD7EC
    r3 = r30 + 0x3a8; // 0x806CD7F0
    /* lfs f3, 8(r31) */ // 0x806CD7F4
    /* fmr f2, f1 */ // 0x806CD7F8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD800
    r3 = r30 + 0x3b4; // 0x806CD804
    /* lfs f3, 8(r31) */ // 0x806CD808
    /* fmr f2, f1 */ // 0x806CD80C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD814
    r3 = r30 + 0x3c0; // 0x806CD818
    /* lfs f3, 8(r31) */ // 0x806CD81C
    /* fmr f2, f1 */ // 0x806CD820
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD828
    r3 = r30 + 0x3cc; // 0x806CD82C
    /* lfs f3, 8(r31) */ // 0x806CD830
    /* fmr f2, f1 */ // 0x806CD834
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD83C
    r3 = r30 + 0x3d8; // 0x806CD840
    /* lfs f3, 8(r31) */ // 0x806CD844
    /* fmr f2, f1 */ // 0x806CD848
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD850
    r3 = r30 + 0x3e4; // 0x806CD854
    /* lfs f3, 8(r31) */ // 0x806CD858
    /* fmr f2, f1 */ // 0x806CD85C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD864
    r3 = r30 + 0x3f0; // 0x806CD868
    /* lfs f3, 8(r31) */ // 0x806CD86C
    /* fmr f2, f1 */ // 0x806CD870
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD878
    r3 = r30 + 0x3fc; // 0x806CD87C
    /* lfs f3, 8(r31) */ // 0x806CD880
    /* fmr f2, f1 */ // 0x806CD884
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD88C
    r3 = r30 + 0x408; // 0x806CD890
    /* lfs f3, 8(r31) */ // 0x806CD894
    /* fmr f2, f1 */ // 0x806CD898
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD8A0
    r3 = r30 + 0x414; // 0x806CD8A4
    /* lfs f3, 8(r31) */ // 0x806CD8A8
    /* fmr f2, f1 */ // 0x806CD8AC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD8B4
    r3 = r30 + 0x420; // 0x806CD8B8
    /* lfs f3, 8(r31) */ // 0x806CD8BC
    /* fmr f2, f1 */ // 0x806CD8C0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD8C8
    r3 = r30 + 0x42c; // 0x806CD8CC
    /* lfs f3, 8(r31) */ // 0x806CD8D0
    /* fmr f2, f1 */ // 0x806CD8D4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD8DC
    r3 = r30 + 0x438; // 0x806CD8E0
    /* lfs f3, 8(r31) */ // 0x806CD8E4
    /* fmr f2, f1 */ // 0x806CD8E8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD8F0
    r3 = r30 + 0x444; // 0x806CD8F4
    /* lfs f3, 8(r31) */ // 0x806CD8F8
    /* fmr f2, f1 */ // 0x806CD8FC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD904
    r3 = r30 + 0x450; // 0x806CD908
    /* lfs f3, 8(r31) */ // 0x806CD90C
    /* fmr f2, f1 */ // 0x806CD910
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD918
    r3 = r30 + 0x45c; // 0x806CD91C
    /* lfs f3, 8(r31) */ // 0x806CD920
    /* fmr f2, f1 */ // 0x806CD924
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD92C
    r3 = r30 + 0x468; // 0x806CD930
    /* lfs f3, 8(r31) */ // 0x806CD934
    /* fmr f2, f1 */ // 0x806CD938
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD940
    r3 = r30 + 0x474; // 0x806CD944
    /* lfs f3, 8(r31) */ // 0x806CD948
    /* fmr f2, f1 */ // 0x806CD94C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD954
    r3 = r30 + 0x480; // 0x806CD958
    /* lfs f3, 8(r31) */ // 0x806CD95C
    /* fmr f2, f1 */ // 0x806CD960
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD968
    r3 = r30 + 0x48c; // 0x806CD96C
    /* lfs f3, 8(r31) */ // 0x806CD970
    /* fmr f2, f1 */ // 0x806CD974
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD97C
    r3 = r30 + 0x498; // 0x806CD980
    /* lfs f3, 8(r31) */ // 0x806CD984
    /* fmr f2, f1 */ // 0x806CD988
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD990
    r3 = r30 + 0x4a4; // 0x806CD994
    /* lfs f3, 8(r31) */ // 0x806CD998
    /* fmr f2, f1 */ // 0x806CD99C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD9A4
    r3 = r30 + 0x4b0; // 0x806CD9A8
    /* lfs f3, 8(r31) */ // 0x806CD9AC
    /* fmr f2, f1 */ // 0x806CD9B0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD9B8
    r3 = r30 + 0x4bc; // 0x806CD9BC
    /* lfs f3, 8(r31) */ // 0x806CD9C0
    /* fmr f2, f1 */ // 0x806CD9C4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD9CC
    r3 = r30 + 0x4c8; // 0x806CD9D0
    /* lfs f3, 8(r31) */ // 0x806CD9D4
    /* fmr f2, f1 */ // 0x806CD9D8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD9E0
    r3 = r30 + 0x4d4; // 0x806CD9E4
    /* lfs f3, 8(r31) */ // 0x806CD9E8
    /* fmr f2, f1 */ // 0x806CD9EC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CD9F4
    r3 = r30 + 0x4e0; // 0x806CD9F8
    /* lfs f3, 8(r31) */ // 0x806CD9FC
    /* fmr f2, f1 */ // 0x806CDA00
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDA08
    r3 = r30 + 0x4ec; // 0x806CDA0C
    /* lfs f3, 8(r31) */ // 0x806CDA10
    /* fmr f2, f1 */ // 0x806CDA14
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDA1C
    r3 = r30 + 0x4f8; // 0x806CDA20
    /* lfs f3, 8(r31) */ // 0x806CDA24
    /* fmr f2, f1 */ // 0x806CDA28
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDA30
    r3 = r30 + 0x504; // 0x806CDA34
    /* lfs f3, 8(r31) */ // 0x806CDA38
    /* fmr f2, f1 */ // 0x806CDA3C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDA44
    r3 = r30 + 0x510; // 0x806CDA48
    /* lfs f3, 8(r31) */ // 0x806CDA4C
    /* fmr f2, f1 */ // 0x806CDA50
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDA58
    r3 = r30 + 0x51c; // 0x806CDA5C
    /* lfs f3, 8(r31) */ // 0x806CDA60
    /* fmr f2, f1 */ // 0x806CDA64
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDA6C
    r3 = r30 + 0x528; // 0x806CDA70
    /* lfs f3, 8(r31) */ // 0x806CDA74
    /* fmr f2, f1 */ // 0x806CDA78
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDA80
    r3 = r30 + 0x534; // 0x806CDA84
    /* lfs f3, 8(r31) */ // 0x806CDA88
    /* fmr f2, f1 */ // 0x806CDA8C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDA94
    r3 = r30 + 0x540; // 0x806CDA98
    /* lfs f3, 8(r31) */ // 0x806CDA9C
    /* fmr f2, f1 */ // 0x806CDAA0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDAA8
    r3 = r30 + 0x54c; // 0x806CDAAC
    /* lfs f3, 8(r31) */ // 0x806CDAB0
    /* fmr f2, f1 */ // 0x806CDAB4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDABC
    r3 = r30 + 0x558; // 0x806CDAC0
    /* lfs f3, 8(r31) */ // 0x806CDAC4
    /* fmr f2, f1 */ // 0x806CDAC8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDAD0
    r3 = r30 + 0x564; // 0x806CDAD4
    /* lfs f3, 8(r31) */ // 0x806CDAD8
    /* fmr f2, f1 */ // 0x806CDADC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDAE4
    r3 = r30 + 0x570; // 0x806CDAE8
    /* lfs f3, 8(r31) */ // 0x806CDAEC
    /* fmr f2, f1 */ // 0x806CDAF0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDAF8
    r3 = r30 + 0x57c; // 0x806CDAFC
    /* lfs f3, 8(r31) */ // 0x806CDB00
    /* fmr f2, f1 */ // 0x806CDB04
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDB0C
    r3 = r30 + 0x588; // 0x806CDB10
    /* lfs f3, 8(r31) */ // 0x806CDB14
    /* fmr f2, f1 */ // 0x806CDB18
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDB20
    r3 = r30 + 0x594; // 0x806CDB24
    /* lfs f3, 8(r31) */ // 0x806CDB28
    /* fmr f2, f1 */ // 0x806CDB2C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDB34
    r3 = r30 + 0x5a0; // 0x806CDB38
    /* lfs f3, 8(r31) */ // 0x806CDB3C
    /* fmr f2, f1 */ // 0x806CDB40
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDB48
    r3 = r30 + 0x5ac; // 0x806CDB4C
    /* lfs f3, 8(r31) */ // 0x806CDB50
    /* fmr f2, f1 */ // 0x806CDB54
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDB5C
    r3 = r30 + 0x5b8; // 0x806CDB60
    /* lfs f3, 8(r31) */ // 0x806CDB64
    /* fmr f2, f1 */ // 0x806CDB68
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDB70
    r3 = r30 + 0x5c4; // 0x806CDB74
    /* lfs f3, 8(r31) */ // 0x806CDB78
    /* fmr f2, f1 */ // 0x806CDB7C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDB84
    r3 = r30 + 0x5d0; // 0x806CDB88
    /* lfs f3, 8(r31) */ // 0x806CDB8C
    /* fmr f2, f1 */ // 0x806CDB90
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDB98
    r3 = r30 + 0x5dc; // 0x806CDB9C
    /* lfs f3, 8(r31) */ // 0x806CDBA0
    /* fmr f2, f1 */ // 0x806CDBA4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDBAC
    r3 = r30 + 0x5e8; // 0x806CDBB0
    /* lfs f3, 8(r31) */ // 0x806CDBB4
    /* fmr f2, f1 */ // 0x806CDBB8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDBC0
    r3 = r30 + 0x5f4; // 0x806CDBC4
    /* lfs f3, 8(r31) */ // 0x806CDBC8
    /* fmr f2, f1 */ // 0x806CDBCC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDBD4
    r3 = r30 + 0x600; // 0x806CDBD8
    /* lfs f3, 8(r31) */ // 0x806CDBDC
    /* fmr f2, f1 */ // 0x806CDBE0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDBE8
    r3 = r30 + 0x60c; // 0x806CDBEC
    /* lfs f3, 8(r31) */ // 0x806CDBF0
    /* fmr f2, f1 */ // 0x806CDBF4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDBFC
    r3 = r30 + 0x618; // 0x806CDC00
    /* lfs f3, 8(r31) */ // 0x806CDC04
    /* fmr f2, f1 */ // 0x806CDC08
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDC10
    r3 = r30 + 0x624; // 0x806CDC14
    /* lfs f3, 8(r31) */ // 0x806CDC18
    /* fmr f2, f1 */ // 0x806CDC1C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDC24
    r3 = r30 + 0x630; // 0x806CDC28
    /* lfs f3, 8(r31) */ // 0x806CDC2C
    /* fmr f2, f1 */ // 0x806CDC30
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDC38
    r3 = r30 + 0x63c; // 0x806CDC3C
    /* lfs f3, 8(r31) */ // 0x806CDC40
    /* fmr f2, f1 */ // 0x806CDC44
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDC4C
    r3 = r30 + 0x648; // 0x806CDC50
    /* lfs f3, 8(r31) */ // 0x806CDC54
    /* fmr f2, f1 */ // 0x806CDC58
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDC60
    r3 = r30 + 0x654; // 0x806CDC64
    /* lfs f3, 8(r31) */ // 0x806CDC68
    /* fmr f2, f1 */ // 0x806CDC6C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDC74
    r3 = r30 + 0x660; // 0x806CDC78
    /* lfs f3, 8(r31) */ // 0x806CDC7C
    /* fmr f2, f1 */ // 0x806CDC80
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDC88
    r3 = r30 + 0x66c; // 0x806CDC8C
    /* lfs f3, 8(r31) */ // 0x806CDC90
    /* fmr f2, f1 */ // 0x806CDC94
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDC9C
    r3 = r30 + 0x678; // 0x806CDCA0
    /* lfs f3, 8(r31) */ // 0x806CDCA4
    /* fmr f2, f1 */ // 0x806CDCA8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDCB0
    r3 = r30 + 0x684; // 0x806CDCB4
    /* lfs f3, 8(r31) */ // 0x806CDCB8
    /* fmr f2, f1 */ // 0x806CDCBC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDCC4
    r3 = r30 + 0x690; // 0x806CDCC8
    /* lfs f3, 8(r31) */ // 0x806CDCCC
    /* fmr f2, f1 */ // 0x806CDCD0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDCD8
    r3 = r30 + 0x69c; // 0x806CDCDC
    /* lfs f3, 8(r31) */ // 0x806CDCE0
    /* fmr f2, f1 */ // 0x806CDCE4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDCEC
    r3 = r30 + 0x6a8; // 0x806CDCF0
    /* lfs f3, 8(r31) */ // 0x806CDCF4
    /* fmr f2, f1 */ // 0x806CDCF8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDD00
    r3 = r30 + 0x6b4; // 0x806CDD04
    /* lfs f3, 8(r31) */ // 0x806CDD08
    /* fmr f2, f1 */ // 0x806CDD0C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDD14
    r3 = r30 + 0x6c0; // 0x806CDD18
    /* lfs f3, 8(r31) */ // 0x806CDD1C
    /* fmr f2, f1 */ // 0x806CDD20
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDD28
    r3 = r30 + 0x6cc; // 0x806CDD2C
    /* lfs f3, 8(r31) */ // 0x806CDD30
    /* fmr f2, f1 */ // 0x806CDD34
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDD3C
    r3 = r30 + 0x6d8; // 0x806CDD40
    /* lfs f3, 8(r31) */ // 0x806CDD44
    /* fmr f2, f1 */ // 0x806CDD48
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDD50
    r3 = r30 + 0x6e4; // 0x806CDD54
    /* lfs f3, 8(r31) */ // 0x806CDD58
    /* fmr f2, f1 */ // 0x806CDD5C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDD64
    r3 = r30 + 0x6f0; // 0x806CDD68
    /* lfs f3, 8(r31) */ // 0x806CDD6C
    /* fmr f2, f1 */ // 0x806CDD70
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDD78
    r3 = r30 + 0x6fc; // 0x806CDD7C
    /* lfs f3, 8(r31) */ // 0x806CDD80
    /* fmr f2, f1 */ // 0x806CDD84
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDD8C
    r3 = r30 + 0x708; // 0x806CDD90
    /* lfs f3, 8(r31) */ // 0x806CDD94
    /* fmr f2, f1 */ // 0x806CDD98
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDDA0
    r3 = r30 + 0x714; // 0x806CDDA4
    /* lfs f3, 8(r31) */ // 0x806CDDA8
    /* fmr f2, f1 */ // 0x806CDDAC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDDB4
    r3 = r30 + 0x720; // 0x806CDDB8
    /* lfs f3, 8(r31) */ // 0x806CDDBC
    /* fmr f2, f1 */ // 0x806CDDC0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDDC8
    r3 = r30 + 0x72c; // 0x806CDDCC
    /* lfs f3, 8(r31) */ // 0x806CDDD0
    /* fmr f2, f1 */ // 0x806CDDD4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDDDC
    r3 = r30 + 0x738; // 0x806CDDE0
    /* lfs f3, 8(r31) */ // 0x806CDDE4
    /* fmr f2, f1 */ // 0x806CDDE8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDDF0
    r3 = r30 + 0x744; // 0x806CDDF4
    /* lfs f3, 8(r31) */ // 0x806CDDF8
    /* fmr f2, f1 */ // 0x806CDDFC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDE04
    r3 = r30 + 0x750; // 0x806CDE08
    /* lfs f3, 8(r31) */ // 0x806CDE0C
    /* fmr f2, f1 */ // 0x806CDE10
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDE18
    r3 = r30 + 0x75c; // 0x806CDE1C
    /* lfs f3, 8(r31) */ // 0x806CDE20
    /* fmr f2, f1 */ // 0x806CDE24
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDE2C
    r3 = r30 + 0x768; // 0x806CDE30
    /* lfs f3, 8(r31) */ // 0x806CDE34
    /* fmr f2, f1 */ // 0x806CDE38
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDE40
    r3 = r30 + 0x774; // 0x806CDE44
    /* lfs f3, 8(r31) */ // 0x806CDE48
    /* fmr f2, f1 */ // 0x806CDE4C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDE54
    r3 = r30 + 0x780; // 0x806CDE58
    /* lfs f3, 8(r31) */ // 0x806CDE5C
    /* fmr f2, f1 */ // 0x806CDE60
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDE68
    r3 = r30 + 0x78c; // 0x806CDE6C
    /* lfs f3, 8(r31) */ // 0x806CDE70
    /* fmr f2, f1 */ // 0x806CDE74
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDE7C
    r3 = r30 + 0x798; // 0x806CDE80
    /* lfs f3, 8(r31) */ // 0x806CDE84
    /* fmr f2, f1 */ // 0x806CDE88
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDE90
    r3 = r30 + 0x7a4; // 0x806CDE94
    /* lfs f3, 8(r31) */ // 0x806CDE98
    /* fmr f2, f1 */ // 0x806CDE9C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDEA4
    r3 = r30 + 0x7b0; // 0x806CDEA8
    /* lfs f3, 8(r31) */ // 0x806CDEAC
    /* fmr f2, f1 */ // 0x806CDEB0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDEB8
    r3 = r30 + 0x7bc; // 0x806CDEBC
    /* lfs f3, 8(r31) */ // 0x806CDEC0
    /* fmr f2, f1 */ // 0x806CDEC4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDECC
    r3 = r30 + 0x7c8; // 0x806CDED0
    /* lfs f3, 8(r31) */ // 0x806CDED4
    /* fmr f2, f1 */ // 0x806CDED8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDEE0
    r3 = r30 + 0x7d4; // 0x806CDEE4
    /* lfs f3, 8(r31) */ // 0x806CDEE8
    /* fmr f2, f1 */ // 0x806CDEEC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDEF4
    r3 = r30 + 0x7e0; // 0x806CDEF8
    /* lfs f3, 8(r31) */ // 0x806CDEFC
    /* fmr f2, f1 */ // 0x806CDF00
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDF08
    r3 = r30 + 0x7ec; // 0x806CDF0C
    /* lfs f3, 8(r31) */ // 0x806CDF10
    /* fmr f2, f1 */ // 0x806CDF14
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDF1C
    r3 = r30 + 0x7f8; // 0x806CDF20
    /* lfs f3, 8(r31) */ // 0x806CDF24
    /* fmr f2, f1 */ // 0x806CDF28
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDF30
    r3 = r30 + 0x804; // 0x806CDF34
    /* lfs f3, 8(r31) */ // 0x806CDF38
    /* fmr f2, f1 */ // 0x806CDF3C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDF44
    r3 = r30 + 0x810; // 0x806CDF48
    /* lfs f3, 8(r31) */ // 0x806CDF4C
    /* fmr f2, f1 */ // 0x806CDF50
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDF58
    r3 = r30 + 0x81c; // 0x806CDF5C
    /* lfs f3, 8(r31) */ // 0x806CDF60
    /* fmr f2, f1 */ // 0x806CDF64
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDF6C
    r3 = r30 + 0x828; // 0x806CDF70
    /* lfs f3, 8(r31) */ // 0x806CDF74
    /* fmr f2, f1 */ // 0x806CDF78
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDF80
    r3 = r30 + 0x834; // 0x806CDF84
    /* lfs f3, 8(r31) */ // 0x806CDF88
    /* fmr f2, f1 */ // 0x806CDF8C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDF94
    r3 = r30 + 0x840; // 0x806CDF98
    /* lfs f3, 8(r31) */ // 0x806CDF9C
    /* fmr f2, f1 */ // 0x806CDFA0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDFA8
    r3 = r30 + 0x84c; // 0x806CDFAC
    /* lfs f3, 8(r31) */ // 0x806CDFB0
    /* fmr f2, f1 */ // 0x806CDFB4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDFBC
    r3 = r30 + 0x858; // 0x806CDFC0
    /* lfs f3, 8(r31) */ // 0x806CDFC4
    /* fmr f2, f1 */ // 0x806CDFC8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDFD0
    r3 = r30 + 0x864; // 0x806CDFD4
    /* lfs f3, 8(r31) */ // 0x806CDFD8
    /* fmr f2, f1 */ // 0x806CDFDC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDFE4
    r3 = r30 + 0x870; // 0x806CDFE8
    /* lfs f3, 8(r31) */ // 0x806CDFEC
    /* fmr f2, f1 */ // 0x806CDFF0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CDFF8
    r3 = r30 + 0x87c; // 0x806CDFFC
    /* lfs f3, 8(r31) */ // 0x806CE000
    /* fmr f2, f1 */ // 0x806CE004
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE00C
    r3 = r30 + 0x888; // 0x806CE010
    /* lfs f3, 8(r31) */ // 0x806CE014
    /* fmr f2, f1 */ // 0x806CE018
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE020
    r3 = r30 + 0x894; // 0x806CE024
    /* lfs f3, 8(r31) */ // 0x806CE028
    /* fmr f2, f1 */ // 0x806CE02C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE034
    r3 = r30 + 0x8a0; // 0x806CE038
    /* lfs f3, 8(r31) */ // 0x806CE03C
    /* fmr f2, f1 */ // 0x806CE040
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE048
    r3 = r30 + 0x8ac; // 0x806CE04C
    /* lfs f3, 8(r31) */ // 0x806CE050
    /* fmr f2, f1 */ // 0x806CE054
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE05C
    r3 = r30 + 0x8b8; // 0x806CE060
    /* lfs f3, 8(r31) */ // 0x806CE064
    /* fmr f2, f1 */ // 0x806CE068
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE070
    r3 = r30 + 0x8c4; // 0x806CE074
    /* lfs f3, 8(r31) */ // 0x806CE078
    /* fmr f2, f1 */ // 0x806CE07C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE084
    r3 = r30 + 0x8d0; // 0x806CE088
    /* lfs f3, 8(r31) */ // 0x806CE08C
    /* fmr f2, f1 */ // 0x806CE090
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE098
    r3 = r30 + 0x8dc; // 0x806CE09C
    /* lfs f3, 8(r31) */ // 0x806CE0A0
    /* fmr f2, f1 */ // 0x806CE0A4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE0AC
    r3 = r30 + 0x8e8; // 0x806CE0B0
    /* lfs f3, 8(r31) */ // 0x806CE0B4
    /* fmr f2, f1 */ // 0x806CE0B8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE0C0
    r3 = r30 + 0x8f4; // 0x806CE0C4
    /* lfs f3, 8(r31) */ // 0x806CE0C8
    /* fmr f2, f1 */ // 0x806CE0CC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE0D4
    r3 = r30 + 0x900; // 0x806CE0D8
    /* lfs f3, 8(r31) */ // 0x806CE0DC
    /* fmr f2, f1 */ // 0x806CE0E0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE0E8
    r3 = r30 + 0x90c; // 0x806CE0EC
    /* lfs f3, 8(r31) */ // 0x806CE0F0
    /* fmr f2, f1 */ // 0x806CE0F4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE0FC
    r3 = r30 + 0x918; // 0x806CE100
    /* lfs f3, 8(r31) */ // 0x806CE104
    /* fmr f2, f1 */ // 0x806CE108
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE110
    r3 = r30 + 0x924; // 0x806CE114
    /* lfs f3, 8(r31) */ // 0x806CE118
    /* fmr f2, f1 */ // 0x806CE11C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE124
    r3 = r30 + 0x930; // 0x806CE128
    /* lfs f3, 8(r31) */ // 0x806CE12C
    /* fmr f2, f1 */ // 0x806CE130
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE138
    r3 = r30 + 0x93c; // 0x806CE13C
    /* lfs f3, 8(r31) */ // 0x806CE140
    /* fmr f2, f1 */ // 0x806CE144
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE14C
    r3 = r30 + 0x948; // 0x806CE150
    /* lfs f3, 8(r31) */ // 0x806CE154
    /* fmr f2, f1 */ // 0x806CE158
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE160
    r3 = r30 + 0x954; // 0x806CE164
    /* lfs f3, 8(r31) */ // 0x806CE168
    /* fmr f2, f1 */ // 0x806CE16C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE174
    r3 = r30 + 0x960; // 0x806CE178
    /* lfs f3, 8(r31) */ // 0x806CE17C
    /* fmr f2, f1 */ // 0x806CE180
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE188
    r3 = r30 + 0x96c; // 0x806CE18C
    /* lfs f3, 8(r31) */ // 0x806CE190
    /* fmr f2, f1 */ // 0x806CE194
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE19C
    r3 = r30 + 0x978; // 0x806CE1A0
    /* lfs f3, 8(r31) */ // 0x806CE1A4
    /* fmr f2, f1 */ // 0x806CE1A8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE1B0
    r3 = r30 + 0x984; // 0x806CE1B4
    /* lfs f3, 8(r31) */ // 0x806CE1B8
    /* fmr f2, f1 */ // 0x806CE1BC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE1C4
    r3 = r30 + 0x990; // 0x806CE1C8
    /* lfs f3, 8(r31) */ // 0x806CE1CC
    /* fmr f2, f1 */ // 0x806CE1D0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE1D8
    r3 = r30 + 0x99c; // 0x806CE1DC
    /* lfs f3, 8(r31) */ // 0x806CE1E0
    /* fmr f2, f1 */ // 0x806CE1E4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE1EC
    r3 = r30 + 0x9a8; // 0x806CE1F0
    /* lfs f3, 8(r31) */ // 0x806CE1F4
    /* fmr f2, f1 */ // 0x806CE1F8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE200
    r3 = r30 + 0x9b4; // 0x806CE204
    /* lfs f3, 8(r31) */ // 0x806CE208
    /* fmr f2, f1 */ // 0x806CE20C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE214
    r3 = r30 + 0x9c0; // 0x806CE218
    /* lfs f3, 8(r31) */ // 0x806CE21C
    /* fmr f2, f1 */ // 0x806CE220
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE228
    r3 = r30 + 0x9cc; // 0x806CE22C
    /* lfs f3, 8(r31) */ // 0x806CE230
    /* fmr f2, f1 */ // 0x806CE234
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE23C
    r3 = r30 + 0x9d8; // 0x806CE240
    /* lfs f3, 8(r31) */ // 0x806CE244
    /* fmr f2, f1 */ // 0x806CE248
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE250
    r3 = r30 + 0x9e4; // 0x806CE254
    /* lfs f3, 8(r31) */ // 0x806CE258
    /* fmr f2, f1 */ // 0x806CE25C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE264
    r3 = r30 + 0x9f0; // 0x806CE268
    /* lfs f3, 8(r31) */ // 0x806CE26C
    /* fmr f2, f1 */ // 0x806CE270
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE278
    r3 = r30 + 0x9fc; // 0x806CE27C
    /* lfs f3, 8(r31) */ // 0x806CE280
    /* fmr f2, f1 */ // 0x806CE284
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE28C
    r3 = r30 + 0xa08; // 0x806CE290
    /* lfs f3, 8(r31) */ // 0x806CE294
    /* fmr f2, f1 */ // 0x806CE298
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE2A0
    r3 = r30 + 0xa14; // 0x806CE2A4
    /* lfs f3, 8(r31) */ // 0x806CE2A8
    /* fmr f2, f1 */ // 0x806CE2AC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE2B4
    r3 = r30 + 0xa20; // 0x806CE2B8
    /* lfs f3, 8(r31) */ // 0x806CE2BC
    /* fmr f2, f1 */ // 0x806CE2C0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE2C8
    r3 = r30 + 0xa2c; // 0x806CE2CC
    /* lfs f3, 8(r31) */ // 0x806CE2D0
    /* fmr f2, f1 */ // 0x806CE2D4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE2DC
    r3 = r30 + 0xa38; // 0x806CE2E0
    /* lfs f3, 8(r31) */ // 0x806CE2E4
    /* fmr f2, f1 */ // 0x806CE2E8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE2F0
    r3 = r30 + 0xa44; // 0x806CE2F4
    /* lfs f3, 8(r31) */ // 0x806CE2F8
    /* fmr f2, f1 */ // 0x806CE2FC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE304
    r3 = r30 + 0xa50; // 0x806CE308
    /* lfs f3, 8(r31) */ // 0x806CE30C
    /* fmr f2, f1 */ // 0x806CE310
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE318
    r3 = r30 + 0xa5c; // 0x806CE31C
    /* lfs f3, 8(r31) */ // 0x806CE320
    /* fmr f2, f1 */ // 0x806CE324
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE32C
    r3 = r30 + 0xa68; // 0x806CE330
    /* lfs f3, 8(r31) */ // 0x806CE334
    /* fmr f2, f1 */ // 0x806CE338
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE340
    r3 = r30 + 0xa74; // 0x806CE344
    /* lfs f3, 8(r31) */ // 0x806CE348
    /* fmr f2, f1 */ // 0x806CE34C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE354
    r3 = r30 + 0xa80; // 0x806CE358
    /* lfs f3, 8(r31) */ // 0x806CE35C
    /* fmr f2, f1 */ // 0x806CE360
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE368
    r3 = r30 + 0xa8c; // 0x806CE36C
    /* lfs f3, 8(r31) */ // 0x806CE370
    /* fmr f2, f1 */ // 0x806CE374
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE37C
    r3 = r30 + 0xa98; // 0x806CE380
    /* lfs f3, 8(r31) */ // 0x806CE384
    /* fmr f2, f1 */ // 0x806CE388
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE390
    r3 = r30 + 0xaa4; // 0x806CE394
    /* lfs f3, 8(r31) */ // 0x806CE398
    /* fmr f2, f1 */ // 0x806CE39C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE3A4
    r3 = r30 + 0xab0; // 0x806CE3A8
    /* lfs f3, 8(r31) */ // 0x806CE3AC
    /* fmr f2, f1 */ // 0x806CE3B0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE3B8
    r3 = r30 + 0xabc; // 0x806CE3BC
    /* lfs f3, 8(r31) */ // 0x806CE3C0
    /* fmr f2, f1 */ // 0x806CE3C4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE3CC
    r3 = r30 + 0xac8; // 0x806CE3D0
    /* lfs f3, 8(r31) */ // 0x806CE3D4
    /* fmr f2, f1 */ // 0x806CE3D8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE3E0
    r3 = r30 + 0xad4; // 0x806CE3E4
    /* lfs f3, 8(r31) */ // 0x806CE3E8
    /* fmr f2, f1 */ // 0x806CE3EC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE3F4
    r3 = r30 + 0xae0; // 0x806CE3F8
    /* lfs f3, 8(r31) */ // 0x806CE3FC
    /* fmr f2, f1 */ // 0x806CE400
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE408
    r3 = r30 + 0xaec; // 0x806CE40C
    /* lfs f3, 8(r31) */ // 0x806CE410
    /* fmr f2, f1 */ // 0x806CE414
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE41C
    r3 = r30 + 0xaf8; // 0x806CE420
    /* lfs f3, 8(r31) */ // 0x806CE424
    /* fmr f2, f1 */ // 0x806CE428
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE430
    r3 = r30 + 0xb04; // 0x806CE434
    /* lfs f3, 8(r31) */ // 0x806CE438
    /* fmr f2, f1 */ // 0x806CE43C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE444
    r3 = r30 + 0xb10; // 0x806CE448
    /* lfs f3, 8(r31) */ // 0x806CE44C
    /* fmr f2, f1 */ // 0x806CE450
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE458
    r3 = r30 + 0xb1c; // 0x806CE45C
    /* lfs f3, 8(r31) */ // 0x806CE460
    /* fmr f2, f1 */ // 0x806CE464
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE46C
    r3 = r30 + 0xb28; // 0x806CE470
    /* lfs f3, 8(r31) */ // 0x806CE474
    /* fmr f2, f1 */ // 0x806CE478
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE480
    r3 = r30 + 0xb34; // 0x806CE484
    /* lfs f3, 8(r31) */ // 0x806CE488
    /* fmr f2, f1 */ // 0x806CE48C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE494
    r3 = r30 + 0xb40; // 0x806CE498
    /* lfs f3, 8(r31) */ // 0x806CE49C
    /* fmr f2, f1 */ // 0x806CE4A0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE4A8
    r3 = r30 + 0xb4c; // 0x806CE4AC
    /* lfs f3, 8(r31) */ // 0x806CE4B0
    /* fmr f2, f1 */ // 0x806CE4B4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE4BC
    r3 = r30 + 0xb58; // 0x806CE4C0
    /* lfs f3, 8(r31) */ // 0x806CE4C4
    /* fmr f2, f1 */ // 0x806CE4C8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE4D0
    r3 = r30 + 0xb64; // 0x806CE4D4
    /* lfs f3, 8(r31) */ // 0x806CE4D8
    /* fmr f2, f1 */ // 0x806CE4DC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE4E4
    r3 = r30 + 0xb70; // 0x806CE4E8
    /* lfs f3, 8(r31) */ // 0x806CE4EC
    /* fmr f2, f1 */ // 0x806CE4F0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE4F8
    r3 = r30 + 0xb7c; // 0x806CE4FC
    /* lfs f3, 8(r31) */ // 0x806CE500
    /* fmr f2, f1 */ // 0x806CE504
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE50C
    r3 = r30 + 0xb88; // 0x806CE510
    /* lfs f3, 8(r31) */ // 0x806CE514
    /* fmr f2, f1 */ // 0x806CE518
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE520
    r3 = r30 + 0xb94; // 0x806CE524
    /* lfs f3, 8(r31) */ // 0x806CE528
    /* fmr f2, f1 */ // 0x806CE52C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE534
    r3 = r30 + 0xba0; // 0x806CE538
    /* lfs f3, 8(r31) */ // 0x806CE53C
    /* fmr f2, f1 */ // 0x806CE540
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE548
    r3 = r30 + 0xbac; // 0x806CE54C
    /* lfs f3, 8(r31) */ // 0x806CE550
    /* fmr f2, f1 */ // 0x806CE554
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE55C
    r3 = r30 + 0xbb8; // 0x806CE560
    /* lfs f3, 8(r31) */ // 0x806CE564
    /* fmr f2, f1 */ // 0x806CE568
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE570
    r3 = r30 + 0xbc4; // 0x806CE574
    /* lfs f3, 8(r31) */ // 0x806CE578
    /* fmr f2, f1 */ // 0x806CE57C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE584
    r3 = r30 + 0xbd0; // 0x806CE588
    /* lfs f3, 8(r31) */ // 0x806CE58C
    /* fmr f2, f1 */ // 0x806CE590
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE598
    r3 = r30 + 0xbdc; // 0x806CE59C
    /* lfs f3, 8(r31) */ // 0x806CE5A0
    /* fmr f2, f1 */ // 0x806CE5A4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE5AC
    r3 = r30 + 0xbe8; // 0x806CE5B0
    /* lfs f3, 8(r31) */ // 0x806CE5B4
    /* fmr f2, f1 */ // 0x806CE5B8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE5C0
    r3 = r30 + 0xbf4; // 0x806CE5C4
    /* lfs f3, 8(r31) */ // 0x806CE5C8
    /* fmr f2, f1 */ // 0x806CE5CC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE5D4
    r3 = r30 + 0xc00; // 0x806CE5D8
    /* lfs f3, 8(r31) */ // 0x806CE5DC
    /* fmr f2, f1 */ // 0x806CE5E0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE5E8
    r3 = r30 + 0xc0c; // 0x806CE5EC
    /* lfs f3, 8(r31) */ // 0x806CE5F0
    /* fmr f2, f1 */ // 0x806CE5F4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE5FC
    r3 = r30 + 0xc18; // 0x806CE600
    /* lfs f3, 8(r31) */ // 0x806CE604
    /* fmr f2, f1 */ // 0x806CE608
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE610
    r3 = r30 + 0xc24; // 0x806CE614
    /* lfs f3, 8(r31) */ // 0x806CE618
    /* fmr f2, f1 */ // 0x806CE61C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE624
    r3 = r30 + 0xc30; // 0x806CE628
    /* lfs f3, 8(r31) */ // 0x806CE62C
    /* fmr f2, f1 */ // 0x806CE630
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE638
    r3 = r30 + 0xc3c; // 0x806CE63C
    /* lfs f3, 8(r31) */ // 0x806CE640
    /* fmr f2, f1 */ // 0x806CE644
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE64C
    r3 = r30 + 0xc48; // 0x806CE650
    /* lfs f3, 8(r31) */ // 0x806CE654
    /* fmr f2, f1 */ // 0x806CE658
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE660
    r3 = r30 + 0xc54; // 0x806CE664
    /* lfs f3, 8(r31) */ // 0x806CE668
    /* fmr f2, f1 */ // 0x806CE66C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE674
    r3 = r30 + 0xc60; // 0x806CE678
    /* lfs f3, 8(r31) */ // 0x806CE67C
    /* fmr f2, f1 */ // 0x806CE680
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE688
    r3 = r30 + 0xc6c; // 0x806CE68C
    /* lfs f3, 8(r31) */ // 0x806CE690
    /* fmr f2, f1 */ // 0x806CE694
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE69C
    r3 = r30 + 0xc78; // 0x806CE6A0
    /* lfs f3, 8(r31) */ // 0x806CE6A4
    /* fmr f2, f1 */ // 0x806CE6A8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE6B0
    r3 = r30 + 0xc84; // 0x806CE6B4
    /* lfs f3, 8(r31) */ // 0x806CE6B8
    /* fmr f2, f1 */ // 0x806CE6BC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE6C4
    r3 = r30 + 0xc90; // 0x806CE6C8
    /* lfs f3, 8(r31) */ // 0x806CE6CC
    /* fmr f2, f1 */ // 0x806CE6D0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE6D8
    r3 = r30 + 0xc9c; // 0x806CE6DC
    /* lfs f3, 8(r31) */ // 0x806CE6E0
    /* fmr f2, f1 */ // 0x806CE6E4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0(r31) */ // 0x806CE6EC
    r3 = r30 + 0xca8; // 0x806CE6F0
    /* lfs f2, 4(r31) */ // 0x806CE6F4
    /* lfs f3, 8(r31) */ // 0x806CE6F8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x70(r31) */ // 0x806CE700
    r3 = r30 + 0xcb4; // 0x806CE704
    /* lfs f2, 0x88(r31) */ // 0x806CE708
    /* lfs f3, 0x74(r31) */ // 0x806CE70C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x8c(r31) */ // 0x806CE714
    r3 = r30 + 0xcc0; // 0x806CE718
    /* lfs f2, 0x18(r31) */ // 0x806CE71C
    /* lfs f3, 0x74(r31) */ // 0x806CE720
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x1c(r31) */ // 0x806CE728
    r3 = r30 + 0xccc; // 0x806CE72C
    /* lfs f2, 0x20(r31) */ // 0x806CE730
    /* lfs f3, 0x24(r31) */ // 0x806CE734
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x28(r31) */ // 0x806CE73C
    r3 = r30 + 0xcd8; // 0x806CE740
    /* lfs f2, 0x30(r31) */ // 0x806CE744
    /* lfs f3, 8(r31) */ // 0x806CE748
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x90(r31) */ // 0x806CE750
    r3 = r30 + 0xce4; // 0x806CE754
    /* lfs f2, 0x94(r31) */ // 0x806CE758
    /* lfs f3, 0x34(r31) */ // 0x806CE75C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x1c(r31) */ // 0x806CE764
    r3 = r30 + 0xcf0; // 0x806CE768
    /* lfs f2, 0x38(r31) */ // 0x806CE76C
    /* lfs f3, 0x24(r31) */ // 0x806CE770
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x28(r31) */ // 0x806CE778
    r3 = r30 + 0xcfc; // 0x806CE77C
    /* lfs f2, 0x3c(r31) */ // 0x806CE780
    /* lfs f3, 8(r31) */ // 0x806CE784
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x90(r31) */ // 0x806CE78C
    r3 = r30 + 0xd08; // 0x806CE790
    /* lfs f2, 0x40(r31) */ // 0x806CE794
    /* lfs f3, 0x34(r31) */ // 0x806CE798
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x98(r31) */ // 0x806CE7A0
    r3 = r30 + 0xd14; // 0x806CE7A4
    /* lfs f2, 0x20(r31) */ // 0x806CE7A8
    /* lfs f3, 0x24(r31) */ // 0x806CE7AC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x4c(r31) */ // 0x806CE7B4
    r3 = r30 + 0xd20; // 0x806CE7B8
    /* lfs f2, 0x30(r31) */ // 0x806CE7BC
    /* lfs f3, 0x50(r31) */ // 0x806CE7C0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x98(r31) */ // 0x806CE7C8
    r3 = r30 + 0xd2c; // 0x806CE7CC
    /* lfs f2, 0x20(r31) */ // 0x806CE7D0
    /* lfs f3, 0x24(r31) */ // 0x806CE7D4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x9c(r31) */ // 0x806CE7DC
    r3 = r30 + 0xd38; // 0x806CE7E0
    /* lfs f2, 0x20(r31) */ // 0x806CE7E4
    /* lfs f3, 0x24(r31) */ // 0x806CE7E8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x30(r31) */ // 0x806CE7F0
    r3 = r30 + 0xd44; // 0x806CE7F4
    /* lfs f3, 0x50(r31) */ // 0x806CE7F8
    /* fmr f2, f1 */ // 0x806CE7FC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x9c(r31) */ // 0x806CE804
    r3 = r30 + 0xd50; // 0x806CE808
    /* lfs f2, 0x20(r31) */ // 0x806CE80C
    /* lfs f3, 0x24(r31) */ // 0x806CE810
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x98(r31) */ // 0x806CE818
    r3 = r30 + 0xd5c; // 0x806CE81C
    /* lfs f2, 0x38(r31) */ // 0x806CE820
    /* lfs f3, 0x24(r31) */ // 0x806CE824
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x4c(r31) */ // 0x806CE82C
    r3 = r30 + 0xd68; // 0x806CE830
    /* lfs f2, 0x6c(r31) */ // 0x806CE834
    /* lfs f3, 0x50(r31) */ // 0x806CE838
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x98(r31) */ // 0x806CE840
    r3 = r30 + 0xd74; // 0x806CE844
    /* lfs f2, 0x38(r31) */ // 0x806CE848
    /* lfs f3, 0x24(r31) */ // 0x806CE84C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x9c(r31) */ // 0x806CE854
    r3 = r30 + 0xd80; // 0x806CE858
    /* lfs f2, 0x38(r31) */ // 0x806CE85C
    /* lfs f3, 0x24(r31) */ // 0x806CE860
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x30(r31) */ // 0x806CE868
    r3 = r30 + 0xd8c; // 0x806CE86C
    /* lfs f2, 0x6c(r31) */ // 0x806CE870
    /* lfs f3, 0x50(r31) */ // 0x806CE874
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x9c(r31) */ // 0x806CE87C
    r3 = r30 + 0xd98; // 0x806CE880
    /* lfs f2, 0x38(r31) */ // 0x806CE884
    /* lfs f3, 0x24(r31) */ // 0x806CE888
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0(r31) */ // 0x806CE890
    r3 = r30 + 0xda4; // 0x806CE894
    /* lfs f2, 4(r31) */ // 0x806CE898
    /* lfs f3, 8(r31) */ // 0x806CE89C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x8c(r31) */ // 0x806CE8A4
    r3 = r30 + 0xdb0; // 0x806CE8A8
    /* lfs f2, 0x18(r31) */ // 0x806CE8AC
    /* lfs f3, 0x74(r31) */ // 0x806CE8B0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0x8c(r31) */ // 0x806CE8B8
    r3 = r30 + 0xdbc; // 0x806CE8BC
    /* lfs f2, 0x18(r31) */ // 0x806CE8C0
    /* lfs f3, 0x74(r31) */ // 0x806CE8C4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE8CC
    r3 = r30 + 0xdc8; // 0x806CE8D0
    /* lfs f3, 0x5c(r31) */ // 0x806CE8D4
    /* fmr f2, f1 */ // 0x806CE8D8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE8E0
    r3 = r30 + 0xdd4; // 0x806CE8E4
    /* lfs f3, 0x5c(r31) */ // 0x806CE8E8
    /* fmr f2, f1 */ // 0x806CE8EC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 0xa0(r31) */ // 0x806CE8F4
    r3 = r30 + 0xde0; // 0x806CE8F8
    /* lfs f2, 0x30(r31) */ // 0x806CE8FC
    /* lfs f3, 0x48(r31) */ // 0x806CE900
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE908
    r3 = r30 + 0xdec; // 0x806CE90C
    /* lfs f3, 8(r31) */ // 0x806CE910
    /* fmr f2, f1 */ // 0x806CE914
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE91C
    r3 = r30 + 0xdf8; // 0x806CE920
    /* lfs f3, 8(r31) */ // 0x806CE924
    /* fmr f2, f1 */ // 0x806CE928
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE930
    r3 = r30 + 0xe04; // 0x806CE934
    /* lfs f3, 8(r31) */ // 0x806CE938
    /* fmr f2, f1 */ // 0x806CE93C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE944
    r3 = r30 + 0xe10; // 0x806CE948
    /* lfs f3, 8(r31) */ // 0x806CE94C
    /* fmr f2, f1 */ // 0x806CE950
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE958
    r3 = r30 + 0xe1c; // 0x806CE95C
    /* lfs f3, 8(r31) */ // 0x806CE960
    /* fmr f2, f1 */ // 0x806CE964
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE96C
    r3 = r30 + 0xe28; // 0x806CE970
    /* lfs f3, 8(r31) */ // 0x806CE974
    /* fmr f2, f1 */ // 0x806CE978
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE980
    r3 = r30 + 0xe34; // 0x806CE984
    /* lfs f3, 8(r31) */ // 0x806CE988
    /* fmr f2, f1 */ // 0x806CE98C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE994
    r3 = r30 + 0xe40; // 0x806CE998
    /* lfs f3, 8(r31) */ // 0x806CE99C
    /* fmr f2, f1 */ // 0x806CE9A0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE9A8
    r3 = r30 + 0xe4c; // 0x806CE9AC
    /* lfs f3, 8(r31) */ // 0x806CE9B0
    /* fmr f2, f1 */ // 0x806CE9B4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE9BC
    r3 = r30 + 0xe58; // 0x806CE9C0
    /* lfs f3, 8(r31) */ // 0x806CE9C4
    /* fmr f2, f1 */ // 0x806CE9C8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE9D0
    r3 = r30 + 0xe64; // 0x806CE9D4
    /* lfs f3, 8(r31) */ // 0x806CE9D8
    /* fmr f2, f1 */ // 0x806CE9DC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE9E4
    r3 = r30 + 0xe70; // 0x806CE9E8
    /* lfs f3, 8(r31) */ // 0x806CE9EC
    /* fmr f2, f1 */ // 0x806CE9F0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CE9F8
    r3 = r30 + 0xe7c; // 0x806CE9FC
    /* lfs f3, 8(r31) */ // 0x806CEA00
    /* fmr f2, f1 */ // 0x806CEA04
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEA0C
    r3 = r30 + 0xe88; // 0x806CEA10
    /* lfs f3, 8(r31) */ // 0x806CEA14
    /* fmr f2, f1 */ // 0x806CEA18
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEA20
    r3 = r30 + 0xe94; // 0x806CEA24
    /* lfs f3, 8(r31) */ // 0x806CEA28
    /* fmr f2, f1 */ // 0x806CEA2C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEA34
    r3 = r30 + 0xea0; // 0x806CEA38
    /* lfs f3, 8(r31) */ // 0x806CEA3C
    /* fmr f2, f1 */ // 0x806CEA40
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEA48
    r3 = r30 + 0xeac; // 0x806CEA4C
    /* lfs f3, 8(r31) */ // 0x806CEA50
    /* fmr f2, f1 */ // 0x806CEA54
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEA5C
    r3 = r30 + 0xeb8; // 0x806CEA60
    /* lfs f3, 8(r31) */ // 0x806CEA64
    /* fmr f2, f1 */ // 0x806CEA68
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEA70
    r3 = r30 + 0xec4; // 0x806CEA74
    /* lfs f3, 8(r31) */ // 0x806CEA78
    /* fmr f2, f1 */ // 0x806CEA7C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEA84
    r3 = r30 + 0xed0; // 0x806CEA88
    /* lfs f3, 8(r31) */ // 0x806CEA8C
    /* fmr f2, f1 */ // 0x806CEA90
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEA98
    r3 = r30 + 0xedc; // 0x806CEA9C
    /* lfs f3, 8(r31) */ // 0x806CEAA0
    /* fmr f2, f1 */ // 0x806CEAA4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEAAC
    r3 = r30 + 0xee8; // 0x806CEAB0
    /* lfs f3, 8(r31) */ // 0x806CEAB4
    /* fmr f2, f1 */ // 0x806CEAB8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEAC0
    r3 = r30 + 0xef4; // 0x806CEAC4
    /* lfs f3, 8(r31) */ // 0x806CEAC8
    /* fmr f2, f1 */ // 0x806CEACC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEAD4
    r3 = r30 + 0xf00; // 0x806CEAD8
    /* lfs f3, 8(r31) */ // 0x806CEADC
    /* fmr f2, f1 */ // 0x806CEAE0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEAE8
    r3 = r30 + 0xf0c; // 0x806CEAEC
    /* lfs f3, 8(r31) */ // 0x806CEAF0
    /* fmr f2, f1 */ // 0x806CEAF4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEAFC
    r3 = r30 + 0xf18; // 0x806CEB00
    /* lfs f3, 8(r31) */ // 0x806CEB04
    /* fmr f2, f1 */ // 0x806CEB08
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEB10
    r3 = r30 + 0xf24; // 0x806CEB14
    /* lfs f3, 8(r31) */ // 0x806CEB18
    /* fmr f2, f1 */ // 0x806CEB1C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEB24
    r3 = r30 + 0xf30; // 0x806CEB28
    /* lfs f3, 8(r31) */ // 0x806CEB2C
    /* fmr f2, f1 */ // 0x806CEB30
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEB38
    r3 = r30 + 0xf3c; // 0x806CEB3C
    /* lfs f3, 8(r31) */ // 0x806CEB40
    /* fmr f2, f1 */ // 0x806CEB44
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEB4C
    r3 = r30 + 0xf48; // 0x806CEB50
    /* lfs f3, 8(r31) */ // 0x806CEB54
    /* fmr f2, f1 */ // 0x806CEB58
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEB60
    r3 = r30 + 0xf54; // 0x806CEB64
    /* lfs f3, 8(r31) */ // 0x806CEB68
    /* fmr f2, f1 */ // 0x806CEB6C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEB74
    r3 = r30 + 0xf60; // 0x806CEB78
    /* lfs f3, 8(r31) */ // 0x806CEB7C
    /* fmr f2, f1 */ // 0x806CEB80
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEB88
    r3 = r30 + 0xf6c; // 0x806CEB8C
    /* lfs f3, 8(r31) */ // 0x806CEB90
    /* fmr f2, f1 */ // 0x806CEB94
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEB9C
    r3 = r30 + 0xf78; // 0x806CEBA0
    /* lfs f3, 8(r31) */ // 0x806CEBA4
    /* fmr f2, f1 */ // 0x806CEBA8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEBB0
    r3 = r30 + 0xf84; // 0x806CEBB4
    /* lfs f3, 8(r31) */ // 0x806CEBB8
    /* fmr f2, f1 */ // 0x806CEBBC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEBC4
    r3 = r30 + 0xf90; // 0x806CEBC8
    /* lfs f3, 8(r31) */ // 0x806CEBCC
    /* fmr f2, f1 */ // 0x806CEBD0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEBD8
    r3 = r30 + 0xf9c; // 0x806CEBDC
    /* lfs f3, 8(r31) */ // 0x806CEBE0
    /* fmr f2, f1 */ // 0x806CEBE4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEBEC
    r3 = r30 + 0xfa8; // 0x806CEBF0
    /* lfs f3, 8(r31) */ // 0x806CEBF4
    /* fmr f2, f1 */ // 0x806CEBF8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEC00
    r3 = r30 + 0xfb4; // 0x806CEC04
    /* lfs f3, 8(r31) */ // 0x806CEC08
    /* fmr f2, f1 */ // 0x806CEC0C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEC14
    r3 = r30 + 0xfc0; // 0x806CEC18
    /* lfs f3, 8(r31) */ // 0x806CEC1C
    /* fmr f2, f1 */ // 0x806CEC20
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEC28
    r3 = r30 + 0xfcc; // 0x806CEC2C
    /* lfs f3, 8(r31) */ // 0x806CEC30
    /* fmr f2, f1 */ // 0x806CEC34
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEC3C
    r3 = r30 + 0xfd8; // 0x806CEC40
    /* lfs f3, 8(r31) */ // 0x806CEC44
    /* fmr f2, f1 */ // 0x806CEC48
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEC50
    r3 = r30 + 0xfe4; // 0x806CEC54
    /* lfs f3, 8(r31) */ // 0x806CEC58
    /* fmr f2, f1 */ // 0x806CEC5C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEC64
    r3 = r30 + 0xff0; // 0x806CEC68
    /* lfs f3, 8(r31) */ // 0x806CEC6C
    /* fmr f2, f1 */ // 0x806CEC70
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEC78
    r3 = r30 + 0xffc; // 0x806CEC7C
    /* lfs f3, 8(r31) */ // 0x806CEC80
    /* fmr f2, f1 */ // 0x806CEC84
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEC8C
    r3 = r30 + 0x1008; // 0x806CEC90
    /* lfs f3, 8(r31) */ // 0x806CEC94
    /* fmr f2, f1 */ // 0x806CEC98
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CECA0
    r3 = r30 + 0x1014; // 0x806CECA4
    /* lfs f3, 8(r31) */ // 0x806CECA8
    /* fmr f2, f1 */ // 0x806CECAC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CECB4
    r3 = r30 + 0x1020; // 0x806CECB8
    /* lfs f3, 8(r31) */ // 0x806CECBC
    /* fmr f2, f1 */ // 0x806CECC0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CECC8
    r3 = r30 + 0x102c; // 0x806CECCC
    /* lfs f3, 8(r31) */ // 0x806CECD0
    /* fmr f2, f1 */ // 0x806CECD4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CECDC
    r3 = r30 + 0x1038; // 0x806CECE0
    /* lfs f3, 8(r31) */ // 0x806CECE4
    /* fmr f2, f1 */ // 0x806CECE8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CECF0
    r3 = r30 + 0x1044; // 0x806CECF4
    /* lfs f3, 8(r31) */ // 0x806CECF8
    /* fmr f2, f1 */ // 0x806CECFC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CED04
    r3 = r30 + 0x1050; // 0x806CED08
    /* lfs f3, 8(r31) */ // 0x806CED0C
    /* fmr f2, f1 */ // 0x806CED10
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CED18
    r3 = r30 + 0x105c; // 0x806CED1C
    /* lfs f3, 8(r31) */ // 0x806CED20
    /* fmr f2, f1 */ // 0x806CED24
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CED2C
    r3 = r30 + 0x1068; // 0x806CED30
    /* lfs f3, 8(r31) */ // 0x806CED34
    /* fmr f2, f1 */ // 0x806CED38
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CED40
    r3 = r30 + 0x1074; // 0x806CED44
    /* lfs f3, 8(r31) */ // 0x806CED48
    /* fmr f2, f1 */ // 0x806CED4C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CED54
    r3 = r30 + 0x1080; // 0x806CED58
    /* lfs f3, 8(r31) */ // 0x806CED5C
    /* fmr f2, f1 */ // 0x806CED60
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CED68
    r3 = r30 + 0x108c; // 0x806CED6C
    /* lfs f3, 8(r31) */ // 0x806CED70
    /* fmr f2, f1 */ // 0x806CED74
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CED7C
    r3 = r30 + 0x1098; // 0x806CED80
    /* lfs f3, 8(r31) */ // 0x806CED84
    /* fmr f2, f1 */ // 0x806CED88
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CED90
    r3 = r30 + 0x10a4; // 0x806CED94
    /* lfs f3, 8(r31) */ // 0x806CED98
    /* fmr f2, f1 */ // 0x806CED9C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEDA4
    r3 = r30 + 0x10b0; // 0x806CEDA8
    /* lfs f3, 8(r31) */ // 0x806CEDAC
    /* fmr f2, f1 */ // 0x806CEDB0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEDB8
    r3 = r30 + 0x10bc; // 0x806CEDBC
    /* lfs f3, 8(r31) */ // 0x806CEDC0
    /* fmr f2, f1 */ // 0x806CEDC4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEDCC
    r3 = r30 + 0x10c8; // 0x806CEDD0
    /* lfs f3, 8(r31) */ // 0x806CEDD4
    /* fmr f2, f1 */ // 0x806CEDD8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEDE0
    r3 = r30 + 0x10d4; // 0x806CEDE4
    /* lfs f3, 8(r31) */ // 0x806CEDE8
    /* fmr f2, f1 */ // 0x806CEDEC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEDF4
    r3 = r30 + 0x10e0; // 0x806CEDF8
    /* lfs f3, 8(r31) */ // 0x806CEDFC
    /* fmr f2, f1 */ // 0x806CEE00
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEE08
    r3 = r30 + 0x10ec; // 0x806CEE0C
    /* lfs f3, 8(r31) */ // 0x806CEE10
    /* fmr f2, f1 */ // 0x806CEE14
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEE1C
    r3 = r30 + 0x10f8; // 0x806CEE20
    /* lfs f3, 8(r31) */ // 0x806CEE24
    /* fmr f2, f1 */ // 0x806CEE28
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEE30
    r3 = r30 + 0x1104; // 0x806CEE34
    /* lfs f3, 8(r31) */ // 0x806CEE38
    /* fmr f2, f1 */ // 0x806CEE3C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEE44
    r3 = r30 + 0x1110; // 0x806CEE48
    /* lfs f3, 8(r31) */ // 0x806CEE4C
    /* fmr f2, f1 */ // 0x806CEE50
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEE58
    r3 = r30 + 0x111c; // 0x806CEE5C
    /* lfs f3, 8(r31) */ // 0x806CEE60
    /* fmr f2, f1 */ // 0x806CEE64
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEE6C
    r3 = r30 + 0x1128; // 0x806CEE70
    /* lfs f3, 8(r31) */ // 0x806CEE74
    /* fmr f2, f1 */ // 0x806CEE78
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEE80
    r3 = r30 + 0x1134; // 0x806CEE84
    /* lfs f3, 8(r31) */ // 0x806CEE88
    /* fmr f2, f1 */ // 0x806CEE8C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEE94
    r3 = r30 + 0x1140; // 0x806CEE98
    /* lfs f3, 8(r31) */ // 0x806CEE9C
    /* fmr f2, f1 */ // 0x806CEEA0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEEA8
    r3 = r30 + 0x114c; // 0x806CEEAC
    /* lfs f3, 8(r31) */ // 0x806CEEB0
    /* fmr f2, f1 */ // 0x806CEEB4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEEBC
    r3 = r30 + 0x1158; // 0x806CEEC0
    /* lfs f3, 8(r31) */ // 0x806CEEC4
    /* fmr f2, f1 */ // 0x806CEEC8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEED0
    r3 = r30 + 0x1164; // 0x806CEED4
    /* lfs f3, 8(r31) */ // 0x806CEED8
    /* fmr f2, f1 */ // 0x806CEEDC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEEE4
    r3 = r30 + 0x1170; // 0x806CEEE8
    /* lfs f3, 8(r31) */ // 0x806CEEEC
    /* fmr f2, f1 */ // 0x806CEEF0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEEF8
    r3 = r30 + 0x117c; // 0x806CEEFC
    /* lfs f3, 8(r31) */ // 0x806CEF00
    /* fmr f2, f1 */ // 0x806CEF04
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEF0C
    r3 = r30 + 0x1188; // 0x806CEF10
    /* lfs f3, 8(r31) */ // 0x806CEF14
    /* fmr f2, f1 */ // 0x806CEF18
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEF20
    r3 = r30 + 0x1194; // 0x806CEF24
    /* lfs f3, 8(r31) */ // 0x806CEF28
    /* fmr f2, f1 */ // 0x806CEF2C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEF34
    r3 = r30 + 0x11a0; // 0x806CEF38
    /* lfs f3, 8(r31) */ // 0x806CEF3C
    /* fmr f2, f1 */ // 0x806CEF40
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEF48
    r3 = r30 + 0x11ac; // 0x806CEF4C
    /* lfs f3, 8(r31) */ // 0x806CEF50
    /* fmr f2, f1 */ // 0x806CEF54
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEF5C
    r3 = r30 + 0x11b8; // 0x806CEF60
    /* lfs f3, 8(r31) */ // 0x806CEF64
    /* fmr f2, f1 */ // 0x806CEF68
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEF70
    r3 = r30 + 0x11c4; // 0x806CEF74
    /* lfs f3, 8(r31) */ // 0x806CEF78
    /* fmr f2, f1 */ // 0x806CEF7C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEF84
    r3 = r30 + 0x11d0; // 0x806CEF88
    /* lfs f3, 8(r31) */ // 0x806CEF8C
    /* fmr f2, f1 */ // 0x806CEF90
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEF98
    r3 = r30 + 0x11dc; // 0x806CEF9C
    /* lfs f3, 8(r31) */ // 0x806CEFA0
    /* fmr f2, f1 */ // 0x806CEFA4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEFAC
    r3 = r30 + 0x11e8; // 0x806CEFB0
    /* lfs f3, 8(r31) */ // 0x806CEFB4
    /* fmr f2, f1 */ // 0x806CEFB8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEFC0
    r3 = r30 + 0x11f4; // 0x806CEFC4
    /* lfs f3, 8(r31) */ // 0x806CEFC8
    /* fmr f2, f1 */ // 0x806CEFCC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEFD4
    r3 = r30 + 0x1200; // 0x806CEFD8
    /* lfs f3, 8(r31) */ // 0x806CEFDC
    /* fmr f2, f1 */ // 0x806CEFE0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEFE8
    r3 = r30 + 0x120c; // 0x806CEFEC
    /* lfs f3, 8(r31) */ // 0x806CEFF0
    /* fmr f2, f1 */ // 0x806CEFF4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CEFFC
    r3 = r30 + 0x1218; // 0x806CF000
    /* lfs f3, 8(r31) */ // 0x806CF004
    /* fmr f2, f1 */ // 0x806CF008
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF010
    r3 = r30 + 0x1224; // 0x806CF014
    /* lfs f3, 8(r31) */ // 0x806CF018
    /* fmr f2, f1 */ // 0x806CF01C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF024
    r3 = r30 + 0x1230; // 0x806CF028
    /* lfs f3, 8(r31) */ // 0x806CF02C
    /* fmr f2, f1 */ // 0x806CF030
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF038
    r3 = r30 + 0x123c; // 0x806CF03C
    /* lfs f3, 8(r31) */ // 0x806CF040
    /* fmr f2, f1 */ // 0x806CF044
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF04C
    r3 = r30 + 0x1248; // 0x806CF050
    /* lfs f3, 8(r31) */ // 0x806CF054
    /* fmr f2, f1 */ // 0x806CF058
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF060
    r3 = r30 + 0x1254; // 0x806CF064
    /* lfs f3, 8(r31) */ // 0x806CF068
    /* fmr f2, f1 */ // 0x806CF06C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF074
    r3 = r30 + 0x1260; // 0x806CF078
    /* lfs f3, 8(r31) */ // 0x806CF07C
    /* fmr f2, f1 */ // 0x806CF080
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF088
    r3 = r30 + 0x126c; // 0x806CF08C
    /* lfs f3, 8(r31) */ // 0x806CF090
    /* fmr f2, f1 */ // 0x806CF094
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF09C
    r3 = r30 + 0x1278; // 0x806CF0A0
    /* lfs f3, 8(r31) */ // 0x806CF0A4
    /* fmr f2, f1 */ // 0x806CF0A8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF0B0
    r3 = r30 + 0x1284; // 0x806CF0B4
    /* lfs f3, 8(r31) */ // 0x806CF0B8
    /* fmr f2, f1 */ // 0x806CF0BC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF0C4
    r3 = r30 + 0x1290; // 0x806CF0C8
    /* lfs f3, 8(r31) */ // 0x806CF0CC
    /* fmr f2, f1 */ // 0x806CF0D0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF0D8
    r3 = r30 + 0x129c; // 0x806CF0DC
    /* lfs f3, 8(r31) */ // 0x806CF0E0
    /* fmr f2, f1 */ // 0x806CF0E4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF0EC
    r3 = r30 + 0x12a8; // 0x806CF0F0
    /* lfs f3, 8(r31) */ // 0x806CF0F4
    /* fmr f2, f1 */ // 0x806CF0F8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF100
    r3 = r30 + 0x12b4; // 0x806CF104
    /* lfs f3, 8(r31) */ // 0x806CF108
    /* fmr f2, f1 */ // 0x806CF10C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF114
    r3 = r30 + 0x12c0; // 0x806CF118
    /* lfs f3, 8(r31) */ // 0x806CF11C
    /* fmr f2, f1 */ // 0x806CF120
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF128
    r3 = r30 + 0x12cc; // 0x806CF12C
    /* lfs f3, 8(r31) */ // 0x806CF130
    /* fmr f2, f1 */ // 0x806CF134
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF13C
    r3 = r30 + 0x12d8; // 0x806CF140
    /* lfs f3, 8(r31) */ // 0x806CF144
    /* fmr f2, f1 */ // 0x806CF148
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF150
    r3 = r30 + 0x12e4; // 0x806CF154
    /* lfs f3, 8(r31) */ // 0x806CF158
    /* fmr f2, f1 */ // 0x806CF15C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF164
    r3 = r30 + 0x12f0; // 0x806CF168
    /* lfs f3, 8(r31) */ // 0x806CF16C
    /* fmr f2, f1 */ // 0x806CF170
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF178
    r3 = r30 + 0x12fc; // 0x806CF17C
    /* lfs f3, 8(r31) */ // 0x806CF180
    /* fmr f2, f1 */ // 0x806CF184
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF18C
    r3 = r30 + 0x1308; // 0x806CF190
    /* lfs f3, 8(r31) */ // 0x806CF194
    /* fmr f2, f1 */ // 0x806CF198
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF1A0
    r3 = r30 + 0x1314; // 0x806CF1A4
    /* lfs f3, 8(r31) */ // 0x806CF1A8
    /* fmr f2, f1 */ // 0x806CF1AC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF1B4
    r3 = r30 + 0x1320; // 0x806CF1B8
    /* lfs f3, 8(r31) */ // 0x806CF1BC
    /* fmr f2, f1 */ // 0x806CF1C0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF1C8
    r3 = r30 + 0x132c; // 0x806CF1CC
    /* lfs f3, 8(r31) */ // 0x806CF1D0
    /* fmr f2, f1 */ // 0x806CF1D4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF1DC
    r3 = r30 + 0x1338; // 0x806CF1E0
    /* lfs f3, 8(r31) */ // 0x806CF1E4
    /* fmr f2, f1 */ // 0x806CF1E8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF1F0
    r3 = r30 + 0x1344; // 0x806CF1F4
    /* lfs f3, 8(r31) */ // 0x806CF1F8
    /* fmr f2, f1 */ // 0x806CF1FC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF204
    r3 = r30 + 0x1350; // 0x806CF208
    /* lfs f3, 8(r31) */ // 0x806CF20C
    /* fmr f2, f1 */ // 0x806CF210
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF218
    r3 = r30 + 0x135c; // 0x806CF21C
    /* lfs f3, 8(r31) */ // 0x806CF220
    /* fmr f2, f1 */ // 0x806CF224
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF22C
    r3 = r30 + 0x1368; // 0x806CF230
    /* lfs f3, 8(r31) */ // 0x806CF234
    /* fmr f2, f1 */ // 0x806CF238
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF240
    r3 = r30 + 0x1374; // 0x806CF244
    /* lfs f3, 8(r31) */ // 0x806CF248
    /* fmr f2, f1 */ // 0x806CF24C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF254
    r3 = r30 + 0x1380; // 0x806CF258
    /* lfs f3, 8(r31) */ // 0x806CF25C
    /* fmr f2, f1 */ // 0x806CF260
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF268
    r3 = r30 + 0x138c; // 0x806CF26C
    /* lfs f3, 8(r31) */ // 0x806CF270
    /* fmr f2, f1 */ // 0x806CF274
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF27C
    r3 = r30 + 0x1398; // 0x806CF280
    /* lfs f3, 8(r31) */ // 0x806CF284
    /* fmr f2, f1 */ // 0x806CF288
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF290
    r3 = r30 + 0x13a4; // 0x806CF294
    /* lfs f3, 8(r31) */ // 0x806CF298
    /* fmr f2, f1 */ // 0x806CF29C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF2A4
    r3 = r30 + 0x13b0; // 0x806CF2A8
    /* lfs f3, 8(r31) */ // 0x806CF2AC
    /* fmr f2, f1 */ // 0x806CF2B0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF2B8
    r3 = r30 + 0x13bc; // 0x806CF2BC
    /* lfs f3, 8(r31) */ // 0x806CF2C0
    /* fmr f2, f1 */ // 0x806CF2C4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF2CC
    r3 = r30 + 0x13c8; // 0x806CF2D0
    /* lfs f3, 8(r31) */ // 0x806CF2D4
    /* fmr f2, f1 */ // 0x806CF2D8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF2E0
    r3 = r30 + 0x13d4; // 0x806CF2E4
    /* lfs f3, 8(r31) */ // 0x806CF2E8
    /* fmr f2, f1 */ // 0x806CF2EC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF2F4
    r3 = r30 + 0x13e0; // 0x806CF2F8
    /* lfs f3, 8(r31) */ // 0x806CF2FC
    /* fmr f2, f1 */ // 0x806CF300
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF308
    r3 = r30 + 0x13ec; // 0x806CF30C
    /* lfs f3, 8(r31) */ // 0x806CF310
    /* fmr f2, f1 */ // 0x806CF314
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF31C
    r3 = r30 + 0x13f8; // 0x806CF320
    /* lfs f3, 8(r31) */ // 0x806CF324
    /* fmr f2, f1 */ // 0x806CF328
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF330
    r3 = r30 + 0x1404; // 0x806CF334
    /* lfs f3, 8(r31) */ // 0x806CF338
    /* fmr f2, f1 */ // 0x806CF33C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF344
    r3 = r30 + 0x1410; // 0x806CF348
    /* lfs f3, 8(r31) */ // 0x806CF34C
    /* fmr f2, f1 */ // 0x806CF350
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF358
    r3 = r30 + 0x141c; // 0x806CF35C
    /* lfs f3, 8(r31) */ // 0x806CF360
    /* fmr f2, f1 */ // 0x806CF364
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF36C
    r3 = r30 + 0x1428; // 0x806CF370
    /* lfs f3, 8(r31) */ // 0x806CF374
    /* fmr f2, f1 */ // 0x806CF378
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF380
    r3 = r30 + 0x1434; // 0x806CF384
    /* lfs f3, 8(r31) */ // 0x806CF388
    /* fmr f2, f1 */ // 0x806CF38C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF394
    r3 = r30 + 0x1440; // 0x806CF398
    /* lfs f3, 8(r31) */ // 0x806CF39C
    /* fmr f2, f1 */ // 0x806CF3A0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF3A8
    r3 = r30 + 0x144c; // 0x806CF3AC
    /* lfs f3, 8(r31) */ // 0x806CF3B0
    /* fmr f2, f1 */ // 0x806CF3B4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF3BC
    r3 = r30 + 0x1458; // 0x806CF3C0
    /* lfs f3, 8(r31) */ // 0x806CF3C4
    /* fmr f2, f1 */ // 0x806CF3C8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF3D0
    r3 = r30 + 0x1464; // 0x806CF3D4
    /* lfs f3, 8(r31) */ // 0x806CF3D8
    /* fmr f2, f1 */ // 0x806CF3DC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF3E4
    r3 = r30 + 0x1470; // 0x806CF3E8
    /* lfs f3, 8(r31) */ // 0x806CF3EC
    /* fmr f2, f1 */ // 0x806CF3F0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF3F8
    r3 = r30 + 0x147c; // 0x806CF3FC
    /* lfs f3, 8(r31) */ // 0x806CF400
    /* fmr f2, f1 */ // 0x806CF404
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF40C
    r3 = r30 + 0x1488; // 0x806CF410
    /* lfs f3, 8(r31) */ // 0x806CF414
    /* fmr f2, f1 */ // 0x806CF418
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF420
    r3 = r30 + 0x1494; // 0x806CF424
    /* lfs f3, 8(r31) */ // 0x806CF428
    /* fmr f2, f1 */ // 0x806CF42C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF434
    r3 = r30 + 0x14a0; // 0x806CF438
    /* lfs f3, 8(r31) */ // 0x806CF43C
    /* fmr f2, f1 */ // 0x806CF440
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF448
    r3 = r30 + 0x14ac; // 0x806CF44C
    /* lfs f3, 8(r31) */ // 0x806CF450
    /* fmr f2, f1 */ // 0x806CF454
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF45C
    r3 = r30 + 0x14b8; // 0x806CF460
    /* lfs f3, 8(r31) */ // 0x806CF464
    /* fmr f2, f1 */ // 0x806CF468
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF470
    r3 = r30 + 0x14c4; // 0x806CF474
    /* lfs f3, 8(r31) */ // 0x806CF478
    /* fmr f2, f1 */ // 0x806CF47C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF484
    r3 = r30 + 0x14d0; // 0x806CF488
    /* lfs f3, 8(r31) */ // 0x806CF48C
    /* fmr f2, f1 */ // 0x806CF490
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF498
    r3 = r30 + 0x14dc; // 0x806CF49C
    /* lfs f3, 8(r31) */ // 0x806CF4A0
    /* fmr f2, f1 */ // 0x806CF4A4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF4AC
    r3 = r30 + 0x14e8; // 0x806CF4B0
    /* lfs f3, 8(r31) */ // 0x806CF4B4
    /* fmr f2, f1 */ // 0x806CF4B8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF4C0
    r3 = r30 + 0x14f4; // 0x806CF4C4
    /* lfs f3, 8(r31) */ // 0x806CF4C8
    /* fmr f2, f1 */ // 0x806CF4CC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF4D4
    r3 = r30 + 0x1500; // 0x806CF4D8
    /* lfs f3, 8(r31) */ // 0x806CF4DC
    /* fmr f2, f1 */ // 0x806CF4E0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF4E8
    r3 = r30 + 0x150c; // 0x806CF4EC
    /* lfs f3, 8(r31) */ // 0x806CF4F0
    /* fmr f2, f1 */ // 0x806CF4F4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF4FC
    r3 = r30 + 0x1518; // 0x806CF500
    /* lfs f3, 8(r31) */ // 0x806CF504
    /* fmr f2, f1 */ // 0x806CF508
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF510
    r3 = r30 + 0x1524; // 0x806CF514
    /* lfs f3, 8(r31) */ // 0x806CF518
    /* fmr f2, f1 */ // 0x806CF51C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF524
    r3 = r30 + 0x1530; // 0x806CF528
    /* lfs f3, 8(r31) */ // 0x806CF52C
    /* fmr f2, f1 */ // 0x806CF530
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF538
    r3 = r30 + 0x153c; // 0x806CF53C
    /* lfs f3, 8(r31) */ // 0x806CF540
    /* fmr f2, f1 */ // 0x806CF544
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF54C
    r3 = r30 + 0x1548; // 0x806CF550
    /* lfs f3, 8(r31) */ // 0x806CF554
    /* fmr f2, f1 */ // 0x806CF558
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF560
    r3 = r30 + 0x1554; // 0x806CF564
    /* lfs f3, 8(r31) */ // 0x806CF568
    /* fmr f2, f1 */ // 0x806CF56C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF574
    r3 = r30 + 0x1560; // 0x806CF578
    /* lfs f3, 8(r31) */ // 0x806CF57C
    /* fmr f2, f1 */ // 0x806CF580
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF588
    r3 = r30 + 0x156c; // 0x806CF58C
    /* lfs f3, 8(r31) */ // 0x806CF590
    /* fmr f2, f1 */ // 0x806CF594
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF59C
    r3 = r30 + 0x1578; // 0x806CF5A0
    /* lfs f3, 8(r31) */ // 0x806CF5A4
    /* fmr f2, f1 */ // 0x806CF5A8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF5B0
    r3 = r30 + 0x1584; // 0x806CF5B4
    /* lfs f3, 8(r31) */ // 0x806CF5B8
    /* fmr f2, f1 */ // 0x806CF5BC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF5C4
    r3 = r30 + 0x1590; // 0x806CF5C8
    /* lfs f3, 8(r31) */ // 0x806CF5CC
    /* fmr f2, f1 */ // 0x806CF5D0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF5D8
    r3 = r30 + 0x159c; // 0x806CF5DC
    /* lfs f3, 8(r31) */ // 0x806CF5E0
    /* fmr f2, f1 */ // 0x806CF5E4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF5EC
    r3 = r30 + 0x15a8; // 0x806CF5F0
    /* lfs f3, 8(r31) */ // 0x806CF5F4
    /* fmr f2, f1 */ // 0x806CF5F8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF600
    r3 = r30 + 0x15b4; // 0x806CF604
    /* lfs f3, 8(r31) */ // 0x806CF608
    /* fmr f2, f1 */ // 0x806CF60C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF614
    r3 = r30 + 0x15c0; // 0x806CF618
    /* lfs f3, 8(r31) */ // 0x806CF61C
    /* fmr f2, f1 */ // 0x806CF620
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF628
    r3 = r30 + 0x15cc; // 0x806CF62C
    /* lfs f3, 8(r31) */ // 0x806CF630
    /* fmr f2, f1 */ // 0x806CF634
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF63C
    r3 = r30 + 0x15d8; // 0x806CF640
    /* lfs f3, 8(r31) */ // 0x806CF644
    /* fmr f2, f1 */ // 0x806CF648
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF650
    r3 = r30 + 0x15e4; // 0x806CF654
    /* lfs f3, 8(r31) */ // 0x806CF658
    /* fmr f2, f1 */ // 0x806CF65C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF664
    r3 = r30 + 0x15f0; // 0x806CF668
    /* lfs f3, 8(r31) */ // 0x806CF66C
    /* fmr f2, f1 */ // 0x806CF670
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF678
    r3 = r30 + 0x15fc; // 0x806CF67C
    /* lfs f3, 8(r31) */ // 0x806CF680
    /* fmr f2, f1 */ // 0x806CF684
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF68C
    r3 = r30 + 0x1608; // 0x806CF690
    /* lfs f3, 8(r31) */ // 0x806CF694
    /* fmr f2, f1 */ // 0x806CF698
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF6A0
    r3 = r30 + 0x1614; // 0x806CF6A4
    /* lfs f3, 8(r31) */ // 0x806CF6A8
    /* fmr f2, f1 */ // 0x806CF6AC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF6B4
    r3 = r30 + 0x1620; // 0x806CF6B8
    /* lfs f3, 8(r31) */ // 0x806CF6BC
    /* fmr f2, f1 */ // 0x806CF6C0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF6C8
    r3 = r30 + 0x162c; // 0x806CF6CC
    /* lfs f3, 8(r31) */ // 0x806CF6D0
    /* fmr f2, f1 */ // 0x806CF6D4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF6DC
    r3 = r30 + 0x1638; // 0x806CF6E0
    /* lfs f3, 8(r31) */ // 0x806CF6E4
    /* fmr f2, f1 */ // 0x806CF6E8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF6F0
    r3 = r30 + 0x1644; // 0x806CF6F4
    /* lfs f3, 8(r31) */ // 0x806CF6F8
    /* fmr f2, f1 */ // 0x806CF6FC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF704
    r3 = r30 + 0x1650; // 0x806CF708
    /* lfs f3, 8(r31) */ // 0x806CF70C
    /* fmr f2, f1 */ // 0x806CF710
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF718
    r3 = r30 + 0x165c; // 0x806CF71C
    /* lfs f3, 8(r31) */ // 0x806CF720
    /* fmr f2, f1 */ // 0x806CF724
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF72C
    r3 = r30 + 0x1668; // 0x806CF730
    /* lfs f3, 8(r31) */ // 0x806CF734
    /* fmr f2, f1 */ // 0x806CF738
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF740
    r3 = r30 + 0x1674; // 0x806CF744
    /* lfs f3, 8(r31) */ // 0x806CF748
    /* fmr f2, f1 */ // 0x806CF74C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF754
    r3 = r30 + 0x1680; // 0x806CF758
    /* lfs f3, 8(r31) */ // 0x806CF75C
    /* fmr f2, f1 */ // 0x806CF760
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF768
    r3 = r30 + 0x168c; // 0x806CF76C
    /* lfs f3, 8(r31) */ // 0x806CF770
    /* fmr f2, f1 */ // 0x806CF774
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF77C
    r3 = r30 + 0x1698; // 0x806CF780
    /* lfs f3, 8(r31) */ // 0x806CF784
    /* fmr f2, f1 */ // 0x806CF788
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF790
    r3 = r30 + 0x16a4; // 0x806CF794
    /* lfs f3, 8(r31) */ // 0x806CF798
    /* fmr f2, f1 */ // 0x806CF79C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF7A4
    r3 = r30 + 0x16b0; // 0x806CF7A8
    /* lfs f3, 8(r31) */ // 0x806CF7AC
    /* fmr f2, f1 */ // 0x806CF7B0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF7B8
    r3 = r30 + 0x16bc; // 0x806CF7BC
    /* lfs f3, 8(r31) */ // 0x806CF7C0
    /* fmr f2, f1 */ // 0x806CF7C4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF7CC
    r3 = r30 + 0x16c8; // 0x806CF7D0
    /* lfs f3, 8(r31) */ // 0x806CF7D4
    /* fmr f2, f1 */ // 0x806CF7D8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF7E0
    r3 = r30 + 0x16d4; // 0x806CF7E4
    /* lfs f3, 8(r31) */ // 0x806CF7E8
    /* fmr f2, f1 */ // 0x806CF7EC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF7F4
    r3 = r30 + 0x16e0; // 0x806CF7F8
    /* lfs f3, 8(r31) */ // 0x806CF7FC
    /* fmr f2, f1 */ // 0x806CF800
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF808
    r3 = r30 + 0x16ec; // 0x806CF80C
    /* lfs f3, 8(r31) */ // 0x806CF810
    /* fmr f2, f1 */ // 0x806CF814
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF81C
    r3 = r30 + 0x16f8; // 0x806CF820
    /* lfs f3, 8(r31) */ // 0x806CF824
    /* fmr f2, f1 */ // 0x806CF828
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF830
    r3 = r30 + 0x1704; // 0x806CF834
    /* lfs f3, 8(r31) */ // 0x806CF838
    /* fmr f2, f1 */ // 0x806CF83C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF844
    r3 = r30 + 0x1710; // 0x806CF848
    /* lfs f3, 8(r31) */ // 0x806CF84C
    /* fmr f2, f1 */ // 0x806CF850
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF858
    r3 = r30 + 0x171c; // 0x806CF85C
    /* lfs f3, 8(r31) */ // 0x806CF860
    /* fmr f2, f1 */ // 0x806CF864
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF86C
    r3 = r30 + 0x1728; // 0x806CF870
    /* lfs f3, 8(r31) */ // 0x806CF874
    /* fmr f2, f1 */ // 0x806CF878
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF880
    r3 = r30 + 0x1734; // 0x806CF884
    /* lfs f3, 8(r31) */ // 0x806CF888
    /* fmr f2, f1 */ // 0x806CF88C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF894
    r3 = r30 + 0x1740; // 0x806CF898
    /* lfs f3, 8(r31) */ // 0x806CF89C
    /* fmr f2, f1 */ // 0x806CF8A0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF8A8
    r3 = r30 + 0x174c; // 0x806CF8AC
    /* lfs f3, 8(r31) */ // 0x806CF8B0
    /* fmr f2, f1 */ // 0x806CF8B4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF8BC
    r3 = r30 + 0x1758; // 0x806CF8C0
    /* lfs f3, 8(r31) */ // 0x806CF8C4
    /* fmr f2, f1 */ // 0x806CF8C8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF8D0
    r3 = r30 + 0x1764; // 0x806CF8D4
    /* lfs f3, 8(r31) */ // 0x806CF8D8
    /* fmr f2, f1 */ // 0x806CF8DC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF8E4
    r3 = r30 + 0x1770; // 0x806CF8E8
    /* lfs f3, 8(r31) */ // 0x806CF8EC
    /* fmr f2, f1 */ // 0x806CF8F0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF8F8
    r3 = r30 + 0x177c; // 0x806CF8FC
    /* lfs f3, 8(r31) */ // 0x806CF900
    /* fmr f2, f1 */ // 0x806CF904
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF90C
    r3 = r30 + 0x1788; // 0x806CF910
    /* lfs f3, 8(r31) */ // 0x806CF914
    /* fmr f2, f1 */ // 0x806CF918
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF920
    r3 = r30 + 0x1794; // 0x806CF924
    /* lfs f3, 8(r31) */ // 0x806CF928
    /* fmr f2, f1 */ // 0x806CF92C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF934
    r3 = r30 + 0x17a0; // 0x806CF938
    /* lfs f3, 8(r31) */ // 0x806CF93C
    /* fmr f2, f1 */ // 0x806CF940
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF948
    r3 = r30 + 0x17ac; // 0x806CF94C
    /* lfs f3, 8(r31) */ // 0x806CF950
    /* fmr f2, f1 */ // 0x806CF954
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF95C
    r3 = r30 + 0x17b8; // 0x806CF960
    /* lfs f3, 8(r31) */ // 0x806CF964
    /* fmr f2, f1 */ // 0x806CF968
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF970
    r3 = r30 + 0x17c4; // 0x806CF974
    /* lfs f3, 8(r31) */ // 0x806CF978
    /* fmr f2, f1 */ // 0x806CF97C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF984
    r3 = r30 + 0x17d0; // 0x806CF988
    /* lfs f3, 8(r31) */ // 0x806CF98C
    /* fmr f2, f1 */ // 0x806CF990
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF998
    r3 = r30 + 0x17dc; // 0x806CF99C
    /* lfs f3, 8(r31) */ // 0x806CF9A0
    /* fmr f2, f1 */ // 0x806CF9A4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF9AC
    r3 = r30 + 0x17e8; // 0x806CF9B0
    /* lfs f3, 8(r31) */ // 0x806CF9B4
    /* fmr f2, f1 */ // 0x806CF9B8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF9C0
    r3 = r30 + 0x17f4; // 0x806CF9C4
    /* lfs f3, 8(r31) */ // 0x806CF9C8
    /* fmr f2, f1 */ // 0x806CF9CC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF9D4
    r3 = r30 + 0x1800; // 0x806CF9D8
    /* lfs f3, 8(r31) */ // 0x806CF9DC
    /* fmr f2, f1 */ // 0x806CF9E0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF9E8
    r3 = r30 + 0x180c; // 0x806CF9EC
    /* lfs f3, 8(r31) */ // 0x806CF9F0
    /* fmr f2, f1 */ // 0x806CF9F4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CF9FC
    r3 = r30 + 0x1818; // 0x806CFA00
    /* lfs f3, 8(r31) */ // 0x806CFA04
    /* fmr f2, f1 */ // 0x806CFA08
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFA10
    r3 = r30 + 0x1824; // 0x806CFA14
    /* lfs f3, 8(r31) */ // 0x806CFA18
    /* fmr f2, f1 */ // 0x806CFA1C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFA24
    r3 = r30 + 0x1830; // 0x806CFA28
    /* lfs f3, 8(r31) */ // 0x806CFA2C
    /* fmr f2, f1 */ // 0x806CFA30
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFA38
    r3 = r30 + 0x183c; // 0x806CFA3C
    /* lfs f3, 8(r31) */ // 0x806CFA40
    /* fmr f2, f1 */ // 0x806CFA44
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFA4C
    r3 = r30 + 0x1848; // 0x806CFA50
    /* lfs f3, 8(r31) */ // 0x806CFA54
    /* fmr f2, f1 */ // 0x806CFA58
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFA60
    r3 = r30 + 0x1854; // 0x806CFA64
    /* lfs f3, 8(r31) */ // 0x806CFA68
    /* fmr f2, f1 */ // 0x806CFA6C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFA74
    r3 = r30 + 0x1860; // 0x806CFA78
    /* lfs f3, 8(r31) */ // 0x806CFA7C
    /* fmr f2, f1 */ // 0x806CFA80
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFA88
    r3 = r30 + 0x186c; // 0x806CFA8C
    /* lfs f3, 8(r31) */ // 0x806CFA90
    /* fmr f2, f1 */ // 0x806CFA94
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFA9C
    r3 = r30 + 0x1878; // 0x806CFAA0
    /* lfs f3, 8(r31) */ // 0x806CFAA4
    /* fmr f2, f1 */ // 0x806CFAA8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFAB0
    r3 = r30 + 0x1884; // 0x806CFAB4
    /* lfs f3, 8(r31) */ // 0x806CFAB8
    /* fmr f2, f1 */ // 0x806CFABC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFAC4
    r3 = r30 + 0x1890; // 0x806CFAC8
    /* lfs f3, 8(r31) */ // 0x806CFACC
    /* fmr f2, f1 */ // 0x806CFAD0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFAD8
    r3 = r30 + 0x189c; // 0x806CFADC
    /* lfs f3, 8(r31) */ // 0x806CFAE0
    /* fmr f2, f1 */ // 0x806CFAE4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFAEC
    r3 = r30 + 0x18a8; // 0x806CFAF0
    /* lfs f3, 8(r31) */ // 0x806CFAF4
    /* fmr f2, f1 */ // 0x806CFAF8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFB00
    r3 = r30 + 0x18b4; // 0x806CFB04
    /* lfs f3, 8(r31) */ // 0x806CFB08
    /* fmr f2, f1 */ // 0x806CFB0C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFB14
    r3 = r30 + 0x18c0; // 0x806CFB18
    /* lfs f3, 8(r31) */ // 0x806CFB1C
    /* fmr f2, f1 */ // 0x806CFB20
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFB28
    r3 = r30 + 0x18cc; // 0x806CFB2C
    /* lfs f3, 8(r31) */ // 0x806CFB30
    /* fmr f2, f1 */ // 0x806CFB34
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFB3C
    r3 = r30 + 0x18d8; // 0x806CFB40
    /* lfs f3, 8(r31) */ // 0x806CFB44
    /* fmr f2, f1 */ // 0x806CFB48
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFB50
    r3 = r30 + 0x18e4; // 0x806CFB54
    /* lfs f3, 8(r31) */ // 0x806CFB58
    /* fmr f2, f1 */ // 0x806CFB5C
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFB64
    r3 = r30 + 0x18f0; // 0x806CFB68
    /* lfs f3, 8(r31) */ // 0x806CFB6C
    /* fmr f2, f1 */ // 0x806CFB70
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFB78
    r3 = r30 + 0x18fc; // 0x806CFB7C
    /* lfs f3, 8(r31) */ // 0x806CFB80
    /* fmr f2, f1 */ // 0x806CFB84
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFB8C
    r3 = r30 + 0x1908; // 0x806CFB90
    /* lfs f3, 8(r31) */ // 0x806CFB94
    /* fmr f2, f1 */ // 0x806CFB98
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFBA0
    r3 = r30 + 0x1914; // 0x806CFBA4
    /* lfs f3, 8(r31) */ // 0x806CFBA8
    /* fmr f2, f1 */ // 0x806CFBAC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFBB4
    r3 = r30 + 0x1920; // 0x806CFBB8
    /* lfs f3, 8(r31) */ // 0x806CFBBC
    /* fmr f2, f1 */ // 0x806CFBC0
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFBC8
    r3 = r30 + 0x192c; // 0x806CFBCC
    /* lfs f3, 8(r31) */ // 0x806CFBD0
    /* fmr f2, f1 */ // 0x806CFBD4
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFBDC
    r3 = r30 + 0x1938; // 0x806CFBE0
    /* lfs f3, 8(r31) */ // 0x806CFBE4
    /* fmr f2, f1 */ // 0x806CFBE8
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* lfs f1, 4(r31) */ // 0x806CFBF0
    r3 = r30 + 0x1944; // 0x806CFBF4
    /* lfs f3, 8(r31) */ // 0x806CFBF8
    /* fmr f2, f1 */ // 0x806CFBFC
    FUN_806CFCE0(r3); // bl 0x806CFCE0
    /* li r0, 0 */ // 0x806CFC04
    *(0x1950 + r30) = r0; // stb @ 0x806CFC08
    *(0x1951 + r30) = r0; // stb @ 0x806CFC0C
    *(0x1952 + r30) = r0; // stb @ 0x806CFC10
    *(0x1953 + r30) = r0; // stb @ 0x806CFC14
    *(0x1954 + r30) = r0; // stb @ 0x806CFC18
    *(0x1955 + r30) = r0; // stb @ 0x806CFC1C
    *(0x1956 + r30) = r0; // stb @ 0x806CFC20
    *(0x1957 + r30) = r0; // stb @ 0x806CFC24
    *(0x1958 + r30) = r0; // stb @ 0x806CFC28
    *(0x1959 + r30) = r0; // stb @ 0x806CFC2C
    *(0x195a + r30) = r0; // stb @ 0x806CFC30
    *(0x195b + r30) = r0; // stb @ 0x806CFC34
    *(0x195c + r30) = r0; // stb @ 0x806CFC38
    *(0x195d + r30) = r0; // stb @ 0x806CFC3C
    *(0x195e + r30) = r0; // stb @ 0x806CFC40
    *(0x195f + r30) = r0; // stb @ 0x806CFC44
    *(0x1960 + r30) = r0; // stb @ 0x806CFC48
    *(0x1961 + r30) = r0; // stb @ 0x806CFC4C
    *(0x1962 + r30) = r0; // stb @ 0x806CFC50
    *(0x1963 + r30) = r0; // stb @ 0x806CFC54
    *(0x1964 + r30) = r0; // stb @ 0x806CFC58
    *(0x1965 + r30) = r0; // stb @ 0x806CFC5C
    *(0x1966 + r30) = r0; // stb @ 0x806CFC60
    *(0x1967 + r30) = r0; // stb @ 0x806CFC64
    *(0x1968 + r30) = r0; // stb @ 0x806CFC68
    *(0x1969 + r30) = r0; // stb @ 0x806CFC6C
    *(0x196a + r30) = r0; // stb @ 0x806CFC70
    *(0x196b + r30) = r0; // stb @ 0x806CFC74
    *(0x196c + r30) = r0; // stb @ 0x806CFC78
    *(0x196d + r30) = r0; // stb @ 0x806CFC7C
    *(0x196e + r30) = r0; // stb @ 0x806CFC80
    *(0x196f + r30) = r0; // stb @ 0x806CFC84
    *(0x1970 + r30) = r0; // stb @ 0x806CFC88
    *(0x1971 + r30) = r0; // stb @ 0x806CFC8C
    *(0x1972 + r30) = r0; // stb @ 0x806CFC90
    *(0x1973 + r30) = r0; // stb @ 0x806CFC94
    *(0x1974 + r30) = r0; // stb @ 0x806CFC98
    *(0x1975 + r30) = r0; // stb @ 0x806CFC9C
    *(0x1976 + r30) = r0; // stb @ 0x806CFCA0
    *(0x1977 + r30) = r0; // stb @ 0x806CFCA4
    *(0x1978 + r30) = r0; // stb @ 0x806CFCA8
    *(0x1979 + r30) = r0; // stb @ 0x806CFCAC
    *(0x197a + r30) = r0; // stb @ 0x806CFCB0
    *(0x197b + r30) = r0; // stb @ 0x806CFCB4
    *(0x197c + r30) = r0; // stb @ 0x806CFCB8
    *(0x197d + r30) = r0; // stb @ 0x806CFCBC
    *(0x197e + r30) = r0; // stb @ 0x806CFCC0
    *(0x197f + r30) = r0; // stb @ 0x806CFCC4
    r31 = *(0xc + r1); // lwz @ 0x806CFCC8
    r30 = *(8 + r1); // lwz @ 0x806CFCCC
    r0 = *(0x14 + r1); // lwz @ 0x806CFCD0
    return;
}