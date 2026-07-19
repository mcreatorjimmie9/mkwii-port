/* Function at 0x807DCD74, size=208 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807DCD74(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807DCD7C
    *(0x7c + r1) = r31; // stw @ 0x807DCD84
    *(0x78 + r1) = r30; // stw @ 0x807DCD88
    r30 = r3;
    r5 = *(0xd4 + r3); // lwz @ 0x807DCD90
    r0 = *(0 + r4); // lwz @ 0x807DCD94
    r0 = r5 + r0; // 0x807DCD98
    *(0xd4 + r3) = r0; // stw @ 0x807DCD9C
    if (!=) goto 0x0x807dcdc8;
    /* lis r5, 0 */ // 0x807DCDA8
    /* li r4, 0 */ // 0x807DCDAC
    /* lfs f0, 0(r5) */ // 0x807DCDB0
    /* li r0, 1 */ // 0x807DCDB4
    /* stfs f0, 0x68(r3) */ // 0x807DCDB8
    *(8 + r3) = r4; // stw @ 0x807DCDBC
    *(0xf9 + r3) = r0; // stb @ 0x807DCDC0
    /* b 0x807dcdfc */ // 0x807DCDC4
    /* xoris r3, r0, 0x8000 */ // 0x807DCDC8
    /* lis r0, 0x4330 */ // 0x807DCDCC
    *(0x6c + r1) = r3; // stw @ 0x807DCDD0
    /* lis r4, 0 */ // 0x807DCDD4
    /* lfd f2, 0(r4) */ // 0x807DCDD8
    /* lis r3, 0 */ // 0x807DCDDC
    *(0x68 + r1) = r0; // stw @ 0x807DCDE0
    /* lfs f0, 0(r3) */ // 0x807DCDE4
    /* lfd f1, 0x68(r1) */ // 0x807DCDE8
    /* fsubs f1, f1, f2 */ // 0x807DCDEC
    /* fmuls f1, f1, f0 */ // 0x807DCDF0
    FUN_805E3430(); // bl 0x805E3430
    /* stfs f1, 0x68(r30) */ // 0x807DCDF8
    /* lfs f3, 0x68(r30) */ // 0x807DCDFC
    /* lis r4, 0 */ // 0x807DCE00
    /* lfs f0, 0xdc(r30) */ // 0x807DCE04
    /* lis r31, 0 */ // 0x807DCE08
    /* lfs f4, 0xd8(r30) */ // 0x807DCE0C
    /* fmuls f2, f0, f3 */ // 0x807DCE14
    /* lfs f1, 0xe4(r30) */ // 0x807DCE18
    /* fmuls f4, f4, f3 */ // 0x807DCE1C
    /* lfs f3, 0xe0(r30) */ // 0x807DCE20
    /* lfs f0, 0(r31) */ // 0x807DCE24
    r4 = r4 + 0; // 0x807DCE28
    /* fadds f1, f1, f2 */ // 0x807DCE2C
    /* fadds f2, f3, f4 */ // 0x807DCE30
    /* stfs f1, 0xd0(r30) */ // 0x807DCE34
    /* fneg f1, f1 */ // 0x807DCE38
    /* stfs f2, 0xcc(r30) */ // 0x807DCE3C
    /* fmuls f1, f1, f0 */ // 0x807DCE40
}