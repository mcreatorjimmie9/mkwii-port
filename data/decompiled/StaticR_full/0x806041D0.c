/* Function at 0x806041D0, size=312 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806041D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806041E0
    r31 = r31 + 0; // 0x806041E4
    *(8 + r1) = r30; // stw @ 0x806041E8
    r30 = r3;
    /* lfs f1, 0x28(r3) */ // 0x806041F0
    /* lfs f0, 0x2c(r3) */ // 0x806041F4
    r4 = *(0x20 + r3); // lwz @ 0x806041F8
    /* fmuls f0, f1, f0 */ // 0x806041FC
    /* stfs f0, 0x28(r3) */ // 0x80604200
    /* lfs f1, 4(r4) */ // 0x80604204
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80604208
    if (<=) goto 0x0x80604214;
    /* stfs f1, 0x28(r3) */ // 0x80604210
    /* lfs f1, 0x2c(r3) */ // 0x80604214
    /* lfs f0, 0x30(r3) */ // 0x80604218
    r4 = *(0x20 + r3); // lwz @ 0x8060421C
    /* fsubs f0, f1, f0 */ // 0x80604220
    /* stfs f0, 0x2c(r3) */ // 0x80604224
    /* lfs f1, 8(r4) */ // 0x80604228
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060422C
    if (<=) goto 0x0x80604238;
    /* stfs f1, 0x2c(r3) */ // 0x80604234
    /* lfs f1, 0x24(r3) */ // 0x80604238
    /* lfs f0, 0x28(r3) */ // 0x8060423C
    /* lfs f2, 0x34(r3) */ // 0x80604240
    /* fadds f0, f1, f0 */ // 0x80604244
    /* stfs f0, 0x24(r3) */ // 0x80604248
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8060424C
    if (>=) goto 0x0x80604258;
    /* stfs f2, 0x24(r3) */ // 0x80604254
    r0 = *(0x10 + r3); // lwz @ 0x80604258
    if (==) goto 0x0x8060426c;
    if (!=) goto 0x0x80604298;
    /* lfs f2, 0x94(r31) */ // 0x8060426C
    /* lfs f1, 0x24(r3) */ // 0x80604270
    /* lfs f0, 0x1c(r3) */ // 0x80604274
    r3 = r3 + 0x3c; // 0x80604278
    /* fmuls f1, f2, f1 */ // 0x8060427C
    /* lfs f2, 0(r31) */ // 0x80604280
    /* fmr f3, f2 */ // 0x80604284
    /* fneg f1, f1 */ // 0x80604288
    /* fmuls f1, f1, f0 */ // 0x8060428C
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80604310 */ // 0x80604294
    if (==) goto 0x0x806042a8;
    if (!=) goto 0x0x806042d0;
    /* lfs f3, 0x94(r31) */ // 0x806042A8
    /* lfs f2, 0x24(r3) */ // 0x806042AC
    /* lfs f0, 0x1c(r3) */ // 0x806042B0
    r3 = r3 + 0x3c; // 0x806042B4
    /* fmuls f2, f3, f2 */ // 0x806042B8
    /* lfs f1, 0(r31) */ // 0x806042BC
    /* fmr f3, f1 */ // 0x806042C0
    /* fmuls f2, f2, f0 */ // 0x806042C4
    FUN_805E3430(r3); // bl 0x805E3430
    /* b 0x80604310 */ // 0x806042CC
    if (!=) goto 0x0x80604310;
    /* lfs f1, 0x24(r3) */ // 0x806042D8
    /* lfs f0, 0xa4(r31) */ // 0x806042DC
    /* fmuls f1, f0, f1 */ // 0x806042E0
    FUN_805E3430(); // bl 0x805E3430
    /* lfs f0, 0x1c(r30) */ // 0x806042E8
    r3 = r30 + 0x3c; // 0x806042EC
    /* lfs f4, 0xa8(r31) */ // 0x806042F0
    /* fmuls f3, f1, f0 */ // 0x806042F4
    /* lfs f2, 0xac(r31) */ // 0x806042F8
    /* lfs f0, 0xb0(r31) */ // 0x806042FC
    /* fmuls f1, f4, f1 */ // 0x80604300
    /* fmuls f2, f2, f3 */ // 0x80604304
}