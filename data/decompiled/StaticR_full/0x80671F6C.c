/* Function at 0x80671F6C, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_80671F6C(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x80671F74
    /* stfd f31, 0x10(r1) */ // 0x80671F78
}