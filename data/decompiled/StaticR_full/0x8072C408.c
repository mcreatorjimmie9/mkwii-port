/* Function at 0x8072C408, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8072C408(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8072C410
    /* stfd f31, 0x30(r1) */ // 0x8072C414
}