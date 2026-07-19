/* Function at 0x80636954, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80636954(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80636960
    r31 = r3;
    r0 = *(0xc8 + r3); // lbz @ 0x80636968
    if (==) goto 0x0x806369d0;
    r12 = *(0 + r3); // lwz @ 0x80636974
    r12 = *(0x14 + r12); // lwz @ 0x80636978
    /* mtctr r12 */ // 0x8063697C
    /* bctrl  */ // 0x80636980
    if (==) goto 0x0x806369d0;
    r12 = *(0 + r31); // lwz @ 0x8063698C
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x80636994
    /* mtctr r12 */ // 0x80636998
    /* bctrl  */ // 0x8063699C
    r4 = *(0 + r3); // lwz @ 0x806369A0
    /* lis r3, 0 */ // 0x806369A4
    /* lfs f1, 0xc(r31) */ // 0x806369A8
    /* lfs f2, 0x44(r4) */ // 0x806369AC
    /* lfs f0, 0(r3) */ // 0x806369B0
    /* fsubs f1, f2, f1 */ // 0x806369B4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x806369B8
    if (>=) goto 0x0x806369d0;
    /* lis r3, 0 */ // 0x806369C0
    /* li r0, 1 */ // 0x806369C4
    r3 = *(0 + r3); // lwz @ 0x806369C8
    *(0x24 + r3) = r0; // stb @ 0x806369CC
    r0 = *(0x14 + r1); // lwz @ 0x806369D0
    r31 = *(0xc + r1); // lwz @ 0x806369D4
    return;
}