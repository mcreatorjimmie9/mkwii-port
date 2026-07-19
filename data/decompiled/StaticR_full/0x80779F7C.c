/* Function at 0x80779F7C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80779F7C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80779F84
    *(0x24 + r1) = r0; // stw @ 0x80779F88
    /* lis r0, 0x4330 */ // 0x80779F8C
    /* lfd f2, 0(r5) */ // 0x80779F90
    *(0x1c + r1) = r31; // stw @ 0x80779F94
    r31 = r3;
    r4 = *(0xbc + r3); // lwz @ 0x80779F9C
    *(0xc + r1) = r4; // stw @ 0x80779FA0
    /* lis r4, 0 */ // 0x80779FA4
    /* lfs f0, 0(r4) */ // 0x80779FA8
    *(8 + r1) = r0; // stw @ 0x80779FAC
    /* lfd f1, 8(r1) */ // 0x80779FB0
    /* fsubs f1, f1, f2 */ // 0x80779FB4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80779FB8
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80779FBC
    if (!=) goto 0x0x80779fcc;
    /* li r0, 2 */ // 0x80779FC4
    *(0xb8 + r3) = r0; // stw @ 0x80779FC8
    /* lfs f1, 0x100(r3) */ // 0x80779FCC
    r3 = *(0xbc + r3); // lwz @ 0x80779FD0
    /* lfs f2, 0xfc(r31) */ // 0x80779FD4
    FUN_807455C0(); // bl 0x807455C0
    /* frsp f2, f1 */ // 0x80779FDC
    /* lfs f0, 0xf8(r31) */ // 0x80779FE0
    /* stfs f1, 0x10c(r31) */ // 0x80779FE4
    r3 = r31;
    /* li r4, 0x1db */ // 0x80779FEC
    /* fdivs f1, f2, f0 */ // 0x80779FF0
    FUN_808A0AA8(r3, r4); // bl 0x808A0AA8
    r0 = *(0x24 + r1); // lwz @ 0x80779FF8
    r31 = *(0x1c + r1); // lwz @ 0x80779FFC
    return;
}