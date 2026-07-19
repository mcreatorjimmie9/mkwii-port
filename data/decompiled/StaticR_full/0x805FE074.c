/* Function at 0x805FE074, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_805FE074(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x805FE07C
    /* stfd f31, 0x30(r1) */ // 0x805FE080
}