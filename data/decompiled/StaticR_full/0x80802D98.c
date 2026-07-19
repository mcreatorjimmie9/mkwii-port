/* Function at 0x80802D98, size=84 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80802D98(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80802DA0
    /* lis r4, 0 */ // 0x80802DA4
    *(0x44 + r1) = r0; // stw @ 0x80802DA8
    r5 = r5 + 0; // 0x80802DAC
    /* lfs f0, 0x34(r5) */ // 0x80802DB0
    *(0x3c + r1) = r31; // stw @ 0x80802DB4
    r31 = r3;
    /* lfs f2, 0xf0(r3) */ // 0x80802DBC
    /* lfs f1, 0(r4) */ // 0x80802DC0
    /* fadds f1, f2, f1 */ // 0x80802DC4
    /* stfs f1, 0xf0(r3) */ // 0x80802DC8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80802DCC
    if (<=) goto 0x0x80802ddc;
    /* lfs f0, 0(r5) */ // 0x80802DD4
    /* stfs f0, 0xf0(r3) */ // 0x80802DD8
    /* lfs f1, 0xf0(r3) */ // 0x80802DDC
    /* lfs f0, 0x38(r5) */ // 0x80802DE0
    /* fmuls f1, f1, f0 */ // 0x80802DE4
    FUN_805E3430(); // bl 0x805E3430
}