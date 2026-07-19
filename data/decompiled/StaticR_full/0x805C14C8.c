/* Function at 0x805C14C8, size=16 bytes */
/* Stack frame: 0 bytes */

int FUN_805C14C8(int r3, int r4)
{
    r3 = r3 + r4; // 0x805C14C8
    r0 = *(0xb84 + r3); // lbz @ 0x805C14CC
    /* extsb r3, r0 */ // 0x805C14D0
    return;
}