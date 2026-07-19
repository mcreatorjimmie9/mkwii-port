/* Function at 0x805D6138, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6138(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6138
    r0 = r6 + -0x7340; // 0x805D613C
    r0 = r5 * r0; // 0x805D6140
    r3 = r3 + r0; // 0x805D6144
    *(0xb0 + r3) = r4; // stw @ 0x805D6148
    return;
}