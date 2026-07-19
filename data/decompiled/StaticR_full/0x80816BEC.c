/* Function at 0x80816BEC, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_80816BEC(int r3)
{
    /* fadds f0, f1, f2 */ // 0x80816BEC
    r0 = *(0xc + r3); // lwz @ 0x80816BF0
    /* stfs f1, 4(r3) */ // 0x80816BF4
    r0 = r0 | 0x800; // 0x80816BF8
    /* stfs f0, 8(r3) */ // 0x80816BFC
    *(0xc + r3) = r0; // stw @ 0x80816C00
    return;
}