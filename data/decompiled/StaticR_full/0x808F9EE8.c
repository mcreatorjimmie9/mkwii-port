/* Function at 0x808F9EE8, size=16 bytes */
/* Stack frame: 512 bytes */

void FUN_808F9EE8(void)
{
    /* Stack frame: -512(r1) */
    *(0x204 + r1) = r0; // stw @ 0x808F9EF0
    /* stfd f31, 0x1f0(r1) */ // 0x808F9EF4
}