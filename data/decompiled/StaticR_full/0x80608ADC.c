/* Function at 0x80608ADC, size=16 bytes */
/* Stack frame: 208 bytes */

void FUN_80608ADC(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x80608AE4
    /* stfd f31, 0xc0(r1) */ // 0x80608AE8
}