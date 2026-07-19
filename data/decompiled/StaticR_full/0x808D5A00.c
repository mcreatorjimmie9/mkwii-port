/* Function at 0x808D5A00, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_808D5A00(int r3, int r4, int r6)
{
    if (!=) goto 0x0x808d5a0c;
    /* b 0x806a0c48 */ // 0x808D5A08
    /* beqlr  */ // 0x808D5A10
    /* lis r6, 0 */ // 0x808D5A14
    /* li r0, 0 */ // 0x808D5A18
    /* lfs f0, 0(r6) */ // 0x808D5A1C
    /* stfs f0, 0x7c(r3) */ // 0x808D5A20
    *(0x80 + r3) = r0; // stb @ 0x808D5A24
    /* b 0x806a0a34 */ // 0x808D5A28
}