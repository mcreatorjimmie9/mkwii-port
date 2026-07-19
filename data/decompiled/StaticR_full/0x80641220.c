/* Function at 0x80641220, size=160 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

int FUN_80641220(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lfs f1, 0(r4) */ // 0x80641228
    r8 = r3;
    *(0x24 + r1) = r0; // stw @ 0x80641230
    /* lfs f2, 8(r4) */ // 0x80641234
    r7 = *(0 + r3); // lwz @ 0x80641238
    /* lfs f4, 4(r4) */ // 0x8064123C
    r6 = *(4 + r7); // lwz @ 0x80641240
    r0 = *(8 + r7); // lwz @ 0x80641244
    /* fcmpu cr0, f4, f2 */ // 0x80641248
    *(0xc + r1) = r0; // stw @ 0x8064124C
    *(8 + r1) = r6; // stw @ 0x80641250
    r0 = *(0xc + r7); // lwz @ 0x80641254
    *(0x10 + r1) = r0; // stw @ 0x80641258
    /* lfs f3, 8(r1) */ // 0x8064125C
    /* lfs f0, 0x10(r1) */ // 0x80641260
    /* fmuls f1, f3, f1 */ // 0x80641264
    /* fmuls f0, f0, f2 */ // 0x80641268
    /* stfs f1, 8(r1) */ // 0x8064126C
    /* stfs f0, 0x10(r1) */ // 0x80641270
    if (==) goto 0x0x806412a4;
    /* lis r4, 0 */ // 0x80641278
    /* lfs f0, 0(r4) */ // 0x8064127C
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x80641280
    if (>=) goto 0x0x806412a4;
    /* fsubs f1, f0, f4 */ // 0x80641288
    /* lfs f3, 4(r3) */ // 0x8064128C
    /* lfs f0, 0xc(r1) */ // 0x80641290
    /* fmr f4, f2 */ // 0x80641294
    /* fmuls f1, f1, f3 */ // 0x80641298
    /* fadds f0, f0, f1 */ // 0x8064129C
    /* stfs f0, 0xc(r1) */ // 0x806412A0
    /* lfs f0, 0xc(r1) */ // 0x806412A4
    r3 = r5;
    r5 = r8 + 0x18; // 0x806412B0
    /* fmuls f0, f0, f4 */ // 0x806412B4
    /* stfs f0, 0xc(r1) */ // 0x806412B8
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}