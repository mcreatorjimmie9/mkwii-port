/* Function at 0x807ED2F8, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_807ED2F8(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x807ED300
    /* stfd f31, 0x30(r1) */ // 0x807ED304
}