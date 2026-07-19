/* Function at 0x805F7298, size=28 bytes */
/* Stack frame: 0 bytes */

int FUN_805F7298(int r3)
{
    /* lis r3, 0 */ // 0x805F7298
    /* li r0, 0 */ // 0x805F729C
    r3 = r3 + 0; // 0x805F72A0
    *(0x18 + r3) = r0; // stb @ 0x805F72A4
    *(0x1a + r3) = r0; // sth @ 0x805F72A8
    *(0x1c + r3) = r0; // stb @ 0x805F72AC
    return;
}