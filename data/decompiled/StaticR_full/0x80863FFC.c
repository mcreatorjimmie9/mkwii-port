/* Function at 0x80863FFC, size=16 bytes */
/* Stack frame: 304 bytes */

void FUN_80863FFC(void)
{
    /* Stack frame: -304(r1) */
    *(0x134 + r1) = r0; // stw @ 0x80864004
    /* stfd f31, 0x120(r1) */ // 0x80864008
}