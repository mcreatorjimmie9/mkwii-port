/* Function at 0x8090FB24, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_8090FB24(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x8090FB2C
    /* stfd f31, 0x60(r1) */ // 0x8090FB30
}