/* Function at 0x80601160, size=16 bytes */
/* Stack frame: 224 bytes */

void FUN_80601160(void)
{
    /* Stack frame: -224(r1) */
    *(0xe4 + r1) = r0; // stw @ 0x80601168
    /* stfd f31, 0xd0(r1) */ // 0x8060116C
}