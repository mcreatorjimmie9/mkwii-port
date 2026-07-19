/* Function at 0x8076603C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8076603C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80766044
    /* li r4, 0 */ // 0x80766048
    *(0x14 + r1) = r0; // stw @ 0x8076604C
    /* lfs f1, 0(r5) */ // 0x80766050
    *(0xc + r1) = r31; // stw @ 0x80766054
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x8076605C
    r12 = *(0 + r3); // lwz @ 0x80766060
    r12 = *(0x10 + r12); // lwz @ 0x80766064
    /* mtctr r12 */ // 0x80766068
    /* bctrl  */ // 0x8076606C
    /* lfs f0, 0xdc(r31) */ // 0x80766070
    r3 = r31;
    /* stfs f0, 0xf4(r31) */ // 0x80766078
    /* li r4, 0 */ // 0x8076607C
    r5 = *(0x20 + r31); // lwz @ 0x80766080
    r0 = *(0x2c + r31); // lhz @ 0x80766084
    /* lfs f0, 0x20(r5) */ // 0x80766088
    /* lfs f1, 0x1c(r5) */ // 0x8076608C
    r0 = r0 | 1; // 0x80766090
    /* lfs f2, 0x18(r5) */ // 0x80766094
    /* stfs f2, 0x30(r31) */ // 0x80766098
    *(0x2c + r31) = r0; // sth @ 0x8076609C
    /* stfs f1, 0x34(r31) */ // 0x807660A0
    /* stfs f0, 0x38(r31) */ // 0x807660A4
    r12 = *(0 + r31); // lwz @ 0x807660A8
    r12 = *(0x68 + r12); // lwz @ 0x807660AC
    /* mtctr r12 */ // 0x807660B0
    /* bctrl  */ // 0x807660B4
    /* li r0, 0 */ // 0x807660B8
    *(0xf9 + r31) = r0; // stb @ 0x807660BC
    r3 = r31;
    /* li r4, 0 */ // 0x807660C4
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x807660CC
    r31 = *(0xc + r1); // lwz @ 0x807660D0
    return;
}