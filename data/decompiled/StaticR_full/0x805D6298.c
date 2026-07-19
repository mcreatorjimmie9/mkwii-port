/* Function at 0x805D6298, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6298(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6298
    r0 = r6 + -0x7340; // 0x805D629C
    r0 = r5 * r0; // 0x805D62A0
    r3 = r3 + r0; // 0x805D62A4
    *(0xd0 + r3) = r4; // stw @ 0x805D62A8
    return;
}