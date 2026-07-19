/* Function at 0x80625304, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80625304(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8062530C
    /* stfd f31, 0x40(r1) */ // 0x80625310
}