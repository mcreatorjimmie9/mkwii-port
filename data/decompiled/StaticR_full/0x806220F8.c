/* Function at 0x806220F8, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_806220F8(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x80622100
    /* stfd f31, 0x20(r1) */ // 0x80622104
}