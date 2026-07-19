/* Function at 0x80792680, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80792680(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x8079268C
    /* fmr f31, f1 */ // 0x80792690
    *(0x14 + r1) = r31; // stw @ 0x80792694
    /* li r31, 0 */ // 0x80792698
    *(0x10 + r1) = r30; // stw @ 0x8079269C
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x807926A4
    r29 = r3;
    r3 = r3 + 0x88; // 0x807926AC
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x807926c4;
    /* li r3, 0 */ // 0x807926BC
    /* b 0x8079271c */ // 0x807926C0
    r4 = *(0x80 + r29); // lwz @ 0x807926C4
    /* li r3, 0 */ // 0x807926C8
    if (==) goto 0x0x807926f0;
    if (==) goto 0x0x807926e0;
    r0 = *(0x90 + r4); // lwz @ 0x807926D8
    /* b 0x807926e4 */ // 0x807926DC
    /* li r0, -1 */ // 0x807926E0
    if (!=) goto 0x0x807926f0;
    r3 = r29 + 0x80; // 0x807926EC
    if (!=) goto 0x0x80792718;
    r12 = *(0 + r29); // lwz @ 0x807926F8
    /* fmr f1, f31 */ // 0x807926FC
    r3 = r29;
    r4 = r30;
    r12 = *(0xe0 + r12); // lwz @ 0x80792708
    /* mtctr r12 */ // 0x8079270C
    /* bctrl  */ // 0x80792710
    r31 = r3;
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x8079271C
    /* lfd f31, 0x18(r1) */ // 0x80792720
    r31 = *(0x14 + r1); // lwz @ 0x80792724
    r30 = *(0x10 + r1); // lwz @ 0x80792728
    r29 = *(0xc + r1); // lwz @ 0x8079272C
    return;
}