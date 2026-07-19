/* Function at 0x807F9CA4, size=484 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_807F9CA4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807F9CB8
    r29 = r3;
    r0 = *(0xc0 + r3); // lwz @ 0x807F9CC0
    if (==) goto 0x0x807f9ce8;
    if (==) goto 0x0x807f9cfc;
    if (==) goto 0x0x807f9df0;
    if (==) goto 0x0x807f9e30;
    /* b 0x807f9e6c */ // 0x807F9CE4
    /* lis r5, 0 */ // 0x807F9CE8
    /* li r4, 0x247 */ // 0x807F9CEC
    /* lfs f1, 0(r5) */ // 0x807F9CF0
    FUN_808A0AA8(r5, r4); // bl 0x808A0AA8
    /* b 0x807f9e6c */ // 0x807F9CF8
    r0 = *(0xf8 + r3); // lwz @ 0x807F9CFC
    /* addic. r0, r0, -1 */ // 0x807F9D00
    *(0xf8 + r3) = r0; // stw @ 0x807F9D04
    if (!=) goto 0x0x807f9e6c;
    /* li r0, 2 */ // 0x807F9D0C
    *(0xc0 + r3) = r0; // stw @ 0x807F9D10
    /* li r4, 1 */ // 0x807F9D14
    r12 = *(0 + r3); // lwz @ 0x807F9D18
    r12 = *(0x68 + r12); // lwz @ 0x807F9D1C
    /* mtctr r12 */ // 0x807F9D20
    /* bctrl  */ // 0x807F9D24
    r12 = *(0 + r29); // lwz @ 0x807F9D28
    r3 = r29;
    r12 = *(0x30 + r12); // lwz @ 0x807F9D30
    /* mtctr r12 */ // 0x807F9D34
    /* bctrl  */ // 0x807F9D38
    FUN_808179C0(r3); // bl 0x808179C0
    r12 = *(0 + r29); // lwz @ 0x807F9D40
    r3 = r29;
    r12 = *(0x94 + r12); // lwz @ 0x807F9D48
    /* mtctr r12 */ // 0x807F9D4C
    /* bctrl  */ // 0x807F9D50
    r3 = *(0xb0 + r29); // lwz @ 0x807F9D54
    r12 = *(0 + r3); // lwz @ 0x807F9D58
    r12 = *(0xf0 + r12); // lwz @ 0x807F9D5C
    /* mtctr r12 */ // 0x807F9D60
    /* bctrl  */ // 0x807F9D64
    r30 = r29;
    /* li r31, 0 */ // 0x807F9D6C
    r3 = *(0xb4 + r30); // lwz @ 0x807F9D70
    r12 = *(0 + r3); // lwz @ 0x807F9D74
    r12 = *(0xf0 + r12); // lwz @ 0x807F9D78
    /* mtctr r12 */ // 0x807F9D7C
    /* bctrl  */ // 0x807F9D80
    r31 = r31 + 1; // 0x807F9D84
    r30 = r30 + 4; // 0x807F9D88
    if (<) goto 0x0x807f9d70;
    r4 = *(8 + r29); // lwz @ 0x807F9D94
    /* lis r3, 0 */ // 0x807F9D98
    /* lis r5, 0 */ // 0x807F9D9C
    /* lfs f1, 0(r3) */ // 0x807F9DA0
    r3 = *(0x28 + r4); // lwz @ 0x807F9DA4
    /* li r4, 2 */ // 0x807F9DA8
    /* lfs f2, 0(r5) */ // 0x807F9DAC
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r3 = *(8 + r29); // lwz @ 0x807F9DB4
    /* li r4, 0 */ // 0x807F9DB8
    r3 = *(0x28 + r3); // lwz @ 0x807F9DBC
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807F9DC4
    r12 = *(8 + r12); // lwz @ 0x807F9DC8
    /* mtctr r12 */ // 0x807F9DCC
    /* bctrl  */ // 0x807F9DD0
    /* fctiwz f0, f1 */ // 0x807F9DD4
    /* li r0, 1 */ // 0x807F9DD8
    *(0x104 + r29) = r0; // stb @ 0x807F9DDC
    /* stfd f0, 8(r1) */ // 0x807F9DE0
    r0 = *(0xc + r1); // lwz @ 0x807F9DE4
    *(0xfc + r29) = r0; // stw @ 0x807F9DE8
    /* b 0x807f9e6c */ // 0x807F9DEC
    r0 = *(0xfc + r3); // lwz @ 0x807F9DF0
    /* addic. r0, r0, -1 */ // 0x807F9DF4
    *(0xfc + r3) = r0; // stw @ 0x807F9DF8
    if (!=) goto 0x0x807f9e6c;
    /* li r0, 0 */ // 0x807F9E00
    *(0xc0 + r3) = r0; // stw @ 0x807F9E04
    r4 = *(8 + r3); // lwz @ 0x807F9E08
    /* lis r3, 0 */ // 0x807F9E0C
    /* lis r5, 0 */ // 0x807F9E10
    /* lfs f1, 0(r3) */ // 0x807F9E14
    r3 = *(0x28 + r4); // lwz @ 0x807F9E18
    /* li r4, 0 */ // 0x807F9E1C
    /* lfs f2, 0(r5) */ // 0x807F9E20
    /* li r5, 1 */ // 0x807F9E24
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* b 0x807f9e6c */ // 0x807F9E2C
    r0 = *(0xf4 + r3); // lwz @ 0x807F9E30
    /* addic. r0, r0, -1 */ // 0x807F9E34
    *(0xf4 + r3) = r0; // stw @ 0x807F9E38
    if (!=) goto 0x0x807f9e6c;
    /* li r0, 0 */ // 0x807F9E40
    *(0xc0 + r3) = r0; // stw @ 0x807F9E44
    r4 = *(8 + r3); // lwz @ 0x807F9E48
    /* lis r3, 0 */ // 0x807F9E4C
    /* lis r5, 0 */ // 0x807F9E50
    /* lfs f1, 0(r3) */ // 0x807F9E54
    r3 = *(0x28 + r4); // lwz @ 0x807F9E58
    /* li r4, 0 */ // 0x807F9E5C
    /* lfs f2, 0(r5) */ // 0x807F9E60
    /* li r5, 1 */ // 0x807F9E64
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r0 = *(0x24 + r1); // lwz @ 0x807F9E6C
    r31 = *(0x1c + r1); // lwz @ 0x807F9E70
    r30 = *(0x18 + r1); // lwz @ 0x807F9E74
    r29 = *(0x14 + r1); // lwz @ 0x807F9E78
    return;
}