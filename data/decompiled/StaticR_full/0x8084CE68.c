/* Function at 0x8084CE68, size=16 bytes */
/* Stack frame: 256 bytes */

void FUN_8084CE68(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x8084CE70
    /* stfd f31, 0xf0(r1) */ // 0x8084CE74
}