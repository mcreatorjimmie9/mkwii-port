/* Function at 0x80652E5C, size=336 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80652E5C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 2 */ // 0x80652E64
    *(0x14 + r1) = r0; // stw @ 0x80652E68
    *(0xc + r1) = r31; // stw @ 0x80652E6C
    r31 = r3;
    r3 = r3 + 0x98; // 0x80652E74
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80652E7C
    /* li r4, 4 */ // 0x80652E80
    /* lfs f1, 0(r5) */ // 0x80652E84
    FUN_8069F7A0(r3, r5, r4); // bl 0x8069F7A0
    r3 = *(0x178 + r31); // lwz @ 0x80652E8C
    r0 = *(0xbb + r3); // lbz @ 0x80652E90
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652E98
    r0 = *(0x188 + r31); // lwz @ 0x80652E9C
    if (==) goto 0x0x80652f98;
    r3 = *(0x18c + r31); // lwz @ 0x80652EA8
    r0 = *(0xbb + r3); // lbz @ 0x80652EAC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652EB4
    r3 = *(0x190 + r31); // lwz @ 0x80652EB8
    r0 = *(0xbb + r3); // lbz @ 0x80652EBC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652EC4
    r3 = *(0x194 + r31); // lwz @ 0x80652EC8
    r0 = *(0xbb + r3); // lbz @ 0x80652ECC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652ED4
    r3 = *(0x198 + r31); // lwz @ 0x80652ED8
    r0 = *(0xbb + r3); // lbz @ 0x80652EDC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652EE4
    r3 = *(0x19c + r31); // lwz @ 0x80652EE8
    r0 = *(0xbb + r3); // lbz @ 0x80652EEC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652EF4
    r3 = *(0x1a0 + r31); // lwz @ 0x80652EF8
    r0 = *(0xbb + r3); // lbz @ 0x80652EFC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F04
    r3 = *(0x1a4 + r31); // lwz @ 0x80652F08
    r0 = *(0xbb + r3); // lbz @ 0x80652F0C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F14
    r3 = *(0x1a8 + r31); // lwz @ 0x80652F18
    r0 = *(0xbb + r3); // lbz @ 0x80652F1C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F24
    r3 = *(0x1ac + r31); // lwz @ 0x80652F28
    r0 = *(0xbb + r3); // lbz @ 0x80652F2C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F34
    r3 = *(0x1b0 + r31); // lwz @ 0x80652F38
    r0 = *(0xbb + r3); // lbz @ 0x80652F3C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F44
    r3 = *(0x1b4 + r31); // lwz @ 0x80652F48
    r0 = *(0xbb + r3); // lbz @ 0x80652F4C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F54
    r3 = *(0x1b8 + r31); // lwz @ 0x80652F58
    r0 = *(0xbb + r3); // lbz @ 0x80652F5C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F64
    r3 = *(0x1bc + r31); // lwz @ 0x80652F68
    r0 = *(0xbb + r3); // lbz @ 0x80652F6C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F74
    r3 = *(0x1c0 + r31); // lwz @ 0x80652F78
    r0 = *(0xbb + r3); // lbz @ 0x80652F7C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F84
    r3 = *(0x1c4 + r31); // lwz @ 0x80652F88
    r0 = *(0xbb + r3); // lbz @ 0x80652F8C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80652F94
    r0 = *(0x14 + r1); // lwz @ 0x80652F98
    r31 = *(0xc + r1); // lwz @ 0x80652F9C
    return;
}