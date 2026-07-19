/* Function at 0x80745A98, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80745A98(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80745AA0
    /* stfd f31, 0x30(r1) */ // 0x80745AA4
}