/* Function at 0x806DD954, size=16 bytes */
/* Stack frame: 256 bytes */

void FUN_806DD954(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x806DD95C
    /* stfd f31, 0xf0(r1) */ // 0x806DD960
}