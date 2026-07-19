/* Function at 0x805F09B0, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F09B0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F09C4
    r30 = r3;
    FUN_805F081C(); // bl 0x805F081C
    r5 = *(0x14 + r30); // lwz @ 0x805F09D0
    r3 = r31 rlwinm 3; // rlwinm
    r0 = *(0x1c + r30); // lwz @ 0x805F09D8
    r4 = *(0x10 + r5); // lwz @ 0x805F09DC
    r0 = r0 rlwinm 3; // rlwinm
    r6 = r4 + r3; // 0x805F09E4
    /* lbzx r4, r4, r3 */ // 0x805F09E8
    *(0x4c + r30) = r4; // stb @ 0x805F09EC
    r3 = *(1 + r6); // lbz @ 0x805F09F0
    *(0x4d + r30) = r3; // stb @ 0x805F09F4
    r3 = *(2 + r6); // lbz @ 0x805F09F8
    *(0x4e + r30) = r3; // stb @ 0x805F09FC
    r3 = *(3 + r6); // lbz @ 0x805F0A00
    *(0x4f + r30) = r3; // stb @ 0x805F0A04
    r3 = *(0x10 + r5); // lwz @ 0x805F0A08
    /* stbux r4, r3, r0 */ // 0x805F0A0C
    r0 = *(0x4d + r30); // lbz @ 0x805F0A10
    *(1 + r3) = r0; // stb @ 0x805F0A14
    r0 = *(0x4e + r30); // lbz @ 0x805F0A18
    *(2 + r3) = r0; // stb @ 0x805F0A1C
    r0 = *(0x4f + r30); // lbz @ 0x805F0A20
    *(3 + r3) = r0; // stb @ 0x805F0A24
    r31 = *(0xc + r1); // lwz @ 0x805F0A28
    r30 = *(8 + r1); // lwz @ 0x805F0A2C
    r0 = *(0x14 + r1); // lwz @ 0x805F0A30
    return;
}