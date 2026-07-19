/* Function at 0x8088C94C, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_8088C94C(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x8088C954
    /* stfd f31, 0xe0(r1) */ // 0x8088C958
}