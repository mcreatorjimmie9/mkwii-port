/* Function at 0x8062DD78, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8062DD78(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8062DD80
    *(0x24 + r1) = r0; // stw @ 0x8062DD84
    r5 = r5 + 0; // 0x8062DD88
    /* lfs f0, 0(r5) */ // 0x8062DD8C
    *(0x1c + r1) = r31; // stw @ 0x8062DD90
    /* lfs f1, 0x120(r3) */ // 0x8062DD94
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8062DD98
    if (<=) goto 0x0x8062dda8;
    /* lfs f3, 0xf0(r5) */ // 0x8062DDA0
    /* b 0x8062ddac */ // 0x8062DDA4
    /* lfs f3, 0x120(r5) */ // 0x8062DDA8
    r4 = *(0x188 + r3); // lwz @ 0x8062DDAC
    /* lfs f2, 0x120(r3) */ // 0x8062DDB0
    /* lfs f0, 0(r4) */ // 0x8062DDB4
    /* lfs f1, 0x11c(r3) */ // 0x8062DDB8
    /* fadds f0, f2, f0 */ // 0x8062DDBC
    r31 = *(0x8c + r3); // lwz @ 0x8062DDC0
    /* fsubs f0, f0, f1 */ // 0x8062DDC4
    /* fmuls f0, f3, f0 */ // 0x8062DDC8
    /* fadds f2, f1, f0 */ // 0x8062DDCC
    /* stfs f2, 0x11c(r3) */ // 0x8062DDD0
    /* lfs f0, 0x10(r31) */ // 0x8062DDD4
    /* fcmpu cr0, f0, f2 */ // 0x8062DDD8
    if (==) goto 0x0x8062de10;
    /* lfs f1, 0x10c(r5) */ // 0x8062DDE0
    /* lfs f0, 0x110(r5) */ // 0x8062DDE8
    /* fmuls f1, f2, f1 */ // 0x8062DDF0
    /* stfs f2, 0x10(r31) */ // 0x8062DDF4
    /* fmuls f1, f0, f1 */ // 0x8062DDF8
    FUN_805E3430(r4); // bl 0x805E3430
    /* lfs f1, 8(r1) */ // 0x8062DE00
    /* lfs f0, 0xc(r1) */ // 0x8062DE04
    /* fdivs f0, f1, f0 */ // 0x8062DE08
    /* stfs f0, 0x14(r31) */ // 0x8062DE0C
    r0 = *(0x24 + r1); // lwz @ 0x8062DE10
}