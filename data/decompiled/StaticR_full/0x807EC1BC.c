/* Function at 0x807EC1BC, size=100 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807EC1BC(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807EC1CC
    r31 = r31 + 0; // 0x807EC1D0
    *(0x38 + r1) = r30; // stw @ 0x807EC1D4
    r30 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807EC1DC
    if (!=) goto 0x0x807ec2cc;
    /* lfs f2, 0xb4(r3) */ // 0x807EC1E8
    /* lfs f1, 0x18(r31) */ // 0x807EC1EC
    /* lfs f0, 0xb8(r3) */ // 0x807EC1F0
    /* fmuls f1, f2, f1 */ // 0x807EC1F4
    /* fadds f0, f0, f1 */ // 0x807EC1F8
    /* stfs f0, 0xb8(r3) */ // 0x807EC1FC
    r3 = r3 + 0xf8; // 0x807EC200
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f1, 0xb8(r30) */ // 0x807EC208
    r3 = r30 + 0xf8; // 0x807EC20C
    /* lfs f0, 0x1c(r31) */ // 0x807EC210
    r4 = r30 + 0xbc; // 0x807EC214
    /* fmuls f1, f1, f0 */ // 0x807EC218
    FUN_805E3430(r3, r4); // bl 0x805E3430
}