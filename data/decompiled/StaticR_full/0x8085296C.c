/* Function at 0x8085296C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8085296C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80852974
    /* stfd f31, 0x30(r1) */ // 0x80852978
}