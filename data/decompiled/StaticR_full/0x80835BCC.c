/* Function at 0x80835BCC, size=16 bytes */
/* Stack frame: 144 bytes */

void FUN_80835BCC(void)
{
    /* Stack frame: -144(r1) */
    *(0x94 + r1) = r0; // stw @ 0x80835BD4
    /* stfd f31, 0x80(r1) */ // 0x80835BD8
}