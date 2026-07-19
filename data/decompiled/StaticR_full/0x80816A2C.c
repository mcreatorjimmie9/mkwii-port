/* Function at 0x80816A2C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80816A2C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80816A34
    /* stfd f31, 0x30(r1) */ // 0x80816A38
}