/* Function at 0x80851364, size=200 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80851364(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x80851378
    r29 = r3;
    r4 = *(0 + r3); // lwz @ 0x80851380
    r4 = *(0 + r4); // lwz @ 0x80851384
    r0 = *(8 + r4); // lwz @ 0x80851388
    if (!=) goto 0x0x8085139c;
    FUN_8061DAE0(); // bl 0x8061DAE0
    /* b 0x808513a0 */ // 0x80851398
    FUN_8061DAF4(); // bl 0x8061DAF4
    /* lis r4, 0 */ // 0x808513A0
    /* lfs f0, 0xbc(r29) */ // 0x808513A4
    /* lfs f1, 0(r4) */ // 0x808513A8
    /* fcmpu cr0, f1, f0 */ // 0x808513AC
    if (!=) goto 0x0x808513dc;
    /* lfs f0, 0xc0(r29) */ // 0x808513B4
    /* fcmpu cr0, f1, f0 */ // 0x808513B8
    if (!=) goto 0x0x808513dc;
    /* lfs f0, 0xc4(r29) */ // 0x808513C0
    /* fcmpu cr0, f1, f0 */ // 0x808513C4
    if (!=) goto 0x0x808513dc;
    r4 = r29 + 0x78; // 0x808513CC
    r5 = r29 + 0x114; // 0x808513D0
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* b 0x80851448 */ // 0x808513D8
    /* lfs f1, 0x84(r29) */ // 0x808513DC
    r4 = r29 + 0x78; // 0x808513E0
    /* lfs f0, 0xbc(r29) */ // 0x808513E4
    r5 = r29 + 0x114; // 0x808513E8
    /* lfs f3, 0x94(r29) */ // 0x808513EC
    /* fmuls f4, f1, f0 */ // 0x808513F0
    /* lfs f2, 0xc0(r29) */ // 0x808513F4
    /* lfs f5, 0x84(r29) */ // 0x808513F8
    /* lfs f6, 0x94(r29) */ // 0x808513FC
    /* fmuls f2, f3, f2 */ // 0x80851400
    /* lfs f7, 0xa4(r29) */ // 0x80851404
    /* lfs f1, 0xa4(r29) */ // 0x80851408
    /* lfs f0, 0xc4(r29) */ // 0x8085140C
    /* stfs f5, 8(r1) */ // 0x80851410
    /* fmuls f0, f1, f0 */ // 0x80851414
    /* stfs f6, 0xc(r1) */ // 0x80851418
    /* stfs f7, 0x10(r1) */ // 0x8085141C
    /* stfs f4, 0x84(r29) */ // 0x80851420
    /* stfs f2, 0x94(r29) */ // 0x80851424
    /* stfs f0, 0xa4(r29) */ // 0x80851428
}