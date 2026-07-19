/* Function at 0x806A3620, size=256 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_806A3620(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806A3630
    r3 = *(0x64 + r3); // lwz @ 0x806A3634
    r30 = *(8 + r3); // lwz @ 0x806A3638
    if (!=) goto 0x0x806a364c;
    /* li r30, 0 */ // 0x806A3644
    /* b 0x806a36a0 */ // 0x806A3648
    /* lis r31, 0 */ // 0x806A364C
    r31 = r31 + 0; // 0x806A3650
    if (==) goto 0x0x806a369c;
    r12 = *(0 + r30); // lwz @ 0x806A3658
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x806A3660
    /* mtctr r12 */ // 0x806A3664
    /* bctrl  */ // 0x806A3668
    /* b 0x806a3684 */ // 0x806A366C
    if (!=) goto 0x0x806a3680;
    /* li r0, 1 */ // 0x806A3678
    /* b 0x806a3690 */ // 0x806A367C
    r3 = *(0 + r3); // lwz @ 0x806A3680
    if (!=) goto 0x0x806a3670;
    /* li r0, 0 */ // 0x806A368C
    if (==) goto 0x0x806a369c;
    /* b 0x806a36a0 */ // 0x806A3698
    /* li r30, 0 */ // 0x806A369C
    if (!=) goto 0x0x806a36b0;
    /* li r30, 0 */ // 0x806A36A8
    /* b 0x806a3704 */ // 0x806A36AC
    /* lis r31, 0 */ // 0x806A36B0
    r31 = r31 + 0; // 0x806A36B4
    if (==) goto 0x0x806a3700;
    r12 = *(0 + r30); // lwz @ 0x806A36BC
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x806A36C4
    /* mtctr r12 */ // 0x806A36C8
    /* bctrl  */ // 0x806A36CC
    /* b 0x806a36e8 */ // 0x806A36D0
    if (!=) goto 0x0x806a36e4;
    /* li r0, 1 */ // 0x806A36DC
    /* b 0x806a36f4 */ // 0x806A36E0
    r3 = *(0 + r3); // lwz @ 0x806A36E4
    if (!=) goto 0x0x806a36d4;
    /* li r0, 0 */ // 0x806A36F0
    if (==) goto 0x0x806a3700;
    /* b 0x806a3704 */ // 0x806A36FC
    /* li r30, 0 */ // 0x806A3700
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A3708
    r30 = *(8 + r1); // lwz @ 0x806A370C
    r0 = *(0x14 + r1); // lwz @ 0x806A3710
    return;
}