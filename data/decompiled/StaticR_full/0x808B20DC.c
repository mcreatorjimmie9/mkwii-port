/* Function at 0x808B20DC, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_808B20DC(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x808B20E4
    /* stfd f31, 0x30(r1) */ // 0x808B20E8
}