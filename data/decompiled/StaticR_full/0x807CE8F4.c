/* Function at 0x807CE8F4, size=60 bytes */
/* Stack frame: 32 bytes */

void FUN_807CE8F4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* li r0, 0 */ // 0x807CE8F8
    /* lis r4, 0 */ // 0x807CE8FC
    /* lis r5, 0 */ // 0x807CE900
    *(0x34a + r3) = r0; // stb @ 0x807CE904
    /* lfs f0, 0(r4) */ // 0x807CE908
    /* lfs f1, 0(r5) */ // 0x807CE90C
    /* stfs f0, 8(r1) */ // 0x807CE910
    /* stfs f1, 0xc(r1) */ // 0x807CE914
    /* stfs f0, 0x10(r1) */ // 0x807CE918
    /* stfs f0, 0x138(r3) */ // 0x807CE91C
    /* stfs f1, 0x13c(r3) */ // 0x807CE920
    /* stfs f0, 0x140(r3) */ // 0x807CE924
    return;
}