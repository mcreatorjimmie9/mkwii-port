/* Function at 0x805C5788, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_805C5788(int r3, int r4, int r5)
{
    r0 = *(0x28 + r3); // lwz @ 0x805C5788
    /* srwi r3, r4, 0x1f */ // 0x805C578C
    r5 = r0 >> 0x1f; // srawi
    /* subfc r0, r4, r0 */ // 0x805C5794
    /* adde r3, r5, r3 */ // 0x805C5798
    return;
}