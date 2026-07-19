/* Function at 0x805F520C, size=292 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F520C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805F5214
    /* lis r4, 0 */ // 0x805F5218
    *(0x64 + r1) = r0; // stw @ 0x805F521C
    r5 = r5 + 0; // 0x805F5220
    /* lfd f0, 0x50(r5) */ // 0x805F5224
    *(0x5c + r1) = r31; // stw @ 0x805F5228
    /* lfs f6, 0x48(r5) */ // 0x805F522C
    *(0x58 + r1) = r30; // stw @ 0x805F5230
    r30 = r5 + 8; // 0x805F5234
    /* lfs f3, 0x4c(r5) */ // 0x805F5238
    *(0x54 + r1) = r29; // stw @ 0x805F523C
    /* lfs f1, 0x58(r5) */ // 0x805F5240
    *(0x50 + r1) = r28; // stw @ 0x805F5244
    /* slwi r28, r3, 3 */ // 0x805F5248
    /* lfs f7, 0(r4) */ // 0x805F5250
    r29 = *(8 + r5); // lwz @ 0x805F5258
    /* fadd f2, f0, f7 */ // 0x805F525C
    /* lfs f0, 0(r5) */ // 0x805F5260
    *(8 + r1) = r29; // stw @ 0x805F5264
    /* fsubs f4, f3, f7 */ // 0x805F5268
    r31 = *(0xc + r30); // lwz @ 0x805F526C
    /* fadds f5, f6, f7 */ // 0x805F5270
    *(0x14 + r1) = r31; // stw @ 0x805F5274
    /* frsp f3, f2 */ // 0x805F5278
    r12 = *(0x14 + r30); // lwz @ 0x805F527C
    /* fsubs f2, f6, f7 */ // 0x805F5280
    *(0x1c + r1) = r12; // stw @ 0x805F5284
    /* fadds f1, f1, f7 */ // 0x805F5288
    r11 = *(0x18 + r30); // lwz @ 0x805F528C
    *(0x20 + r1) = r11; // stw @ 0x805F5290
    /* fsubs f0, f0, f7 */ // 0x805F5294
    r9 = *(0x1c + r30); // lwz @ 0x805F5298
    *(0x24 + r1) = r9; // stw @ 0x805F529C
    r10 = *(0x24 + r30); // lwz @ 0x805F52A0
    r8 = *(0x2c + r30); // lwz @ 0x805F52A4
    r7 = *(0x30 + r30); // lwz @ 0x805F52A8
    r6 = *(0x34 + r30); // lwz @ 0x805F52AC
    r5 = *(0x38 + r30); // lwz @ 0x805F52B0
    r0 = *(0x3c + r30); // lwz @ 0x805F52B4
    *(0x2c + r1) = r10; // stw @ 0x805F52B8
    r29 = *(4 + r30); // lwz @ 0x805F52BC
    *(0x34 + r1) = r8; // stw @ 0x805F52C0
    r31 = *(8 + r30); // lwz @ 0x805F52C4
    *(0x38 + r1) = r7; // stw @ 0x805F52C8
    r12 = *(0x10 + r30); // lwz @ 0x805F52CC
    *(0x3c + r1) = r6; // stw @ 0x805F52D0
    r11 = *(0x20 + r30); // lwz @ 0x805F52D4
    *(0x40 + r1) = r5; // stw @ 0x805F52D8
    r9 = *(0x28 + r30); // lwz @ 0x805F52DC
    *(0x44 + r1) = r0; // stw @ 0x805F52E0
    *(0xc + r1) = r29; // stw @ 0x805F52E4
    *(0x10 + r1) = r31; // stw @ 0x805F52E8
    *(0x18 + r1) = r12; // stw @ 0x805F52EC
    *(0x28 + r1) = r11; // stw @ 0x805F52F0
    *(0x30 + r1) = r9; // stw @ 0x805F52F4
    /* stfs f7, 8(r1) */ // 0x805F52F8
    /* stfs f7, 0x14(r1) */ // 0x805F52FC
    /* stfs f5, 0x1c(r1) */ // 0x805F5300
    /* stfs f4, 0x20(r1) */ // 0x805F5304
    /* stfs f3, 0x24(r1) */ // 0x805F5308
    /* stfs f7, 0x2c(r1) */ // 0x805F530C
    /* stfs f5, 0x34(r1) */ // 0x805F5310
    /* stfs f2, 0x38(r1) */ // 0x805F5314
    /* stfs f1, 0x3c(r1) */ // 0x805F5318
    /* stfs f0, 0x40(r1) */ // 0x805F531C
    /* stfs f7, 0x44(r1) */ // 0x805F5320
    /* lfsx f1, r4, r28 */ // 0x805F5324
    /* lfsx f2, r3, r28 */ // 0x805F5328
    FUN_805E3430(); // bl 0x805E3430
}