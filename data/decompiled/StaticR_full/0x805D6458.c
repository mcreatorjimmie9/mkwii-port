/* Function at 0x805D6458, size=24 bytes */
/* Stack frame: 0 bytes */

int FUN_805D6458(int r3, int r5, int r6)
{
    /* lis r6, 1 */ // 0x805D6458
    r0 = r6 + -0x7340; // 0x805D645C
    r0 = r5 * r0; // 0x805D6460
    r3 = r3 + r0; // 0x805D6464
    *(0xf0 + r3) = r4; // sth @ 0x805D6468
    return;
}