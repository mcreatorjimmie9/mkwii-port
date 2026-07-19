/* Function at 0x80802B00, size=84 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80802B00(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80802B10
    r31 = r31 + 0; // 0x80802B14
    *(0x38 + r1) = r30; // stw @ 0x80802B18
    r30 = r3;
    /* lfs f0, 0x34(r31) */ // 0x80802B20
    /* lfs f2, 0xf4(r3) */ // 0x80802B24
    /* lfs f1, 0xf8(r3) */ // 0x80802B28
    /* fadds f1, f2, f1 */ // 0x80802B2C
    /* stfs f1, 0xf4(r3) */ // 0x80802B30
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80802B34
    if (<=) goto 0x0x80802b44;
    /* lfs f0, 0(r31) */ // 0x80802B3C
    /* stfs f0, 0xf4(r3) */ // 0x80802B40
    /* lfs f1, 0xf4(r3) */ // 0x80802B44
    /* lfs f0, 0x38(r31) */ // 0x80802B48
    /* fmuls f1, f1, f0 */ // 0x80802B4C
    FUN_805E3430(); // bl 0x805E3430
}