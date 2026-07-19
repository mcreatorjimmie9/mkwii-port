/* Function at 0x8080AEE8, size=16 bytes */
/* Stack frame: 32 bytes */

void FUN_8080AEE8(void)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x8080AEF0
    /* stfd f31, 0x10(r1) */ // 0x8080AEF4
}