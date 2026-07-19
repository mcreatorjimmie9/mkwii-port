/* Function at 0x80858FAC, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80858FAC(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80858FB4
    /* stfd f31, 0x40(r1) */ // 0x80858FB8
}