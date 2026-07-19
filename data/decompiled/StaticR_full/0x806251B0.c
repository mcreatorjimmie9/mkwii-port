/* Function at 0x806251B0, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806251B0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806251C0
    r30 = r3;
    FUN_8061DC28(); // bl 0x8061DC28
    FUN_8062A6BC(); // bl 0x8062A6BC
    r3 = r30;
    FUN_8061E0C8(r3); // bl 0x8061E0C8
    FUN_80602324(r3); // bl 0x80602324
    r3 = r30;
    FUN_8061DC28(r3, r3); // bl 0x8061DC28
    r31 = r3;
    r3 = r30;
    FUN_8061DF18(r3, r3); // bl 0x8061DF18
    /* lfs f0, 0x9c(r31) */ // 0x806251F0
    /* stfs f0, 0x1c(r3) */ // 0x806251F4
    /* lfs f0, 0xa0(r31) */ // 0x806251F8
    /* stfs f0, 0x20(r3) */ // 0x806251FC
    /* lfs f0, 0xa4(r31) */ // 0x80625200
    /* stfs f0, 0x24(r3) */ // 0x80625204
    /* lfs f0, 0xa8(r31) */ // 0x80625208
    /* stfs f0, 0x28(r3) */ // 0x8062520C
    /* lfs f0, 0xac(r31) */ // 0x80625210
    /* stfs f0, 0x2c(r3) */ // 0x80625214
    /* lfs f0, 0xb0(r31) */ // 0x80625218
    /* stfs f0, 0x30(r3) */ // 0x8062521C
    /* lfs f0, 0xb4(r31) */ // 0x80625220
    /* stfs f0, 0x34(r3) */ // 0x80625224
    /* lfs f0, 0xb8(r31) */ // 0x80625228
    /* stfs f0, 0x38(r3) */ // 0x8062522C
    /* lfs f0, 0xbc(r31) */ // 0x80625230
    /* stfs f0, 0x3c(r3) */ // 0x80625234
    /* lfs f0, 0xc0(r31) */ // 0x80625238
    /* stfs f0, 0x40(r3) */ // 0x8062523C
    /* lfs f0, 0xc4(r31) */ // 0x80625240
    /* stfs f0, 0x44(r3) */ // 0x80625244
    /* lfs f0, 0xc8(r31) */ // 0x80625248
    /* stfs f0, 0x48(r3) */ // 0x8062524C
    r31 = *(0xc + r1); // lwz @ 0x80625250
    r30 = *(8 + r1); // lwz @ 0x80625254
    r0 = *(0x14 + r1); // lwz @ 0x80625258
    return;
}