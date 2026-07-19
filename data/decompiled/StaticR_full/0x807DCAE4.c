/* Function at 0x807DCAE4, size=104 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DCAE4(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807DCAF4
    r31 = r31 + 0; // 0x807DCAF8
    *(0x68 + r1) = r30; // stw @ 0x807DCAFC
    r30 = r3;
    /* lfs f0, 0x27c(r31) */ // 0x807DCB04
    /* lfs f2, 0xd0(r3) */ // 0x807DCB08
    /* lfs f1, 0xfc(r3) */ // 0x807DCB0C
    /* fsubs f1, f2, f1 */ // 0x807DCB10
    /* stfs f1, 0xd0(r3) */ // 0x807DCB14
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807DCB18
    if (>=) goto 0x0x807dcb2c;
    /* lfs f0, 0x280(r31) */ // 0x807DCB20
    /* fadds f0, f1, f0 */ // 0x807DCB24
    /* stfs f0, 0xd0(r3) */ // 0x807DCB28
    /* lfs f1, 0xd0(r3) */ // 0x807DCB2C
    /* lis r4, 0 */ // 0x807DCB30
    /* lfs f0, 0x284(r31) */ // 0x807DCB34
    /* fneg f1, f1 */ // 0x807DCB3C
    r4 = r4 + 0; // 0x807DCB40
    /* fmuls f1, f1, f0 */ // 0x807DCB44
    FUN_805E3430(r3, r4); // bl 0x805E3430
}