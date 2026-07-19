/* Function at 0x80859D40, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_80859D40(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x80859D48
    /* stfd f31, 0x30(r1) */ // 0x80859D4C
}