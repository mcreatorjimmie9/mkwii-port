/* Function at 0x80778650, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80778650(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80778658
    /* stfd f31, 0x30(r1) */ // 0x8077865C
}