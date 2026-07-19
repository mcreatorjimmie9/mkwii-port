/* Function at 0x80600EAC, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_80600EAC(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x80600EB4
    /* stfd f31, 0x20(r1) */ // 0x80600EB8
}