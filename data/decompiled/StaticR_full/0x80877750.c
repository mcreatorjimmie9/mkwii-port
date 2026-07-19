/* Function at 0x80877750, size=80 bytes */
/* Stack frame: 0 bytes */

int FUN_80877750(int r3, int r4, int r5)
{
    /* extsb. r4, r4 */ // 0x80877750
    /* bltlr  */ // 0x80877754
    r0 = *(0x1fa4 + r3); // lbz @ 0x80877758
    /* extsb r0, r0 */ // 0x8087775C
    /* bgelr  */ // 0x80877764
    /* slwi r0, r4, 2 */ // 0x80877768
    r3 = r3 + r0; // 0x8087776C
    r3 = *(0x1fa8 + r3); // lwz @ 0x80877770
    /* beqlr  */ // 0x80877778
    /* lfs f0, 0(r5) */ // 0x8087777C
    /* li r0, 1 */ // 0x80877780
    /* stfs f0, 0x104(r3) */ // 0x80877784
    /* lfs f0, 4(r5) */ // 0x80877788
    /* stfs f0, 0x108(r3) */ // 0x8087778C
    /* lfs f0, 8(r5) */ // 0x80877790
    /* stfs f0, 0x10c(r3) */ // 0x80877794
    *(0x110 + r3) = r0; // stb @ 0x80877798
    return;
}