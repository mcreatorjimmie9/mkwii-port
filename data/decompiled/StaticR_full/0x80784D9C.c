/* Function at 0x80784D9C, size=16 bytes */
/* Stack frame: 224 bytes */

void FUN_80784D9C(void)
{
    /* Stack frame: -224(r1) */
    *(0xe4 + r1) = r0; // stw @ 0x80784DA4
    /* stfd f31, 0xd0(r1) */ // 0x80784DA8
}