/* Function at 0x807D3FE8, size=124 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D3FE8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x807D3FF4
    r31 = r3;
    FUN_807B70B8(); // bl 0x807B70B8
    /* lis r3, 0 */ // 0x807D4000
    /* li r5, 0 */ // 0x807D4004
    /* lfs f0, 0(r3) */ // 0x807D4008
    /* li r0, 2 */ // 0x807D400C
    /* stfs f0, 0xc(r1) */ // 0x807D4010
    r3 = r31;
    /* stfs f0, 0x10(r1) */ // 0x807D401C
    *(0x14 + r1) = r5; // stw @ 0x807D4020
    *(0x18 + r1) = r0; // stw @ 0x807D4024
    *(0x1c + r1) = r5; // stb @ 0x807D4028
    *(0x1d + r1) = r5; // stb @ 0x807D402C
    /* stfs f0, 8(r1) */ // 0x807D4030
    FUN_807BB39C(); // bl 0x807BB39C
    r3 = *(0x3c + r31); // lwz @ 0x807D4038
    r12 = *(0 + r3); // lwz @ 0x807D4040
    r12 = *(0xc + r12); // lwz @ 0x807D4044
    /* mtctr r12 */ // 0x807D4048
    /* bctrl  */ // 0x807D404C
    r0 = *(0x34 + r1); // lwz @ 0x807D4050
    r31 = *(0x2c + r1); // lwz @ 0x807D4054
    return;
}