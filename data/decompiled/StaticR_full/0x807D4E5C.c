/* Function at 0x807D4E5C, size=124 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D4E5C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x807D4E68
    r31 = r3;
    FUN_807B70B8(); // bl 0x807B70B8
    /* lis r3, 0 */ // 0x807D4E74
    /* li r5, 0 */ // 0x807D4E78
    /* lfs f0, 0(r3) */ // 0x807D4E7C
    /* li r0, 2 */ // 0x807D4E80
    /* stfs f0, 0xc(r1) */ // 0x807D4E84
    r3 = r31;
    /* stfs f0, 0x10(r1) */ // 0x807D4E90
    *(0x14 + r1) = r5; // stw @ 0x807D4E94
    *(0x18 + r1) = r0; // stw @ 0x807D4E98
    *(0x1c + r1) = r5; // stb @ 0x807D4E9C
    *(0x1d + r1) = r5; // stb @ 0x807D4EA0
    /* stfs f0, 8(r1) */ // 0x807D4EA4
    FUN_807BB39C(); // bl 0x807BB39C
    r3 = *(0x3c + r31); // lwz @ 0x807D4EAC
    r12 = *(0 + r3); // lwz @ 0x807D4EB4
    r12 = *(0xc + r12); // lwz @ 0x807D4EB8
    /* mtctr r12 */ // 0x807D4EBC
    /* bctrl  */ // 0x807D4EC0
    r0 = *(0x34 + r1); // lwz @ 0x807D4EC4
    r31 = *(0x2c + r1); // lwz @ 0x807D4EC8
    return;
}