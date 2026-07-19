/* Function at 0x80880A30, size=16 bytes */
/* Stack frame: 80 bytes */

void FUN_80880A30(void)
{
    /* Stack frame: -80(r1) */
    *(0x54 + r1) = r0; // stw @ 0x80880A38
    /* stfd f31, 0x40(r1) */ // 0x80880A3C
}