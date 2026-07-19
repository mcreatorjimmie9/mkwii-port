/* Function at 0x807EC400, size=56 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EC400(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807EC408
    *(0x44 + r1) = r0; // stw @ 0x807EC40C
    /* lfs f1, 0(r4) */ // 0x807EC410
    *(0x3c + r1) = r31; // stw @ 0x807EC414
    r31 = r3;
    /* lfs f2, 0xb4(r3) */ // 0x807EC41C
    /* lfs f0, 0xb8(r3) */ // 0x807EC420
    /* fmuls f1, f2, f1 */ // 0x807EC424
    /* fadds f0, f0, f1 */ // 0x807EC428
    /* stfs f0, 0xb8(r3) */ // 0x807EC42C
    r3 = r3 + 0xf8; // 0x807EC430
    FUN_805E3430(r3); // bl 0x805E3430
}