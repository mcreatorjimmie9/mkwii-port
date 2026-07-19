/* Function at 0x807CD6D8, size=268 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807CD6D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807CD6EC
    r31 = r31 + 0; // 0x807CD6F0
    *(0x38 + r1) = r30; // stw @ 0x807CD6F4
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x807CD6FC
    r29 = r3;
    if (==) goto 0x0x807cd710;
    if (!=) goto 0x0x807cd7c4;
    r0 = *(0x349 + r3); // lbz @ 0x807CD710
    if (!=) goto 0x0x807cd7c4;
    /* li r0, 1 */ // 0x807CD720
    *(0x349 + r3) = r0; // stb @ 0x807CD724
    if (==) goto 0x0x807cd760;
    /* lfs f0, 0x50(r4) */ // 0x807CD72C
    /* stfs f0, 0x304(r3) */ // 0x807CD730
    /* lfs f0, 0x54(r4) */ // 0x807CD734
    /* stfs f0, 0x308(r3) */ // 0x807CD738
    /* lfs f0, 0x58(r4) */ // 0x807CD73C
    /* stfs f0, 0x30c(r3) */ // 0x807CD740
    /* lfs f0, 0x44(r4) */ // 0x807CD744
    /* stfs f0, 0x310(r3) */ // 0x807CD748
    /* lfs f0, 0x48(r4) */ // 0x807CD74C
    /* stfs f0, 0x314(r3) */ // 0x807CD750
    /* lfs f0, 0x4c(r4) */ // 0x807CD754
    /* stfs f0, 0x318(r3) */ // 0x807CD758
    /* b 0x807cd7b8 */ // 0x807CD75C
    /* lfs f1, 0(r31) */ // 0x807CD760
    r4 = r29;
    /* lfs f0, 4(r31) */ // 0x807CD768
    /* stfs f1, 0x304(r3) */ // 0x807CD76C
    /* stfs f0, 0x308(r3) */ // 0x807CD770
    /* stfs f1, 0x30c(r3) */ // 0x807CD774
    FUN_807CB4DC(r3); // bl 0x807CB4DC
    /* lfs f1, 0x1c(r31) */ // 0x807CD780
    r4 = r29 + 0xfc; // 0x807CD788
    FUN_805A443C(r3, r3, r4); // bl 0x805A443C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x807CD7A0
    /* stfs f0, 0x310(r29) */ // 0x807CD7A4
    /* lfs f0, 0xc(r1) */ // 0x807CD7A8
    /* stfs f0, 0x314(r29) */ // 0x807CD7AC
    /* lfs f0, 0x10(r1) */ // 0x807CD7B0
    /* stfs f0, 0x318(r29) */ // 0x807CD7B4
    r3 = r29;
    /* li r4, 0x262 */ // 0x807CD7BC
    FUN_808A0AE8(r3, r4); // bl 0x808A0AE8
    r3 = r30;
    r31 = *(0x3c + r1); // lwz @ 0x807CD7C8
    r30 = *(0x38 + r1); // lwz @ 0x807CD7CC
    r29 = *(0x34 + r1); // lwz @ 0x807CD7D0
    r0 = *(0x44 + r1); // lwz @ 0x807CD7D4
    return;
}