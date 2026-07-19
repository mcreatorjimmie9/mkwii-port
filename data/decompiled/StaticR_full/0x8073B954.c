/* Function at 0x8073B954, size=324 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_8073B954(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x8073B968
    *(0x54 + r1) = r29; // stw @ 0x8073B96C
    r29 = r4;
    r0 = *(0x14d + r3); // lbz @ 0x8073B974
    if (==) goto 0x0x8073bb0c;
    r4 = r31 + 0x6d0; // 0x8073B984
    r5 = r31 + 0x6dc; // 0x8073B988
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lis r3, 0 */ // 0x8073B990
    /* slwi r0, r29, 2 */ // 0x8073B994
    r3 = *(0 + r3); // lwz @ 0x8073B998
    r3 = r3 + r0; // 0x8073B99C
    /* lfs f0, 0x1c(r3) */ // 0x8073B9A0
    /* stfs f0, 0xc(r1) */ // 0x8073B9A4
    r0 = *(0x129 + r31); // lbz @ 0x8073B9A8
    if (==) goto 0x0x8073b9f4;
    r0 = *(0xb0 + r31); // lbz @ 0x8073B9B4
    if (==) goto 0x0x8073b9dc;
    /* lis r3, 0 */ // 0x8073B9C0
    r3 = r3 + 0; // 0x8073B9C8
    r5 = r31 + 0x72c; // 0x8073B9CC
    r3 = r3 + 0x1852; // 0x8073B9D0
    FUN_807457A0(r3, r4, r3, r5, r3); // bl 0x807457A0
    /* b 0x8073ba3c */ // 0x8073B9D8
    /* lis r3, 0 */ // 0x8073B9DC
    r3 = r3 + 0; // 0x8073B9E4
    r3 = r3 + 0x1860; // 0x8073B9E8
    FUN_807456E0(r3, r4, r3, r3); // bl 0x807456E0
    /* b 0x8073ba3c */ // 0x8073B9F0
    r0 = *(0xc + r31); // lbz @ 0x8073B9F4
    if (!=) goto 0x0x8073ba3c;
    r0 = *(0xb0 + r31); // lbz @ 0x8073BA00
    if (==) goto 0x0x8073ba28;
    /* lis r3, 0 */ // 0x8073BA0C
    r3 = r3 + 0; // 0x8073BA14
    r5 = r31 + 0x72c; // 0x8073BA18
    r3 = r3 + 0x186e; // 0x8073BA1C
    FUN_807457A0(r3, r4, r3, r5, r3); // bl 0x807457A0
    /* b 0x8073ba3c */ // 0x8073BA24
    /* lis r3, 0 */ // 0x8073BA28
    r3 = r3 + 0; // 0x8073BA30
    r3 = r3 + 0x187d; // 0x8073BA34
    FUN_807456E0(r3, r4, r3, r3); // bl 0x807456E0
    r3 = *(0x15c + r31); // lwz @ 0x8073BA3C
    /* li r4, 1 */ // 0x8073BA40
    r12 = *(0 + r3); // lwz @ 0x8073BA44
    r12 = *(0xc + r12); // lwz @ 0x8073BA48
    /* mtctr r12 */ // 0x8073BA4C
    /* bctrl  */ // 0x8073BA50
    r29 = *(0x15c + r31); // lwz @ 0x8073BA54
    r3 = *(0x10 + r29); // lwz @ 0x8073BA58
    r3 = *(0 + r3); // lwz @ 0x8073BA5C
    if (==) goto 0x0x8073ba78;
    r3 = r3 + 0xc; // 0x8073BA68
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x8073ba80 */ // 0x8073BA74
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f2, 8(r1) */ // 0x8073BA80
    /* li r30, 0 */ // 0x8073BA84
    /* lfs f1, 0xc(r1) */ // 0x8073BA88
    /* lfs f0, 0x10(r1) */ // 0x8073BA8C
    /* stfs f2, 0x24(r1) */ // 0x8073BA90
    /* stfs f1, 0x34(r1) */ // 0x8073BA94
}