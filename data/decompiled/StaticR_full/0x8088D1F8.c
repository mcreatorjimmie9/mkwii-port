/* Function at 0x8088D1F8, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_8088D1F8(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x8088D200
    /* stfd f31, 0x60(r1) */ // 0x8088D204
}