/* Function at 0x806091F8, size=16 bytes */
/* Stack frame: 208 bytes */

void FUN_806091F8(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x80609200
    /* stfd f31, 0xc0(r1) */ // 0x80609204
}