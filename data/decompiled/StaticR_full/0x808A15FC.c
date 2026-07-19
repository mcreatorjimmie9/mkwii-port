/* Function at 0x808A15FC, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_808A15FC(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x808A1604
    /* stfd f31, 0x30(r1) */ // 0x808A1608
}