/* Function at 0x80640AA0, size=16 bytes */
/* Stack frame: 512 bytes */

void FUN_80640AA0(void)
{
    /* Stack frame: -512(r1) */
    *(0x204 + r1) = r0; // stw @ 0x80640AA8
    /* stfd f31, 0x1f0(r1) */ // 0x80640AAC
}