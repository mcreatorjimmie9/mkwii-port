/* Function at 0x80788FA0, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_80788FA0(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x80788FA8
    /* stfd f31, 0x10(r1) */ // 0x80788FAC
}