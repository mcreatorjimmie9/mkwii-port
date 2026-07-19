/* Function at 0x80855F78, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_80855F78(int r3, int r4)
{
    /* fmuls f0, f1, f1 */ // 0x80855F78
    r4 = *(0xb8 + r3); // lwz @ 0x80855F7C
    /* stfs f0, 8(r4) */ // 0x80855F80
    /* stfs f1, 0xb0(r3) */ // 0x80855F84
    return;
}