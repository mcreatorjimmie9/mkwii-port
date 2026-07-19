/* Function at 0x805C1470, size=20 bytes */
/* Stack frame: 0 bytes */

int FUN_805C1470(int r3, int r4)
{
    /* mulli r0, r4, 0xf0 */ // 0x805C1470
    r3 = r3 + r0; // 0x805C1474
    r0 = *(0x2d + r3); // lbz @ 0x805C1478
    /* extsb r3, r0 */ // 0x805C147C
    return;
}