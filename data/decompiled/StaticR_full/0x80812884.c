/* Function at 0x80812884, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80812884(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8081288C
    /* stfd f31, 0x30(r1) */ // 0x80812890
}