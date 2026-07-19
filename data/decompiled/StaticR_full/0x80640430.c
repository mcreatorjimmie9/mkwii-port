/* Function at 0x80640430, size=16 bytes */
/* Stack frame: 512 bytes */

void FUN_80640430(void)
{
    /* Stack frame: -512(r1) */
    *(0x204 + r1) = r0; // stw @ 0x80640438
    /* stfd f31, 0x1f0(r1) */ // 0x8064043C
}