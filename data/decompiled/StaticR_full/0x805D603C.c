/* Function at 0x805D603C, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D603C(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D603C
    r0 = r6 + -0x7340; // 0x805D6040
    r0 = r5 * r0; // 0x805D6044
    r3 = r3 + r0; // 0x805D6048
    *(0x94 + r3) = r4; // stw @ 0x805D604C
    return;
}