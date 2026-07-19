/* Function at 0x8076F2A0, size=16 bytes */
/* Stack frame: 288 bytes */

void FUN_8076F2A0(void)
{
    /* Stack frame: -288(r1) */
    *(0x124 + r1) = r0; // stw @ 0x8076F2A8
    /* stfd f31, 0x110(r1) */ // 0x8076F2AC
}