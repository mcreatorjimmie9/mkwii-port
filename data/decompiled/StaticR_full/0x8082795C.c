/* Function at 0x8082795C, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_8082795C(int r3, int r4)
{
    r3 = *(2 + r3); // lhz @ 0x8082795C
    /* clrlwi r0, r3, 0x14 */ // 0x80827964
    if (!=) goto 0x0x80827970;
    r0 = r3 rlwinm 0; // rlwinm
    /* clrlwi r3, r0, 0x10 */ // 0x80827970
    return;
}