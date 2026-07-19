/* Function at 0x8074A804, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_8074A804(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x8074A80C
    /* stfd f31, 0xe0(r1) */ // 0x8074A810
}