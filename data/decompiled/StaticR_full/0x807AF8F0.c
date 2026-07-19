/* Function at 0x807AF8F0, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_807AF8F0(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x807AF8F8
    /* stfd f31, 0xe0(r1) */ // 0x807AF8FC
}