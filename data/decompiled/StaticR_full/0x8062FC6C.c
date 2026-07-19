/* Function at 0x8062FC6C, size=68 bytes */
/* Stack frame: 0 bytes */

void FUN_8062FC6C(int r3, int r4, int r5)
{
    r5 = *(0x338 + r3); // lwz @ 0x8062FC6C
    /* li r0, 0 */ // 0x8062FC70
    /* lis r4, 0 */ // 0x8062FC74
    /* lis r3, 0 */ // 0x8062FC78
    *(0 + r5) = r0; // stb @ 0x8062FC7C
    /* lfs f1, 0(r4) */ // 0x8062FC80
    /* stfs f1, 8(r5) */ // 0x8062FC84
    /* lfs f0, 0(r3) */ // 0x8062FC88
    /* stfs f1, 4(r5) */ // 0x8062FC8C
    /* stfs f0, 0xc(r5) */ // 0x8062FC90
    /* stfs f1, 0x10(r5) */ // 0x8062FC94
    *(0x1c + r5) = r0; // stb @ 0x8062FC98
    /* stfs f1, 0x24(r5) */ // 0x8062FC9C
    /* stfs f1, 0x20(r5) */ // 0x8062FCA0
    /* stfs f0, 0x28(r5) */ // 0x8062FCA4
    /* stfs f1, 0x2c(r5) */ // 0x8062FCA8
    return;
}