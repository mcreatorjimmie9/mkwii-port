/* Function at 0x806DD810, size=16 bytes */
/* Stack frame: 256 bytes */

void FUN_806DD810(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x806DD818
    /* stfd f31, 0xf0(r1) */ // 0x806DD81C
}