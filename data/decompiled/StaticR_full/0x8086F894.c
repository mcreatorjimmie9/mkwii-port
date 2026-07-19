/* Function at 0x8086F894, size=16 bytes */
/* Stack frame: 944 bytes */

void FUN_8086F894(void)
{
    /* Stack frame: -944(r1) */
    *(0x3b4 + r1) = r0; // stw @ 0x8086F89C
    /* stfd f31, 0x3a0(r1) */ // 0x8086F8A0
}