/* Function at 0x80872F8C, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_80872F8C(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x80872F94
    /* stfd f31, 0x90(r1) */ // 0x80872F98
}