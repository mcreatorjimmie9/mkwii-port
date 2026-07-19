/* Function at 0x8082F490, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_8082F490(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8082F498
    /* stfd f31, 0x10(r1) */ // 0x8082F49C
}