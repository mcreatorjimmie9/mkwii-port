/* Function at 0x806A2910, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806A2910(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806A2928
    r29 = r3;
    r3 = *(0x214 + r3); // lwz @ 0x806A2930
    r12 = *(0 + r3); // lwz @ 0x806A2934
    r12 = *(0x20 + r12); // lwz @ 0x806A2938
    /* mtctr r12 */ // 0x806A293C
    /* bctrl  */ // 0x806A2940
    if (==) goto 0x0x806a2a14;
    r0 = *(0x211 + r29); // lbz @ 0x806A294C
    if (==) goto 0x0x806a2a14;
    r0 = *(0x210 + r29); // lbz @ 0x806A2958
    if (!=) goto 0x0x806a2970;
    r3 = *(0x204 + r29); // lwz @ 0x806A2964
    /* addic. r0, r3, -1 */ // 0x806A2968
    if (<) goto 0x0x806a2a14;
    r3 = *(0x204 + r29); // lwz @ 0x806A2970
    /* addic. r0, r3, -1 */ // 0x806A2974
    *(0x204 + r29) = r0; // stw @ 0x806A2978
    if (>=) goto 0x0x806a298c;
    r3 = *(0x208 + r29); // lwz @ 0x806A2980
    r0 = r3 + -1; // 0x806A2984
    *(0x204 + r29) = r0; // stw @ 0x806A2988
    r3 = *(0x214 + r29); // lwz @ 0x806A298C
    /* li r5, 0 */ // 0x806A2990
    r4 = *(0x204 + r29); // lwz @ 0x806A2994
    r12 = *(0 + r3); // lwz @ 0x806A2998
    r12 = *(0x18 + r12); // lwz @ 0x806A299C
    /* mtctr r12 */ // 0x806A29A0
    /* bctrl  */ // 0x806A29A4
    r3 = r29 + 0x4d4; // 0x806A29A8
    /* li r4, 2 */ // 0x806A29AC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x806A29B4
    /* li r4, 0 */ // 0x806A29B8
    /* lfs f1, 0(r31) */ // 0x806A29BC
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r29 + 0x4d4; // 0x806A29C4
    /* li r4, 3 */ // 0x806A29C8
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x806A29D0
    /* li r4, 0 */ // 0x806A29D4
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = *(0x29c + r29); // lwz @ 0x806A29DC
    if (==) goto 0x0x806a2a04;
    r12 = *(0 + r3); // lwz @ 0x806A29E8
    r4 = r29;
    r5 = r30;
    r6 = *(0x204 + r29); // lwz @ 0x806A29F4
    r12 = *(8 + r12); // lwz @ 0x806A29F8
    /* mtctr r12 */ // 0x806A29FC
    /* bctrl  */ // 0x806A2A00
    r3 = r29;
    r5 = r30;
    /* li r4, 0x11 */ // 0x806A2A0C
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    r0 = *(0x24 + r1); // lwz @ 0x806A2A14
    r31 = *(0x1c + r1); // lwz @ 0x806A2A18
    r30 = *(0x18 + r1); // lwz @ 0x806A2A1C
    r29 = *(0x14 + r1); // lwz @ 0x806A2A20
    return;
}