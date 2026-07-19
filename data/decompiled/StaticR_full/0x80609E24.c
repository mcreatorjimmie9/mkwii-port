/* Function at 0x80609E24, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_80609E24(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x80609E2C
    /* stfd f31, 0x10(r1) */ // 0x80609E30
}