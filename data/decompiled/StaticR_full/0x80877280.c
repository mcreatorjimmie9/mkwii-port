/* Function at 0x80877280, size=16 bytes */
/* Stack frame: 256 bytes */

void FUN_80877280(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x80877288
    /* stfd f31, 0xf0(r1) */ // 0x8087728C
}