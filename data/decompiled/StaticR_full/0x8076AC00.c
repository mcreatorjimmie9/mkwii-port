/* Function at 0x8076AC00, size=16 bytes */
/* Stack frame: 272 bytes */

void FUN_8076AC00(void)
{
    /* Stack frame: -272(r1) */
    *(0x114 + r1) = r0; // stw @ 0x8076AC08
    /* stfd f31, 0x100(r1) */ // 0x8076AC0C
}