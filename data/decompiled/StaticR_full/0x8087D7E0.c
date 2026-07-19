/* Function at 0x8087D7E0, size=16 bytes */
/* Stack frame: 368 bytes */

void FUN_8087D7E0(void)
{
    /* Stack frame: -368(r1) */
    *(0x174 + r1) = r0; // stw @ 0x8087D7E8
    /* stfd f31, 0x160(r1) */ // 0x8087D7EC
}