/* Function at 0x806A8690, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_806A8690(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806A8698
    *(0xc + r1) = r31; // stw @ 0x806A86A0
    *(8 + r1) = r30; // stw @ 0x806A86A4
    r3 = *(0 + r3); // lwz @ 0x806A86A8
    r3 = *(0 + r3); // lwz @ 0x806A86AC
    r30 = *(0x228 + r3); // lwz @ 0x806A86B0
    if (!=) goto 0x0x806a86c4;
    /* li r30, 0 */ // 0x806A86BC
    /* b 0x806a8718 */ // 0x806A86C0
    /* lis r31, 0 */ // 0x806A86C4
    r31 = r31 + 0; // 0x806A86C8
    if (==) goto 0x0x806a8714;
    r12 = *(0 + r30); // lwz @ 0x806A86D0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806A86D8
    /* mtctr r12 */ // 0x806A86DC
    /* bctrl  */ // 0x806A86E0
    /* b 0x806a86fc */ // 0x806A86E4
    if (!=) goto 0x0x806a86f8;
    /* li r0, 1 */ // 0x806A86F0
    /* b 0x806a8708 */ // 0x806A86F4
    r3 = *(0 + r3); // lwz @ 0x806A86F8
    if (!=) goto 0x0x806a86e8;
    /* li r0, 0 */ // 0x806A8704
    if (==) goto 0x0x806a8714;
    /* b 0x806a8718 */ // 0x806A8710
    /* li r30, 0 */ // 0x806A8714
    if (==) goto 0x0x806a8728;
    /* li r0, 0 */ // 0x806A8720
    *(0x54 + r30) = r0; // stb @ 0x806A8724
    r0 = *(0x14 + r1); // lwz @ 0x806A8728
    r31 = *(0xc + r1); // lwz @ 0x806A872C
    r30 = *(8 + r1); // lwz @ 0x806A8730
    return;
}