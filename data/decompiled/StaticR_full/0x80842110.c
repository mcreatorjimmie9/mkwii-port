/* Function at 0x80842110, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80842110(int r3, int r4)
{
    r0 = *(0x20 + r3); // lwz @ 0x80842110
    /* subf r0, r4, r0 */ // 0x80842114
    *(0x24 + r3) = r0; // stw @ 0x80842118
    return;
}