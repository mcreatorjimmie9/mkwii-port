/* Function at 0x805D6018, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6018(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6018
    r0 = r6 + -0x7340; // 0x805D601C
    r0 = r5 * r0; // 0x805D6020
    r3 = r3 + r0; // 0x805D6024
    *(0x90 + r3) = r4; // stw @ 0x805D6028
    return;
}