/* Function at 0x806A27E4, size=300 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806A27E4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806A27FC
    r29 = r3;
    r3 = *(0x214 + r3); // lwz @ 0x806A2804
    r12 = *(0 + r3); // lwz @ 0x806A2808
    r12 = *(0x20 + r12); // lwz @ 0x806A280C
    /* mtctr r12 */ // 0x806A2810
    /* bctrl  */ // 0x806A2814
    if (==) goto 0x0x806a28f4;
    r0 = *(0x211 + r29); // lbz @ 0x806A2820
    if (==) goto 0x0x806a28f4;
    r0 = *(0x210 + r29); // lbz @ 0x806A282C
    if (!=) goto 0x0x806a284c;
    r3 = *(0x204 + r29); // lwz @ 0x806A2838
    r0 = *(0x208 + r29); // lwz @ 0x806A283C
    r3 = r3 + 1; // 0x806A2840
    if (>=) goto 0x0x806a28f4;
    r3 = *(0x204 + r29); // lwz @ 0x806A284C
    r0 = *(0x208 + r29); // lwz @ 0x806A2850
    r3 = r3 + 1; // 0x806A2854
    *(0x204 + r29) = r3; // stw @ 0x806A2858
    if (<) goto 0x0x806a286c;
    /* li r0, 0 */ // 0x806A2864
    *(0x204 + r29) = r0; // stw @ 0x806A2868
    r3 = *(0x214 + r29); // lwz @ 0x806A286C
    /* li r5, 1 */ // 0x806A2870
    r4 = *(0x204 + r29); // lwz @ 0x806A2874
    r12 = *(0 + r3); // lwz @ 0x806A2878
    r12 = *(0x18 + r12); // lwz @ 0x806A287C
    /* mtctr r12 */ // 0x806A2880
    /* bctrl  */ // 0x806A2884
    r3 = r29 + 0x34c; // 0x806A2888
    /* li r4, 2 */ // 0x806A288C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A2894
    /* li r4, 0 */ // 0x806A2898
    /* lfs f1, 0(r31) */ // 0x806A289C
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x34c; // 0x806A28A4
    /* li r4, 3 */ // 0x806A28A8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A28B0
    /* li r4, 0 */ // 0x806A28B4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = *(0x29c + r29); // lwz @ 0x806A28BC
    if (==) goto 0x0x806a28e4;
    r12 = *(0 + r3); // lwz @ 0x806A28C8
    r4 = r29;
    r5 = r30;
    r6 = *(0x204 + r29); // lwz @ 0x806A28D4
    r12 = *(8 + r12); // lwz @ 0x806A28D8
    /* mtctr r12 */ // 0x806A28DC
    /* bctrl  */ // 0x806A28E0
    r3 = r29;
    r5 = r30;
    /* li r4, 0x12 */ // 0x806A28EC
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x24 + r1); // lwz @ 0x806A28F4
    r31 = *(0x1c + r1); // lwz @ 0x806A28F8
    r30 = *(0x18 + r1); // lwz @ 0x806A28FC
    r29 = *(0x14 + r1); // lwz @ 0x806A2900
    return;
}