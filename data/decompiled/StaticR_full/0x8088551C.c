/* Function at 0x8088551C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8088551C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80885524
    /* stfd f31, 0x30(r1) */ // 0x80885528
}