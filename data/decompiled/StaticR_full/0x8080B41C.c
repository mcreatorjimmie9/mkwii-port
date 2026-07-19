/* Function at 0x8080B41C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080B41C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0 */ // 0x8080B430
    *(8 + r1) = r30; // stw @ 0x8080B434
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x8080B43C
    r12 = *(0x68 + r12); // lwz @ 0x8080B440
    /* mtctr r12 */ // 0x8080B444
    /* bctrl  */ // 0x8080B448
    /* li r0, 2 */ // 0x8080B44C
    *(0xb0 + r30) = r0; // stw @ 0x8080B450
    r3 = r30;
    r12 = *(0 + r30); // lwz @ 0x8080B458
    r12 = *(0x90 + r12); // lwz @ 0x8080B45C
    /* mtctr r12 */ // 0x8080B460
    /* bctrl  */ // 0x8080B464
    /* lfs f1, 0x50(r31) */ // 0x8080B468
    /* lfs f0, 0x54(r31) */ // 0x8080B46C
    /* fmuls f1, f1, f1 */ // 0x8080B470
    /* lfs f2, 0x58(r31) */ // 0x8080B474
    /* fmuls f0, f0, f0 */ // 0x8080B478
    /* fmuls f2, f2, f2 */ // 0x8080B47C
    /* fadds f0, f1, f0 */ // 0x8080B480
    /* fadds f1, f2, f0 */ // 0x8080B484
    FUN_805E3430(); // bl 0x805E3430
}