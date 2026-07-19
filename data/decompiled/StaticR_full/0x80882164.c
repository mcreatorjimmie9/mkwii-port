/* Function at 0x80882164, size=16 bytes */
/* Stack frame: 288 bytes */

void FUN_80882164(void)
{
    /* Stack frame: -288(r1) */
    *(0x124 + r1) = r0; // stw @ 0x8088216C
    /* stfd f31, 0x110(r1) */ // 0x80882170
}