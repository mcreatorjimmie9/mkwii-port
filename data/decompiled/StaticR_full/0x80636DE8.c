/* Function at 0x80636DE8, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_80636DE8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0x4330 */ // 0x80636DF0
    /* lis r5, 0 */ // 0x80636DF4
    *(0x24 + r1) = r0; // stw @ 0x80636DF8
    /* lfd f1, 0(r5) */ // 0x80636DFC
    *(0x1c + r1) = r31; // stw @ 0x80636E00
    r31 = r3;
    r7 = *(0x48 + r3); // lwz @ 0x80636E08
    *(8 + r1) = r4; // stw @ 0x80636E0C
    r8 = *(8 + r7); // lwz @ 0x80636E10
    r3 = r7;
    r6 = *(0x46 + r7); // lha @ 0x80636E18
    r0 = *(0x48 + r7); // lha @ 0x80636E1C
    r8 = r8 + 0xc; // 0x80636E20
    /* slwi r6, r6, 4 */ // 0x80636E24
    r12 = *(0 + r7); // lwz @ 0x80636E28
    /* lhzx r6, r8, r6 */ // 0x80636E2C
    /* slwi r0, r0, 4 */ // 0x80636E30
    *(0xc + r1) = r6; // stw @ 0x80636E34
    /* lhzx r0, r8, r0 */ // 0x80636E38
    /* lfd f0, 8(r1) */ // 0x80636E3C
    *(0x14 + r1) = r0; // stw @ 0x80636E40
    /* fsubs f2, f0, f1 */ // 0x80636E44
    /* lfs f3, 0x40(r7) */ // 0x80636E48
    *(0x10 + r1) = r4; // stw @ 0x80636E4C
    r12 = *(0x18 + r12); // lwz @ 0x80636E50
    /* lfd f0, 0x10(r1) */ // 0x80636E54
    /* fsubs f0, f0, f1 */ // 0x80636E58
    /* fsubs f0, f0, f2 */ // 0x80636E5C
    /* fmuls f0, f0, f3 */ // 0x80636E60
    /* fadds f1, f2, f0 */ // 0x80636E64
    /* mtctr r12 */ // 0x80636E68
    /* bctrl  */ // 0x80636E6C
    r3 = *(0x48 + r31); // lwz @ 0x80636E70
    r12 = *(0 + r3); // lwz @ 0x80636E74
    r12 = *(0x14 + r12); // lwz @ 0x80636E78
    /* mtctr r12 */ // 0x80636E7C
    /* bctrl  */ // 0x80636E80
    r12 = *(0 + r31); // lwz @ 0x80636E84
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x80636E8C
    /* mtctr r12 */ // 0x80636E90
    /* bctrl  */ // 0x80636E94
    r3 = *(4 + r31); // lwz @ 0x80636E98
    r4 = *(0x48 + r31); // lwz @ 0x80636E9C
    r3 = *(0x90 + r3); // lwz @ 0x80636EA0
    /* lfs f0, 0x18(r4) */ // 0x80636EA4
    /* stfs f0, 0x64(r3) */ // 0x80636EA8
    /* lfs f0, 0x1c(r4) */ // 0x80636EAC
    /* stfs f0, 0x68(r3) */ // 0x80636EB0
    /* lfs f0, 0x20(r4) */ // 0x80636EB4
    /* stfs f0, 0x6c(r3) */ // 0x80636EB8
    r31 = *(0x1c + r1); // lwz @ 0x80636EBC
    r0 = *(0x24 + r1); // lwz @ 0x80636EC0
    return;
}