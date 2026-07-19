/* Function at 0x80805AA4, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_80805AA4(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x80805AAC
    /* stfd f31, 0xe0(r1) */ // 0x80805AB0
}