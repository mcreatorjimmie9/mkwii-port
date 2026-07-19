/* Function at 0x80769400, size=16 bytes */
/* Stack frame: 160 bytes */

void FUN_80769400(void)
{
    /* Stack frame: -160(r1) */
    *(0xa4 + r1) = r0; // stw @ 0x80769408
    /* stfd f31, 0x90(r1) */ // 0x8076940C
}