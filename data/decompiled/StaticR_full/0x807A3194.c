/* Function at 0x807A3194, size=268 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807A3194(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x807A319C
    *(0x38 + r1) = r30; // stw @ 0x807A31A8
    *(0x34 + r1) = r29; // stw @ 0x807A31AC
    /* lis r29, 0 */ // 0x807A31B0
    r29 = r29 + 0; // 0x807A31B4
    r4 = *(0 + r4); // lwz @ 0x807A31B8
    r0 = *(0x10 + r4); // lbz @ 0x807A31BC
    if (!=) goto 0x0x807a3284;
    /* lfs f5, 0x24(r29) */ // 0x807A31C8
    /* li r30, 5 */ // 0x807A31CC
    /* lfs f1, 4(r29) */ // 0x807A31D0
    /* li r31, 0 */ // 0x807A31D4
    /* lfs f4, 0x28(r29) */ // 0x807A31D8
    /* lfs f3, 0x2c(r29) */ // 0x807A31DC
    /* lfs f2, 0x30(r29) */ // 0x807A31E0
    /* lfs f0, 0(r29) */ // 0x807A31E4
    /* stfs f5, 8(r1) */ // 0x807A31E8
    /* stfs f4, 0xc(r1) */ // 0x807A31EC
    /* stfs f3, 0x10(r1) */ // 0x807A31F0
    /* stfs f2, 0x14(r1) */ // 0x807A31F4
    /* stfs f1, 0x18(r1) */ // 0x807A31F8
    *(0x1c + r1) = r30; // stw @ 0x807A31FC
    /* stfs f5, 0x20(r1) */ // 0x807A3200
    *(0x24 + r1) = r31; // stw @ 0x807A3204
    /* stfs f0, 0x28(r1) */ // 0x807A3208
    /* stfs f1, 0x2c(r1) */ // 0x807A320C
    r3 = *(0x10 + r3); // lwz @ 0x807A3210
    FUN_80694E54(); // bl 0x80694E54
    r0 = r3 + -1; // 0x807A3218
    if (<=) goto 0x0x807a326c;
    if (!=) goto 0x0x807a3274;
    /* lfs f2, 0x20(r29) */ // 0x807A322C
    /* lfs f4, 0x34(r29) */ // 0x807A3230
    /* lfs f3, 0x38(r29) */ // 0x807A3234
    /* lfs f1, 0(r29) */ // 0x807A3238
    /* lfs f0, 4(r29) */ // 0x807A323C
    *(0x1c + r1) = r30; // stw @ 0x807A3240
    /* stfs f4, 0x20(r1) */ // 0x807A3244
    /* stfs f4, 8(r1) */ // 0x807A3248
    *(0x24 + r1) = r31; // stw @ 0x807A324C
    /* stfs f3, 0xc(r1) */ // 0x807A3250
    /* stfs f2, 0x10(r1) */ // 0x807A3254
    /* stfs f2, 0x14(r1) */ // 0x807A3258
    /* stfs f1, 0x28(r1) */ // 0x807A325C
    /* stfs f2, 0x2c(r1) */ // 0x807A3260
    /* stfs f0, 0x18(r1) */ // 0x807A3264
    /* b 0x807a3274 */ // 0x807A3268
    /* lfs f0, 0x3c(r29) */ // 0x807A326C
    /* stfs f0, 0x18(r1) */ // 0x807A3270
    /* lis r3, 0 */ // 0x807A3274
    r3 = *(0 + r3); // lwz @ 0x807A327C
    FUN_8078DA3C(r3, r4); // bl 0x8078DA3C
    r0 = *(0x44 + r1); // lwz @ 0x807A3284
    r31 = *(0x3c + r1); // lwz @ 0x807A3288
    r30 = *(0x38 + r1); // lwz @ 0x807A328C
    r29 = *(0x34 + r1); // lwz @ 0x807A3290
    return;
}