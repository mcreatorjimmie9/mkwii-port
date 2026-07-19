/* Function at 0x8081DCFC, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8081DCFC(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8081DD04
    /* stfd f31, 0x30(r1) */ // 0x8081DD08
}