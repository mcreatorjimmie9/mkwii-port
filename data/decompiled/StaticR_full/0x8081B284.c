/* Function at 0x8081B284, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8081B284(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8081B28C
    /* stfd f31, 0x30(r1) */ // 0x8081B290
}