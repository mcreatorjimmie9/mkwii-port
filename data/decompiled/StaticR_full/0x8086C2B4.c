/* Function at 0x8086C2B4, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8086C2B4(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8086C2BC
    /* stfd f31, 0x30(r1) */ // 0x8086C2C0
}