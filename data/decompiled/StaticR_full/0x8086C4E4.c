/* Function at 0x8086C4E4, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_8086C4E4(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x8086C4EC
    /* stfd f31, 0x40(r1) */ // 0x8086C4F0
}