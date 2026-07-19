/* Function at 0x8081CC9C, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_8081CC9C(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x8081CCA4
    /* stfd f31, 0x20(r1) */ // 0x8081CCA8
}