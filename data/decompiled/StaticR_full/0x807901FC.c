/* Function at 0x807901FC, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_807901FC(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80790204
    /* stfd f31, 0x30(r1) */ // 0x80790208
}