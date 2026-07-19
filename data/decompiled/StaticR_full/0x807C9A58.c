/* Function at 0x807C9A58, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807C9A58(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807C9A60
    *(0x14 + r1) = r0; // stw @ 0x807C9A64
    /* li r0, 0 */ // 0x807C9A68
    /* lfs f0, 0(r4) */ // 0x807C9A6C
    /* lis r4, 0 */ // 0x807C9A70
    *(0xc + r1) = r31; // stw @ 0x807C9A74
    r4 = r4 + 0; // 0x807C9A78
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x807C9A80
    *(4 + r3) = r0; // stw @ 0x807C9A84
    *(8 + r3) = r0; // stw @ 0x807C9A88
    *(0xc + r3) = r0; // stw @ 0x807C9A8C
    *(0x10 + r3) = r0; // stb @ 0x807C9A90
    *(0x11 + r3) = r0; // stb @ 0x807C9A94
    /* stfs f0, 0x14(r3) */ // 0x807C9A98
    /* stfs f0, 0x58(r3) */ // 0x807C9A9C
    /* stfs f0, 0x5c(r3) */ // 0x807C9AA0
    /* stfs f0, 0x60(r3) */ // 0x807C9AA4
    /* stfs f0, 0x64(r3) */ // 0x807C9AA8
    *(0x80 + r3) = r0; // sth @ 0x807C9AAC
    *(0x82 + r3) = r0; // stb @ 0x807C9AB0
    *(0x84 + r3) = r0; // stw @ 0x807C9AB4
    *(0x88 + r3) = r0; // stw @ 0x807C9AB8
    *(0x8c + r3) = r0; // stw @ 0x807C9ABC
    /* li r3, 0x18 */ // 0x807C9AC0
    FUN_805E3430(r3); // bl 0x805E3430
}