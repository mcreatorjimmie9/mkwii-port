/* Function at 0x806A2D1C, size=256 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_806A2D1C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806A2D2C
    r3 = *(0x64 + r3); // lwz @ 0x806A2D30
    r30 = *(8 + r3); // lwz @ 0x806A2D34
    if (!=) goto 0x0x806a2d48;
    /* li r30, 0 */ // 0x806A2D40
    /* b 0x806a2d9c */ // 0x806A2D44
    /* lis r31, 0 */ // 0x806A2D48
    r31 = r31 + 0; // 0x806A2D4C
    if (==) goto 0x0x806a2d98;
    r12 = *(0 + r30); // lwz @ 0x806A2D54
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x806A2D5C
    /* mtctr r12 */ // 0x806A2D60
    /* bctrl  */ // 0x806A2D64
    /* b 0x806a2d80 */ // 0x806A2D68
    if (!=) goto 0x0x806a2d7c;
    /* li r0, 1 */ // 0x806A2D74
    /* b 0x806a2d8c */ // 0x806A2D78
    r3 = *(0 + r3); // lwz @ 0x806A2D7C
    if (!=) goto 0x0x806a2d6c;
    /* li r0, 0 */ // 0x806A2D88
    if (==) goto 0x0x806a2d98;
    /* b 0x806a2d9c */ // 0x806A2D94
    /* li r30, 0 */ // 0x806A2D98
    if (!=) goto 0x0x806a2dac;
    /* li r30, 0 */ // 0x806A2DA4
    /* b 0x806a2e00 */ // 0x806A2DA8
    /* lis r31, 0 */ // 0x806A2DAC
    r31 = r31 + 0; // 0x806A2DB0
    if (==) goto 0x0x806a2dfc;
    r12 = *(0 + r30); // lwz @ 0x806A2DB8
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x806A2DC0
    /* mtctr r12 */ // 0x806A2DC4
    /* bctrl  */ // 0x806A2DC8
    /* b 0x806a2de4 */ // 0x806A2DCC
    if (!=) goto 0x0x806a2de0;
    /* li r0, 1 */ // 0x806A2DD8
    /* b 0x806a2df0 */ // 0x806A2DDC
    r3 = *(0 + r3); // lwz @ 0x806A2DE0
    if (!=) goto 0x0x806a2dd0;
    /* li r0, 0 */ // 0x806A2DEC
    if (==) goto 0x0x806a2dfc;
    /* b 0x806a2e00 */ // 0x806A2DF8
    /* li r30, 0 */ // 0x806A2DFC
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A2E04
    r30 = *(8 + r1); // lwz @ 0x806A2E08
    r0 = *(0x14 + r1); // lwz @ 0x806A2E0C
    return;
}