/* Function at 0x8076E3B8, size=16 bytes */
/* Stack frame: 224 bytes */

void FUN_8076E3B8(void)
{
    /* Stack frame: -224(r1) */
    *(0xe4 + r1) = r0; // stw @ 0x8076E3C0
    /* stfd f31, 0xd0(r1) */ // 0x8076E3C4
}