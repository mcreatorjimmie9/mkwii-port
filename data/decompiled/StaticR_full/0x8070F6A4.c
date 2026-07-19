/* Function at 0x8070F6A4, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_8070F6A4(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8070F6AC
    /* stfd f31, 0x10(r1) */ // 0x8070F6B0
}