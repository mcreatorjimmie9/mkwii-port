/* Function at 0x807D384C, size=120 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807D384C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x807D3858
    r31 = r3;
    FUN_807B70B8(); // bl 0x807B70B8
    /* lis r4, 0 */ // 0x807D3864
    /* lis r3, 0 */ // 0x807D3868
    /* lfs f1, 0(r4) */ // 0x807D386C
    /* li r5, 0 */ // 0x807D3870
    /* lfs f0, 0(r3) */ // 0x807D3874
    /* li r0, 2 */ // 0x807D3878
    *(0x18 + r1) = r0; // stw @ 0x807D387C
    /* stfs f1, 8(r1) */ // 0x807D3884
    /* stfs f1, 0xc(r1) */ // 0x807D3888
    /* stfs f0, 0x10(r1) */ // 0x807D388C
    *(0x14 + r1) = r5; // stw @ 0x807D3890
    *(0x1c + r1) = r5; // stb @ 0x807D3894
    *(0x1d + r1) = r5; // stb @ 0x807D3898
    r3 = *(0x3c + r31); // lwz @ 0x807D389C
    r12 = *(0 + r3); // lwz @ 0x807D38A0
    r12 = *(0xc + r12); // lwz @ 0x807D38A4
    /* mtctr r12 */ // 0x807D38A8
    /* bctrl  */ // 0x807D38AC
    r0 = *(0x34 + r1); // lwz @ 0x807D38B0
    r31 = *(0x2c + r1); // lwz @ 0x807D38B4
    return;
}