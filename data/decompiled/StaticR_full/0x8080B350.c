/* Function at 0x8080B350, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8080B350(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    r4 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8080B368
    r30 = r3;
    FUN_805A4400(r4, r3); // bl 0x805A4400
    r0 = *(0x78 + r31); // lwz @ 0x8080B378
    r3 = r30;
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x8080B380
    if (!=) goto 0x0x8080b390;
    r4 = *(0x6c + r31); // lbz @ 0x8080B388
    /* b 0x8080b394 */ // 0x8080B38C
    /* li r4, 0xc */ // 0x8080B390
    r12 = *(0 + r3); // lwz @ 0x8080B394
    /* clrlwi r4, r4, 0x18 */ // 0x8080B398
    r12 = *(0xf8 + r12); // lwz @ 0x8080B3A0
    /* mtctr r12 */ // 0x8080B3A4
    /* bctrl  */ // 0x8080B3A8
    /* lfs f1, 0x50(r31) */ // 0x8080B3AC
    /* lfs f0, 0x54(r31) */ // 0x8080B3B0
    /* fmuls f1, f1, f1 */ // 0x8080B3B4
    /* lfs f2, 0x58(r31) */ // 0x8080B3B8
    /* fmuls f0, f0, f0 */ // 0x8080B3BC
    /* fmuls f2, f2, f2 */ // 0x8080B3C0
    /* fadds f0, f1, f0 */ // 0x8080B3C4
    /* fadds f1, f2, f0 */ // 0x8080B3C8
    FUN_805E3430(); // bl 0x805E3430
}