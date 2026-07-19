/* Function at 0x8085CFCC, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_8085CFCC(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x8085CFD4
    /* stfd f31, 0xe0(r1) */ // 0x8085CFD8
}