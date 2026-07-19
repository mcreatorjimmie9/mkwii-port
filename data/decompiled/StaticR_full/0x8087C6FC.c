/* Function at 0x8087C6FC, size=16 bytes */
/* Stack frame: 304 bytes */

void FUN_8087C6FC(void)
{
    /* Stack frame: -304(r1) */
    *(0x134 + r1) = r0; // stw @ 0x8087C704
    /* stfd f31, 0x120(r1) */ // 0x8087C708
}