/* Function at 0x80854314, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_80854314(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x8085431C
    /* stfd f31, 0xe0(r1) */ // 0x80854320
}