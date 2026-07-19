/* Function at 0x80769FC8, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_80769FC8(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x80769FD0
    /* stfd f31, 0x90(r1) */ // 0x80769FD4
}