/* Function at 0x8078A0EC, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8078A0EC(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8078A0F4
    /* stfd f31, 0x30(r1) */ // 0x8078A0F8
}