/* Function at 0x808BB718, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808BB718(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808BB720
    *(0x18 + r1) = r30; // stw @ 0x808BB72C
    *(0x14 + r1) = r29; // stw @ 0x808BB730
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808BB738
    r3 = *(0 + r3); // lwz @ 0x808BB73C
    r30 = *(0x250 + r3); // lwz @ 0x808BB740
    if (!=) goto 0x0x808bb754;
    /* li r30, 0 */ // 0x808BB74C
    /* b 0x808bb7a8 */ // 0x808BB750
    /* lis r31, 0 */ // 0x808BB754
    r31 = r31 + 0; // 0x808BB758
    if (==) goto 0x0x808bb7a4;
    r12 = *(0 + r30); // lwz @ 0x808BB760
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BB768
    /* mtctr r12 */ // 0x808BB76C
    /* bctrl  */ // 0x808BB770
    /* b 0x808bb78c */ // 0x808BB774
    if (!=) goto 0x0x808bb788;
    /* li r0, 1 */ // 0x808BB780
    /* b 0x808bb798 */ // 0x808BB784
    r3 = *(0 + r3); // lwz @ 0x808BB788
    if (!=) goto 0x0x808bb778;
    /* li r0, 0 */ // 0x808BB794
    if (==) goto 0x0x808bb7a4;
    /* b 0x808bb7a8 */ // 0x808BB7A0
    /* li r30, 0 */ // 0x808BB7A4
    r3 = r30;
    /* li r4, -1 */ // 0x808BB7AC
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    r3 = *(0x23d8 + r29); // lwz @ 0x808BB7B4
    if (==) goto 0x0x808bb7dc;
    r0 = *(8 + r3); // lwz @ 0x808BB7C0
    if (!=) goto 0x0x808bb7dc;
    /* lis r4, 0 */ // 0x808BB7CC
    /* lfs f1, 0(r4) */ // 0x808BB7D0
    /* li r4, -1 */ // 0x808BB7D4
    FUN_80671C48(r4, r4); // bl 0x80671C48
    /* lis r4, 0 */ // 0x808BB7DC
    /* li r0, -1 */ // 0x808BB7E0
    /* lfs f1, 0(r4) */ // 0x808BB7E4
    r3 = r29;
    *(0x3e8 + r29) = r0; // stw @ 0x808BB7EC
    /* li r4, 0 */ // 0x808BB7F0
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x808BB7F8
    r31 = *(0x1c + r1); // lwz @ 0x808BB7FC
    r30 = *(0x18 + r1); // lwz @ 0x808BB800
    r29 = *(0x14 + r1); // lwz @ 0x808BB804
    return;
}