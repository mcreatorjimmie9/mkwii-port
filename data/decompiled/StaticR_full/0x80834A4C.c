/* Function at 0x80834A4C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80834A4C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80834A54
    /* stfd f31, 0x30(r1) */ // 0x80834A58
}