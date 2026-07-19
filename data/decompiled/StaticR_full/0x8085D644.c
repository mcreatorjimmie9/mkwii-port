/* Function at 0x8085D644, size=220 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_8085D644(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r4;
    *(0xc4 + r1) = r29; // stw @ 0x8085D65C
    r29 = r3;
    *(0xc0 + r1) = r28; // stw @ 0x8085D664
    /* lis r28, 0 */ // 0x8085D668
    r28 = r28 + 0; // 0x8085D66C
    r0 = *(0x23e + r3); // lbz @ 0x8085D670
    if (!=) goto 0x0x8085d904;
    r3 = *(0x10 + r3); // lwz @ 0x8085D67C
    r0 = *(0x144 + r3); // lbz @ 0x8085D680
    if (==) goto 0x0x8085d904;
    /* addic. r0, r1, 0x90 */ // 0x8085D68C
    if (==) goto 0x0x8085d6a0;
    r3 = *(0 + r4); // lwz @ 0x8085D694
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    r0 = *(0x260 + r29); // lbz @ 0x8085D6A0
    if (==) goto 0x0x8085d6c4;
    r3 = r29;
    r6 = r29 + 0x268; // 0x8085D6B4
    /* li r5, 1 */ // 0x8085D6B8
    /* li r7, 1 */ // 0x8085D6BC
    FUN_8085CA98(r3, r4, r6, r5, r7); // bl 0x8085CA98
    r5 = *(0x10 + r29); // lwz @ 0x8085D6C4
    /* lfs f2, 0x9c(r1) */ // 0x8085D6CC
    r4 = r29 + 0x3c4; // 0x8085D6D0
    /* lfs f1, 0x314(r5) */ // 0x8085D6D4
    /* lfs f0, 0x3dc(r5) */ // 0x8085D6D8
    /* lfs f3, 0xac(r1) */ // 0x8085D6DC
    /* fadds f1, f1, f0 */ // 0x8085D6E0
    /* lfs f0, 0x160(r28) */ // 0x8085D6E4
    /* lfs f4, 0xbc(r1) */ // 0x8085D6E8
    /* stfs f2, 0x50(r1) */ // 0x8085D6EC
    /* fmuls f1, f0, f1 */ // 0x8085D6F0
    /* stfs f3, 0x54(r1) */ // 0x8085D6F4
    /* stfs f4, 0x58(r1) */ // 0x8085D6F8
    FUN_805E3430(); // bl 0x805E3430
    r5 = r4;
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    r5 = *(0x10 + r29); // lwz @ 0x8085D710
    /* lfs f0, 0x160(r28) */ // 0x8085D718
    r4 = r29 + 0x3d0; // 0x8085D71C
}