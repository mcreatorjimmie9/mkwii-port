/* Function at 0x805D6228, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6228(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6228
    r0 = r6 + -0x7340; // 0x805D622C
    r0 = r5 * r0; // 0x805D6230
    r3 = r3 + r0; // 0x805D6234
    *(0xc8 + r3) = r4; // stw @ 0x805D6238
    return;
}