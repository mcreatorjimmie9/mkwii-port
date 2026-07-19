/* Function at 0x805D2E24, size=80 bytes */
/* Stack frame: 0 bytes */

void FUN_805D2E24(int r4, int r5)
{
    /* lis r5, 0 */ // 0x805D2E24
    r5 = r5 + 0; // 0x805D2E2C
    *(0 + r3) = r5; // stw @ 0x805D2E30
    if (==) goto 0x0x805d2e5c;
    /* lis r4, 1 */ // 0x805D2E38
    /* li r5, 0 */ // 0x805D2E3C
    r0 = r4 + -1; // 0x805D2E40
    *(4 + r3) = r0; // sth @ 0x805D2E44
    /* li r4, 1 */ // 0x805D2E48
    *(0xa + r3) = r4; // stb @ 0x805D2E4C
    *(6 + r3) = r5; // stb @ 0x805D2E50
    *(8 + r3) = r5; // sth @ 0x805D2E54
    return;
    /* li r0, 0 */ // 0x805D2E5C
    *(0xa + r3) = r0; // stb @ 0x805D2E60
    *(4 + r3) = r0; // sth @ 0x805D2E64
    *(6 + r3) = r0; // stb @ 0x805D2E68
    *(8 + r3) = r0; // sth @ 0x805D2E6C
    return;
}