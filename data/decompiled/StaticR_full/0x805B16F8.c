/* Function at 0x805B16F8, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_805B16F8(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x805B1700
    /* stfd f31, 0x30(r1) */ // 0x805B1704
}