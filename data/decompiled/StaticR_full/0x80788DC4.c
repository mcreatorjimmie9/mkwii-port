/* Function at 0x80788DC4, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80788DC4(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80788DCC
    /* stfd f31, 0x30(r1) */ // 0x80788DD0
}