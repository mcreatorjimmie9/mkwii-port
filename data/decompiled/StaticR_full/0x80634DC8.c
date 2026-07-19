/* Function at 0x80634DC8, size=252 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80634DC8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x80634DD8
    *(8 + r1) = r30; // stw @ 0x80634DDC
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80634DE4
    r12 = *(0x14 + r12); // lwz @ 0x80634DE8
    /* mtctr r12 */ // 0x80634DEC
    /* bctrl  */ // 0x80634DF0
    /* lis r4, 0 */ // 0x80634DF4
    r3 = *(0 + r3); // lwz @ 0x80634DF8
    /* lfs f1, 0xc(r30) */ // 0x80634DFC
    /* lfs f0, 0(r4) */ // 0x80634E00
    /* lfs f2, 0x44(r3) */ // 0x80634E04
    /* fadds f0, f1, f0 */ // 0x80634E08
    /* stfs f0, 0xc(r30) */ // 0x80634E0C
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x80634E10
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80634E14
    if (!=) goto 0x0x80634e2c;
    /* lis r3, 0 */ // 0x80634E1C
    /* li r31, 1 */ // 0x80634E20
    /* lfs f0, 0(r3) */ // 0x80634E24
    /* stfs f0, 0xc(r30) */ // 0x80634E28
    if (==) goto 0x0x80634eb4;
    r0 = *(0x4c + r30); // lwz @ 0x80634E34
    if (!=) goto 0x0x80634e84;
    r0 = *(0x50 + r30); // lbz @ 0x80634E40
    if (!=) goto 0x0x80634ea0;
    /* li r31, 1 */ // 0x80634E4C
    *(0x4c + r30) = r31; // stw @ 0x80634E50
    r3 = r30;
    r12 = *(0 + r30); // lwz @ 0x80634E58
    r12 = *(0x14 + r12); // lwz @ 0x80634E5C
    /* mtctr r12 */ // 0x80634E60
    /* bctrl  */ // 0x80634E64
    FUN_805A6900(r3); // bl 0x805A6900
    if (==) goto 0x0x80634e7c;
    *(8 + r30) = r3; // stw @ 0x80634E74
    /* b 0x80634ea0 */ // 0x80634E78
    *(0x50 + r30) = r31; // stb @ 0x80634E7C
    /* b 0x80634ea0 */ // 0x80634E80
    /* li r0, -1 */ // 0x80634E84
    *(0x30 + r30) = r0; // sth @ 0x80634E88
    /* b 0x80634e98 */ // 0x80634E8C
    FUN_805A6828(); // bl 0x805A6828
    *(8 + r30) = r3; // stw @ 0x80634E94
    /* li r0, 0 */ // 0x80634E98
    *(0x4c + r30) = r0; // stw @ 0x80634E9C
    r0 = *(0x50 + r30); // lbz @ 0x80634EA0
    if (!=) goto 0x0x80634eb4;
    r3 = r30;
    FUN_80634ECC(r3); // bl 0x80634ECC
    r0 = *(0x14 + r1); // lwz @ 0x80634EB4
    r31 = *(0xc + r1); // lwz @ 0x80634EB8
    r30 = *(8 + r1); // lwz @ 0x80634EBC
}