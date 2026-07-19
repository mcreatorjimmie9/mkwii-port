/* Function at 0x805D6114, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6114(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6114
    r0 = r6 + -0x7340; // 0x805D6118
    r0 = r5 * r0; // 0x805D611C
    r3 = r3 + r0; // 0x805D6120
    *(0xac + r3) = r4; // stw @ 0x805D6124
    return;
}